#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_12662(Table &tbl_SerializeFromObject_TD_1331_input, Table &tbl_Filter_TD_12662_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_bill_customer_sk#7437) AND isnotnull(cs_sold_date_sk#7434)))
    // Input: ListBuffer(cs_sold_date_sk#7434, cs_bill_customer_sk#7437, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459)
    // Output: ListBuffer(cs_sold_date_sk#7434, cs_bill_customer_sk#7437, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1331_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk7437 = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk7434 = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 0);
        if ((_cs_bill_customer_sk7437!= 0) && (_cs_sold_date_sk7434!= 0)) {
            int32_t _cs_sold_date_sk7434_t = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 0);
            tbl_Filter_TD_12662_output.setInt32(r, 0, _cs_sold_date_sk7434_t);
            int32_t _cs_bill_customer_sk7437_t = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 1);
            tbl_Filter_TD_12662_output.setInt32(r, 1, _cs_bill_customer_sk7437_t);
            int32_t _cs_ext_discount_amt7456_t = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 2);
            tbl_Filter_TD_12662_output.setInt32(r, 2, _cs_ext_discount_amt7456_t);
            int32_t _cs_ext_sales_price7457_t = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 3);
            tbl_Filter_TD_12662_output.setInt32(r, 3, _cs_ext_sales_price7457_t);
            int32_t _cs_ext_wholesale_cost7458_t = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 4);
            tbl_Filter_TD_12662_output.setInt32(r, 4, _cs_ext_wholesale_cost7458_t);
            int32_t _cs_ext_list_price7459_t = tbl_SerializeFromObject_TD_1331_input.getInt32(i, 5);
            tbl_Filter_TD_12662_output.setInt32(r, 5, _cs_ext_list_price7459_t);
            r++;
        }
    }
    tbl_Filter_TD_12662_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12662_output #Row: " << tbl_Filter_TD_12662_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12183(Table &tbl_SerializeFromObject_TD_13732_input, Table &tbl_Filter_TD_12183_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7416) AND isnotnull(c_customer_id#7417)))
    // Input: ListBuffer(c_customer_sk#7416, c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432)
    // Output: ListBuffer(c_customer_sk#7416, c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13732_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7416 = tbl_SerializeFromObject_TD_13732_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417 = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk7416!= 0) && （std::string(_isnotnullc_customer_id7417.data()) != "NULL")) {
            int32_t _c_customer_sk7416_t = tbl_SerializeFromObject_TD_13732_input.getInt32(i, 0);
            tbl_Filter_TD_12183_output.setInt32(r, 0, _c_customer_sk7416_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7417_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7424_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7425_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7426_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7430_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7431_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7431_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_t = tbl_SerializeFromObject_TD_13732_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_12183_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7432_t);
            r++;
        }
    }
    tbl_Filter_TD_12183_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12183_output #Row: " << tbl_Filter_TD_12183_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12213(Table &tbl_SerializeFromObject_TD_13911_input, Table &tbl_Filter_TD_12213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#1209) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13911_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 0);
        if ((_ss_customer_sk1209!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 0);
            tbl_Filter_TD_12213_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 1);
            tbl_Filter_TD_12213_output.setInt32(r, 1, _ss_customer_sk1209_t);
            int32_t _ss_ext_discount_amt1220_t = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 2);
            tbl_Filter_TD_12213_output.setInt32(r, 2, _ss_ext_discount_amt1220_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 3);
            tbl_Filter_TD_12213_output.setInt32(r, 3, _ss_ext_sales_price1221_t);
            int32_t _ss_ext_wholesale_cost1222_t = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 4);
            tbl_Filter_TD_12213_output.setInt32(r, 4, _ss_ext_wholesale_cost1222_t);
            int32_t _ss_ext_list_price1223_t = tbl_SerializeFromObject_TD_13911_input.getInt32(i, 5);
            tbl_Filter_TD_12213_output.setInt32(r, 5, _ss_ext_list_price1223_t);
            r++;
        }
    }
    tbl_Filter_TD_12213_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12213_output #Row: " << tbl_Filter_TD_12213_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12903(Table &tbl_SerializeFromObject_TD_13479_input, Table &tbl_Filter_TD_12903_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_customer_id#1)))
    // Input: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    // Output: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13479_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_13479_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk0!= 0) && （std::string(_isnotnullc_customer_id1.data()) != "NULL")) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_13479_input.getInt32(i, 0);
            tbl_Filter_TD_12903_output.setInt32(r, 0, _c_customer_sk0_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id1_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name9_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag10_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country14_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login15_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_t = tbl_SerializeFromObject_TD_13479_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_12903_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address16_t);
            r++;
        }
    }
    tbl_Filter_TD_12903_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12903_output #Row: " << tbl_Filter_TD_12903_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11454(Table &tbl_SerializeFromObject_TD_12999_input, Table &tbl_Filter_TD_11454_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7474) AND (d_year#7474 = 2001)) AND isnotnull(d_date_sk#7468)))
    // Input: ListBuffer(d_date_sk#7468, d_year#7474)
    // Output: ListBuffer(d_date_sk#7468, d_year#7474)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12999_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7474 = tbl_SerializeFromObject_TD_12999_input.getInt32(i, 1);
        int32_t _d_date_sk7468 = tbl_SerializeFromObject_TD_12999_input.getInt32(i, 0);
        if (((_d_year7474!= 0) && (_d_year7474 == 2001)) && (_d_date_sk7468!= 0)) {
            int32_t _d_date_sk7468_t = tbl_SerializeFromObject_TD_12999_input.getInt32(i, 0);
            tbl_Filter_TD_11454_output.setInt32(r, 0, _d_date_sk7468_t);
            int32_t _d_year7474_t = tbl_SerializeFromObject_TD_12999_input.getInt32(i, 1);
            tbl_Filter_TD_11454_output.setInt32(r, 1, _d_year7474_t);
            r++;
        }
    }
    tbl_Filter_TD_11454_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11454_output #Row: " << tbl_Filter_TD_11454_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11967_key_leftMajor {
    int32_t _c_customer_sk7416;
    bool operator==(const SW_JOIN_INNER_TD_11967_key_leftMajor& other) const {
        return ((_c_customer_sk7416 == other._c_customer_sk7416));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11967_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11967_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7416));
    }
};
}
struct SW_JOIN_INNER_TD_11967_payload_leftMajor {
    int32_t _c_customer_sk7416;
    std::string _c_customer_id7417;
    std::string _c_first_name7424;
    std::string _c_last_name7425;
    std::string _c_preferred_cust_flag7426;
    std::string _c_birth_country7430;
    std::string _c_login7431;
    std::string _c_email_address7432;
};
struct SW_JOIN_INNER_TD_11967_key_rightMajor {
    int32_t _cs_bill_customer_sk7437;
    bool operator==(const SW_JOIN_INNER_TD_11967_key_rightMajor& other) const {
        return ((_cs_bill_customer_sk7437 == other._cs_bill_customer_sk7437));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11967_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11967_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk7437));
    }
};
}
struct SW_JOIN_INNER_TD_11967_payload_rightMajor {
    int32_t _cs_sold_date_sk7434;
    int32_t _cs_bill_customer_sk7437;
    int32_t _cs_ext_discount_amt7456;
    int32_t _cs_ext_sales_price7457;
    int32_t _cs_ext_wholesale_cost7458;
    int32_t _cs_ext_list_price7459;
};
void SW_JOIN_INNER_TD_11967(Table &tbl_Filter_TD_12183_output, Table &tbl_Filter_TD_12662_output, Table &tbl_JOIN_INNER_TD_11967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7416 = cs_bill_customer_sk#7437))
    // Left Table: ListBuffer(c_customer_sk#7416, c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432)
    // Right Table: ListBuffer(cs_sold_date_sk#7434, cs_bill_customer_sk#7437, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459)
    // Output Table: ListBuffer(c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432, cs_sold_date_sk#7434, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459)
    int left_nrow = tbl_Filter_TD_12183_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12662_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11967_key_leftMajor, SW_JOIN_INNER_TD_11967_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12183_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7416_k = tbl_Filter_TD_12183_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11967_key_leftMajor keyA{_c_customer_sk7416_k};
            int32_t _c_customer_sk7416 = tbl_Filter_TD_12183_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7417 = std::string(_c_customer_id7417_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7424 = std::string(_c_first_name7424_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7425 = std::string(_c_last_name7425_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7426 = std::string(_c_preferred_cust_flag7426_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7430 = std::string(_c_birth_country7430_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7431_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7431 = std::string(_c_login7431_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7432 = std::string(_c_email_address7432_n.data());
            SW_JOIN_INNER_TD_11967_payload_leftMajor payloadA{_c_customer_sk7416, _c_customer_id7417, _c_first_name7424, _c_last_name7425, _c_preferred_cust_flag7426, _c_birth_country7430, _c_login7431, _c_email_address7432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12662_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk7437_k = tbl_Filter_TD_12662_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11967_key_leftMajor{_cs_bill_customer_sk7437_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7416 = (it->second)._c_customer_sk7416;
                std::string _c_customer_id7417 = (it->second)._c_customer_id7417;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_n{};
                memcpy(_c_customer_id7417_n.data(), (_c_customer_id7417).data(), (_c_customer_id7417).length());
                std::string _c_first_name7424 = (it->second)._c_first_name7424;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_n{};
                memcpy(_c_first_name7424_n.data(), (_c_first_name7424).data(), (_c_first_name7424).length());
                std::string _c_last_name7425 = (it->second)._c_last_name7425;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_n{};
                memcpy(_c_last_name7425_n.data(), (_c_last_name7425).data(), (_c_last_name7425).length());
                std::string _c_preferred_cust_flag7426 = (it->second)._c_preferred_cust_flag7426;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_n{};
                memcpy(_c_preferred_cust_flag7426_n.data(), (_c_preferred_cust_flag7426).data(), (_c_preferred_cust_flag7426).length());
                std::string _c_birth_country7430 = (it->second)._c_birth_country7430;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_n{};
                memcpy(_c_birth_country7430_n.data(), (_c_birth_country7430).data(), (_c_birth_country7430).length());
                std::string _c_login7431 = (it->second)._c_login7431;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7431_n{};
                memcpy(_c_login7431_n.data(), (_c_login7431).data(), (_c_login7431).length());
                std::string _c_email_address7432 = (it->second)._c_email_address7432;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_n{};
                memcpy(_c_email_address7432_n.data(), (_c_email_address7432).data(), (_c_email_address7432).length());
                int32_t _cs_sold_date_sk7434 = tbl_Filter_TD_12662_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk7437 = tbl_Filter_TD_12662_output.getInt32(i, 1);
                int32_t _cs_ext_discount_amt7456 = tbl_Filter_TD_12662_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price7457 = tbl_Filter_TD_12662_output.getInt32(i, 3);
                int32_t _cs_ext_wholesale_cost7458 = tbl_Filter_TD_12662_output.getInt32(i, 4);
                int32_t _cs_ext_list_price7459 = tbl_Filter_TD_12662_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7417_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7424_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7425_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7426_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7430_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7431_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7432_n);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 7, _cs_sold_date_sk7434);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 8, _cs_ext_discount_amt7456);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 9, _cs_ext_sales_price7457);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 10, _cs_ext_wholesale_cost7458);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 11, _cs_ext_list_price7459);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11967_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11967_key_rightMajor, SW_JOIN_INNER_TD_11967_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12662_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk7437_k = tbl_Filter_TD_12662_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11967_key_rightMajor keyA{_cs_bill_customer_sk7437_k};
            int32_t _cs_sold_date_sk7434 = tbl_Filter_TD_12662_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk7437 = tbl_Filter_TD_12662_output.getInt32(i, 1);
            int32_t _cs_ext_discount_amt7456 = tbl_Filter_TD_12662_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price7457 = tbl_Filter_TD_12662_output.getInt32(i, 3);
            int32_t _cs_ext_wholesale_cost7458 = tbl_Filter_TD_12662_output.getInt32(i, 4);
            int32_t _cs_ext_list_price7459 = tbl_Filter_TD_12662_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11967_payload_rightMajor payloadA{_cs_sold_date_sk7434, _cs_bill_customer_sk7437, _cs_ext_discount_amt7456, _cs_ext_sales_price7457, _cs_ext_wholesale_cost7458, _cs_ext_list_price7459};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12183_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7416_k = tbl_Filter_TD_12183_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11967_key_rightMajor{_c_customer_sk7416_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk7434 = (it->second)._cs_sold_date_sk7434;
                int32_t _cs_bill_customer_sk7437 = (it->second)._cs_bill_customer_sk7437;
                int32_t _cs_ext_discount_amt7456 = (it->second)._cs_ext_discount_amt7456;
                int32_t _cs_ext_sales_price7457 = (it->second)._cs_ext_sales_price7457;
                int32_t _cs_ext_wholesale_cost7458 = (it->second)._cs_ext_wholesale_cost7458;
                int32_t _cs_ext_list_price7459 = (it->second)._cs_ext_list_price7459;
                int32_t _c_customer_sk7416 = tbl_Filter_TD_12183_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7417 = std::string(_c_customer_id7417_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7424 = std::string(_c_first_name7424_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7425 = std::string(_c_last_name7425_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7426 = std::string(_c_preferred_cust_flag7426_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7430 = std::string(_c_birth_country7430_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7431_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7431 = std::string(_c_login7431_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_n = tbl_Filter_TD_12183_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7432 = std::string(_c_email_address7432_n.data());
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 7, _cs_sold_date_sk7434);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 8, _cs_ext_discount_amt7456);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 9, _cs_ext_sales_price7457);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 10, _cs_ext_wholesale_cost7458);
                tbl_JOIN_INNER_TD_11967_output.setInt32(r, 11, _cs_ext_list_price7459);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7417_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7424_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7425_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7426_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7430_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7431_n);
                tbl_JOIN_INNER_TD_11967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7432_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11967_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11967_output #Row: " << tbl_JOIN_INNER_TD_11967_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11725(Table &tbl_SerializeFromObject_TD_12491_input, Table &tbl_Filter_TD_11725_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#7129) AND isnotnull(ss_sold_date_sk#7126)))
    // Input: ListBuffer(ss_sold_date_sk#7126, ss_customer_sk#7129, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143)
    // Output: ListBuffer(ss_sold_date_sk#7126, ss_customer_sk#7129, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12491_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk7129 = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk7126 = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 0);
        if ((_ss_customer_sk7129!= 0) && (_ss_sold_date_sk7126!= 0)) {
            int32_t _ss_sold_date_sk7126_t = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 0);
            tbl_Filter_TD_11725_output.setInt32(r, 0, _ss_sold_date_sk7126_t);
            int32_t _ss_customer_sk7129_t = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 1);
            tbl_Filter_TD_11725_output.setInt32(r, 1, _ss_customer_sk7129_t);
            int32_t _ss_ext_discount_amt7140_t = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 2);
            tbl_Filter_TD_11725_output.setInt32(r, 2, _ss_ext_discount_amt7140_t);
            int32_t _ss_ext_sales_price7141_t = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 3);
            tbl_Filter_TD_11725_output.setInt32(r, 3, _ss_ext_sales_price7141_t);
            int32_t _ss_ext_wholesale_cost7142_t = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 4);
            tbl_Filter_TD_11725_output.setInt32(r, 4, _ss_ext_wholesale_cost7142_t);
            int32_t _ss_ext_list_price7143_t = tbl_SerializeFromObject_TD_12491_input.getInt32(i, 5);
            tbl_Filter_TD_11725_output.setInt32(r, 5, _ss_ext_list_price7143_t);
            r++;
        }
    }
    tbl_Filter_TD_11725_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11725_output #Row: " << tbl_Filter_TD_11725_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11116(Table &tbl_SerializeFromObject_TD_12543_input, Table &tbl_Filter_TD_11116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7108) AND isnotnull(c_customer_id#7109)))
    // Input: ListBuffer(c_customer_sk#7108, c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124)
    // Output: ListBuffer(c_customer_sk#7108, c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12543_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7108 = tbl_SerializeFromObject_TD_12543_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109 = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk7108!= 0) && （std::string(_isnotnullc_customer_id7109.data()) != "NULL")) {
            int32_t _c_customer_sk7108_t = tbl_SerializeFromObject_TD_12543_input.getInt32(i, 0);
            tbl_Filter_TD_11116_output.setInt32(r, 0, _c_customer_sk7108_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7109_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7116_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7117_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7118_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7122_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7123_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7123_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_t = tbl_SerializeFromObject_TD_12543_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_11116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7124_t);
            r++;
        }
    }
    tbl_Filter_TD_11116_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11116_output #Row: " << tbl_Filter_TD_11116_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11142(Table &tbl_SerializeFromObject_TD_12807_input, Table &tbl_Filter_TD_11142_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2001)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12807_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12807_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12807_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2001)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12807_input.getInt32(i, 0);
            tbl_Filter_TD_11142_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_12807_input.getInt32(i, 1);
            tbl_Filter_TD_11142_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_11142_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11142_output #Row: " << tbl_Filter_TD_11142_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11806_key_leftMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_11806_key_leftMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11806_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11806_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_11806_payload_leftMajor {
    int32_t _c_customer_sk0;
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
};
struct SW_JOIN_INNER_TD_11806_key_rightMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_11806_key_rightMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11806_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11806_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_11806_payload_rightMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_discount_amt1220;
    int32_t _ss_ext_sales_price1221;
    int32_t _ss_ext_wholesale_cost1222;
    int32_t _ss_ext_list_price1223;
};
void SW_JOIN_INNER_TD_11806(Table &tbl_Filter_TD_12903_output, Table &tbl_Filter_TD_12213_output, Table &tbl_JOIN_INNER_TD_11806_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#0 = ss_customer_sk#1209))
    // Left Table: ListBuffer(c_customer_sk#0, c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16)
    // Right Table: ListBuffer(ss_sold_date_sk#1206, ss_customer_sk#1209, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_sold_date_sk#1206, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    int left_nrow = tbl_Filter_TD_12903_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12213_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11806_key_leftMajor, SW_JOIN_INNER_TD_11806_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12903_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_12903_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11806_key_leftMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_12903_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            SW_JOIN_INNER_TD_11806_payload_leftMajor payloadA{_c_customer_sk0, _c_customer_id1, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_country14, _c_login15, _c_email_address16};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12213_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_12213_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11806_key_leftMajor{_ss_customer_sk1209_k});
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
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12213_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_12213_output.getInt32(i, 1);
                int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_12213_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12213_output.getInt32(i, 3);
                int32_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_12213_output.getInt32(i, 4);
                int32_t _ss_ext_list_price1223 = tbl_Filter_TD_12213_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 7, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 8, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 9, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 10, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 11, _ss_ext_list_price1223);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11806_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11806_key_rightMajor, SW_JOIN_INNER_TD_11806_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12213_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_Filter_TD_12213_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11806_key_rightMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12213_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_12213_output.getInt32(i, 1);
            int32_t _ss_ext_discount_amt1220 = tbl_Filter_TD_12213_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12213_output.getInt32(i, 3);
            int32_t _ss_ext_wholesale_cost1222 = tbl_Filter_TD_12213_output.getInt32(i, 4);
            int32_t _ss_ext_list_price1223 = tbl_Filter_TD_12213_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_11806_payload_rightMajor payloadA{_ss_sold_date_sk1206, _ss_customer_sk1209, _ss_ext_discount_amt1220, _ss_ext_sales_price1221, _ss_ext_wholesale_cost1222, _ss_ext_list_price1223};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12903_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_12903_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11806_key_rightMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_discount_amt1220 = (it->second)._ss_ext_discount_amt1220;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _ss_ext_wholesale_cost1222 = (it->second)._ss_ext_wholesale_cost1222;
                int32_t _ss_ext_list_price1223 = (it->second)._ss_ext_list_price1223;
                int32_t _c_customer_sk0 = tbl_Filter_TD_12903_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_Filter_TD_12903_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 7, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 8, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 9, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 10, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_11806_output.setInt32(r, 11, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_11806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11806_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11806_output #Row: " << tbl_JOIN_INNER_TD_11806_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10898(Table &tbl_SerializeFromObject_TD_11274_input, Table &tbl_Filter_TD_10898_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#7996) AND isnotnull(ws_sold_date_sk#7992)))
    // Input: ListBuffer(ws_sold_date_sk#7992, ws_bill_customer_sk#7996, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017)
    // Output: ListBuffer(ws_sold_date_sk#7992, ws_bill_customer_sk#7996, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11274_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk7996 = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk7992 = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk7996!= 0) && (_ws_sold_date_sk7992!= 0)) {
            int32_t _ws_sold_date_sk7992_t = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 0);
            tbl_Filter_TD_10898_output.setInt32(r, 0, _ws_sold_date_sk7992_t);
            int32_t _ws_bill_customer_sk7996_t = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 1);
            tbl_Filter_TD_10898_output.setInt32(r, 1, _ws_bill_customer_sk7996_t);
            int32_t _ws_ext_discount_amt8014_t = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 2);
            tbl_Filter_TD_10898_output.setInt32(r, 2, _ws_ext_discount_amt8014_t);
            int32_t _ws_ext_sales_price8015_t = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 3);
            tbl_Filter_TD_10898_output.setInt32(r, 3, _ws_ext_sales_price8015_t);
            int32_t _ws_ext_wholesale_cost8016_t = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 4);
            tbl_Filter_TD_10898_output.setInt32(r, 4, _ws_ext_wholesale_cost8016_t);
            int32_t _ws_ext_list_price8017_t = tbl_SerializeFromObject_TD_11274_input.getInt32(i, 5);
            tbl_Filter_TD_10898_output.setInt32(r, 5, _ws_ext_list_price8017_t);
            r++;
        }
    }
    tbl_Filter_TD_10898_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10898_output #Row: " << tbl_Filter_TD_10898_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10886(Table &tbl_SerializeFromObject_TD_1194_input, Table &tbl_Filter_TD_10886_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7974) AND isnotnull(c_customer_id#7975)))
    // Input: ListBuffer(c_customer_sk#7974, c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990)
    // Output: ListBuffer(c_customer_sk#7974, c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1194_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7974 = tbl_SerializeFromObject_TD_1194_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975 = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk7974!= 0) && （std::string(_isnotnullc_customer_id7975.data()) != "NULL")) {
            int32_t _c_customer_sk7974_t = tbl_SerializeFromObject_TD_1194_input.getInt32(i, 0);
            tbl_Filter_TD_10886_output.setInt32(r, 0, _c_customer_sk7974_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7975_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7982_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7983_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7984_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7988_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7989_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7989_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_t = tbl_SerializeFromObject_TD_1194_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_10886_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7990_t);
            r++;
        }
    }
    tbl_Filter_TD_10886_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10886_output #Row: " << tbl_Filter_TD_10886_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10633_key_leftMajor {
    int32_t _cs_sold_date_sk7434;
    bool operator==(const SW_JOIN_INNER_TD_10633_key_leftMajor& other) const {
        return ((_cs_sold_date_sk7434 == other._cs_sold_date_sk7434));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10633_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10633_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk7434));
    }
};
}
struct SW_JOIN_INNER_TD_10633_payload_leftMajor {
    std::string _c_customer_id7417;
    std::string _c_first_name7424;
    std::string _c_last_name7425;
    std::string _c_preferred_cust_flag7426;
    std::string _c_birth_country7430;
    std::string _c_login7431;
    std::string _c_email_address7432;
    int32_t _cs_sold_date_sk7434;
    int32_t _cs_ext_discount_amt7456;
    int32_t _cs_ext_sales_price7457;
    int32_t _cs_ext_wholesale_cost7458;
    int32_t _cs_ext_list_price7459;
};
struct SW_JOIN_INNER_TD_10633_key_rightMajor {
    int32_t _d_date_sk7468;
    bool operator==(const SW_JOIN_INNER_TD_10633_key_rightMajor& other) const {
        return ((_d_date_sk7468 == other._d_date_sk7468));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10633_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10633_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7468));
    }
};
}
struct SW_JOIN_INNER_TD_10633_payload_rightMajor {
    int32_t _d_date_sk7468;
    int32_t _d_year7474;
};
void SW_JOIN_INNER_TD_10633(Table &tbl_JOIN_INNER_TD_11967_output, Table &tbl_Filter_TD_11454_output, Table &tbl_JOIN_INNER_TD_10633_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#7434 = d_date_sk#7468))
    // Left Table: ListBuffer(c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432, cs_sold_date_sk#7434, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459)
    // Right Table: ListBuffer(d_date_sk#7468, d_year#7474)
    // Output Table: ListBuffer(c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459, d_year#7474)
    int left_nrow = tbl_JOIN_INNER_TD_11967_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11454_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10633_key_leftMajor, SW_JOIN_INNER_TD_10633_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11967_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk7434_k = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10633_key_leftMajor keyA{_cs_sold_date_sk7434_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7417 = std::string(_c_customer_id7417_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7424 = std::string(_c_first_name7424_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7425 = std::string(_c_last_name7425_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7426 = std::string(_c_preferred_cust_flag7426_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7430 = std::string(_c_birth_country7430_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7431_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7431 = std::string(_c_login7431_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7432 = std::string(_c_email_address7432_n.data());
            int32_t _cs_sold_date_sk7434 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 7);
            int32_t _cs_ext_discount_amt7456 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 8);
            int32_t _cs_ext_sales_price7457 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 9);
            int32_t _cs_ext_wholesale_cost7458 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 10);
            int32_t _cs_ext_list_price7459 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_10633_payload_leftMajor payloadA{_c_customer_id7417, _c_first_name7424, _c_last_name7425, _c_preferred_cust_flag7426, _c_birth_country7430, _c_login7431, _c_email_address7432, _cs_sold_date_sk7434, _cs_ext_discount_amt7456, _cs_ext_sales_price7457, _cs_ext_wholesale_cost7458, _cs_ext_list_price7459};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11454_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7468_k = tbl_Filter_TD_11454_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10633_key_leftMajor{_d_date_sk7468_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7417 = (it->second)._c_customer_id7417;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_n{};
                memcpy(_c_customer_id7417_n.data(), (_c_customer_id7417).data(), (_c_customer_id7417).length());
                std::string _c_first_name7424 = (it->second)._c_first_name7424;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_n{};
                memcpy(_c_first_name7424_n.data(), (_c_first_name7424).data(), (_c_first_name7424).length());
                std::string _c_last_name7425 = (it->second)._c_last_name7425;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_n{};
                memcpy(_c_last_name7425_n.data(), (_c_last_name7425).data(), (_c_last_name7425).length());
                std::string _c_preferred_cust_flag7426 = (it->second)._c_preferred_cust_flag7426;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_n{};
                memcpy(_c_preferred_cust_flag7426_n.data(), (_c_preferred_cust_flag7426).data(), (_c_preferred_cust_flag7426).length());
                std::string _c_birth_country7430 = (it->second)._c_birth_country7430;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_n{};
                memcpy(_c_birth_country7430_n.data(), (_c_birth_country7430).data(), (_c_birth_country7430).length());
                std::string _c_login7431 = (it->second)._c_login7431;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7431_n{};
                memcpy(_c_login7431_n.data(), (_c_login7431).data(), (_c_login7431).length());
                std::string _c_email_address7432 = (it->second)._c_email_address7432;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_n{};
                memcpy(_c_email_address7432_n.data(), (_c_email_address7432).data(), (_c_email_address7432).length());
                int32_t _cs_sold_date_sk7434 = (it->second)._cs_sold_date_sk7434;
                int32_t _cs_ext_discount_amt7456 = (it->second)._cs_ext_discount_amt7456;
                int32_t _cs_ext_sales_price7457 = (it->second)._cs_ext_sales_price7457;
                int32_t _cs_ext_wholesale_cost7458 = (it->second)._cs_ext_wholesale_cost7458;
                int32_t _cs_ext_list_price7459 = (it->second)._cs_ext_list_price7459;
                int32_t _d_date_sk7468 = tbl_Filter_TD_11454_output.getInt32(i, 0);
                int32_t _d_year7474 = tbl_Filter_TD_11454_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7417_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7424_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7425_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7426_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7430_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7431_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7432_n);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 7, _cs_ext_discount_amt7456);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 8, _cs_ext_sales_price7457);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 9, _cs_ext_wholesale_cost7458);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 10, _cs_ext_list_price7459);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 11, _d_year7474);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10633_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10633_key_rightMajor, SW_JOIN_INNER_TD_10633_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11454_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7468_k = tbl_Filter_TD_11454_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10633_key_rightMajor keyA{_d_date_sk7468_k};
            int32_t _d_date_sk7468 = tbl_Filter_TD_11454_output.getInt32(i, 0);
            int32_t _d_year7474 = tbl_Filter_TD_11454_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10633_payload_rightMajor payloadA{_d_date_sk7468, _d_year7474};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11967_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk7434_k = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10633_key_rightMajor{_cs_sold_date_sk7434_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7468 = (it->second)._d_date_sk7468;
                int32_t _d_year7474 = (it->second)._d_year7474;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7417 = std::string(_c_customer_id7417_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7424 = std::string(_c_first_name7424_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7425 = std::string(_c_last_name7425_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7426 = std::string(_c_preferred_cust_flag7426_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7430 = std::string(_c_birth_country7430_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7431_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7431 = std::string(_c_login7431_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432_n = tbl_JOIN_INNER_TD_11967_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7432 = std::string(_c_email_address7432_n.data());
                int32_t _cs_sold_date_sk7434 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 7);
                int32_t _cs_ext_discount_amt7456 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 8);
                int32_t _cs_ext_sales_price7457 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 9);
                int32_t _cs_ext_wholesale_cost7458 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 10);
                int32_t _cs_ext_list_price7459 = tbl_JOIN_INNER_TD_11967_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 11, _d_year7474);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7417_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7424_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7425_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7426_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7430_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7431_n);
                tbl_JOIN_INNER_TD_10633_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7432_n);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 7, _cs_ext_discount_amt7456);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 8, _cs_ext_sales_price7457);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 9, _cs_ext_wholesale_cost7458);
                tbl_JOIN_INNER_TD_10633_output.setInt32(r, 10, _cs_ext_list_price7459);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10633_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10633_output #Row: " << tbl_JOIN_INNER_TD_10633_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10587(Table &tbl_SerializeFromObject_TD_11240_input, Table &tbl_Filter_TD_10587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7155) AND (d_year#7155 = 2002)) AND isnotnull(d_date_sk#7149)))
    // Input: ListBuffer(d_date_sk#7149, d_year#7155)
    // Output: ListBuffer(d_date_sk#7149, d_year#7155)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11240_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7155 = tbl_SerializeFromObject_TD_11240_input.getInt32(i, 1);
        int32_t _d_date_sk7149 = tbl_SerializeFromObject_TD_11240_input.getInt32(i, 0);
        if (((_d_year7155!= 0) && (_d_year7155 == 2002)) && (_d_date_sk7149!= 0)) {
            int32_t _d_date_sk7149_t = tbl_SerializeFromObject_TD_11240_input.getInt32(i, 0);
            tbl_Filter_TD_10587_output.setInt32(r, 0, _d_date_sk7149_t);
            int32_t _d_year7155_t = tbl_SerializeFromObject_TD_11240_input.getInt32(i, 1);
            tbl_Filter_TD_10587_output.setInt32(r, 1, _d_year7155_t);
            r++;
        }
    }
    tbl_Filter_TD_10587_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10587_output #Row: " << tbl_Filter_TD_10587_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10943_key_leftMajor {
    int32_t _c_customer_sk7108;
    bool operator==(const SW_JOIN_INNER_TD_10943_key_leftMajor& other) const {
        return ((_c_customer_sk7108 == other._c_customer_sk7108));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10943_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10943_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7108));
    }
};
}
struct SW_JOIN_INNER_TD_10943_payload_leftMajor {
    int32_t _c_customer_sk7108;
    std::string _c_customer_id7109;
    std::string _c_first_name7116;
    std::string _c_last_name7117;
    std::string _c_preferred_cust_flag7118;
    std::string _c_birth_country7122;
    std::string _c_login7123;
    std::string _c_email_address7124;
};
struct SW_JOIN_INNER_TD_10943_key_rightMajor {
    int32_t _ss_customer_sk7129;
    bool operator==(const SW_JOIN_INNER_TD_10943_key_rightMajor& other) const {
        return ((_ss_customer_sk7129 == other._ss_customer_sk7129));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10943_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10943_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk7129));
    }
};
}
struct SW_JOIN_INNER_TD_10943_payload_rightMajor {
    int32_t _ss_sold_date_sk7126;
    int32_t _ss_customer_sk7129;
    int32_t _ss_ext_discount_amt7140;
    int32_t _ss_ext_sales_price7141;
    int32_t _ss_ext_wholesale_cost7142;
    int32_t _ss_ext_list_price7143;
};
void SW_JOIN_INNER_TD_10943(Table &tbl_Filter_TD_11116_output, Table &tbl_Filter_TD_11725_output, Table &tbl_JOIN_INNER_TD_10943_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7108 = ss_customer_sk#7129))
    // Left Table: ListBuffer(c_customer_sk#7108, c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124)
    // Right Table: ListBuffer(ss_sold_date_sk#7126, ss_customer_sk#7129, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143)
    // Output Table: ListBuffer(c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124, ss_sold_date_sk#7126, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143)
    int left_nrow = tbl_Filter_TD_11116_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11725_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10943_key_leftMajor, SW_JOIN_INNER_TD_10943_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11116_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7108_k = tbl_Filter_TD_11116_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10943_key_leftMajor keyA{_c_customer_sk7108_k};
            int32_t _c_customer_sk7108 = tbl_Filter_TD_11116_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7109 = std::string(_c_customer_id7109_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7116 = std::string(_c_first_name7116_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7117 = std::string(_c_last_name7117_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7118 = std::string(_c_preferred_cust_flag7118_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7122 = std::string(_c_birth_country7122_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7123_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7123 = std::string(_c_login7123_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7124 = std::string(_c_email_address7124_n.data());
            SW_JOIN_INNER_TD_10943_payload_leftMajor payloadA{_c_customer_sk7108, _c_customer_id7109, _c_first_name7116, _c_last_name7117, _c_preferred_cust_flag7118, _c_birth_country7122, _c_login7123, _c_email_address7124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11725_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk7129_k = tbl_Filter_TD_11725_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10943_key_leftMajor{_ss_customer_sk7129_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7108 = (it->second)._c_customer_sk7108;
                std::string _c_customer_id7109 = (it->second)._c_customer_id7109;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_n{};
                memcpy(_c_customer_id7109_n.data(), (_c_customer_id7109).data(), (_c_customer_id7109).length());
                std::string _c_first_name7116 = (it->second)._c_first_name7116;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_n{};
                memcpy(_c_first_name7116_n.data(), (_c_first_name7116).data(), (_c_first_name7116).length());
                std::string _c_last_name7117 = (it->second)._c_last_name7117;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_n{};
                memcpy(_c_last_name7117_n.data(), (_c_last_name7117).data(), (_c_last_name7117).length());
                std::string _c_preferred_cust_flag7118 = (it->second)._c_preferred_cust_flag7118;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_n{};
                memcpy(_c_preferred_cust_flag7118_n.data(), (_c_preferred_cust_flag7118).data(), (_c_preferred_cust_flag7118).length());
                std::string _c_birth_country7122 = (it->second)._c_birth_country7122;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_n{};
                memcpy(_c_birth_country7122_n.data(), (_c_birth_country7122).data(), (_c_birth_country7122).length());
                std::string _c_login7123 = (it->second)._c_login7123;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7123_n{};
                memcpy(_c_login7123_n.data(), (_c_login7123).data(), (_c_login7123).length());
                std::string _c_email_address7124 = (it->second)._c_email_address7124;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_n{};
                memcpy(_c_email_address7124_n.data(), (_c_email_address7124).data(), (_c_email_address7124).length());
                int32_t _ss_sold_date_sk7126 = tbl_Filter_TD_11725_output.getInt32(i, 0);
                int32_t _ss_customer_sk7129 = tbl_Filter_TD_11725_output.getInt32(i, 1);
                int32_t _ss_ext_discount_amt7140 = tbl_Filter_TD_11725_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price7141 = tbl_Filter_TD_11725_output.getInt32(i, 3);
                int32_t _ss_ext_wholesale_cost7142 = tbl_Filter_TD_11725_output.getInt32(i, 4);
                int32_t _ss_ext_list_price7143 = tbl_Filter_TD_11725_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7109_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7116_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7117_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7118_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7122_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7123_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7124_n);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 7, _ss_sold_date_sk7126);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 8, _ss_ext_discount_amt7140);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 9, _ss_ext_sales_price7141);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 10, _ss_ext_wholesale_cost7142);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 11, _ss_ext_list_price7143);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10943_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10943_key_rightMajor, SW_JOIN_INNER_TD_10943_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11725_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk7129_k = tbl_Filter_TD_11725_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10943_key_rightMajor keyA{_ss_customer_sk7129_k};
            int32_t _ss_sold_date_sk7126 = tbl_Filter_TD_11725_output.getInt32(i, 0);
            int32_t _ss_customer_sk7129 = tbl_Filter_TD_11725_output.getInt32(i, 1);
            int32_t _ss_ext_discount_amt7140 = tbl_Filter_TD_11725_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price7141 = tbl_Filter_TD_11725_output.getInt32(i, 3);
            int32_t _ss_ext_wholesale_cost7142 = tbl_Filter_TD_11725_output.getInt32(i, 4);
            int32_t _ss_ext_list_price7143 = tbl_Filter_TD_11725_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_10943_payload_rightMajor payloadA{_ss_sold_date_sk7126, _ss_customer_sk7129, _ss_ext_discount_amt7140, _ss_ext_sales_price7141, _ss_ext_wholesale_cost7142, _ss_ext_list_price7143};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11116_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7108_k = tbl_Filter_TD_11116_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10943_key_rightMajor{_c_customer_sk7108_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk7126 = (it->second)._ss_sold_date_sk7126;
                int32_t _ss_customer_sk7129 = (it->second)._ss_customer_sk7129;
                int32_t _ss_ext_discount_amt7140 = (it->second)._ss_ext_discount_amt7140;
                int32_t _ss_ext_sales_price7141 = (it->second)._ss_ext_sales_price7141;
                int32_t _ss_ext_wholesale_cost7142 = (it->second)._ss_ext_wholesale_cost7142;
                int32_t _ss_ext_list_price7143 = (it->second)._ss_ext_list_price7143;
                int32_t _c_customer_sk7108 = tbl_Filter_TD_11116_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7109 = std::string(_c_customer_id7109_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7116 = std::string(_c_first_name7116_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7117 = std::string(_c_last_name7117_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7118 = std::string(_c_preferred_cust_flag7118_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7122 = std::string(_c_birth_country7122_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7123_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7123 = std::string(_c_login7123_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_n = tbl_Filter_TD_11116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7124 = std::string(_c_email_address7124_n.data());
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 7, _ss_sold_date_sk7126);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 8, _ss_ext_discount_amt7140);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 9, _ss_ext_sales_price7141);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 10, _ss_ext_wholesale_cost7142);
                tbl_JOIN_INNER_TD_10943_output.setInt32(r, 11, _ss_ext_list_price7143);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7109_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7116_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7117_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7118_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7122_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7123_n);
                tbl_JOIN_INNER_TD_10943_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7124_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10943_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10943_output #Row: " << tbl_JOIN_INNER_TD_10943_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10100_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10100_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10100_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10100_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10100_payload_leftMajor {
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
struct SW_JOIN_INNER_TD_10100_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10100_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10100_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10100_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10100_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_10100(Table &tbl_JOIN_INNER_TD_11806_output, Table &tbl_Filter_TD_11142_output, Table &tbl_JOIN_INNER_TD_10100_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_sold_date_sk#1206, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_11806_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11142_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10100_key_leftMajor, SW_JOIN_INNER_TD_10100_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11806_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_10100_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8 = std::string(_c_first_name8_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name9 = std::string(_c_last_name9_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login15 = std::string(_c_login15_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address16 = std::string(_c_email_address16_n.data());
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 7);
            int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 8);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 9);
            int32_t _ss_ext_wholesale_cost1222 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 10);
            int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_10100_payload_leftMajor payloadA{_c_customer_id1, _c_first_name8, _c_last_name9, _c_preferred_cust_flag10, _c_birth_country14, _c_login15, _c_email_address16, _ss_sold_date_sk1206, _ss_ext_discount_amt1220, _ss_ext_sales_price1221, _ss_ext_wholesale_cost1222, _ss_ext_list_price1223};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11142_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11142_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10100_key_leftMajor{_d_date_sk120_k});
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
                int32_t _d_date_sk120 = tbl_Filter_TD_11142_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_11142_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 7, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 8, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 9, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 10, _ss_ext_list_price1223);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 11, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10100_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10100_key_rightMajor, SW_JOIN_INNER_TD_10100_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11142_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_11142_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10100_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_11142_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_11142_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10100_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11806_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10100_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id1 = std::string(_c_customer_id1_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8 = std::string(_c_first_name8_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name9_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name9 = std::string(_c_last_name9_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag10 = std::string(_c_preferred_cust_flag10_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country14 = std::string(_c_birth_country14_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login15_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login15 = std::string(_c_login15_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address16_n = tbl_JOIN_INNER_TD_11806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address16 = std::string(_c_email_address16_n.data());
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 7);
                int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 8);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 9);
                int32_t _ss_ext_wholesale_cost1222 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 10);
                int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_11806_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 11, _d_year126);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id1_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name9_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag10_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country14_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login15_n);
                tbl_JOIN_INNER_TD_10100_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address16_n);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 7, _ss_ext_discount_amt1220);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 8, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 9, _ss_ext_wholesale_cost1222);
                tbl_JOIN_INNER_TD_10100_output.setInt32(r, 10, _ss_ext_list_price1223);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10100_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10100_output #Row: " << tbl_JOIN_INNER_TD_10100_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9465(Table &tbl_SerializeFromObject_TD_10963_input, Table &tbl_Filter_TD_9465_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#8032) AND (d_year#8032 = 2001)) AND isnotnull(d_date_sk#8026)))
    // Input: ListBuffer(d_date_sk#8026, d_year#8032)
    // Output: ListBuffer(d_date_sk#8026, d_year#8032)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10963_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8032 = tbl_SerializeFromObject_TD_10963_input.getInt32(i, 1);
        int32_t _d_date_sk8026 = tbl_SerializeFromObject_TD_10963_input.getInt32(i, 0);
        if (((_d_year8032!= 0) && (_d_year8032 == 2001)) && (_d_date_sk8026!= 0)) {
            int32_t _d_date_sk8026_t = tbl_SerializeFromObject_TD_10963_input.getInt32(i, 0);
            tbl_Filter_TD_9465_output.setInt32(r, 0, _d_date_sk8026_t);
            int32_t _d_year8032_t = tbl_SerializeFromObject_TD_10963_input.getInt32(i, 1);
            tbl_Filter_TD_9465_output.setInt32(r, 1, _d_year8032_t);
            r++;
        }
    }
    tbl_Filter_TD_9465_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9465_output #Row: " << tbl_Filter_TD_9465_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_910_key_leftMajor {
    int32_t _c_customer_sk7974;
    bool operator==(const SW_JOIN_INNER_TD_910_key_leftMajor& other) const {
        return ((_c_customer_sk7974 == other._c_customer_sk7974));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_910_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_910_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7974));
    }
};
}
struct SW_JOIN_INNER_TD_910_payload_leftMajor {
    int32_t _c_customer_sk7974;
    std::string _c_customer_id7975;
    std::string _c_first_name7982;
    std::string _c_last_name7983;
    std::string _c_preferred_cust_flag7984;
    std::string _c_birth_country7988;
    std::string _c_login7989;
    std::string _c_email_address7990;
};
struct SW_JOIN_INNER_TD_910_key_rightMajor {
    int32_t _ws_bill_customer_sk7996;
    bool operator==(const SW_JOIN_INNER_TD_910_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk7996 == other._ws_bill_customer_sk7996));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_910_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_910_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk7996));
    }
};
}
struct SW_JOIN_INNER_TD_910_payload_rightMajor {
    int32_t _ws_sold_date_sk7992;
    int32_t _ws_bill_customer_sk7996;
    int32_t _ws_ext_discount_amt8014;
    int32_t _ws_ext_sales_price8015;
    int32_t _ws_ext_wholesale_cost8016;
    int32_t _ws_ext_list_price8017;
};
void SW_JOIN_INNER_TD_910(Table &tbl_Filter_TD_10886_output, Table &tbl_Filter_TD_10898_output, Table &tbl_JOIN_INNER_TD_910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7974 = ws_bill_customer_sk#7996))
    // Left Table: ListBuffer(c_customer_sk#7974, c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990)
    // Right Table: ListBuffer(ws_sold_date_sk#7992, ws_bill_customer_sk#7996, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017)
    // Output Table: ListBuffer(c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990, ws_sold_date_sk#7992, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017)
    int left_nrow = tbl_Filter_TD_10886_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10898_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_910_key_leftMajor, SW_JOIN_INNER_TD_910_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10886_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7974_k = tbl_Filter_TD_10886_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_910_key_leftMajor keyA{_c_customer_sk7974_k};
            int32_t _c_customer_sk7974 = tbl_Filter_TD_10886_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7975 = std::string(_c_customer_id7975_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7982 = std::string(_c_first_name7982_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7983 = std::string(_c_last_name7983_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7984 = std::string(_c_preferred_cust_flag7984_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7988 = std::string(_c_birth_country7988_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7989_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7989 = std::string(_c_login7989_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7990 = std::string(_c_email_address7990_n.data());
            SW_JOIN_INNER_TD_910_payload_leftMajor payloadA{_c_customer_sk7974, _c_customer_id7975, _c_first_name7982, _c_last_name7983, _c_preferred_cust_flag7984, _c_birth_country7988, _c_login7989, _c_email_address7990};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10898_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk7996_k = tbl_Filter_TD_10898_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_910_key_leftMajor{_ws_bill_customer_sk7996_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7974 = (it->second)._c_customer_sk7974;
                std::string _c_customer_id7975 = (it->second)._c_customer_id7975;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_n{};
                memcpy(_c_customer_id7975_n.data(), (_c_customer_id7975).data(), (_c_customer_id7975).length());
                std::string _c_first_name7982 = (it->second)._c_first_name7982;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_n{};
                memcpy(_c_first_name7982_n.data(), (_c_first_name7982).data(), (_c_first_name7982).length());
                std::string _c_last_name7983 = (it->second)._c_last_name7983;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_n{};
                memcpy(_c_last_name7983_n.data(), (_c_last_name7983).data(), (_c_last_name7983).length());
                std::string _c_preferred_cust_flag7984 = (it->second)._c_preferred_cust_flag7984;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_n{};
                memcpy(_c_preferred_cust_flag7984_n.data(), (_c_preferred_cust_flag7984).data(), (_c_preferred_cust_flag7984).length());
                std::string _c_birth_country7988 = (it->second)._c_birth_country7988;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_n{};
                memcpy(_c_birth_country7988_n.data(), (_c_birth_country7988).data(), (_c_birth_country7988).length());
                std::string _c_login7989 = (it->second)._c_login7989;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7989_n{};
                memcpy(_c_login7989_n.data(), (_c_login7989).data(), (_c_login7989).length());
                std::string _c_email_address7990 = (it->second)._c_email_address7990;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_n{};
                memcpy(_c_email_address7990_n.data(), (_c_email_address7990).data(), (_c_email_address7990).length());
                int32_t _ws_sold_date_sk7992 = tbl_Filter_TD_10898_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk7996 = tbl_Filter_TD_10898_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt8014 = tbl_Filter_TD_10898_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price8015 = tbl_Filter_TD_10898_output.getInt32(i, 3);
                int32_t _ws_ext_wholesale_cost8016 = tbl_Filter_TD_10898_output.getInt32(i, 4);
                int32_t _ws_ext_list_price8017 = tbl_Filter_TD_10898_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7975_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7982_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7983_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7984_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7988_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7989_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7990_n);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 7, _ws_sold_date_sk7992);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 8, _ws_ext_discount_amt8014);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 9, _ws_ext_sales_price8015);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 10, _ws_ext_wholesale_cost8016);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 11, _ws_ext_list_price8017);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_910_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_910_key_rightMajor, SW_JOIN_INNER_TD_910_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10898_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk7996_k = tbl_Filter_TD_10898_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_910_key_rightMajor keyA{_ws_bill_customer_sk7996_k};
            int32_t _ws_sold_date_sk7992 = tbl_Filter_TD_10898_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk7996 = tbl_Filter_TD_10898_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt8014 = tbl_Filter_TD_10898_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price8015 = tbl_Filter_TD_10898_output.getInt32(i, 3);
            int32_t _ws_ext_wholesale_cost8016 = tbl_Filter_TD_10898_output.getInt32(i, 4);
            int32_t _ws_ext_list_price8017 = tbl_Filter_TD_10898_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_910_payload_rightMajor payloadA{_ws_sold_date_sk7992, _ws_bill_customer_sk7996, _ws_ext_discount_amt8014, _ws_ext_sales_price8015, _ws_ext_wholesale_cost8016, _ws_ext_list_price8017};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10886_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7974_k = tbl_Filter_TD_10886_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_910_key_rightMajor{_c_customer_sk7974_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk7992 = (it->second)._ws_sold_date_sk7992;
                int32_t _ws_bill_customer_sk7996 = (it->second)._ws_bill_customer_sk7996;
                int32_t _ws_ext_discount_amt8014 = (it->second)._ws_ext_discount_amt8014;
                int32_t _ws_ext_sales_price8015 = (it->second)._ws_ext_sales_price8015;
                int32_t _ws_ext_wholesale_cost8016 = (it->second)._ws_ext_wholesale_cost8016;
                int32_t _ws_ext_list_price8017 = (it->second)._ws_ext_list_price8017;
                int32_t _c_customer_sk7974 = tbl_Filter_TD_10886_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7975 = std::string(_c_customer_id7975_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7982 = std::string(_c_first_name7982_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7983 = std::string(_c_last_name7983_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7984 = std::string(_c_preferred_cust_flag7984_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7988 = std::string(_c_birth_country7988_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7989_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7989 = std::string(_c_login7989_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_n = tbl_Filter_TD_10886_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7990 = std::string(_c_email_address7990_n.data());
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 7, _ws_sold_date_sk7992);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 8, _ws_ext_discount_amt8014);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 9, _ws_ext_sales_price8015);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 10, _ws_ext_wholesale_cost8016);
                tbl_JOIN_INNER_TD_910_output.setInt32(r, 11, _ws_ext_list_price8017);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7975_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7982_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7983_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7984_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7988_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7989_n);
                tbl_JOIN_INNER_TD_910_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7990_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_910_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_910_output #Row: " << tbl_JOIN_INNER_TD_910_output.getNumRow() << std::endl;
}

void SW_Filter_TD_988(Table &tbl_SerializeFromObject_TD_10846_input, Table &tbl_Filter_TD_988_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_bill_customer_sk#7676) AND isnotnull(cs_sold_date_sk#7673)))
    // Input: ListBuffer(cs_sold_date_sk#7673, cs_bill_customer_sk#7676, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698)
    // Output: ListBuffer(cs_sold_date_sk#7673, cs_bill_customer_sk#7676, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10846_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk7676 = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk7673 = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 0);
        if ((_cs_bill_customer_sk7676!= 0) && (_cs_sold_date_sk7673!= 0)) {
            int32_t _cs_sold_date_sk7673_t = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 0);
            tbl_Filter_TD_988_output.setInt32(r, 0, _cs_sold_date_sk7673_t);
            int32_t _cs_bill_customer_sk7676_t = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 1);
            tbl_Filter_TD_988_output.setInt32(r, 1, _cs_bill_customer_sk7676_t);
            int32_t _cs_ext_discount_amt7695_t = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 2);
            tbl_Filter_TD_988_output.setInt32(r, 2, _cs_ext_discount_amt7695_t);
            int32_t _cs_ext_sales_price7696_t = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 3);
            tbl_Filter_TD_988_output.setInt32(r, 3, _cs_ext_sales_price7696_t);
            int32_t _cs_ext_wholesale_cost7697_t = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 4);
            tbl_Filter_TD_988_output.setInt32(r, 4, _cs_ext_wholesale_cost7697_t);
            int32_t _cs_ext_list_price7698_t = tbl_SerializeFromObject_TD_10846_input.getInt32(i, 5);
            tbl_Filter_TD_988_output.setInt32(r, 5, _cs_ext_list_price7698_t);
            r++;
        }
    }
    tbl_Filter_TD_988_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_988_output #Row: " << tbl_Filter_TD_988_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9729(Table &tbl_SerializeFromObject_TD_10338_input, Table &tbl_Filter_TD_9729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#7655) AND isnotnull(c_customer_id#7656)))
    // Input: ListBuffer(c_customer_sk#7655, c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671)
    // Output: ListBuffer(c_customer_sk#7655, c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10338_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk7655 = tbl_SerializeFromObject_TD_10338_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656 = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk7655!= 0) && （std::string(_isnotnullc_customer_id7656.data()) != "NULL")) {
            int32_t _c_customer_sk7655_t = tbl_SerializeFromObject_TD_10338_input.getInt32(i, 0);
            tbl_Filter_TD_9729_output.setInt32(r, 0, _c_customer_sk7655_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id7656_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name7663_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name7664_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag7665_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country7669_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login7670_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login7670_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_t = tbl_SerializeFromObject_TD_10338_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_9729_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address7671_t);
            r++;
        }
    }
    tbl_Filter_TD_9729_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9729_output #Row: " << tbl_Filter_TD_9729_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_9401_key {
    std::string _c_customer_id7417;
    std::string _c_first_name7424;
    std::string _c_last_name7425;
    std::string _c_preferred_cust_flag7426;
    std::string _c_birth_country7430;
    std::string _c_login7431;
    std::string _c_email_address7432;
    int32_t _d_year7474;
    bool operator==(const SW_Aggregate_TD_9401_key& other) const { return (_c_customer_id7417 == other._c_customer_id7417) && (_c_first_name7424 == other._c_first_name7424) && (_c_last_name7425 == other._c_last_name7425) && (_c_preferred_cust_flag7426 == other._c_preferred_cust_flag7426) && (_c_birth_country7430 == other._c_birth_country7430) && (_c_login7431 == other._c_login7431) && (_c_email_address7432 == other._c_email_address7432) && (_d_year7474 == other._d_year7474); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_9401_key> {
    std::size_t operator() (const SW_Aggregate_TD_9401_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7417)) + (hash<string>()(k._c_first_name7424)) + (hash<string>()(k._c_last_name7425)) + (hash<string>()(k._c_preferred_cust_flag7426)) + (hash<string>()(k._c_birth_country7430)) + (hash<string>()(k._c_login7431)) + (hash<string>()(k._c_email_address7432)) + (hash<int32_t>()(k._d_year7474));
    }
};
}
struct SW_Aggregate_TD_9401_payload {
    std::string _customer_id4160;
    int32_t _year_total4168_sum_0;
};
void SW_Aggregate_TD_9401(Table &tbl_JOIN_INNER_TD_10633_output, Table &tbl_Aggregate_TD_9401_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432, d_year#7474, c_customer_id#7417 AS customer_id#4160, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(cs_ext_list_price#7459 as decimal(8,2))) - promote_precision(cast(cs_ext_wholesale_cost#7458 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(cs_ext_discount_amt#7456 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(cs_ext_sales_price#7457 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4168)
    // Input: ListBuffer(c_customer_id#7417, c_first_name#7424, c_last_name#7425, c_preferred_cust_flag#7426, c_birth_country#7430, c_login#7431, c_email_address#7432, cs_ext_discount_amt#7456, cs_ext_sales_price#7457, cs_ext_wholesale_cost#7458, cs_ext_list_price#7459, d_year#7474)
    // Output: ListBuffer(customer_id#4160, year_total#4168)
    std::unordered_map<SW_Aggregate_TD_9401_key, SW_Aggregate_TD_9401_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10633_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7417 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7424 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7425 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7426 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7430 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7431 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7432 = tbl_JOIN_INNER_TD_10633_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _cs_ext_discount_amt7456 = tbl_JOIN_INNER_TD_10633_output.getInt32(i, 7);
        int32_t _cs_ext_sales_price7457 = tbl_JOIN_INNER_TD_10633_output.getInt32(i, 8);
        int32_t _cs_ext_wholesale_cost7458 = tbl_JOIN_INNER_TD_10633_output.getInt32(i, 9);
        int32_t _cs_ext_list_price7459 = tbl_JOIN_INNER_TD_10633_output.getInt32(i, 10);
        int32_t _d_year7474 = tbl_JOIN_INNER_TD_10633_output.getInt32(i, 11);
        SW_Aggregate_TD_9401_key k{std::string(_c_customer_id7417.data()), std::string(_c_first_name7424.data()), std::string(_c_last_name7425.data()), std::string(_c_preferred_cust_flag7426.data()), std::string(_c_birth_country7430.data()), std::string(_c_login7431.data()), std::string(_c_email_address7432.data()), _d_year7474};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4160 = _c_customer_id7417;
        int64_t _year_total4168_sum_0 = ((((_cs_ext_list_price7459 - _cs_ext_wholesale_cost7458) - _cs_ext_discount_amt7456) + _cs_ext_sales_price7457) / 2.00);
        SW_Aggregate_TD_9401_payload p{std::string(_customer_id4160.data()), _year_total4168_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4168_sum_0 + _year_total4168_sum_0;
            p._year_total4168_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7417 not required in the output table
        // _c_first_name7424 not required in the output table
        // _c_last_name7425 not required in the output table
        // _c_preferred_cust_flag7426 not required in the output table
        // _c_birth_country7430 not required in the output table
        // _c_login7431 not required in the output table
        // _c_email_address7432 not required in the output table
        // _d_year7474 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4160_n{};
        memcpy(_customer_id4160_n.data(), (it.second)._customer_id4160.data(), (it.second)._customer_id4160.length());
        tbl_Aggregate_TD_9401_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4160_n);
        int32_t _year_total4168 = (it.second)._year_total4168_sum_0;
        tbl_Aggregate_TD_9401_output.setInt32(r, 1, _year_total4168);
        ++r;
    }
    tbl_Aggregate_TD_9401_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9401_output #Row: " << tbl_Aggregate_TD_9401_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9154_key_leftMajor {
    int32_t _ss_sold_date_sk7126;
    bool operator==(const SW_JOIN_INNER_TD_9154_key_leftMajor& other) const {
        return ((_ss_sold_date_sk7126 == other._ss_sold_date_sk7126));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9154_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9154_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk7126));
    }
};
}
struct SW_JOIN_INNER_TD_9154_payload_leftMajor {
    std::string _c_customer_id7109;
    std::string _c_first_name7116;
    std::string _c_last_name7117;
    std::string _c_preferred_cust_flag7118;
    std::string _c_birth_country7122;
    std::string _c_login7123;
    std::string _c_email_address7124;
    int32_t _ss_sold_date_sk7126;
    int32_t _ss_ext_discount_amt7140;
    int32_t _ss_ext_sales_price7141;
    int32_t _ss_ext_wholesale_cost7142;
    int32_t _ss_ext_list_price7143;
};
struct SW_JOIN_INNER_TD_9154_key_rightMajor {
    int32_t _d_date_sk7149;
    bool operator==(const SW_JOIN_INNER_TD_9154_key_rightMajor& other) const {
        return ((_d_date_sk7149 == other._d_date_sk7149));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9154_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9154_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7149));
    }
};
}
struct SW_JOIN_INNER_TD_9154_payload_rightMajor {
    int32_t _d_date_sk7149;
    int32_t _d_year7155;
};
void SW_JOIN_INNER_TD_9154(Table &tbl_JOIN_INNER_TD_10943_output, Table &tbl_Filter_TD_10587_output, Table &tbl_JOIN_INNER_TD_9154_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#7126 = d_date_sk#7149))
    // Left Table: ListBuffer(c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124, ss_sold_date_sk#7126, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143)
    // Right Table: ListBuffer(d_date_sk#7149, d_year#7155)
    // Output Table: ListBuffer(c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143, d_year#7155)
    int left_nrow = tbl_JOIN_INNER_TD_10943_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10587_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9154_key_leftMajor, SW_JOIN_INNER_TD_9154_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10943_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk7126_k = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_9154_key_leftMajor keyA{_ss_sold_date_sk7126_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7109 = std::string(_c_customer_id7109_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7116 = std::string(_c_first_name7116_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7117 = std::string(_c_last_name7117_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7118 = std::string(_c_preferred_cust_flag7118_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7122 = std::string(_c_birth_country7122_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7123_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7123 = std::string(_c_login7123_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7124 = std::string(_c_email_address7124_n.data());
            int32_t _ss_sold_date_sk7126 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 7);
            int32_t _ss_ext_discount_amt7140 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 8);
            int32_t _ss_ext_sales_price7141 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 9);
            int32_t _ss_ext_wholesale_cost7142 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 10);
            int32_t _ss_ext_list_price7143 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_9154_payload_leftMajor payloadA{_c_customer_id7109, _c_first_name7116, _c_last_name7117, _c_preferred_cust_flag7118, _c_birth_country7122, _c_login7123, _c_email_address7124, _ss_sold_date_sk7126, _ss_ext_discount_amt7140, _ss_ext_sales_price7141, _ss_ext_wholesale_cost7142, _ss_ext_list_price7143};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10587_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7149_k = tbl_Filter_TD_10587_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9154_key_leftMajor{_d_date_sk7149_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7109 = (it->second)._c_customer_id7109;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_n{};
                memcpy(_c_customer_id7109_n.data(), (_c_customer_id7109).data(), (_c_customer_id7109).length());
                std::string _c_first_name7116 = (it->second)._c_first_name7116;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_n{};
                memcpy(_c_first_name7116_n.data(), (_c_first_name7116).data(), (_c_first_name7116).length());
                std::string _c_last_name7117 = (it->second)._c_last_name7117;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_n{};
                memcpy(_c_last_name7117_n.data(), (_c_last_name7117).data(), (_c_last_name7117).length());
                std::string _c_preferred_cust_flag7118 = (it->second)._c_preferred_cust_flag7118;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_n{};
                memcpy(_c_preferred_cust_flag7118_n.data(), (_c_preferred_cust_flag7118).data(), (_c_preferred_cust_flag7118).length());
                std::string _c_birth_country7122 = (it->second)._c_birth_country7122;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_n{};
                memcpy(_c_birth_country7122_n.data(), (_c_birth_country7122).data(), (_c_birth_country7122).length());
                std::string _c_login7123 = (it->second)._c_login7123;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7123_n{};
                memcpy(_c_login7123_n.data(), (_c_login7123).data(), (_c_login7123).length());
                std::string _c_email_address7124 = (it->second)._c_email_address7124;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_n{};
                memcpy(_c_email_address7124_n.data(), (_c_email_address7124).data(), (_c_email_address7124).length());
                int32_t _ss_sold_date_sk7126 = (it->second)._ss_sold_date_sk7126;
                int32_t _ss_ext_discount_amt7140 = (it->second)._ss_ext_discount_amt7140;
                int32_t _ss_ext_sales_price7141 = (it->second)._ss_ext_sales_price7141;
                int32_t _ss_ext_wholesale_cost7142 = (it->second)._ss_ext_wholesale_cost7142;
                int32_t _ss_ext_list_price7143 = (it->second)._ss_ext_list_price7143;
                int32_t _d_date_sk7149 = tbl_Filter_TD_10587_output.getInt32(i, 0);
                int32_t _d_year7155 = tbl_Filter_TD_10587_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7109_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7116_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7117_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7118_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7122_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7123_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7124_n);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 7, _ss_ext_discount_amt7140);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 8, _ss_ext_sales_price7141);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 9, _ss_ext_wholesale_cost7142);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 10, _ss_ext_list_price7143);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 11, _d_year7155);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9154_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9154_key_rightMajor, SW_JOIN_INNER_TD_9154_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10587_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7149_k = tbl_Filter_TD_10587_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9154_key_rightMajor keyA{_d_date_sk7149_k};
            int32_t _d_date_sk7149 = tbl_Filter_TD_10587_output.getInt32(i, 0);
            int32_t _d_year7155 = tbl_Filter_TD_10587_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_9154_payload_rightMajor payloadA{_d_date_sk7149, _d_year7155};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10943_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk7126_k = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9154_key_rightMajor{_ss_sold_date_sk7126_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7149 = (it->second)._d_date_sk7149;
                int32_t _d_year7155 = (it->second)._d_year7155;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7109 = std::string(_c_customer_id7109_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7116 = std::string(_c_first_name7116_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7117 = std::string(_c_last_name7117_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7118 = std::string(_c_preferred_cust_flag7118_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7122 = std::string(_c_birth_country7122_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7123_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7123 = std::string(_c_login7123_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124_n = tbl_JOIN_INNER_TD_10943_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7124 = std::string(_c_email_address7124_n.data());
                int32_t _ss_sold_date_sk7126 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 7);
                int32_t _ss_ext_discount_amt7140 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 8);
                int32_t _ss_ext_sales_price7141 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 9);
                int32_t _ss_ext_wholesale_cost7142 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 10);
                int32_t _ss_ext_list_price7143 = tbl_JOIN_INNER_TD_10943_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 11, _d_year7155);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7109_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7116_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7117_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7118_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7122_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7123_n);
                tbl_JOIN_INNER_TD_9154_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7124_n);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 7, _ss_ext_discount_amt7140);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 8, _ss_ext_sales_price7141);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 9, _ss_ext_wholesale_cost7142);
                tbl_JOIN_INNER_TD_9154_output.setInt32(r, 10, _ss_ext_list_price7143);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9154_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9154_output #Row: " << tbl_JOIN_INNER_TD_9154_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_9438_key {
    std::string _c_customer_id1;
    std::string _c_first_name8;
    std::string _c_last_name9;
    std::string _c_preferred_cust_flag10;
    std::string _c_birth_country14;
    std::string _c_login15;
    std::string _c_email_address16;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_9438_key& other) const { return (_c_customer_id1 == other._c_customer_id1) && (_c_first_name8 == other._c_first_name8) && (_c_last_name9 == other._c_last_name9) && (_c_preferred_cust_flag10 == other._c_preferred_cust_flag10) && (_c_birth_country14 == other._c_birth_country14) && (_c_login15 == other._c_login15) && (_c_email_address16 == other._c_email_address16) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_9438_key> {
    std::size_t operator() (const SW_Aggregate_TD_9438_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id1)) + (hash<string>()(k._c_first_name8)) + (hash<string>()(k._c_last_name9)) + (hash<string>()(k._c_preferred_cust_flag10)) + (hash<string>()(k._c_birth_country14)) + (hash<string>()(k._c_login15)) + (hash<string>()(k._c_email_address16)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_9438_payload {
    std::string _customer_id4150;
    int32_t _year_total4158_sum_0;
};
void SW_Aggregate_TD_9438(Table &tbl_JOIN_INNER_TD_10100_output, Table &tbl_Aggregate_TD_9438_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, d_year#126, c_customer_id#1 AS customer_id#4150, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_ext_list_price#1223 as decimal(8,2))) - promote_precision(cast(ss_ext_wholesale_cost#1222 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ss_ext_discount_amt#1220 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ss_ext_sales_price#1221 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4158)
    // Input: ListBuffer(c_customer_id#1, c_first_name#8, c_last_name#9, c_preferred_cust_flag#10, c_birth_country#14, c_login#15, c_email_address#16, ss_ext_discount_amt#1220, ss_ext_sales_price#1221, ss_ext_wholesale_cost#1222, ss_ext_list_price#1223, d_year#126)
    // Output: ListBuffer(customer_id#4150, year_total#4158)
    std::unordered_map<SW_Aggregate_TD_9438_key, SW_Aggregate_TD_9438_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10100_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id1 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name9 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country14 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login15 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address16 = tbl_JOIN_INNER_TD_10100_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ss_ext_discount_amt1220 = tbl_JOIN_INNER_TD_10100_output.getInt32(i, 7);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10100_output.getInt32(i, 8);
        int32_t _ss_ext_wholesale_cost1222 = tbl_JOIN_INNER_TD_10100_output.getInt32(i, 9);
        int32_t _ss_ext_list_price1223 = tbl_JOIN_INNER_TD_10100_output.getInt32(i, 10);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_10100_output.getInt32(i, 11);
        SW_Aggregate_TD_9438_key k{std::string(_c_customer_id1.data()), std::string(_c_first_name8.data()), std::string(_c_last_name9.data()), std::string(_c_preferred_cust_flag10.data()), std::string(_c_birth_country14.data()), std::string(_c_login15.data()), std::string(_c_email_address16.data()), _d_year126};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4150 = _c_customer_id1;
        int64_t _year_total4158_sum_0 = ((((_ss_ext_list_price1223 - _ss_ext_wholesale_cost1222) - _ss_ext_discount_amt1220) + _ss_ext_sales_price1221) / 2.00);
        SW_Aggregate_TD_9438_payload p{std::string(_customer_id4150.data()), _year_total4158_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4158_sum_0 + _year_total4158_sum_0;
            p._year_total4158_sum_0 = sum_0;
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
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n{};
        memcpy(_customer_id4150_n.data(), (it.second)._customer_id4150.data(), (it.second)._customer_id4150.length());
        tbl_Aggregate_TD_9438_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
        int32_t _year_total4158 = (it.second)._year_total4158_sum_0;
        tbl_Aggregate_TD_9438_output.setInt32(r, 1, _year_total4158);
        ++r;
    }
    tbl_Aggregate_TD_9438_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9438_output #Row: " << tbl_Aggregate_TD_9438_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8421_key_leftMajor {
    int32_t _ws_sold_date_sk7992;
    bool operator==(const SW_JOIN_INNER_TD_8421_key_leftMajor& other) const {
        return ((_ws_sold_date_sk7992 == other._ws_sold_date_sk7992));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8421_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8421_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk7992));
    }
};
}
struct SW_JOIN_INNER_TD_8421_payload_leftMajor {
    std::string _c_customer_id7975;
    std::string _c_first_name7982;
    std::string _c_last_name7983;
    std::string _c_preferred_cust_flag7984;
    std::string _c_birth_country7988;
    std::string _c_login7989;
    std::string _c_email_address7990;
    int32_t _ws_sold_date_sk7992;
    int32_t _ws_ext_discount_amt8014;
    int32_t _ws_ext_sales_price8015;
    int32_t _ws_ext_wholesale_cost8016;
    int32_t _ws_ext_list_price8017;
};
struct SW_JOIN_INNER_TD_8421_key_rightMajor {
    int32_t _d_date_sk8026;
    bool operator==(const SW_JOIN_INNER_TD_8421_key_rightMajor& other) const {
        return ((_d_date_sk8026 == other._d_date_sk8026));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8421_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8421_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8026));
    }
};
}
struct SW_JOIN_INNER_TD_8421_payload_rightMajor {
    int32_t _d_date_sk8026;
    int32_t _d_year8032;
};
void SW_JOIN_INNER_TD_8421(Table &tbl_JOIN_INNER_TD_910_output, Table &tbl_Filter_TD_9465_output, Table &tbl_JOIN_INNER_TD_8421_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#7992 = d_date_sk#8026))
    // Left Table: ListBuffer(c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990, ws_sold_date_sk#7992, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017)
    // Right Table: ListBuffer(d_date_sk#8026, d_year#8032)
    // Output Table: ListBuffer(c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017, d_year#8032)
    int left_nrow = tbl_JOIN_INNER_TD_910_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9465_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8421_key_leftMajor, SW_JOIN_INNER_TD_8421_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_910_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk7992_k = tbl_JOIN_INNER_TD_910_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_8421_key_leftMajor keyA{_ws_sold_date_sk7992_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7975 = std::string(_c_customer_id7975_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7982 = std::string(_c_first_name7982_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7983 = std::string(_c_last_name7983_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7984 = std::string(_c_preferred_cust_flag7984_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7988 = std::string(_c_birth_country7988_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7989_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7989 = std::string(_c_login7989_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7990 = std::string(_c_email_address7990_n.data());
            int32_t _ws_sold_date_sk7992 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 7);
            int32_t _ws_ext_discount_amt8014 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 8);
            int32_t _ws_ext_sales_price8015 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 9);
            int32_t _ws_ext_wholesale_cost8016 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 10);
            int32_t _ws_ext_list_price8017 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_8421_payload_leftMajor payloadA{_c_customer_id7975, _c_first_name7982, _c_last_name7983, _c_preferred_cust_flag7984, _c_birth_country7988, _c_login7989, _c_email_address7990, _ws_sold_date_sk7992, _ws_ext_discount_amt8014, _ws_ext_sales_price8015, _ws_ext_wholesale_cost8016, _ws_ext_list_price8017};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9465_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8026_k = tbl_Filter_TD_9465_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8421_key_leftMajor{_d_date_sk8026_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7975 = (it->second)._c_customer_id7975;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_n{};
                memcpy(_c_customer_id7975_n.data(), (_c_customer_id7975).data(), (_c_customer_id7975).length());
                std::string _c_first_name7982 = (it->second)._c_first_name7982;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_n{};
                memcpy(_c_first_name7982_n.data(), (_c_first_name7982).data(), (_c_first_name7982).length());
                std::string _c_last_name7983 = (it->second)._c_last_name7983;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_n{};
                memcpy(_c_last_name7983_n.data(), (_c_last_name7983).data(), (_c_last_name7983).length());
                std::string _c_preferred_cust_flag7984 = (it->second)._c_preferred_cust_flag7984;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_n{};
                memcpy(_c_preferred_cust_flag7984_n.data(), (_c_preferred_cust_flag7984).data(), (_c_preferred_cust_flag7984).length());
                std::string _c_birth_country7988 = (it->second)._c_birth_country7988;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_n{};
                memcpy(_c_birth_country7988_n.data(), (_c_birth_country7988).data(), (_c_birth_country7988).length());
                std::string _c_login7989 = (it->second)._c_login7989;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7989_n{};
                memcpy(_c_login7989_n.data(), (_c_login7989).data(), (_c_login7989).length());
                std::string _c_email_address7990 = (it->second)._c_email_address7990;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_n{};
                memcpy(_c_email_address7990_n.data(), (_c_email_address7990).data(), (_c_email_address7990).length());
                int32_t _ws_sold_date_sk7992 = (it->second)._ws_sold_date_sk7992;
                int32_t _ws_ext_discount_amt8014 = (it->second)._ws_ext_discount_amt8014;
                int32_t _ws_ext_sales_price8015 = (it->second)._ws_ext_sales_price8015;
                int32_t _ws_ext_wholesale_cost8016 = (it->second)._ws_ext_wholesale_cost8016;
                int32_t _ws_ext_list_price8017 = (it->second)._ws_ext_list_price8017;
                int32_t _d_date_sk8026 = tbl_Filter_TD_9465_output.getInt32(i, 0);
                int32_t _d_year8032 = tbl_Filter_TD_9465_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7975_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7982_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7983_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7984_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7988_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7989_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7990_n);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 7, _ws_ext_discount_amt8014);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 8, _ws_ext_sales_price8015);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 9, _ws_ext_wholesale_cost8016);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 10, _ws_ext_list_price8017);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 11, _d_year8032);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8421_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8421_key_rightMajor, SW_JOIN_INNER_TD_8421_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9465_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8026_k = tbl_Filter_TD_9465_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8421_key_rightMajor keyA{_d_date_sk8026_k};
            int32_t _d_date_sk8026 = tbl_Filter_TD_9465_output.getInt32(i, 0);
            int32_t _d_year8032 = tbl_Filter_TD_9465_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8421_payload_rightMajor payloadA{_d_date_sk8026, _d_year8032};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_910_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk7992_k = tbl_JOIN_INNER_TD_910_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8421_key_rightMajor{_ws_sold_date_sk7992_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8026 = (it->second)._d_date_sk8026;
                int32_t _d_year8032 = (it->second)._d_year8032;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7975 = std::string(_c_customer_id7975_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7982 = std::string(_c_first_name7982_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7983 = std::string(_c_last_name7983_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7984 = std::string(_c_preferred_cust_flag7984_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7988 = std::string(_c_birth_country7988_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7989_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7989 = std::string(_c_login7989_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990_n = tbl_JOIN_INNER_TD_910_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7990 = std::string(_c_email_address7990_n.data());
                int32_t _ws_sold_date_sk7992 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 7);
                int32_t _ws_ext_discount_amt8014 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 8);
                int32_t _ws_ext_sales_price8015 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 9);
                int32_t _ws_ext_wholesale_cost8016 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 10);
                int32_t _ws_ext_list_price8017 = tbl_JOIN_INNER_TD_910_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 11, _d_year8032);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7975_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7982_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7983_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7984_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7988_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7989_n);
                tbl_JOIN_INNER_TD_8421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7990_n);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 7, _ws_ext_discount_amt8014);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 8, _ws_ext_sales_price8015);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 9, _ws_ext_wholesale_cost8016);
                tbl_JOIN_INNER_TD_8421_output.setInt32(r, 10, _ws_ext_list_price8017);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8421_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8421_output #Row: " << tbl_JOIN_INNER_TD_8421_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8401(Table &tbl_SerializeFromObject_TD_9336_input, Table &tbl_Filter_TD_8401_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#7713) AND (d_year#7713 = 2002)) AND isnotnull(d_date_sk#7707)))
    // Input: ListBuffer(d_date_sk#7707, d_year#7713)
    // Output: ListBuffer(d_date_sk#7707, d_year#7713)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9336_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year7713 = tbl_SerializeFromObject_TD_9336_input.getInt32(i, 1);
        int32_t _d_date_sk7707 = tbl_SerializeFromObject_TD_9336_input.getInt32(i, 0);
        if (((_d_year7713!= 0) && (_d_year7713 == 2002)) && (_d_date_sk7707!= 0)) {
            int32_t _d_date_sk7707_t = tbl_SerializeFromObject_TD_9336_input.getInt32(i, 0);
            tbl_Filter_TD_8401_output.setInt32(r, 0, _d_date_sk7707_t);
            int32_t _d_year7713_t = tbl_SerializeFromObject_TD_9336_input.getInt32(i, 1);
            tbl_Filter_TD_8401_output.setInt32(r, 1, _d_year7713_t);
            r++;
        }
    }
    tbl_Filter_TD_8401_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8401_output #Row: " << tbl_Filter_TD_8401_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8132_key_leftMajor {
    int32_t _c_customer_sk7655;
    bool operator==(const SW_JOIN_INNER_TD_8132_key_leftMajor& other) const {
        return ((_c_customer_sk7655 == other._c_customer_sk7655));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8132_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8132_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk7655));
    }
};
}
struct SW_JOIN_INNER_TD_8132_payload_leftMajor {
    int32_t _c_customer_sk7655;
    std::string _c_customer_id7656;
    std::string _c_first_name7663;
    std::string _c_last_name7664;
    std::string _c_preferred_cust_flag7665;
    std::string _c_birth_country7669;
    std::string _c_login7670;
    std::string _c_email_address7671;
};
struct SW_JOIN_INNER_TD_8132_key_rightMajor {
    int32_t _cs_bill_customer_sk7676;
    bool operator==(const SW_JOIN_INNER_TD_8132_key_rightMajor& other) const {
        return ((_cs_bill_customer_sk7676 == other._cs_bill_customer_sk7676));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8132_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8132_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk7676));
    }
};
}
struct SW_JOIN_INNER_TD_8132_payload_rightMajor {
    int32_t _cs_sold_date_sk7673;
    int32_t _cs_bill_customer_sk7676;
    int32_t _cs_ext_discount_amt7695;
    int32_t _cs_ext_sales_price7696;
    int32_t _cs_ext_wholesale_cost7697;
    int32_t _cs_ext_list_price7698;
};
void SW_JOIN_INNER_TD_8132(Table &tbl_Filter_TD_9729_output, Table &tbl_Filter_TD_988_output, Table &tbl_JOIN_INNER_TD_8132_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#7655 = cs_bill_customer_sk#7676))
    // Left Table: ListBuffer(c_customer_sk#7655, c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671)
    // Right Table: ListBuffer(cs_sold_date_sk#7673, cs_bill_customer_sk#7676, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698)
    // Output Table: ListBuffer(c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671, cs_sold_date_sk#7673, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698)
    int left_nrow = tbl_Filter_TD_9729_output.getNumRow();
    int right_nrow = tbl_Filter_TD_988_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8132_key_leftMajor, SW_JOIN_INNER_TD_8132_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9729_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk7655_k = tbl_Filter_TD_9729_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8132_key_leftMajor keyA{_c_customer_sk7655_k};
            int32_t _c_customer_sk7655 = tbl_Filter_TD_9729_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id7656 = std::string(_c_customer_id7656_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name7663 = std::string(_c_first_name7663_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name7664 = std::string(_c_last_name7664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag7665 = std::string(_c_preferred_cust_flag7665_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country7669 = std::string(_c_birth_country7669_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7670_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login7670 = std::string(_c_login7670_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address7671 = std::string(_c_email_address7671_n.data());
            SW_JOIN_INNER_TD_8132_payload_leftMajor payloadA{_c_customer_sk7655, _c_customer_id7656, _c_first_name7663, _c_last_name7664, _c_preferred_cust_flag7665, _c_birth_country7669, _c_login7670, _c_email_address7671};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_988_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk7676_k = tbl_Filter_TD_988_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8132_key_leftMajor{_cs_bill_customer_sk7676_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk7655 = (it->second)._c_customer_sk7655;
                std::string _c_customer_id7656 = (it->second)._c_customer_id7656;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_n{};
                memcpy(_c_customer_id7656_n.data(), (_c_customer_id7656).data(), (_c_customer_id7656).length());
                std::string _c_first_name7663 = (it->second)._c_first_name7663;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_n{};
                memcpy(_c_first_name7663_n.data(), (_c_first_name7663).data(), (_c_first_name7663).length());
                std::string _c_last_name7664 = (it->second)._c_last_name7664;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_n{};
                memcpy(_c_last_name7664_n.data(), (_c_last_name7664).data(), (_c_last_name7664).length());
                std::string _c_preferred_cust_flag7665 = (it->second)._c_preferred_cust_flag7665;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_n{};
                memcpy(_c_preferred_cust_flag7665_n.data(), (_c_preferred_cust_flag7665).data(), (_c_preferred_cust_flag7665).length());
                std::string _c_birth_country7669 = (it->second)._c_birth_country7669;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_n{};
                memcpy(_c_birth_country7669_n.data(), (_c_birth_country7669).data(), (_c_birth_country7669).length());
                std::string _c_login7670 = (it->second)._c_login7670;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7670_n{};
                memcpy(_c_login7670_n.data(), (_c_login7670).data(), (_c_login7670).length());
                std::string _c_email_address7671 = (it->second)._c_email_address7671;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_n{};
                memcpy(_c_email_address7671_n.data(), (_c_email_address7671).data(), (_c_email_address7671).length());
                int32_t _cs_sold_date_sk7673 = tbl_Filter_TD_988_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk7676 = tbl_Filter_TD_988_output.getInt32(i, 1);
                int32_t _cs_ext_discount_amt7695 = tbl_Filter_TD_988_output.getInt32(i, 2);
                int32_t _cs_ext_sales_price7696 = tbl_Filter_TD_988_output.getInt32(i, 3);
                int32_t _cs_ext_wholesale_cost7697 = tbl_Filter_TD_988_output.getInt32(i, 4);
                int32_t _cs_ext_list_price7698 = tbl_Filter_TD_988_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7656_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7663_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7664_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7665_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7669_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7670_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7671_n);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 7, _cs_sold_date_sk7673);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 8, _cs_ext_discount_amt7695);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 9, _cs_ext_sales_price7696);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 10, _cs_ext_wholesale_cost7697);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 11, _cs_ext_list_price7698);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8132_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8132_key_rightMajor, SW_JOIN_INNER_TD_8132_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_988_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk7676_k = tbl_Filter_TD_988_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_8132_key_rightMajor keyA{_cs_bill_customer_sk7676_k};
            int32_t _cs_sold_date_sk7673 = tbl_Filter_TD_988_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk7676 = tbl_Filter_TD_988_output.getInt32(i, 1);
            int32_t _cs_ext_discount_amt7695 = tbl_Filter_TD_988_output.getInt32(i, 2);
            int32_t _cs_ext_sales_price7696 = tbl_Filter_TD_988_output.getInt32(i, 3);
            int32_t _cs_ext_wholesale_cost7697 = tbl_Filter_TD_988_output.getInt32(i, 4);
            int32_t _cs_ext_list_price7698 = tbl_Filter_TD_988_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8132_payload_rightMajor payloadA{_cs_sold_date_sk7673, _cs_bill_customer_sk7676, _cs_ext_discount_amt7695, _cs_ext_sales_price7696, _cs_ext_wholesale_cost7697, _cs_ext_list_price7698};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9729_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk7655_k = tbl_Filter_TD_9729_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8132_key_rightMajor{_c_customer_sk7655_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk7673 = (it->second)._cs_sold_date_sk7673;
                int32_t _cs_bill_customer_sk7676 = (it->second)._cs_bill_customer_sk7676;
                int32_t _cs_ext_discount_amt7695 = (it->second)._cs_ext_discount_amt7695;
                int32_t _cs_ext_sales_price7696 = (it->second)._cs_ext_sales_price7696;
                int32_t _cs_ext_wholesale_cost7697 = (it->second)._cs_ext_wholesale_cost7697;
                int32_t _cs_ext_list_price7698 = (it->second)._cs_ext_list_price7698;
                int32_t _c_customer_sk7655 = tbl_Filter_TD_9729_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id7656 = std::string(_c_customer_id7656_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name7663 = std::string(_c_first_name7663_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name7664 = std::string(_c_last_name7664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag7665 = std::string(_c_preferred_cust_flag7665_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country7669 = std::string(_c_birth_country7669_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7670_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login7670 = std::string(_c_login7670_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_n = tbl_Filter_TD_9729_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address7671 = std::string(_c_email_address7671_n.data());
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 7, _cs_sold_date_sk7673);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 8, _cs_ext_discount_amt7695);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 9, _cs_ext_sales_price7696);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 10, _cs_ext_wholesale_cost7697);
                tbl_JOIN_INNER_TD_8132_output.setInt32(r, 11, _cs_ext_list_price7698);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7656_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7663_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7664_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7665_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7669_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7670_n);
                tbl_JOIN_INNER_TD_8132_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7671_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8132_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8132_output #Row: " << tbl_JOIN_INNER_TD_8132_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8375(Table &tbl_Aggregate_TD_9401_output, Table &tbl_Filter_TD_8375_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#4168) AND (year_total#4168 > 0.000000)))
    // Input: ListBuffer(customer_id#4160, year_total#4168)
    // Output: ListBuffer(customer_id#4160, year_total#4168)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9401_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total4168 = tbl_Aggregate_TD_9401_output.getInt32(i, 1);
        if ((_year_total4168!= 0) && (_year_total4168 > 0.000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4160_t = tbl_Aggregate_TD_9401_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8375_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4160_t);
            int32_t _year_total4168_t = tbl_Aggregate_TD_9401_output.getInt32(i, 1);
            tbl_Filter_TD_8375_output.setInt32(r, 1, _year_total4168_t);
            r++;
        }
    }
    tbl_Filter_TD_8375_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8375_output #Row: " << tbl_Filter_TD_8375_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8805_key {
    std::string _c_customer_id7109;
    std::string _c_first_name7116;
    std::string _c_last_name7117;
    std::string _c_preferred_cust_flag7118;
    std::string _c_birth_country7122;
    std::string _c_login7123;
    std::string _c_email_address7124;
    int32_t _d_year7155;
    bool operator==(const SW_Aggregate_TD_8805_key& other) const { return (_c_customer_id7109 == other._c_customer_id7109) && (_c_first_name7116 == other._c_first_name7116) && (_c_last_name7117 == other._c_last_name7117) && (_c_preferred_cust_flag7118 == other._c_preferred_cust_flag7118) && (_c_birth_country7122 == other._c_birth_country7122) && (_c_login7123 == other._c_login7123) && (_c_email_address7124 == other._c_email_address7124) && (_d_year7155 == other._d_year7155); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8805_key> {
    std::size_t operator() (const SW_Aggregate_TD_8805_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7109)) + (hash<string>()(k._c_first_name7116)) + (hash<string>()(k._c_last_name7117)) + (hash<string>()(k._c_preferred_cust_flag7118)) + (hash<string>()(k._c_birth_country7122)) + (hash<string>()(k._c_login7123)) + (hash<string>()(k._c_email_address7124)) + (hash<int32_t>()(k._d_year7155));
    }
};
}
struct SW_Aggregate_TD_8805_payload {
    std::string _customer_id4275;
    std::string _customer_first_name4276;
    std::string _customer_last_name4277;
    std::string _customer_preferred_cust_flag4278;
    int32_t _year_total4283_sum_0;
};
void SW_Aggregate_TD_8805(Table &tbl_JOIN_INNER_TD_9154_output, Table &tbl_Aggregate_TD_8805_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124, d_year#7155, c_customer_id#7109 AS customer_id#4275, c_first_name#7116 AS customer_first_name#4276, c_last_name#7117 AS customer_last_name#4277, c_preferred_cust_flag#7118 AS customer_preferred_cust_flag#4278, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ss_ext_list_price#7143 as decimal(8,2))) - promote_precision(cast(ss_ext_wholesale_cost#7142 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ss_ext_discount_amt#7140 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ss_ext_sales_price#7141 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4283)
    // Input: ListBuffer(c_customer_id#7109, c_first_name#7116, c_last_name#7117, c_preferred_cust_flag#7118, c_birth_country#7122, c_login#7123, c_email_address#7124, ss_ext_discount_amt#7140, ss_ext_sales_price#7141, ss_ext_wholesale_cost#7142, ss_ext_list_price#7143, d_year#7155)
    // Output: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#4283)
    std::unordered_map<SW_Aggregate_TD_8805_key, SW_Aggregate_TD_8805_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9154_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7109 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7116 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7117 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7118 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7122 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7123 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7124 = tbl_JOIN_INNER_TD_9154_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ss_ext_discount_amt7140 = tbl_JOIN_INNER_TD_9154_output.getInt32(i, 7);
        int32_t _ss_ext_sales_price7141 = tbl_JOIN_INNER_TD_9154_output.getInt32(i, 8);
        int32_t _ss_ext_wholesale_cost7142 = tbl_JOIN_INNER_TD_9154_output.getInt32(i, 9);
        int32_t _ss_ext_list_price7143 = tbl_JOIN_INNER_TD_9154_output.getInt32(i, 10);
        int32_t _d_year7155 = tbl_JOIN_INNER_TD_9154_output.getInt32(i, 11);
        SW_Aggregate_TD_8805_key k{std::string(_c_customer_id7109.data()), std::string(_c_first_name7116.data()), std::string(_c_last_name7117.data()), std::string(_c_preferred_cust_flag7118.data()), std::string(_c_birth_country7122.data()), std::string(_c_login7123.data()), std::string(_c_email_address7124.data()), _d_year7155};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4275 = _c_customer_id7109;
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276 = _c_first_name7116;
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277 = _c_last_name7117;
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278 = _c_preferred_cust_flag7118;
        int64_t _year_total4283_sum_0 = ((((_ss_ext_list_price7143 - _ss_ext_wholesale_cost7142) - _ss_ext_discount_amt7140) + _ss_ext_sales_price7141) / 2.00);
        SW_Aggregate_TD_8805_payload p{std::string(_customer_id4275.data()), std::string(_customer_first_name4276.data()), std::string(_customer_last_name4277.data()), std::string(_customer_preferred_cust_flag4278.data()), _year_total4283_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4283_sum_0 + _year_total4283_sum_0;
            p._year_total4283_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7109 not required in the output table
        // _c_first_name7116 not required in the output table
        // _c_last_name7117 not required in the output table
        // _c_preferred_cust_flag7118 not required in the output table
        // _c_birth_country7122 not required in the output table
        // _c_login7123 not required in the output table
        // _c_email_address7124 not required in the output table
        // _d_year7155 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n{};
        memcpy(_customer_id4275_n.data(), (it.second)._customer_id4275.data(), (it.second)._customer_id4275.length());
        tbl_Aggregate_TD_8805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4275_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n{};
        memcpy(_customer_first_name4276_n.data(), (it.second)._customer_first_name4276.data(), (it.second)._customer_first_name4276.length());
        tbl_Aggregate_TD_8805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4276_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n{};
        memcpy(_customer_last_name4277_n.data(), (it.second)._customer_last_name4277.data(), (it.second)._customer_last_name4277.length());
        tbl_Aggregate_TD_8805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4277_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n{};
        memcpy(_customer_preferred_cust_flag4278_n.data(), (it.second)._customer_preferred_cust_flag4278.data(), (it.second)._customer_preferred_cust_flag4278.length());
        tbl_Aggregate_TD_8805_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4278_n);
        int32_t _year_total4283 = (it.second)._year_total4283_sum_0;
        tbl_Aggregate_TD_8805_output.setInt32(r, 4, _year_total4283);
        ++r;
    }
    tbl_Aggregate_TD_8805_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8805_output #Row: " << tbl_Aggregate_TD_8805_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8368(Table &tbl_Aggregate_TD_9438_output, Table &tbl_Filter_TD_8368_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#4158) AND (year_total#4158 > 0.000000)))
    // Input: ListBuffer(customer_id#4150, year_total#4158)
    // Output: ListBuffer(customer_id#4150, year_total#4158)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9438_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total4158 = tbl_Aggregate_TD_9438_output.getInt32(i, 1);
        if ((_year_total4158!= 0) && (_year_total4158 > 0.000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_t = tbl_Aggregate_TD_9438_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8368_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_t);
            int32_t _year_total4158_t = tbl_Aggregate_TD_9438_output.getInt32(i, 1);
            tbl_Filter_TD_8368_output.setInt32(r, 1, _year_total4158_t);
            r++;
        }
    }
    tbl_Filter_TD_8368_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8368_output #Row: " << tbl_Filter_TD_8368_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7886(Table &tbl_SerializeFromObject_TD_8497_input, Table &tbl_Filter_TD_7886_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#8235) AND isnotnull(ws_sold_date_sk#8231)))
    // Input: ListBuffer(ws_sold_date_sk#8231, ws_bill_customer_sk#8235, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256)
    // Output: ListBuffer(ws_sold_date_sk#8231, ws_bill_customer_sk#8235, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8497_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk8235 = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk8231 = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk8235!= 0) && (_ws_sold_date_sk8231!= 0)) {
            int32_t _ws_sold_date_sk8231_t = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 0);
            tbl_Filter_TD_7886_output.setInt32(r, 0, _ws_sold_date_sk8231_t);
            int32_t _ws_bill_customer_sk8235_t = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 1);
            tbl_Filter_TD_7886_output.setInt32(r, 1, _ws_bill_customer_sk8235_t);
            int32_t _ws_ext_discount_amt8253_t = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 2);
            tbl_Filter_TD_7886_output.setInt32(r, 2, _ws_ext_discount_amt8253_t);
            int32_t _ws_ext_sales_price8254_t = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 3);
            tbl_Filter_TD_7886_output.setInt32(r, 3, _ws_ext_sales_price8254_t);
            int32_t _ws_ext_wholesale_cost8255_t = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 4);
            tbl_Filter_TD_7886_output.setInt32(r, 4, _ws_ext_wholesale_cost8255_t);
            int32_t _ws_ext_list_price8256_t = tbl_SerializeFromObject_TD_8497_input.getInt32(i, 5);
            tbl_Filter_TD_7886_output.setInt32(r, 5, _ws_ext_list_price8256_t);
            r++;
        }
    }
    tbl_Filter_TD_7886_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7886_output #Row: " << tbl_Filter_TD_7886_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7795(Table &tbl_SerializeFromObject_TD_8186_input, Table &tbl_Filter_TD_7795_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#8213) AND isnotnull(c_customer_id#8214)))
    // Input: ListBuffer(c_customer_sk#8213, c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229)
    // Output: ListBuffer(c_customer_sk#8213, c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8186_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk8213 = tbl_SerializeFromObject_TD_8186_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214 = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_c_customer_sk8213!= 0) && （std::string(_isnotnullc_customer_id8214.data()) != "NULL")) {
            int32_t _c_customer_sk8213_t = tbl_SerializeFromObject_TD_8186_input.getInt32(i, 0);
            tbl_Filter_TD_7795_output.setInt32(r, 0, _c_customer_sk8213_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_customer_id8214_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name8221_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name8222_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_preferred_cust_flag8223_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_birth_country8227_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_login8228_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_login8228_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_t = tbl_SerializeFromObject_TD_8186_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            tbl_Filter_TD_7795_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 7, _c_email_address8229_t);
            r++;
        }
    }
    tbl_Filter_TD_7795_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7795_output #Row: " << tbl_Filter_TD_7795_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7656_key {
    std::string _c_customer_id7975;
    std::string _c_first_name7982;
    std::string _c_last_name7983;
    std::string _c_preferred_cust_flag7984;
    std::string _c_birth_country7988;
    std::string _c_login7989;
    std::string _c_email_address7990;
    int32_t _d_year8032;
    bool operator==(const SW_Aggregate_TD_7656_key& other) const { return (_c_customer_id7975 == other._c_customer_id7975) && (_c_first_name7982 == other._c_first_name7982) && (_c_last_name7983 == other._c_last_name7983) && (_c_preferred_cust_flag7984 == other._c_preferred_cust_flag7984) && (_c_birth_country7988 == other._c_birth_country7988) && (_c_login7989 == other._c_login7989) && (_c_email_address7990 == other._c_email_address7990) && (_d_year8032 == other._d_year8032); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7656_key> {
    std::size_t operator() (const SW_Aggregate_TD_7656_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7975)) + (hash<string>()(k._c_first_name7982)) + (hash<string>()(k._c_last_name7983)) + (hash<string>()(k._c_preferred_cust_flag7984)) + (hash<string>()(k._c_birth_country7988)) + (hash<string>()(k._c_login7989)) + (hash<string>()(k._c_email_address7990)) + (hash<int32_t>()(k._d_year8032));
    }
};
}
struct SW_Aggregate_TD_7656_payload {
    std::string _customer_id4170;
    int32_t _year_total4178_sum_0;
};
void SW_Aggregate_TD_7656(Table &tbl_JOIN_INNER_TD_8421_output, Table &tbl_Aggregate_TD_7656_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990, d_year#8032, c_customer_id#7975 AS customer_id#4170, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ws_ext_list_price#8017 as decimal(8,2))) - promote_precision(cast(ws_ext_wholesale_cost#8016 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ws_ext_discount_amt#8014 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ws_ext_sales_price#8015 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4178)
    // Input: ListBuffer(c_customer_id#7975, c_first_name#7982, c_last_name#7983, c_preferred_cust_flag#7984, c_birth_country#7988, c_login#7989, c_email_address#7990, ws_ext_discount_amt#8014, ws_ext_sales_price#8015, ws_ext_wholesale_cost#8016, ws_ext_list_price#8017, d_year#8032)
    // Output: ListBuffer(customer_id#4170, year_total#4178)
    std::unordered_map<SW_Aggregate_TD_7656_key, SW_Aggregate_TD_7656_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8421_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7975 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7982 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7983 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7984 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7988 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7989 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7990 = tbl_JOIN_INNER_TD_8421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ws_ext_discount_amt8014 = tbl_JOIN_INNER_TD_8421_output.getInt32(i, 7);
        int32_t _ws_ext_sales_price8015 = tbl_JOIN_INNER_TD_8421_output.getInt32(i, 8);
        int32_t _ws_ext_wholesale_cost8016 = tbl_JOIN_INNER_TD_8421_output.getInt32(i, 9);
        int32_t _ws_ext_list_price8017 = tbl_JOIN_INNER_TD_8421_output.getInt32(i, 10);
        int32_t _d_year8032 = tbl_JOIN_INNER_TD_8421_output.getInt32(i, 11);
        SW_Aggregate_TD_7656_key k{std::string(_c_customer_id7975.data()), std::string(_c_first_name7982.data()), std::string(_c_last_name7983.data()), std::string(_c_preferred_cust_flag7984.data()), std::string(_c_birth_country7988.data()), std::string(_c_login7989.data()), std::string(_c_email_address7990.data()), _d_year8032};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4170 = _c_customer_id7975;
        int64_t _year_total4178_sum_0 = ((((_ws_ext_list_price8017 - _ws_ext_wholesale_cost8016) - _ws_ext_discount_amt8014) + _ws_ext_sales_price8015) / 2.00);
        SW_Aggregate_TD_7656_payload p{std::string(_customer_id4170.data()), _year_total4178_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4178_sum_0 + _year_total4178_sum_0;
            p._year_total4178_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7975 not required in the output table
        // _c_first_name7982 not required in the output table
        // _c_last_name7983 not required in the output table
        // _c_preferred_cust_flag7984 not required in the output table
        // _c_birth_country7988 not required in the output table
        // _c_login7989 not required in the output table
        // _c_email_address7990 not required in the output table
        // _d_year8032 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4170_n{};
        memcpy(_customer_id4170_n.data(), (it.second)._customer_id4170.data(), (it.second)._customer_id4170.length());
        tbl_Aggregate_TD_7656_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4170_n);
        int32_t _year_total4178 = (it.second)._year_total4178_sum_0;
        tbl_Aggregate_TD_7656_output.setInt32(r, 1, _year_total4178);
        ++r;
    }
    tbl_Aggregate_TD_7656_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7656_output #Row: " << tbl_Aggregate_TD_7656_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7724_key_leftMajor {
    int32_t _cs_sold_date_sk7673;
    bool operator==(const SW_JOIN_INNER_TD_7724_key_leftMajor& other) const {
        return ((_cs_sold_date_sk7673 == other._cs_sold_date_sk7673));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7724_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7724_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk7673));
    }
};
}
struct SW_JOIN_INNER_TD_7724_payload_leftMajor {
    std::string _c_customer_id7656;
    std::string _c_first_name7663;
    std::string _c_last_name7664;
    std::string _c_preferred_cust_flag7665;
    std::string _c_birth_country7669;
    std::string _c_login7670;
    std::string _c_email_address7671;
    int32_t _cs_sold_date_sk7673;
    int32_t _cs_ext_discount_amt7695;
    int32_t _cs_ext_sales_price7696;
    int32_t _cs_ext_wholesale_cost7697;
    int32_t _cs_ext_list_price7698;
};
struct SW_JOIN_INNER_TD_7724_key_rightMajor {
    int32_t _d_date_sk7707;
    bool operator==(const SW_JOIN_INNER_TD_7724_key_rightMajor& other) const {
        return ((_d_date_sk7707 == other._d_date_sk7707));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7724_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7724_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk7707));
    }
};
}
struct SW_JOIN_INNER_TD_7724_payload_rightMajor {
    int32_t _d_date_sk7707;
    int32_t _d_year7713;
};
void SW_JOIN_INNER_TD_7724(Table &tbl_JOIN_INNER_TD_8132_output, Table &tbl_Filter_TD_8401_output, Table &tbl_JOIN_INNER_TD_7724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#7673 = d_date_sk#7707))
    // Left Table: ListBuffer(c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671, cs_sold_date_sk#7673, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698)
    // Right Table: ListBuffer(d_date_sk#7707, d_year#7713)
    // Output Table: ListBuffer(c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698, d_year#7713)
    int left_nrow = tbl_JOIN_INNER_TD_8132_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8401_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7724_key_leftMajor, SW_JOIN_INNER_TD_7724_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8132_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk7673_k = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_7724_key_leftMajor keyA{_cs_sold_date_sk7673_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id7656 = std::string(_c_customer_id7656_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name7663 = std::string(_c_first_name7663_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name7664 = std::string(_c_last_name7664_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag7665 = std::string(_c_preferred_cust_flag7665_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country7669 = std::string(_c_birth_country7669_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login7670_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login7670 = std::string(_c_login7670_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address7671 = std::string(_c_email_address7671_n.data());
            int32_t _cs_sold_date_sk7673 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 7);
            int32_t _cs_ext_discount_amt7695 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 8);
            int32_t _cs_ext_sales_price7696 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 9);
            int32_t _cs_ext_wholesale_cost7697 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 10);
            int32_t _cs_ext_list_price7698 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_7724_payload_leftMajor payloadA{_c_customer_id7656, _c_first_name7663, _c_last_name7664, _c_preferred_cust_flag7665, _c_birth_country7669, _c_login7670, _c_email_address7671, _cs_sold_date_sk7673, _cs_ext_discount_amt7695, _cs_ext_sales_price7696, _cs_ext_wholesale_cost7697, _cs_ext_list_price7698};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8401_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk7707_k = tbl_Filter_TD_8401_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7724_key_leftMajor{_d_date_sk7707_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id7656 = (it->second)._c_customer_id7656;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_n{};
                memcpy(_c_customer_id7656_n.data(), (_c_customer_id7656).data(), (_c_customer_id7656).length());
                std::string _c_first_name7663 = (it->second)._c_first_name7663;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_n{};
                memcpy(_c_first_name7663_n.data(), (_c_first_name7663).data(), (_c_first_name7663).length());
                std::string _c_last_name7664 = (it->second)._c_last_name7664;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_n{};
                memcpy(_c_last_name7664_n.data(), (_c_last_name7664).data(), (_c_last_name7664).length());
                std::string _c_preferred_cust_flag7665 = (it->second)._c_preferred_cust_flag7665;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_n{};
                memcpy(_c_preferred_cust_flag7665_n.data(), (_c_preferred_cust_flag7665).data(), (_c_preferred_cust_flag7665).length());
                std::string _c_birth_country7669 = (it->second)._c_birth_country7669;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_n{};
                memcpy(_c_birth_country7669_n.data(), (_c_birth_country7669).data(), (_c_birth_country7669).length());
                std::string _c_login7670 = (it->second)._c_login7670;
                std::array<char, TPCDS_READ_MAX + 1> _c_login7670_n{};
                memcpy(_c_login7670_n.data(), (_c_login7670).data(), (_c_login7670).length());
                std::string _c_email_address7671 = (it->second)._c_email_address7671;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_n{};
                memcpy(_c_email_address7671_n.data(), (_c_email_address7671).data(), (_c_email_address7671).length());
                int32_t _cs_sold_date_sk7673 = (it->second)._cs_sold_date_sk7673;
                int32_t _cs_ext_discount_amt7695 = (it->second)._cs_ext_discount_amt7695;
                int32_t _cs_ext_sales_price7696 = (it->second)._cs_ext_sales_price7696;
                int32_t _cs_ext_wholesale_cost7697 = (it->second)._cs_ext_wholesale_cost7697;
                int32_t _cs_ext_list_price7698 = (it->second)._cs_ext_list_price7698;
                int32_t _d_date_sk7707 = tbl_Filter_TD_8401_output.getInt32(i, 0);
                int32_t _d_year7713 = tbl_Filter_TD_8401_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7656_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7663_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7664_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7665_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7669_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7670_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7671_n);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 7, _cs_ext_discount_amt7695);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 8, _cs_ext_sales_price7696);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 9, _cs_ext_wholesale_cost7697);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 10, _cs_ext_list_price7698);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 11, _d_year7713);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7724_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7724_key_rightMajor, SW_JOIN_INNER_TD_7724_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8401_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk7707_k = tbl_Filter_TD_8401_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7724_key_rightMajor keyA{_d_date_sk7707_k};
            int32_t _d_date_sk7707 = tbl_Filter_TD_8401_output.getInt32(i, 0);
            int32_t _d_year7713 = tbl_Filter_TD_8401_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7724_payload_rightMajor payloadA{_d_date_sk7707, _d_year7713};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8132_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk7673_k = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7724_key_rightMajor{_cs_sold_date_sk7673_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk7707 = (it->second)._d_date_sk7707;
                int32_t _d_year7713 = (it->second)._d_year7713;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id7656 = std::string(_c_customer_id7656_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name7663 = std::string(_c_first_name7663_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name7664 = std::string(_c_last_name7664_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag7665 = std::string(_c_preferred_cust_flag7665_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country7669 = std::string(_c_birth_country7669_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login7670_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login7670 = std::string(_c_login7670_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671_n = tbl_JOIN_INNER_TD_8132_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address7671 = std::string(_c_email_address7671_n.data());
                int32_t _cs_sold_date_sk7673 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 7);
                int32_t _cs_ext_discount_amt7695 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 8);
                int32_t _cs_ext_sales_price7696 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 9);
                int32_t _cs_ext_wholesale_cost7697 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 10);
                int32_t _cs_ext_list_price7698 = tbl_JOIN_INNER_TD_8132_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 11, _d_year7713);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id7656_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name7663_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name7664_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag7665_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country7669_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login7670_n);
                tbl_JOIN_INNER_TD_7724_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address7671_n);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 7, _cs_ext_discount_amt7695);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 8, _cs_ext_sales_price7696);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 9, _cs_ext_wholesale_cost7697);
                tbl_JOIN_INNER_TD_7724_output.setInt32(r, 10, _cs_ext_list_price7698);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7724_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7724_output #Row: " << tbl_JOIN_INNER_TD_7724_output.getNumRow() << std::endl;
}

void SW_Project_TD_7503(Table &tbl_Filter_TD_8375_output, Table &tbl_Project_TD_7503_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#4160 AS customer_id#7576, year_total#4168 AS year_total#7584)
    // Input: ListBuffer(customer_id#4160, year_total#4168)
    // Output: ListBuffer(customer_id#7576, year_total#7584)
    int nrow1 = tbl_Filter_TD_8375_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4160 = tbl_Filter_TD_8375_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _year_total4168 = tbl_Filter_TD_8375_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id7576 = _customer_id4160;
        tbl_Project_TD_7503_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id7576);
        int32_t _year_total7584 = _year_total4168;
        tbl_Project_TD_7503_output.setInt32(i, 1, _year_total7584);
    }
    tbl_Project_TD_7503_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_7503_output #Row: " << tbl_Project_TD_7503_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7541_key_leftMajor {
    std::string _customer_id4150;
    bool operator==(const SW_JOIN_INNER_TD_7541_key_leftMajor& other) const {
        return ((_customer_id4150 == other._customer_id4150));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7541_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7541_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4150));
    }
};
}
struct SW_JOIN_INNER_TD_7541_payload_leftMajor {
    std::string _customer_id4150;
    int32_t _year_total4158;
};
struct SW_JOIN_INNER_TD_7541_key_rightMajor {
    std::string _customer_id4275;
    bool operator==(const SW_JOIN_INNER_TD_7541_key_rightMajor& other) const {
        return ((_customer_id4275 == other._customer_id4275));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7541_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7541_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4275));
    }
};
}
struct SW_JOIN_INNER_TD_7541_payload_rightMajor {
    std::string _customer_id4275;
    std::string _customer_first_name4276;
    std::string _customer_last_name4277;
    std::string _customer_preferred_cust_flag4278;
    int32_t _year_total4283;
};
void SW_JOIN_INNER_TD_7541(Table &tbl_Filter_TD_8368_output, Table &tbl_Aggregate_TD_8805_output, Table &tbl_JOIN_INNER_TD_7541_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#4275 = customer_id#4150))
    // Left Table: ListBuffer(customer_id#4150, year_total#4158)
    // Right Table: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#4283)
    // Output Table: ListBuffer(customer_id#4150, year_total#4158, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#4283)
    int left_nrow = tbl_Filter_TD_8368_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_8805_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7541_key_leftMajor, SW_JOIN_INNER_TD_7541_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8368_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_Filter_TD_8368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            SW_JOIN_INNER_TD_7541_key_leftMajor keyA{_customer_id4150_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_Filter_TD_8368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150 = std::string(_customer_id4150_n.data());
            int32_t _year_total4158 = tbl_Filter_TD_8368_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_7541_payload_leftMajor payloadA{_customer_id4150, _year_total4158};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_8805_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_k_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4275_k = std::string(_customer_id4275_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7541_key_leftMajor{_customer_id4275_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4150 = (it->second)._customer_id4150;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n{};
                memcpy(_customer_id4150_n.data(), (_customer_id4150).data(), (_customer_id4150).length());
                int32_t _year_total4158 = (it->second)._year_total4158;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4275 = std::string(_customer_id4275_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
                int32_t _year_total4283 = tbl_Aggregate_TD_8805_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_7541_output.setInt32(r, 1, _year_total4158);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4275_n);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_7541_output.setInt32(r, 6, _year_total4283);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7541_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7541_key_rightMajor, SW_JOIN_INNER_TD_7541_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_8805_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_k_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4275_k = std::string(_customer_id4275_k_n.data());
            SW_JOIN_INNER_TD_7541_key_rightMajor keyA{_customer_id4275_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4275 = std::string(_customer_id4275_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_Aggregate_TD_8805_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
            int32_t _year_total4283 = tbl_Aggregate_TD_8805_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7541_payload_rightMajor payloadA{_customer_id4275, _customer_first_name4276, _customer_last_name4277, _customer_preferred_cust_flag4278, _year_total4283};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8368_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_Filter_TD_8368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7541_key_rightMajor{_customer_id4150_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4275 = (it->second)._customer_id4275;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n{};
                memcpy(_customer_id4275_n.data(), (_customer_id4275).data(), (_customer_id4275).length());
                std::string _customer_first_name4276 = (it->second)._customer_first_name4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n{};
                memcpy(_customer_first_name4276_n.data(), (_customer_first_name4276).data(), (_customer_first_name4276).length());
                std::string _customer_last_name4277 = (it->second)._customer_last_name4277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n{};
                memcpy(_customer_last_name4277_n.data(), (_customer_last_name4277).data(), (_customer_last_name4277).length());
                std::string _customer_preferred_cust_flag4278 = (it->second)._customer_preferred_cust_flag4278;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n{};
                memcpy(_customer_preferred_cust_flag4278_n.data(), (_customer_preferred_cust_flag4278).data(), (_customer_preferred_cust_flag4278).length());
                int32_t _year_total4283 = (it->second)._year_total4283;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_Filter_TD_8368_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4150 = std::string(_customer_id4150_n.data());
                int32_t _year_total4158 = tbl_Filter_TD_8368_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4275_n);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_7541_output.setInt32(r, 6, _year_total4283);
                tbl_JOIN_INNER_TD_7541_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_7541_output.setInt32(r, 1, _year_total4158);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7541_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7541_output #Row: " << tbl_JOIN_INNER_TD_7541_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6305(Table &tbl_SerializeFromObject_TD_7841_input, Table &tbl_Filter_TD_6305_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#8271) AND (d_year#8271 = 2002)) AND isnotnull(d_date_sk#8265)))
    // Input: ListBuffer(d_date_sk#8265, d_year#8271)
    // Output: ListBuffer(d_date_sk#8265, d_year#8271)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7841_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year8271 = tbl_SerializeFromObject_TD_7841_input.getInt32(i, 1);
        int32_t _d_date_sk8265 = tbl_SerializeFromObject_TD_7841_input.getInt32(i, 0);
        if (((_d_year8271!= 0) && (_d_year8271 == 2002)) && (_d_date_sk8265!= 0)) {
            int32_t _d_date_sk8265_t = tbl_SerializeFromObject_TD_7841_input.getInt32(i, 0);
            tbl_Filter_TD_6305_output.setInt32(r, 0, _d_date_sk8265_t);
            int32_t _d_year8271_t = tbl_SerializeFromObject_TD_7841_input.getInt32(i, 1);
            tbl_Filter_TD_6305_output.setInt32(r, 1, _d_year8271_t);
            r++;
        }
    }
    tbl_Filter_TD_6305_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6305_output #Row: " << tbl_Filter_TD_6305_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6822_key_leftMajor {
    int32_t _c_customer_sk8213;
    bool operator==(const SW_JOIN_INNER_TD_6822_key_leftMajor& other) const {
        return ((_c_customer_sk8213 == other._c_customer_sk8213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6822_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6822_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk8213));
    }
};
}
struct SW_JOIN_INNER_TD_6822_payload_leftMajor {
    int32_t _c_customer_sk8213;
    std::string _c_customer_id8214;
    std::string _c_first_name8221;
    std::string _c_last_name8222;
    std::string _c_preferred_cust_flag8223;
    std::string _c_birth_country8227;
    std::string _c_login8228;
    std::string _c_email_address8229;
};
struct SW_JOIN_INNER_TD_6822_key_rightMajor {
    int32_t _ws_bill_customer_sk8235;
    bool operator==(const SW_JOIN_INNER_TD_6822_key_rightMajor& other) const {
        return ((_ws_bill_customer_sk8235 == other._ws_bill_customer_sk8235));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6822_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6822_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk8235));
    }
};
}
struct SW_JOIN_INNER_TD_6822_payload_rightMajor {
    int32_t _ws_sold_date_sk8231;
    int32_t _ws_bill_customer_sk8235;
    int32_t _ws_ext_discount_amt8253;
    int32_t _ws_ext_sales_price8254;
    int32_t _ws_ext_wholesale_cost8255;
    int32_t _ws_ext_list_price8256;
};
void SW_JOIN_INNER_TD_6822(Table &tbl_Filter_TD_7795_output, Table &tbl_Filter_TD_7886_output, Table &tbl_JOIN_INNER_TD_6822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((c_customer_sk#8213 = ws_bill_customer_sk#8235))
    // Left Table: ListBuffer(c_customer_sk#8213, c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229)
    // Right Table: ListBuffer(ws_sold_date_sk#8231, ws_bill_customer_sk#8235, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256)
    // Output Table: ListBuffer(c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229, ws_sold_date_sk#8231, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256)
    int left_nrow = tbl_Filter_TD_7795_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7886_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6822_key_leftMajor, SW_JOIN_INNER_TD_6822_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7795_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk8213_k = tbl_Filter_TD_7795_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6822_key_leftMajor keyA{_c_customer_sk8213_k};
            int32_t _c_customer_sk8213 = tbl_Filter_TD_7795_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_customer_id8214 = std::string(_c_customer_id8214_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_first_name8221 = std::string(_c_first_name8221_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_last_name8222 = std::string(_c_last_name8222_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_preferred_cust_flag8223 = std::string(_c_preferred_cust_flag8223_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_birth_country8227 = std::string(_c_birth_country8227_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login8228_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_login8228 = std::string(_c_login8228_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
            std::string _c_email_address8229 = std::string(_c_email_address8229_n.data());
            SW_JOIN_INNER_TD_6822_payload_leftMajor payloadA{_c_customer_sk8213, _c_customer_id8214, _c_first_name8221, _c_last_name8222, _c_preferred_cust_flag8223, _c_birth_country8227, _c_login8228, _c_email_address8229};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7886_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk8235_k = tbl_Filter_TD_7886_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6822_key_leftMajor{_ws_bill_customer_sk8235_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk8213 = (it->second)._c_customer_sk8213;
                std::string _c_customer_id8214 = (it->second)._c_customer_id8214;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_n{};
                memcpy(_c_customer_id8214_n.data(), (_c_customer_id8214).data(), (_c_customer_id8214).length());
                std::string _c_first_name8221 = (it->second)._c_first_name8221;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_n{};
                memcpy(_c_first_name8221_n.data(), (_c_first_name8221).data(), (_c_first_name8221).length());
                std::string _c_last_name8222 = (it->second)._c_last_name8222;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_n{};
                memcpy(_c_last_name8222_n.data(), (_c_last_name8222).data(), (_c_last_name8222).length());
                std::string _c_preferred_cust_flag8223 = (it->second)._c_preferred_cust_flag8223;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_n{};
                memcpy(_c_preferred_cust_flag8223_n.data(), (_c_preferred_cust_flag8223).data(), (_c_preferred_cust_flag8223).length());
                std::string _c_birth_country8227 = (it->second)._c_birth_country8227;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_n{};
                memcpy(_c_birth_country8227_n.data(), (_c_birth_country8227).data(), (_c_birth_country8227).length());
                std::string _c_login8228 = (it->second)._c_login8228;
                std::array<char, TPCDS_READ_MAX + 1> _c_login8228_n{};
                memcpy(_c_login8228_n.data(), (_c_login8228).data(), (_c_login8228).length());
                std::string _c_email_address8229 = (it->second)._c_email_address8229;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_n{};
                memcpy(_c_email_address8229_n.data(), (_c_email_address8229).data(), (_c_email_address8229).length());
                int32_t _ws_sold_date_sk8231 = tbl_Filter_TD_7886_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk8235 = tbl_Filter_TD_7886_output.getInt32(i, 1);
                int32_t _ws_ext_discount_amt8253 = tbl_Filter_TD_7886_output.getInt32(i, 2);
                int32_t _ws_ext_sales_price8254 = tbl_Filter_TD_7886_output.getInt32(i, 3);
                int32_t _ws_ext_wholesale_cost8255 = tbl_Filter_TD_7886_output.getInt32(i, 4);
                int32_t _ws_ext_list_price8256 = tbl_Filter_TD_7886_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8214_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8221_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8222_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8223_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8227_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8228_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8229_n);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 7, _ws_sold_date_sk8231);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 8, _ws_ext_discount_amt8253);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 9, _ws_ext_sales_price8254);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 10, _ws_ext_wholesale_cost8255);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 11, _ws_ext_list_price8256);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6822_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6822_key_rightMajor, SW_JOIN_INNER_TD_6822_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7886_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk8235_k = tbl_Filter_TD_7886_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6822_key_rightMajor keyA{_ws_bill_customer_sk8235_k};
            int32_t _ws_sold_date_sk8231 = tbl_Filter_TD_7886_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk8235 = tbl_Filter_TD_7886_output.getInt32(i, 1);
            int32_t _ws_ext_discount_amt8253 = tbl_Filter_TD_7886_output.getInt32(i, 2);
            int32_t _ws_ext_sales_price8254 = tbl_Filter_TD_7886_output.getInt32(i, 3);
            int32_t _ws_ext_wholesale_cost8255 = tbl_Filter_TD_7886_output.getInt32(i, 4);
            int32_t _ws_ext_list_price8256 = tbl_Filter_TD_7886_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_6822_payload_rightMajor payloadA{_ws_sold_date_sk8231, _ws_bill_customer_sk8235, _ws_ext_discount_amt8253, _ws_ext_sales_price8254, _ws_ext_wholesale_cost8255, _ws_ext_list_price8256};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7795_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk8213_k = tbl_Filter_TD_7795_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6822_key_rightMajor{_c_customer_sk8213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk8231 = (it->second)._ws_sold_date_sk8231;
                int32_t _ws_bill_customer_sk8235 = (it->second)._ws_bill_customer_sk8235;
                int32_t _ws_ext_discount_amt8253 = (it->second)._ws_ext_discount_amt8253;
                int32_t _ws_ext_sales_price8254 = (it->second)._ws_ext_sales_price8254;
                int32_t _ws_ext_wholesale_cost8255 = (it->second)._ws_ext_wholesale_cost8255;
                int32_t _ws_ext_list_price8256 = (it->second)._ws_ext_list_price8256;
                int32_t _c_customer_sk8213 = tbl_Filter_TD_7795_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_customer_id8214 = std::string(_c_customer_id8214_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_first_name8221 = std::string(_c_first_name8221_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_last_name8222 = std::string(_c_last_name8222_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_preferred_cust_flag8223 = std::string(_c_preferred_cust_flag8223_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_birth_country8227 = std::string(_c_birth_country8227_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login8228_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_login8228 = std::string(_c_login8228_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_n = tbl_Filter_TD_7795_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 7);
                std::string _c_email_address8229 = std::string(_c_email_address8229_n.data());
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 7, _ws_sold_date_sk8231);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 8, _ws_ext_discount_amt8253);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 9, _ws_ext_sales_price8254);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 10, _ws_ext_wholesale_cost8255);
                tbl_JOIN_INNER_TD_6822_output.setInt32(r, 11, _ws_ext_list_price8256);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8214_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8221_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8222_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8223_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8227_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8228_n);
                tbl_JOIN_INNER_TD_6822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8229_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6822_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6822_output #Row: " << tbl_JOIN_INNER_TD_6822_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6666(Table &tbl_Aggregate_TD_7656_output, Table &tbl_Filter_TD_6666_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(year_total#4178) AND (year_total#4178 > 0.000000)))
    // Input: ListBuffer(customer_id#4170, year_total#4178)
    // Output: ListBuffer(customer_id#4170, year_total#4178)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_7656_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _year_total4178 = tbl_Aggregate_TD_7656_output.getInt32(i, 1);
        if ((_year_total4178!= 0) && (_year_total4178 > 0.000000)) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4170_t = tbl_Aggregate_TD_7656_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_6666_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4170_t);
            int32_t _year_total4178_t = tbl_Aggregate_TD_7656_output.getInt32(i, 1);
            tbl_Filter_TD_6666_output.setInt32(r, 1, _year_total4178_t);
            r++;
        }
    }
    tbl_Filter_TD_6666_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6666_output #Row: " << tbl_Filter_TD_6666_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6162_key {
    std::string _c_customer_id7656;
    std::string _c_first_name7663;
    std::string _c_last_name7664;
    std::string _c_preferred_cust_flag7665;
    std::string _c_birth_country7669;
    std::string _c_login7670;
    std::string _c_email_address7671;
    int32_t _d_year7713;
    bool operator==(const SW_Aggregate_TD_6162_key& other) const { return (_c_customer_id7656 == other._c_customer_id7656) && (_c_first_name7663 == other._c_first_name7663) && (_c_last_name7664 == other._c_last_name7664) && (_c_preferred_cust_flag7665 == other._c_preferred_cust_flag7665) && (_c_birth_country7669 == other._c_birth_country7669) && (_c_login7670 == other._c_login7670) && (_c_email_address7671 == other._c_email_address7671) && (_d_year7713 == other._d_year7713); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6162_key> {
    std::size_t operator() (const SW_Aggregate_TD_6162_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id7656)) + (hash<string>()(k._c_first_name7663)) + (hash<string>()(k._c_last_name7664)) + (hash<string>()(k._c_preferred_cust_flag7665)) + (hash<string>()(k._c_birth_country7669)) + (hash<string>()(k._c_login7670)) + (hash<string>()(k._c_email_address7671)) + (hash<int32_t>()(k._d_year7713));
    }
};
}
struct SW_Aggregate_TD_6162_payload {
    std::string _customer_id4295;
    int32_t _year_total4303_sum_0;
};
void SW_Aggregate_TD_6162(Table &tbl_JOIN_INNER_TD_7724_output, Table &tbl_Aggregate_TD_6162_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671, d_year#7713, c_customer_id#7656 AS customer_id#4295, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(cs_ext_list_price#7698 as decimal(8,2))) - promote_precision(cast(cs_ext_wholesale_cost#7697 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(cs_ext_discount_amt#7695 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(cs_ext_sales_price#7696 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4303)
    // Input: ListBuffer(c_customer_id#7656, c_first_name#7663, c_last_name#7664, c_preferred_cust_flag#7665, c_birth_country#7669, c_login#7670, c_email_address#7671, cs_ext_discount_amt#7695, cs_ext_sales_price#7696, cs_ext_wholesale_cost#7697, cs_ext_list_price#7698, d_year#7713)
    // Output: ListBuffer(customer_id#4295, year_total#4303)
    std::unordered_map<SW_Aggregate_TD_6162_key, SW_Aggregate_TD_6162_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7724_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id7656 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name7663 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name7664 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag7665 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country7669 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login7670 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address7671 = tbl_JOIN_INNER_TD_7724_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _cs_ext_discount_amt7695 = tbl_JOIN_INNER_TD_7724_output.getInt32(i, 7);
        int32_t _cs_ext_sales_price7696 = tbl_JOIN_INNER_TD_7724_output.getInt32(i, 8);
        int32_t _cs_ext_wholesale_cost7697 = tbl_JOIN_INNER_TD_7724_output.getInt32(i, 9);
        int32_t _cs_ext_list_price7698 = tbl_JOIN_INNER_TD_7724_output.getInt32(i, 10);
        int32_t _d_year7713 = tbl_JOIN_INNER_TD_7724_output.getInt32(i, 11);
        SW_Aggregate_TD_6162_key k{std::string(_c_customer_id7656.data()), std::string(_c_first_name7663.data()), std::string(_c_last_name7664.data()), std::string(_c_preferred_cust_flag7665.data()), std::string(_c_birth_country7669.data()), std::string(_c_login7670.data()), std::string(_c_email_address7671.data()), _d_year7713};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4295 = _c_customer_id7656;
        int64_t _year_total4303_sum_0 = ((((_cs_ext_list_price7698 - _cs_ext_wholesale_cost7697) - _cs_ext_discount_amt7695) + _cs_ext_sales_price7696) / 2.00);
        SW_Aggregate_TD_6162_payload p{std::string(_customer_id4295.data()), _year_total4303_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4303_sum_0 + _year_total4303_sum_0;
            p._year_total4303_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id7656 not required in the output table
        // _c_first_name7663 not required in the output table
        // _c_last_name7664 not required in the output table
        // _c_preferred_cust_flag7665 not required in the output table
        // _c_birth_country7669 not required in the output table
        // _c_login7670 not required in the output table
        // _c_email_address7671 not required in the output table
        // _d_year7713 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4295_n{};
        memcpy(_customer_id4295_n.data(), (it.second)._customer_id4295.data(), (it.second)._customer_id4295.length());
        tbl_Aggregate_TD_6162_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4295_n);
        int32_t _year_total4303 = (it.second)._year_total4303_sum_0;
        tbl_Aggregate_TD_6162_output.setInt32(r, 1, _year_total4303);
        ++r;
    }
    tbl_Aggregate_TD_6162_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6162_output #Row: " << tbl_Aggregate_TD_6162_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_662_key_leftMajor {
    std::string _customer_id4150;
    bool operator==(const SW_JOIN_INNER_TD_662_key_leftMajor& other) const {
        return ((_customer_id4150 == other._customer_id4150));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_662_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_662_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4150));
    }
};
}
struct SW_JOIN_INNER_TD_662_payload_leftMajor {
    std::string _customer_id4150;
    int32_t _year_total4158;
    std::string _customer_id4275;
    std::string _customer_first_name4276;
    std::string _customer_last_name4277;
    std::string _customer_preferred_cust_flag4278;
    int32_t _year_total4283;
};
struct SW_JOIN_INNER_TD_662_key_rightMajor {
    std::string _customer_id7576;
    bool operator==(const SW_JOIN_INNER_TD_662_key_rightMajor& other) const {
        return ((_customer_id7576 == other._customer_id7576));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_662_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_662_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id7576));
    }
};
}
struct SW_JOIN_INNER_TD_662_payload_rightMajor {
    std::string _customer_id7576;
    int32_t _year_total7584;
};
void SW_JOIN_INNER_TD_662(Table &tbl_JOIN_INNER_TD_7541_output, Table &tbl_Project_TD_7503_output, Table &tbl_JOIN_INNER_TD_662_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#4150 = customer_id#7576))
    // Left Table: ListBuffer(customer_id#4150, year_total#4158, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#4283)
    // Right Table: ListBuffer(customer_id#7576, year_total#7584)
    // Output Table: ListBuffer(customer_id#4150, year_total#4158, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#4283, year_total#7584)
    int left_nrow = tbl_JOIN_INNER_TD_7541_output.getNumRow();
    int right_nrow = tbl_Project_TD_7503_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_662_key_leftMajor, SW_JOIN_INNER_TD_662_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7541_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            SW_JOIN_INNER_TD_662_key_leftMajor keyA{_customer_id4150_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150 = std::string(_customer_id4150_n.data());
            int32_t _year_total4158 = tbl_JOIN_INNER_TD_7541_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id4275 = std::string(_customer_id4275_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
            int32_t _year_total4283 = tbl_JOIN_INNER_TD_7541_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_662_payload_leftMajor payloadA{_customer_id4150, _year_total4158, _customer_id4275, _customer_first_name4276, _customer_last_name4277, _customer_preferred_cust_flag4278, _year_total4283};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_7503_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id7576_k_n = tbl_Project_TD_7503_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id7576_k = std::string(_customer_id7576_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_662_key_leftMajor{_customer_id7576_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4150 = (it->second)._customer_id4150;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n{};
                memcpy(_customer_id4150_n.data(), (_customer_id4150).data(), (_customer_id4150).length());
                int32_t _year_total4158 = (it->second)._year_total4158;
                std::string _customer_id4275 = (it->second)._customer_id4275;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n{};
                memcpy(_customer_id4275_n.data(), (_customer_id4275).data(), (_customer_id4275).length());
                std::string _customer_first_name4276 = (it->second)._customer_first_name4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n{};
                memcpy(_customer_first_name4276_n.data(), (_customer_first_name4276).data(), (_customer_first_name4276).length());
                std::string _customer_last_name4277 = (it->second)._customer_last_name4277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n{};
                memcpy(_customer_last_name4277_n.data(), (_customer_last_name4277).data(), (_customer_last_name4277).length());
                std::string _customer_preferred_cust_flag4278 = (it->second)._customer_preferred_cust_flag4278;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n{};
                memcpy(_customer_preferred_cust_flag4278_n.data(), (_customer_preferred_cust_flag4278).data(), (_customer_preferred_cust_flag4278).length());
                int32_t _year_total4283 = (it->second)._year_total4283;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id7576_n = tbl_Project_TD_7503_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id7576 = std::string(_customer_id7576_n.data());
                int32_t _year_total7584 = tbl_Project_TD_7503_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_662_output.setInt32(r, 1, _year_total4158);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4275_n);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_662_output.setInt32(r, 6, _year_total4283);
                tbl_JOIN_INNER_TD_662_output.setInt32(r, 7, _year_total7584);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_662_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_662_key_rightMajor, SW_JOIN_INNER_TD_662_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_7503_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id7576_k_n = tbl_Project_TD_7503_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id7576_k = std::string(_customer_id7576_k_n.data());
            SW_JOIN_INNER_TD_662_key_rightMajor keyA{_customer_id7576_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id7576_n = tbl_Project_TD_7503_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id7576 = std::string(_customer_id7576_n.data());
            int32_t _year_total7584 = tbl_Project_TD_7503_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_662_payload_rightMajor payloadA{_customer_id7576, _year_total7584};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7541_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_662_key_rightMajor{_customer_id4150_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id7576 = (it->second)._customer_id7576;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id7576_n{};
                memcpy(_customer_id7576_n.data(), (_customer_id7576).data(), (_customer_id7576).length());
                int32_t _year_total7584 = (it->second)._year_total7584;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4150 = std::string(_customer_id4150_n.data());
                int32_t _year_total4158 = tbl_JOIN_INNER_TD_7541_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id4275 = std::string(_customer_id4275_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_7541_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
                int32_t _year_total4283 = tbl_JOIN_INNER_TD_7541_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_662_output.setInt32(r, 7, _year_total7584);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_662_output.setInt32(r, 1, _year_total4158);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_id4275_n);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_662_output.setInt32(r, 6, _year_total4283);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_662_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_662_output #Row: " << tbl_JOIN_INNER_TD_662_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5694_key_leftMajor {
    int32_t _ws_sold_date_sk8231;
    bool operator==(const SW_JOIN_INNER_TD_5694_key_leftMajor& other) const {
        return ((_ws_sold_date_sk8231 == other._ws_sold_date_sk8231));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5694_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5694_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk8231));
    }
};
}
struct SW_JOIN_INNER_TD_5694_payload_leftMajor {
    std::string _c_customer_id8214;
    std::string _c_first_name8221;
    std::string _c_last_name8222;
    std::string _c_preferred_cust_flag8223;
    std::string _c_birth_country8227;
    std::string _c_login8228;
    std::string _c_email_address8229;
    int32_t _ws_sold_date_sk8231;
    int32_t _ws_ext_discount_amt8253;
    int32_t _ws_ext_sales_price8254;
    int32_t _ws_ext_wholesale_cost8255;
    int32_t _ws_ext_list_price8256;
};
struct SW_JOIN_INNER_TD_5694_key_rightMajor {
    int32_t _d_date_sk8265;
    bool operator==(const SW_JOIN_INNER_TD_5694_key_rightMajor& other) const {
        return ((_d_date_sk8265 == other._d_date_sk8265));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5694_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5694_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk8265));
    }
};
}
struct SW_JOIN_INNER_TD_5694_payload_rightMajor {
    int32_t _d_date_sk8265;
    int32_t _d_year8271;
};
void SW_JOIN_INNER_TD_5694(Table &tbl_JOIN_INNER_TD_6822_output, Table &tbl_Filter_TD_6305_output, Table &tbl_JOIN_INNER_TD_5694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#8231 = d_date_sk#8265))
    // Left Table: ListBuffer(c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229, ws_sold_date_sk#8231, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256)
    // Right Table: ListBuffer(d_date_sk#8265, d_year#8271)
    // Output Table: ListBuffer(c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256, d_year#8271)
    int left_nrow = tbl_JOIN_INNER_TD_6822_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6305_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5694_key_leftMajor, SW_JOIN_INNER_TD_5694_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6822_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk8231_k = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5694_key_leftMajor keyA{_ws_sold_date_sk8231_k};
            std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _c_customer_id8214 = std::string(_c_customer_id8214_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name8221 = std::string(_c_first_name8221_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name8222 = std::string(_c_last_name8222_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_preferred_cust_flag8223 = std::string(_c_preferred_cust_flag8223_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_birth_country8227 = std::string(_c_birth_country8227_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_login8228_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _c_login8228 = std::string(_c_login8228_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
            std::string _c_email_address8229 = std::string(_c_email_address8229_n.data());
            int32_t _ws_sold_date_sk8231 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 7);
            int32_t _ws_ext_discount_amt8253 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 8);
            int32_t _ws_ext_sales_price8254 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 9);
            int32_t _ws_ext_wholesale_cost8255 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 10);
            int32_t _ws_ext_list_price8256 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 11);
            SW_JOIN_INNER_TD_5694_payload_leftMajor payloadA{_c_customer_id8214, _c_first_name8221, _c_last_name8222, _c_preferred_cust_flag8223, _c_birth_country8227, _c_login8228, _c_email_address8229, _ws_sold_date_sk8231, _ws_ext_discount_amt8253, _ws_ext_sales_price8254, _ws_ext_wholesale_cost8255, _ws_ext_list_price8256};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6305_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk8265_k = tbl_Filter_TD_6305_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5694_key_leftMajor{_d_date_sk8265_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _c_customer_id8214 = (it->second)._c_customer_id8214;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_n{};
                memcpy(_c_customer_id8214_n.data(), (_c_customer_id8214).data(), (_c_customer_id8214).length());
                std::string _c_first_name8221 = (it->second)._c_first_name8221;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_n{};
                memcpy(_c_first_name8221_n.data(), (_c_first_name8221).data(), (_c_first_name8221).length());
                std::string _c_last_name8222 = (it->second)._c_last_name8222;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_n{};
                memcpy(_c_last_name8222_n.data(), (_c_last_name8222).data(), (_c_last_name8222).length());
                std::string _c_preferred_cust_flag8223 = (it->second)._c_preferred_cust_flag8223;
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_n{};
                memcpy(_c_preferred_cust_flag8223_n.data(), (_c_preferred_cust_flag8223).data(), (_c_preferred_cust_flag8223).length());
                std::string _c_birth_country8227 = (it->second)._c_birth_country8227;
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_n{};
                memcpy(_c_birth_country8227_n.data(), (_c_birth_country8227).data(), (_c_birth_country8227).length());
                std::string _c_login8228 = (it->second)._c_login8228;
                std::array<char, TPCDS_READ_MAX + 1> _c_login8228_n{};
                memcpy(_c_login8228_n.data(), (_c_login8228).data(), (_c_login8228).length());
                std::string _c_email_address8229 = (it->second)._c_email_address8229;
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_n{};
                memcpy(_c_email_address8229_n.data(), (_c_email_address8229).data(), (_c_email_address8229).length());
                int32_t _ws_sold_date_sk8231 = (it->second)._ws_sold_date_sk8231;
                int32_t _ws_ext_discount_amt8253 = (it->second)._ws_ext_discount_amt8253;
                int32_t _ws_ext_sales_price8254 = (it->second)._ws_ext_sales_price8254;
                int32_t _ws_ext_wholesale_cost8255 = (it->second)._ws_ext_wholesale_cost8255;
                int32_t _ws_ext_list_price8256 = (it->second)._ws_ext_list_price8256;
                int32_t _d_date_sk8265 = tbl_Filter_TD_6305_output.getInt32(i, 0);
                int32_t _d_year8271 = tbl_Filter_TD_6305_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8214_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8221_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8222_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8223_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8227_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8228_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8229_n);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 7, _ws_ext_discount_amt8253);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 8, _ws_ext_sales_price8254);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 9, _ws_ext_wholesale_cost8255);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 10, _ws_ext_list_price8256);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 11, _d_year8271);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5694_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5694_key_rightMajor, SW_JOIN_INNER_TD_5694_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6305_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk8265_k = tbl_Filter_TD_6305_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5694_key_rightMajor keyA{_d_date_sk8265_k};
            int32_t _d_date_sk8265 = tbl_Filter_TD_6305_output.getInt32(i, 0);
            int32_t _d_year8271 = tbl_Filter_TD_6305_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5694_payload_rightMajor payloadA{_d_date_sk8265, _d_year8271};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6822_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk8231_k = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 7);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5694_key_rightMajor{_ws_sold_date_sk8231_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk8265 = (it->second)._d_date_sk8265;
                int32_t _d_year8271 = (it->second)._d_year8271;
                std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _c_customer_id8214 = std::string(_c_customer_id8214_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name8221 = std::string(_c_first_name8221_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name8222 = std::string(_c_last_name8222_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_preferred_cust_flag8223 = std::string(_c_preferred_cust_flag8223_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_birth_country8227 = std::string(_c_birth_country8227_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_login8228_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _c_login8228 = std::string(_c_login8228_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229_n = tbl_JOIN_INNER_TD_6822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
                std::string _c_email_address8229 = std::string(_c_email_address8229_n.data());
                int32_t _ws_sold_date_sk8231 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 7);
                int32_t _ws_ext_discount_amt8253 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 8);
                int32_t _ws_ext_sales_price8254 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 9);
                int32_t _ws_ext_wholesale_cost8255 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 10);
                int32_t _ws_ext_list_price8256 = tbl_JOIN_INNER_TD_6822_output.getInt32(i, 11);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 11, _d_year8271);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_customer_id8214_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name8221_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name8222_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_preferred_cust_flag8223_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_birth_country8227_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _c_login8228_n);
                tbl_JOIN_INNER_TD_5694_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 6, _c_email_address8229_n);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 7, _ws_ext_discount_amt8253);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 8, _ws_ext_sales_price8254);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 9, _ws_ext_wholesale_cost8255);
                tbl_JOIN_INNER_TD_5694_output.setInt32(r, 10, _ws_ext_list_price8256);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5694_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5694_output #Row: " << tbl_JOIN_INNER_TD_5694_output.getNumRow() << std::endl;
}

void SW_Project_TD_5601(Table &tbl_Filter_TD_6666_output, Table &tbl_Project_TD_5601_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(customer_id#4170 AS customer_id#8054, year_total#4178 AS year_total#8062)
    // Input: ListBuffer(customer_id#4170, year_total#4178)
    // Output: ListBuffer(customer_id#8054, year_total#8062)
    int nrow1 = tbl_Filter_TD_6666_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4170 = tbl_Filter_TD_6666_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _year_total4178 = tbl_Filter_TD_6666_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_id8054 = _customer_id4170;
        tbl_Project_TD_5601_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _customer_id8054);
        int32_t _year_total8062 = _year_total4178;
        tbl_Project_TD_5601_output.setInt32(i, 1, _year_total8062);
    }
    tbl_Project_TD_5601_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5601_output #Row: " << tbl_Project_TD_5601_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5806_key_leftMajor {
    std::string _customer_id4150;
    bool operator==(const SW_JOIN_INNER_TD_5806_key_leftMajor& other) const {
        return ((_customer_id4150 == other._customer_id4150));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5806_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5806_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4150));
    }
};
}
struct SW_JOIN_INNER_TD_5806_payload_leftMajor {
    std::string _customer_id4150;
    int32_t _year_total4158;
    std::string _customer_id4275;
    std::string _customer_first_name4276;
    std::string _customer_last_name4277;
    std::string _customer_preferred_cust_flag4278;
    int32_t _year_total4283;
    int32_t _year_total7584;
};
struct SW_JOIN_INNER_TD_5806_key_rightMajor {
    std::string _customer_id4295;
    bool operator==(const SW_JOIN_INNER_TD_5806_key_rightMajor& other) const {
        return ((_customer_id4295 == other._customer_id4295));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5806_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5806_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4295));
    }
};
}
struct SW_JOIN_INNER_TD_5806_payload_rightMajor {
    std::string _customer_id4295;
    int32_t _year_total4303;
};
void SW_JOIN_INNER_TD_5806(Table &tbl_JOIN_INNER_TD_662_output, Table &tbl_Aggregate_TD_6162_output, Table &tbl_JOIN_INNER_TD_5806_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#4150 = customer_id#4295) AND (CASE WHEN (year_total#7584 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4303) / promote_precision(year_total#7584)), DecimalType(38,14), true) END > CASE WHEN (year_total#4158 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4283) / promote_precision(year_total#4158)), DecimalType(38,14), true) END)))
    // Left Table: ListBuffer(customer_id#4150, year_total#4158, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#4283, year_total#7584)
    // Right Table: ListBuffer(customer_id#4295, year_total#4303)
    // Output Table: ListBuffer(customer_id#4150, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#7584, year_total#4303)
    int left_nrow = tbl_JOIN_INNER_TD_662_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6162_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5806_key_leftMajor, SW_JOIN_INNER_TD_5806_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_662_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            SW_JOIN_INNER_TD_5806_key_leftMajor keyA{_customer_id4150_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150 = std::string(_customer_id4150_n.data());
            int32_t _year_total4158 = tbl_JOIN_INNER_TD_662_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_id4275 = std::string(_customer_id4275_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
            int32_t _year_total4283 = tbl_JOIN_INNER_TD_662_output.getInt32(i, 6);
            int32_t _year_total7584 = tbl_JOIN_INNER_TD_662_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_5806_payload_leftMajor payloadA{_customer_id4150, _year_total4158, _customer_id4275, _customer_first_name4276, _customer_last_name4277, _customer_preferred_cust_flag4278, _year_total4283, _year_total7584};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6162_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4295_k_n = tbl_Aggregate_TD_6162_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4295_k = std::string(_customer_id4295_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5806_key_leftMajor{_customer_id4295_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4150 = (it->second)._customer_id4150;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n{};
                memcpy(_customer_id4150_n.data(), (_customer_id4150).data(), (_customer_id4150).length());
                int32_t _year_total4158 = (it->second)._year_total4158;
                std::string _customer_id4275 = (it->second)._customer_id4275;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n{};
                memcpy(_customer_id4275_n.data(), (_customer_id4275).data(), (_customer_id4275).length());
                std::string _customer_first_name4276 = (it->second)._customer_first_name4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n{};
                memcpy(_customer_first_name4276_n.data(), (_customer_first_name4276).data(), (_customer_first_name4276).length());
                std::string _customer_last_name4277 = (it->second)._customer_last_name4277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n{};
                memcpy(_customer_last_name4277_n.data(), (_customer_last_name4277).data(), (_customer_last_name4277).length());
                std::string _customer_preferred_cust_flag4278 = (it->second)._customer_preferred_cust_flag4278;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n{};
                memcpy(_customer_preferred_cust_flag4278_n.data(), (_customer_preferred_cust_flag4278).data(), (_customer_preferred_cust_flag4278).length());
                int32_t _year_total4283 = (it->second)._year_total4283;
                int32_t _year_total7584 = (it->second)._year_total7584;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4295_n = tbl_Aggregate_TD_6162_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4295 = std::string(_customer_id4295_n.data());
                int32_t _year_total4303 = tbl_Aggregate_TD_6162_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4275_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_5806_output.setInt32(r, 5, _year_total7584);
                tbl_JOIN_INNER_TD_5806_output.setInt32(r, 6, _year_total4303);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5806_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5806_key_rightMajor, SW_JOIN_INNER_TD_5806_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6162_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4295_k_n = tbl_Aggregate_TD_6162_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4295_k = std::string(_customer_id4295_k_n.data());
            SW_JOIN_INNER_TD_5806_key_rightMajor keyA{_customer_id4295_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4295_n = tbl_Aggregate_TD_6162_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4295 = std::string(_customer_id4295_n.data());
            int32_t _year_total4303 = tbl_Aggregate_TD_6162_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5806_payload_rightMajor payloadA{_customer_id4295, _year_total4303};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_662_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5806_key_rightMajor{_customer_id4150_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4295 = (it->second)._customer_id4295;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4295_n{};
                memcpy(_customer_id4295_n.data(), (_customer_id4295).data(), (_customer_id4295).length());
                int32_t _year_total4303 = (it->second)._year_total4303;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4150 = std::string(_customer_id4150_n.data());
                int32_t _year_total4158 = tbl_JOIN_INNER_TD_662_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_id4275 = std::string(_customer_id4275_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
                int32_t _year_total4283 = tbl_JOIN_INNER_TD_662_output.getInt32(i, 6);
                int32_t _year_total7584 = tbl_JOIN_INNER_TD_662_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_5806_output.setInt32(r, 6, _year_total4303);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4275_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_5806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_5806_output.setInt32(r, 5, _year_total7584);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5806_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5806_output #Row: " << tbl_JOIN_INNER_TD_5806_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4632_key {
    std::string _c_customer_id8214;
    std::string _c_first_name8221;
    std::string _c_last_name8222;
    std::string _c_preferred_cust_flag8223;
    std::string _c_birth_country8227;
    std::string _c_login8228;
    std::string _c_email_address8229;
    int32_t _d_year8271;
    bool operator==(const SW_Aggregate_TD_4632_key& other) const { return (_c_customer_id8214 == other._c_customer_id8214) && (_c_first_name8221 == other._c_first_name8221) && (_c_last_name8222 == other._c_last_name8222) && (_c_preferred_cust_flag8223 == other._c_preferred_cust_flag8223) && (_c_birth_country8227 == other._c_birth_country8227) && (_c_login8228 == other._c_login8228) && (_c_email_address8229 == other._c_email_address8229) && (_d_year8271 == other._d_year8271); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4632_key> {
    std::size_t operator() (const SW_Aggregate_TD_4632_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_customer_id8214)) + (hash<string>()(k._c_first_name8221)) + (hash<string>()(k._c_last_name8222)) + (hash<string>()(k._c_preferred_cust_flag8223)) + (hash<string>()(k._c_birth_country8227)) + (hash<string>()(k._c_login8228)) + (hash<string>()(k._c_email_address8229)) + (hash<int32_t>()(k._d_year8271));
    }
};
}
struct SW_Aggregate_TD_4632_payload {
    std::string _customer_id4315;
    int32_t _year_total4323_sum_0;
};
void SW_Aggregate_TD_4632(Table &tbl_JOIN_INNER_TD_5694_output, Table &tbl_Aggregate_TD_4632_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229, d_year#8271, c_customer_id#8214 AS customer_id#4315, sum(CheckOverflow((promote_precision(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(CheckOverflow((promote_precision(cast(ws_ext_list_price#8256 as decimal(8,2))) - promote_precision(cast(ws_ext_wholesale_cost#8255 as decimal(8,2)))), DecimalType(8,2), true) as decimal(9,2))) - promote_precision(cast(ws_ext_discount_amt#8253 as decimal(9,2)))), DecimalType(9,2), true) as decimal(10,2))) + promote_precision(cast(ws_ext_sales_price#8254 as decimal(10,2)))), DecimalType(10,2), true)) / 2.00), DecimalType(14,6), true)) AS year_total#4323)
    // Input: ListBuffer(c_customer_id#8214, c_first_name#8221, c_last_name#8222, c_preferred_cust_flag#8223, c_birth_country#8227, c_login#8228, c_email_address#8229, ws_ext_discount_amt#8253, ws_ext_sales_price#8254, ws_ext_wholesale_cost#8255, ws_ext_list_price#8256, d_year#8271)
    // Output: ListBuffer(customer_id#4315, year_total#4323)
    std::unordered_map<SW_Aggregate_TD_4632_key, SW_Aggregate_TD_4632_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5694_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_customer_id8214 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name8221 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name8222 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag8223 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _c_birth_country8227 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _c_login8228 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        std::array<char, TPCDS_READ_MAX + 1> _c_email_address8229 = tbl_JOIN_INNER_TD_5694_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 6);
        int32_t _ws_ext_discount_amt8253 = tbl_JOIN_INNER_TD_5694_output.getInt32(i, 7);
        int32_t _ws_ext_sales_price8254 = tbl_JOIN_INNER_TD_5694_output.getInt32(i, 8);
        int32_t _ws_ext_wholesale_cost8255 = tbl_JOIN_INNER_TD_5694_output.getInt32(i, 9);
        int32_t _ws_ext_list_price8256 = tbl_JOIN_INNER_TD_5694_output.getInt32(i, 10);
        int32_t _d_year8271 = tbl_JOIN_INNER_TD_5694_output.getInt32(i, 11);
        SW_Aggregate_TD_4632_key k{std::string(_c_customer_id8214.data()), std::string(_c_first_name8221.data()), std::string(_c_last_name8222.data()), std::string(_c_preferred_cust_flag8223.data()), std::string(_c_birth_country8227.data()), std::string(_c_login8228.data()), std::string(_c_email_address8229.data()), _d_year8271};
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4315 = _c_customer_id8214;
        int64_t _year_total4323_sum_0 = ((((_ws_ext_list_price8256 - _ws_ext_wholesale_cost8255) - _ws_ext_discount_amt8253) + _ws_ext_sales_price8254) / 2.00);
        SW_Aggregate_TD_4632_payload p{std::string(_customer_id4315.data()), _year_total4323_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._year_total4323_sum_0 + _year_total4323_sum_0;
            p._year_total4323_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _c_customer_id8214 not required in the output table
        // _c_first_name8221 not required in the output table
        // _c_last_name8222 not required in the output table
        // _c_preferred_cust_flag8223 not required in the output table
        // _c_birth_country8227 not required in the output table
        // _c_login8228 not required in the output table
        // _c_email_address8229 not required in the output table
        // _d_year8271 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4315_n{};
        memcpy(_customer_id4315_n.data(), (it.second)._customer_id4315.data(), (it.second)._customer_id4315.length());
        tbl_Aggregate_TD_4632_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4315_n);
        int32_t _year_total4323 = (it.second)._year_total4323_sum_0;
        tbl_Aggregate_TD_4632_output.setInt32(r, 1, _year_total4323);
        ++r;
    }
    tbl_Aggregate_TD_4632_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4632_output #Row: " << tbl_Aggregate_TD_4632_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4787_key_leftMajor {
    std::string _customer_id4150;
    bool operator==(const SW_JOIN_INNER_TD_4787_key_leftMajor& other) const {
        return ((_customer_id4150 == other._customer_id4150));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4787_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4787_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4150));
    }
};
}
struct SW_JOIN_INNER_TD_4787_payload_leftMajor {
    std::string _customer_id4150;
    std::string _customer_id4275;
    std::string _customer_first_name4276;
    std::string _customer_last_name4277;
    std::string _customer_preferred_cust_flag4278;
    int32_t _year_total7584;
    int32_t _year_total4303;
};
struct SW_JOIN_INNER_TD_4787_key_rightMajor {
    std::string _customer_id8054;
    bool operator==(const SW_JOIN_INNER_TD_4787_key_rightMajor& other) const {
        return ((_customer_id8054 == other._customer_id8054));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4787_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4787_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id8054));
    }
};
}
struct SW_JOIN_INNER_TD_4787_payload_rightMajor {
    std::string _customer_id8054;
    int32_t _year_total8062;
};
void SW_JOIN_INNER_TD_4787(Table &tbl_JOIN_INNER_TD_5806_output, Table &tbl_Project_TD_5601_output, Table &tbl_JOIN_INNER_TD_4787_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((customer_id#4150 = customer_id#8054))
    // Left Table: ListBuffer(customer_id#4150, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#7584, year_total#4303)
    // Right Table: ListBuffer(customer_id#8054, year_total#8062)
    // Output Table: ListBuffer(customer_id#4150, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#7584, year_total#4303, year_total#8062)
    int left_nrow = tbl_JOIN_INNER_TD_5806_output.getNumRow();
    int right_nrow = tbl_Project_TD_5601_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4787_key_leftMajor, SW_JOIN_INNER_TD_4787_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5806_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            SW_JOIN_INNER_TD_4787_key_leftMajor keyA{_customer_id4150_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150 = std::string(_customer_id4150_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_id4275 = std::string(_customer_id4275_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
            int32_t _year_total7584 = tbl_JOIN_INNER_TD_5806_output.getInt32(i, 5);
            int32_t _year_total4303 = tbl_JOIN_INNER_TD_5806_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_4787_payload_leftMajor payloadA{_customer_id4150, _customer_id4275, _customer_first_name4276, _customer_last_name4277, _customer_preferred_cust_flag4278, _year_total7584, _year_total4303};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_5601_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id8054_k_n = tbl_Project_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id8054_k = std::string(_customer_id8054_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4787_key_leftMajor{_customer_id8054_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4150 = (it->second)._customer_id4150;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n{};
                memcpy(_customer_id4150_n.data(), (_customer_id4150).data(), (_customer_id4150).length());
                std::string _customer_id4275 = (it->second)._customer_id4275;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n{};
                memcpy(_customer_id4275_n.data(), (_customer_id4275).data(), (_customer_id4275).length());
                std::string _customer_first_name4276 = (it->second)._customer_first_name4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n{};
                memcpy(_customer_first_name4276_n.data(), (_customer_first_name4276).data(), (_customer_first_name4276).length());
                std::string _customer_last_name4277 = (it->second)._customer_last_name4277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n{};
                memcpy(_customer_last_name4277_n.data(), (_customer_last_name4277).data(), (_customer_last_name4277).length());
                std::string _customer_preferred_cust_flag4278 = (it->second)._customer_preferred_cust_flag4278;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n{};
                memcpy(_customer_preferred_cust_flag4278_n.data(), (_customer_preferred_cust_flag4278).data(), (_customer_preferred_cust_flag4278).length());
                int32_t _year_total7584 = (it->second)._year_total7584;
                int32_t _year_total4303 = (it->second)._year_total4303;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id8054_n = tbl_Project_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id8054 = std::string(_customer_id8054_n.data());
                int32_t _year_total8062 = tbl_Project_TD_5601_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4275_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_4787_output.setInt32(r, 5, _year_total7584);
                tbl_JOIN_INNER_TD_4787_output.setInt32(r, 6, _year_total4303);
                tbl_JOIN_INNER_TD_4787_output.setInt32(r, 7, _year_total8062);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4787_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4787_key_rightMajor, SW_JOIN_INNER_TD_4787_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_5601_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id8054_k_n = tbl_Project_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id8054_k = std::string(_customer_id8054_k_n.data());
            SW_JOIN_INNER_TD_4787_key_rightMajor keyA{_customer_id8054_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id8054_n = tbl_Project_TD_5601_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id8054 = std::string(_customer_id8054_n.data());
            int32_t _year_total8062 = tbl_Project_TD_5601_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4787_payload_rightMajor payloadA{_customer_id8054, _year_total8062};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5806_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4787_key_rightMajor{_customer_id4150_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id8054 = (it->second)._customer_id8054;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id8054_n{};
                memcpy(_customer_id8054_n.data(), (_customer_id8054).data(), (_customer_id8054).length());
                int32_t _year_total8062 = (it->second)._year_total8062;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4150 = std::string(_customer_id4150_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_id4275 = std::string(_customer_id4275_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_5806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
                int32_t _year_total7584 = tbl_JOIN_INNER_TD_5806_output.getInt32(i, 5);
                int32_t _year_total4303 = tbl_JOIN_INNER_TD_5806_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_4787_output.setInt32(r, 7, _year_total8062);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4150_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_id4275_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_4787_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _customer_preferred_cust_flag4278_n);
                tbl_JOIN_INNER_TD_4787_output.setInt32(r, 5, _year_total7584);
                tbl_JOIN_INNER_TD_4787_output.setInt32(r, 6, _year_total4303);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4787_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4787_output #Row: " << tbl_JOIN_INNER_TD_4787_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3948_key_leftMajor {
    std::string _customer_id4150;
    bool operator==(const SW_JOIN_INNER_TD_3948_key_leftMajor& other) const {
        return ((_customer_id4150 == other._customer_id4150));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3948_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3948_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4150));
    }
};
}
struct SW_JOIN_INNER_TD_3948_payload_leftMajor {
    std::string _customer_id4150;
    std::string _customer_id4275;
    std::string _customer_first_name4276;
    std::string _customer_last_name4277;
    std::string _customer_preferred_cust_flag4278;
    int32_t _year_total7584;
    int32_t _year_total4303;
    int32_t _year_total8062;
};
struct SW_JOIN_INNER_TD_3948_key_rightMajor {
    std::string _customer_id4315;
    bool operator==(const SW_JOIN_INNER_TD_3948_key_rightMajor& other) const {
        return ((_customer_id4315 == other._customer_id4315));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3948_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3948_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._customer_id4315));
    }
};
}
struct SW_JOIN_INNER_TD_3948_payload_rightMajor {
    std::string _customer_id4315;
    int32_t _year_total4323;
};
void SW_JOIN_INNER_TD_3948(Table &tbl_JOIN_INNER_TD_4787_output, Table &tbl_Aggregate_TD_4632_output, Table &tbl_JOIN_INNER_TD_3948_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((customer_id#4150 = customer_id#4315) AND (CASE WHEN (year_total#7584 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4303) / promote_precision(year_total#7584)), DecimalType(38,14), true) END > CASE WHEN (year_total#8062 > 0.000000) THEN CheckOverflow((promote_precision(year_total#4323) / promote_precision(year_total#8062)), DecimalType(38,14), true) END)))
    // Left Table: ListBuffer(customer_id#4150, customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278, year_total#7584, year_total#4303, year_total#8062)
    // Right Table: ListBuffer(customer_id#4315, year_total#4323)
    // Output Table: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    int left_nrow = tbl_JOIN_INNER_TD_4787_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4632_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3948_key_leftMajor, SW_JOIN_INNER_TD_3948_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4787_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            SW_JOIN_INNER_TD_3948_key_leftMajor keyA{_customer_id4150_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150 = std::string(_customer_id4150_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _customer_id4275 = std::string(_customer_id4275_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
            int32_t _year_total7584 = tbl_JOIN_INNER_TD_4787_output.getInt32(i, 5);
            int32_t _year_total4303 = tbl_JOIN_INNER_TD_4787_output.getInt32(i, 6);
            int32_t _year_total8062 = tbl_JOIN_INNER_TD_4787_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_3948_payload_leftMajor payloadA{_customer_id4150, _customer_id4275, _customer_first_name4276, _customer_last_name4277, _customer_preferred_cust_flag4278, _year_total7584, _year_total4303, _year_total8062};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_4632_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4315_k_n = tbl_Aggregate_TD_4632_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4315_k = std::string(_customer_id4315_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3948_key_leftMajor{_customer_id4315_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4150 = (it->second)._customer_id4150;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n{};
                memcpy(_customer_id4150_n.data(), (_customer_id4150).data(), (_customer_id4150).length());
                std::string _customer_id4275 = (it->second)._customer_id4275;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n{};
                memcpy(_customer_id4275_n.data(), (_customer_id4275).data(), (_customer_id4275).length());
                std::string _customer_first_name4276 = (it->second)._customer_first_name4276;
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n{};
                memcpy(_customer_first_name4276_n.data(), (_customer_first_name4276).data(), (_customer_first_name4276).length());
                std::string _customer_last_name4277 = (it->second)._customer_last_name4277;
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n{};
                memcpy(_customer_last_name4277_n.data(), (_customer_last_name4277).data(), (_customer_last_name4277).length());
                std::string _customer_preferred_cust_flag4278 = (it->second)._customer_preferred_cust_flag4278;
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n{};
                memcpy(_customer_preferred_cust_flag4278_n.data(), (_customer_preferred_cust_flag4278).data(), (_customer_preferred_cust_flag4278).length());
                int32_t _year_total7584 = (it->second)._year_total7584;
                int32_t _year_total4303 = (it->second)._year_total4303;
                int32_t _year_total8062 = (it->second)._year_total8062;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4315_n = tbl_Aggregate_TD_4632_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4315 = std::string(_customer_id4315_n.data());
                int32_t _year_total4323 = tbl_Aggregate_TD_4632_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4275_n);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4278_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3948_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3948_key_rightMajor, SW_JOIN_INNER_TD_3948_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_4632_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4315_k_n = tbl_Aggregate_TD_4632_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4315_k = std::string(_customer_id4315_k_n.data());
            SW_JOIN_INNER_TD_3948_key_rightMajor keyA{_customer_id4315_k};
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4315_n = tbl_Aggregate_TD_4632_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4315 = std::string(_customer_id4315_n.data());
            int32_t _year_total4323 = tbl_Aggregate_TD_4632_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3948_payload_rightMajor payloadA{_customer_id4315, _year_total4323};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4787_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_k_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _customer_id4150_k = std::string(_customer_id4150_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3948_key_rightMajor{_customer_id4150_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _customer_id4315 = (it->second)._customer_id4315;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4315_n{};
                memcpy(_customer_id4315_n.data(), (_customer_id4315).data(), (_customer_id4315).length());
                int32_t _year_total4323 = (it->second)._year_total4323;
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4150_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _customer_id4150 = std::string(_customer_id4150_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _customer_id4275 = std::string(_customer_id4275_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _customer_first_name4276 = std::string(_customer_first_name4276_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _customer_last_name4277 = std::string(_customer_last_name4277_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_JOIN_INNER_TD_4787_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _customer_preferred_cust_flag4278 = std::string(_customer_preferred_cust_flag4278_n.data());
                int32_t _year_total7584 = tbl_JOIN_INNER_TD_4787_output.getInt32(i, 5);
                int32_t _year_total4303 = tbl_JOIN_INNER_TD_4787_output.getInt32(i, 6);
                int32_t _year_total8062 = tbl_JOIN_INNER_TD_4787_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4275_n);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4276_n);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4277_n);
                tbl_JOIN_INNER_TD_3948_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4278_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3948_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3948_output #Row: " << tbl_JOIN_INNER_TD_3948_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2521(Table &tbl_JOIN_INNER_TD_3948_output, Table &tbl_Sort_TD_2521_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(customer_id#4275 ASC NULLS FIRST, customer_first_name#4276 ASC NULLS FIRST, customer_last_name#4277 ASC NULLS FIRST, customer_preferred_cust_flag#4278 ASC NULLS FIRST)
    // Input: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    // Output: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    struct SW_Sort_TD_2521Row {
        std::string _customer_id4275;
        std::string _customer_first_name4276;
        std::string _customer_last_name4277;
        std::string _customer_preferred_cust_flag4278;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2521Row& a, const SW_Sort_TD_2521Row& b) const { return 
 (a._customer_id4275 < b._customer_id4275) || 
 ((a._customer_id4275 == b._customer_id4275) && (a._customer_first_name4276 < b._customer_first_name4276)) || 
 ((a._customer_id4275 == b._customer_id4275) && (a._customer_first_name4276 == b._customer_first_name4276) && (a._customer_last_name4277 < b._customer_last_name4277)) || 
 ((a._customer_id4275 == b._customer_id4275) && (a._customer_first_name4276 == b._customer_first_name4276) && (a._customer_last_name4277 == b._customer_last_name4277) && (a._customer_preferred_cust_flag4278 < b._customer_preferred_cust_flag4278)); 
}
    }SW_Sort_TD_2521_order; 

    int nrow1 = tbl_JOIN_INNER_TD_3948_output.getNumRow();
    std::vector<SW_Sort_TD_2521Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4275 = tbl_JOIN_INNER_TD_3948_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276 = tbl_JOIN_INNER_TD_3948_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277 = tbl_JOIN_INNER_TD_3948_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278 = tbl_JOIN_INNER_TD_3948_output.getcharN<char, TPCDS_READ_MAX +1>(i, 3);
        SW_Sort_TD_2521Row t = {std::string(_customer_id4275.data()),std::string(_customer_first_name4276.data()),std::string(_customer_last_name4277.data()),std::string(_customer_preferred_cust_flag4278.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2521_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4275{};
        memcpy(_customer_id4275.data(), (it._customer_id4275).data(), (it._customer_id4275).length());
        tbl_Sort_TD_2521_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _customer_id4275);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276{};
        memcpy(_customer_first_name4276.data(), (it._customer_first_name4276).data(), (it._customer_first_name4276).length());
        tbl_Sort_TD_2521_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _customer_first_name4276);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277{};
        memcpy(_customer_last_name4277.data(), (it._customer_last_name4277).data(), (it._customer_last_name4277).length());
        tbl_Sort_TD_2521_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _customer_last_name4277);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278{};
        memcpy(_customer_preferred_cust_flag4278.data(), (it._customer_preferred_cust_flag4278).data(), (it._customer_preferred_cust_flag4278).length());
        tbl_Sort_TD_2521_output.setcharN<char, TPCDS_READ_MAX +1>(r, 3, _customer_preferred_cust_flag4278);
        ++r;
    }
    tbl_Sort_TD_2521_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2521_output #Row: " << tbl_Sort_TD_2521_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1310(Table &tbl_Sort_TD_2521_output, Table &tbl_LocalLimit_TD_1310_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    // Output: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_Sort_TD_2521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4275_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_Sort_TD_2521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4276_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_Sort_TD_2521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4277_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_Sort_TD_2521_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_LocalLimit_TD_1310_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4278_n);
        r++;
    }
    tbl_LocalLimit_TD_1310_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1310_output #Row: " << tbl_LocalLimit_TD_1310_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0704(Table &tbl_LocalLimit_TD_1310_output, Table &tbl_GlobalLimit_TD_0704_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    // Output: ListBuffer(customer_id#4275, customer_first_name#4276, customer_last_name#4277, customer_preferred_cust_flag#4278)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _customer_id4275_n = tbl_LocalLimit_TD_1310_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0704_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _customer_id4275_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_first_name4276_n = tbl_LocalLimit_TD_1310_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0704_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _customer_first_name4276_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_last_name4277_n = tbl_LocalLimit_TD_1310_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0704_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _customer_last_name4277_n);
        std::array<char, TPCDS_READ_MAX + 1> _customer_preferred_cust_flag4278_n = tbl_LocalLimit_TD_1310_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_GlobalLimit_TD_0704_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _customer_preferred_cust_flag4278_n);
        r++;
    }
    tbl_GlobalLimit_TD_0704_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0704_output #Row: " << tbl_GlobalLimit_TD_0704_output.getNumRow() << std::endl;
}

