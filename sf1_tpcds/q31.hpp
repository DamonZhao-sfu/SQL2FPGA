#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_10722444(Table &tbl_SerializeFromObject_TD_11675216_input, Table &tbl_Filter_TD_10722444_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#4327) AND isnotnull(d_year#4323)) AND ((d_qoy#4327 = 2) AND (d_year#4323 = 2000))) AND isnotnull(d_date_sk#4317)))
    // Input: ListBuffer(d_date_sk#4317, d_year#4323, d_qoy#4327)
    // Output: ListBuffer(d_date_sk#4317, d_year#4323, d_qoy#4327)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11675216_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy4327 = tbl_SerializeFromObject_TD_11675216_input.getInt32(i, 2);
        int32_t _d_year4323 = tbl_SerializeFromObject_TD_11675216_input.getInt32(i, 1);
        int32_t _d_date_sk4317 = tbl_SerializeFromObject_TD_11675216_input.getInt32(i, 0);
        if ((((_d_qoy4327!= 0) && (_d_year4323!= 0)) && ((_d_qoy4327 == 2) && (_d_year4323 == 2000))) && (_d_date_sk4317!= 0)) {
            int32_t _d_date_sk4317_t = tbl_SerializeFromObject_TD_11675216_input.getInt32(i, 0);
            tbl_Filter_TD_10722444_output.setInt32(r, 0, _d_date_sk4317_t);
            int32_t _d_year4323_t = tbl_SerializeFromObject_TD_11675216_input.getInt32(i, 1);
            tbl_Filter_TD_10722444_output.setInt32(r, 1, _d_year4323_t);
            int32_t _d_qoy4327_t = tbl_SerializeFromObject_TD_11675216_input.getInt32(i, 2);
            tbl_Filter_TD_10722444_output.setInt32(r, 2, _d_qoy4327_t);
            r++;
        }
    }
    tbl_Filter_TD_10722444_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10722444_output #Row: " << tbl_Filter_TD_10722444_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10793771(Table &tbl_SerializeFromObject_TD_11160561_input, Table &tbl_Filter_TD_10793771_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#4294) AND isnotnull(ss_addr_sk#4300)))
    // Input: ListBuffer(ss_sold_date_sk#4294, ss_addr_sk#4300, ss_ext_sales_price#4309)
    // Output: ListBuffer(ss_sold_date_sk#4294, ss_addr_sk#4300, ss_ext_sales_price#4309)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11160561_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk4294 = tbl_SerializeFromObject_TD_11160561_input.getInt32(i, 0);
        int32_t _ss_addr_sk4300 = tbl_SerializeFromObject_TD_11160561_input.getInt32(i, 1);
        if ((_ss_sold_date_sk4294!= 0) && (_ss_addr_sk4300!= 0)) {
            int32_t _ss_sold_date_sk4294_t = tbl_SerializeFromObject_TD_11160561_input.getInt32(i, 0);
            tbl_Filter_TD_10793771_output.setInt32(r, 0, _ss_sold_date_sk4294_t);
            int32_t _ss_addr_sk4300_t = tbl_SerializeFromObject_TD_11160561_input.getInt32(i, 1);
            tbl_Filter_TD_10793771_output.setInt32(r, 1, _ss_addr_sk4300_t);
            int64_t _ss_ext_sales_price4309_t = tbl_SerializeFromObject_TD_11160561_input.getInt64(i, 2);
            tbl_Filter_TD_10793771_output.setInt64(r, 2, _ss_ext_sales_price4309_t);
            r++;
        }
    }
    tbl_Filter_TD_10793771_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10793771_output #Row: " << tbl_Filter_TD_10793771_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10700756(Table &tbl_SerializeFromObject_TD_11371222_input, Table &tbl_Filter_TD_10700756_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#130) AND isnotnull(d_year#126)) AND ((d_qoy#130 = 1) AND (d_year#126 = 2000))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11371222_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy130 = tbl_SerializeFromObject_TD_11371222_input.getInt32(i, 2);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11371222_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11371222_input.getInt32(i, 0);
        if ((((_d_qoy130!= 0) && (_d_year126!= 0)) && ((_d_qoy130 == 1) && (_d_year126 == 2000))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11371222_input.getInt32(i, 0);
            tbl_Filter_TD_10700756_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_11371222_input.getInt32(i, 1);
            tbl_Filter_TD_10700756_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_11371222_input.getInt32(i, 2);
            tbl_Filter_TD_10700756_output.setInt32(r, 2, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_10700756_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10700756_output #Row: " << tbl_Filter_TD_10700756_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10282303(Table &tbl_SerializeFromObject_TD_11247879_input, Table &tbl_Filter_TD_10282303_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_addr_sk#1212)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11247879_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_11247879_input.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_11247879_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_addr_sk1212!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_11247879_input.getInt32(i, 0);
            tbl_Filter_TD_10282303_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_11247879_input.getInt32(i, 1);
            tbl_Filter_TD_10282303_output.setInt32(r, 1, _ss_addr_sk1212_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_11247879_input.getInt64(i, 2);
            tbl_Filter_TD_10282303_output.setInt64(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_10282303_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10282303_output #Row: " << tbl_Filter_TD_10282303_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9472277(Table &tbl_SerializeFromObject_TD_10381514_input, Table &tbl_Filter_TD_9472277_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#4392) AND isnotnull(d_year#4388)) AND ((d_qoy#4392 = 3) AND (d_year#4388 = 2000))) AND isnotnull(d_date_sk#4382)))
    // Input: ListBuffer(d_date_sk#4382, d_year#4388, d_qoy#4392)
    // Output: ListBuffer(d_date_sk#4382, d_year#4388, d_qoy#4392)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10381514_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy4392 = tbl_SerializeFromObject_TD_10381514_input.getInt32(i, 2);
        int32_t _d_year4388 = tbl_SerializeFromObject_TD_10381514_input.getInt32(i, 1);
        int32_t _d_date_sk4382 = tbl_SerializeFromObject_TD_10381514_input.getInt32(i, 0);
        if ((((_d_qoy4392!= 0) && (_d_year4388!= 0)) && ((_d_qoy4392 == 3) && (_d_year4388 == 2000))) && (_d_date_sk4382!= 0)) {
            int32_t _d_date_sk4382_t = tbl_SerializeFromObject_TD_10381514_input.getInt32(i, 0);
            tbl_Filter_TD_9472277_output.setInt32(r, 0, _d_date_sk4382_t);
            int32_t _d_year4388_t = tbl_SerializeFromObject_TD_10381514_input.getInt32(i, 1);
            tbl_Filter_TD_9472277_output.setInt32(r, 1, _d_year4388_t);
            int32_t _d_qoy4392_t = tbl_SerializeFromObject_TD_10381514_input.getInt32(i, 2);
            tbl_Filter_TD_9472277_output.setInt32(r, 2, _d_qoy4392_t);
            r++;
        }
    }
    tbl_Filter_TD_9472277_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9472277_output #Row: " << tbl_Filter_TD_9472277_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9294021(Table &tbl_SerializeFromObject_TD_10512123_input, Table &tbl_Filter_TD_9294021_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#4359) AND isnotnull(ss_addr_sk#4365)))
    // Input: ListBuffer(ss_sold_date_sk#4359, ss_addr_sk#4365, ss_ext_sales_price#4374)
    // Output: ListBuffer(ss_sold_date_sk#4359, ss_addr_sk#4365, ss_ext_sales_price#4374)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10512123_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk4359 = tbl_SerializeFromObject_TD_10512123_input.getInt32(i, 0);
        int32_t _ss_addr_sk4365 = tbl_SerializeFromObject_TD_10512123_input.getInt32(i, 1);
        if ((_ss_sold_date_sk4359!= 0) && (_ss_addr_sk4365!= 0)) {
            int32_t _ss_sold_date_sk4359_t = tbl_SerializeFromObject_TD_10512123_input.getInt32(i, 0);
            tbl_Filter_TD_9294021_output.setInt32(r, 0, _ss_sold_date_sk4359_t);
            int32_t _ss_addr_sk4365_t = tbl_SerializeFromObject_TD_10512123_input.getInt32(i, 1);
            tbl_Filter_TD_9294021_output.setInt32(r, 1, _ss_addr_sk4365_t);
            int64_t _ss_ext_sales_price4374_t = tbl_SerializeFromObject_TD_10512123_input.getInt64(i, 2);
            tbl_Filter_TD_9294021_output.setInt64(r, 2, _ss_ext_sales_price4374_t);
            r++;
        }
    }
    tbl_Filter_TD_9294021_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9294021_output #Row: " << tbl_Filter_TD_9294021_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9911989(Table &tbl_SerializeFromObject_TD_1032642_input, Table &tbl_Filter_TD_9911989_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#4345) AND isnotnull(ca_county#4352)))
    // Input: ListBuffer(ca_address_sk#4345, ca_county#4352)
    // Output: ListBuffer(ca_address_sk#4345, ca_county#4352)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1032642_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk4345 = tbl_SerializeFromObject_TD_1032642_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4352 = tbl_SerializeFromObject_TD_1032642_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk4345!= 0) && (std::string(_ca_county4352.data()) != "NULL")) {
            int32_t _ca_address_sk4345_t = tbl_SerializeFromObject_TD_1032642_input.getInt32(i, 0);
            tbl_Filter_TD_9911989_output.setInt32(r, 0, _ca_address_sk4345_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_t = tbl_SerializeFromObject_TD_1032642_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9911989_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county4352_t);
            r++;
        }
    }
    tbl_Filter_TD_9911989_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9911989_output #Row: " << tbl_Filter_TD_9911989_output.getNumRow() << std::endl;
}


void SW_Filter_TD_933553(Table &tbl_SerializeFromObject_TD_10335462_input, Table &tbl_Filter_TD_933553_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_county#61)))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61)
    // Output: ListBuffer(ca_address_sk#54, ca_county#61)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10335462_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10335462_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_SerializeFromObject_TD_10335462_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && (std::string(_ca_county61.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10335462_input.getInt32(i, 0);
            tbl_Filter_TD_933553_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_t = tbl_SerializeFromObject_TD_10335462_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_933553_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county61_t);
            r++;
        }
    }
    tbl_Filter_TD_933553_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_933553_output #Row: " << tbl_Filter_TD_933553_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8985396(Table &tbl_SerializeFromObject_TD_9756110_input, Table &tbl_Filter_TD_8985396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#3560) AND isnotnull(d_year#3556)) AND ((d_qoy#3560 = 1) AND (d_year#3556 = 2000))) AND isnotnull(d_date_sk#3550)))
    // Input: ListBuffer(d_date_sk#3550, d_year#3556, d_qoy#3560)
    // Output: ListBuffer(d_date_sk#3550, d_year#3556, d_qoy#3560)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9756110_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy3560 = tbl_SerializeFromObject_TD_9756110_input.getInt32(i, 2);
        int32_t _d_year3556 = tbl_SerializeFromObject_TD_9756110_input.getInt32(i, 1);
        int32_t _d_date_sk3550 = tbl_SerializeFromObject_TD_9756110_input.getInt32(i, 0);
        if ((((_d_qoy3560!= 0) && (_d_year3556!= 0)) && ((_d_qoy3560 == 1) && (_d_year3556 == 2000))) && (_d_date_sk3550!= 0)) {
            int32_t _d_date_sk3550_t = tbl_SerializeFromObject_TD_9756110_input.getInt32(i, 0);
            tbl_Filter_TD_8985396_output.setInt32(r, 0, _d_date_sk3550_t);
            int32_t _d_year3556_t = tbl_SerializeFromObject_TD_9756110_input.getInt32(i, 1);
            tbl_Filter_TD_8985396_output.setInt32(r, 1, _d_year3556_t);
            int32_t _d_qoy3560_t = tbl_SerializeFromObject_TD_9756110_input.getInt32(i, 2);
            tbl_Filter_TD_8985396_output.setInt32(r, 2, _d_qoy3560_t);
            r++;
        }
    }
    tbl_Filter_TD_8985396_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8985396_output #Row: " << tbl_Filter_TD_8985396_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8980256(Table &tbl_SerializeFromObject_TD_9851500_input, Table &tbl_Filter_TD_8980256_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_addr_sk#736)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9851500_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_9851500_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk736 = tbl_SerializeFromObject_TD_9851500_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_bill_addr_sk736!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_9851500_input.getInt32(i, 0);
            tbl_Filter_TD_8980256_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_addr_sk736_t = tbl_SerializeFromObject_TD_9851500_input.getInt32(i, 1);
            tbl_Filter_TD_8980256_output.setInt32(r, 1, _ws_bill_addr_sk736_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_9851500_input.getInt64(i, 2);
            tbl_Filter_TD_8980256_output.setInt64(r, 2, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_8980256_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8980256_output #Row: " << tbl_Filter_TD_8980256_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8806247(Table &tbl_SerializeFromObject_TD_9884661_input, Table &tbl_Filter_TD_8806247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#4410) AND isnotnull(ca_county#4417)))
    // Input: ListBuffer(ca_address_sk#4410, ca_county#4417)
    // Output: ListBuffer(ca_address_sk#4410, ca_county#4417)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9884661_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk4410 = tbl_SerializeFromObject_TD_9884661_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4417 = tbl_SerializeFromObject_TD_9884661_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk4410!= 0) && (std::string(_ca_county4417.data()) != "NULL")) {
            int32_t _ca_address_sk4410_t = tbl_SerializeFromObject_TD_9884661_input.getInt32(i, 0);
            tbl_Filter_TD_8806247_output.setInt32(r, 0, _ca_address_sk4410_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_t = tbl_SerializeFromObject_TD_9884661_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8806247_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county4417_t);
            r++;
        }
    }
    tbl_Filter_TD_8806247_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8806247_output #Row: " << tbl_Filter_TD_8806247_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_8266314_key_leftMajor {
    int32_t _ss_addr_sk4300;
    bool operator==(const SW_JOIN_INNER_TD_8266314_key_leftMajor& other) const {
        return ((_ss_addr_sk4300 == other._ss_addr_sk4300));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8266314_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8266314_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk4300));
    }
};
}
struct SW_JOIN_INNER_TD_8266314_payload_leftMajor {
    int32_t _ss_addr_sk4300;
    int64_t _ss_ext_sales_price4309;
    int32_t _d_year4323;
    int32_t _d_qoy4327;
};
struct SW_JOIN_INNER_TD_8266314_key_rightMajor {
    int32_t _ca_address_sk4345;
    bool operator==(const SW_JOIN_INNER_TD_8266314_key_rightMajor& other) const {
        return ((_ca_address_sk4345 == other._ca_address_sk4345));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8266314_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8266314_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4345));
    }
};
}
struct SW_JOIN_INNER_TD_8266314_payload_rightMajor {
    int32_t _ca_address_sk4345;
    std::string _ca_county4352;
};
void SW_JOIN_INNER_TD_8266314(Table &tbl_JOIN_INNER_TD_9801878_output, Table &tbl_Filter_TD_9911989_output, Table &tbl_JOIN_INNER_TD_8266314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#4300 = ca_address_sk#4345))
    // Left Table: ListBuffer(ss_addr_sk#4300, ss_ext_sales_price#4309, d_year#4323, d_qoy#4327)
    // Right Table: ListBuffer(ca_address_sk#4345, ca_county#4352)
    // Output Table: ListBuffer(ss_ext_sales_price#4309, d_year#4323, d_qoy#4327, ca_county#4352)
    int left_nrow = tbl_JOIN_INNER_TD_9801878_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9911989_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8266314_key_leftMajor, SW_JOIN_INNER_TD_8266314_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9801878_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk4300_k = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8266314_key_leftMajor keyA{_ss_addr_sk4300_k};
            int32_t _ss_addr_sk4300 = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 0);
            int64_t _ss_ext_sales_price4309 = tbl_JOIN_INNER_TD_9801878_output.getInt64(i, 1);
            int32_t _d_year4323 = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 2);
            int32_t _d_qoy4327 = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8266314_payload_leftMajor payloadA{_ss_addr_sk4300, _ss_ext_sales_price4309, _d_year4323, _d_qoy4327};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9911989_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4345_k = tbl_Filter_TD_9911989_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8266314_key_leftMajor{_ca_address_sk4345_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_addr_sk4300 = (it->second)._ss_addr_sk4300;
                int64_t _ss_ext_sales_price4309 = (it->second)._ss_ext_sales_price4309;
                int32_t _d_year4323 = (it->second)._d_year4323;
                int32_t _d_qoy4327 = (it->second)._d_qoy4327;
                int32_t _ca_address_sk4345 = tbl_Filter_TD_9911989_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n = tbl_Filter_TD_9911989_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county4352 = std::string(_ca_county4352_n.data());
                tbl_JOIN_INNER_TD_8266314_output.setInt64(r, 0, _ss_ext_sales_price4309);
                tbl_JOIN_INNER_TD_8266314_output.setInt32(r, 1, _d_year4323);
                tbl_JOIN_INNER_TD_8266314_output.setInt32(r, 2, _d_qoy4327);
                tbl_JOIN_INNER_TD_8266314_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4352_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8266314_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8266314_key_rightMajor, SW_JOIN_INNER_TD_8266314_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9911989_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4345_k = tbl_Filter_TD_9911989_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8266314_key_rightMajor keyA{_ca_address_sk4345_k};
            int32_t _ca_address_sk4345 = tbl_Filter_TD_9911989_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n = tbl_Filter_TD_9911989_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county4352 = std::string(_ca_county4352_n.data());
            SW_JOIN_INNER_TD_8266314_payload_rightMajor payloadA{_ca_address_sk4345, _ca_county4352};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9801878_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk4300_k = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8266314_key_rightMajor{_ss_addr_sk4300_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4345 = (it->second)._ca_address_sk4345;
                std::string _ca_county4352 = (it->second)._ca_county4352;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n{};
                memcpy(_ca_county4352_n.data(), (_ca_county4352).data(), (_ca_county4352).length());
                int32_t _ss_addr_sk4300 = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 0);
                int64_t _ss_ext_sales_price4309 = tbl_JOIN_INNER_TD_9801878_output.getInt64(i, 1);
                int32_t _d_year4323 = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 2);
                int32_t _d_qoy4327 = tbl_JOIN_INNER_TD_9801878_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8266314_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4352_n);
                tbl_JOIN_INNER_TD_8266314_output.setInt64(r, 0, _ss_ext_sales_price4309);
                tbl_JOIN_INNER_TD_8266314_output.setInt32(r, 1, _d_year4323);
                tbl_JOIN_INNER_TD_8266314_output.setInt32(r, 2, _d_qoy4327);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8266314_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8266314_output #Row: " << tbl_JOIN_INNER_TD_8266314_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8701822_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_8701822_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8701822_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8701822_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_8701822_payload_leftMajor {
    int32_t _ss_addr_sk1212;
    int64_t _ss_ext_sales_price1221;
    int32_t _d_year126;
    int32_t _d_qoy130;
};
struct SW_JOIN_INNER_TD_8701822_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8701822_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8701822_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8701822_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8701822_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_county61;
};
void SW_JOIN_INNER_TD_8701822(Table &tbl_JOIN_INNER_TD_9628813_output, Table &tbl_Filter_TD_933553_output, Table &tbl_JOIN_INNER_TD_8701822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_addr_sk#1212, ss_ext_sales_price#1221, d_year#126, d_qoy#130)
    // Right Table: ListBuffer(ca_address_sk#54, ca_county#61)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, d_year#126, d_qoy#130, ca_county#61)
    int left_nrow = tbl_JOIN_INNER_TD_9628813_output.getNumRow();
    int right_nrow = tbl_Filter_TD_933553_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8701822_key_leftMajor, SW_JOIN_INNER_TD_8701822_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9628813_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8701822_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 0);
            int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9628813_output.getInt64(i, 1);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 2);
            int32_t _d_qoy130 = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8701822_payload_leftMajor payloadA{_ss_addr_sk1212, _ss_ext_sales_price1221, _d_year126, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_933553_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_933553_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8701822_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int64_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _ca_address_sk54 = tbl_Filter_TD_933553_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_933553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                tbl_JOIN_INNER_TD_8701822_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8701822_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_8701822_output.setInt32(r, 2, _d_qoy130);
                tbl_JOIN_INNER_TD_8701822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8701822_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8701822_key_rightMajor, SW_JOIN_INNER_TD_8701822_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_933553_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_933553_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8701822_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_933553_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_933553_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            SW_JOIN_INNER_TD_8701822_payload_rightMajor payloadA{_ca_address_sk54, _ca_county61};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9628813_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8701822_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 0);
                int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_9628813_output.getInt64(i, 1);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 2);
                int32_t _d_qoy130 = tbl_JOIN_INNER_TD_9628813_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8701822_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                tbl_JOIN_INNER_TD_8701822_output.setInt64(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8701822_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_8701822_output.setInt32(r, 2, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8701822_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8701822_output #Row: " << tbl_JOIN_INNER_TD_8701822_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7876152(Table &tbl_SerializeFromObject_TD_8568858_input, Table &tbl_Filter_TD_7876152_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#4468) AND isnotnull(d_year#4464)) AND ((d_qoy#4468 = 2) AND (d_year#4464 = 2000))) AND isnotnull(d_date_sk#4458)))
    // Input: ListBuffer(d_date_sk#4458, d_year#4464, d_qoy#4468)
    // Output: ListBuffer(d_date_sk#4458, d_year#4464, d_qoy#4468)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8568858_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy4468 = tbl_SerializeFromObject_TD_8568858_input.getInt32(i, 2);
        int32_t _d_year4464 = tbl_SerializeFromObject_TD_8568858_input.getInt32(i, 1);
        int32_t _d_date_sk4458 = tbl_SerializeFromObject_TD_8568858_input.getInt32(i, 0);
        if ((((_d_qoy4468!= 0) && (_d_year4464!= 0)) && ((_d_qoy4468 == 2) && (_d_year4464 == 2000))) && (_d_date_sk4458!= 0)) {
            int32_t _d_date_sk4458_t = tbl_SerializeFromObject_TD_8568858_input.getInt32(i, 0);
            tbl_Filter_TD_7876152_output.setInt32(r, 0, _d_date_sk4458_t);
            int32_t _d_year4464_t = tbl_SerializeFromObject_TD_8568858_input.getInt32(i, 1);
            tbl_Filter_TD_7876152_output.setInt32(r, 1, _d_year4464_t);
            int32_t _d_qoy4468_t = tbl_SerializeFromObject_TD_8568858_input.getInt32(i, 2);
            tbl_Filter_TD_7876152_output.setInt32(r, 2, _d_qoy4468_t);
            r++;
        }
    }
    tbl_Filter_TD_7876152_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7876152_output #Row: " << tbl_Filter_TD_7876152_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7110750(Table &tbl_SerializeFromObject_TD_8185299_input, Table &tbl_Filter_TD_7110750_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#4424) AND isnotnull(ws_bill_addr_sk#4431)))
    // Input: ListBuffer(ws_sold_date_sk#4424, ws_bill_addr_sk#4431, ws_ext_sales_price#4447)
    // Output: ListBuffer(ws_sold_date_sk#4424, ws_bill_addr_sk#4431, ws_ext_sales_price#4447)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8185299_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk4424 = tbl_SerializeFromObject_TD_8185299_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk4431 = tbl_SerializeFromObject_TD_8185299_input.getInt32(i, 1);
        if ((_ws_sold_date_sk4424!= 0) && (_ws_bill_addr_sk4431!= 0)) {
            int32_t _ws_sold_date_sk4424_t = tbl_SerializeFromObject_TD_8185299_input.getInt32(i, 0);
            tbl_Filter_TD_7110750_output.setInt32(r, 0, _ws_sold_date_sk4424_t);
            int32_t _ws_bill_addr_sk4431_t = tbl_SerializeFromObject_TD_8185299_input.getInt32(i, 1);
            tbl_Filter_TD_7110750_output.setInt32(r, 1, _ws_bill_addr_sk4431_t);
            int64_t _ws_ext_sales_price4447_t = tbl_SerializeFromObject_TD_8185299_input.getInt64(i, 2);
            tbl_Filter_TD_7110750_output.setInt64(r, 2, _ws_ext_sales_price4447_t);
            r++;
        }
    }
    tbl_Filter_TD_7110750_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7110750_output #Row: " << tbl_Filter_TD_7110750_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7409783(Table &tbl_SerializeFromObject_TD_8844691_input, Table &tbl_Filter_TD_7409783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#3578) AND isnotnull(ca_county#3585)))
    // Input: ListBuffer(ca_address_sk#3578, ca_county#3585)
    // Output: ListBuffer(ca_address_sk#3578, ca_county#3585)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8844691_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk3578 = tbl_SerializeFromObject_TD_8844691_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3585 = tbl_SerializeFromObject_TD_8844691_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk3578!= 0) && (std::string(_ca_county3585.data()) != "NULL")) {
            int32_t _ca_address_sk3578_t = tbl_SerializeFromObject_TD_8844691_input.getInt32(i, 0);
            tbl_Filter_TD_7409783_output.setInt32(r, 0, _ca_address_sk3578_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_t = tbl_SerializeFromObject_TD_8844691_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7409783_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county3585_t);
            r++;
        }
    }
    tbl_Filter_TD_7409783_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7409783_output #Row: " << tbl_Filter_TD_7409783_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_7976974_key_leftMajor {
    int32_t _ss_addr_sk4365;
    bool operator==(const SW_JOIN_INNER_TD_7976974_key_leftMajor& other) const {
        return ((_ss_addr_sk4365 == other._ss_addr_sk4365));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7976974_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7976974_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk4365));
    }
};
}
struct SW_JOIN_INNER_TD_7976974_payload_leftMajor {
    int32_t _ss_addr_sk4365;
    int64_t _ss_ext_sales_price4374;
    int32_t _d_year4388;
    int32_t _d_qoy4392;
};
struct SW_JOIN_INNER_TD_7976974_key_rightMajor {
    int32_t _ca_address_sk4410;
    bool operator==(const SW_JOIN_INNER_TD_7976974_key_rightMajor& other) const {
        return ((_ca_address_sk4410 == other._ca_address_sk4410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7976974_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7976974_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4410));
    }
};
}
struct SW_JOIN_INNER_TD_7976974_payload_rightMajor {
    int32_t _ca_address_sk4410;
    std::string _ca_county4417;
};
void SW_JOIN_INNER_TD_7976974(Table &tbl_JOIN_INNER_TD_8986387_output, Table &tbl_Filter_TD_8806247_output, Table &tbl_JOIN_INNER_TD_7976974_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#4365 = ca_address_sk#4410))
    // Left Table: ListBuffer(ss_addr_sk#4365, ss_ext_sales_price#4374, d_year#4388, d_qoy#4392)
    // Right Table: ListBuffer(ca_address_sk#4410, ca_county#4417)
    // Output Table: ListBuffer(ss_ext_sales_price#4374, d_year#4388, d_qoy#4392, ca_county#4417)
    int left_nrow = tbl_JOIN_INNER_TD_8986387_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8806247_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7976974_key_leftMajor, SW_JOIN_INNER_TD_7976974_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8986387_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk4365_k = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7976974_key_leftMajor keyA{_ss_addr_sk4365_k};
            int32_t _ss_addr_sk4365 = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 0);
            int64_t _ss_ext_sales_price4374 = tbl_JOIN_INNER_TD_8986387_output.getInt64(i, 1);
            int32_t _d_year4388 = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 2);
            int32_t _d_qoy4392 = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7976974_payload_leftMajor payloadA{_ss_addr_sk4365, _ss_ext_sales_price4374, _d_year4388, _d_qoy4392};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8806247_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4410_k = tbl_Filter_TD_8806247_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7976974_key_leftMajor{_ca_address_sk4410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_addr_sk4365 = (it->second)._ss_addr_sk4365;
                int64_t _ss_ext_sales_price4374 = (it->second)._ss_ext_sales_price4374;
                int32_t _d_year4388 = (it->second)._d_year4388;
                int32_t _d_qoy4392 = (it->second)._d_qoy4392;
                int32_t _ca_address_sk4410 = tbl_Filter_TD_8806247_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_n = tbl_Filter_TD_8806247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county4417 = std::string(_ca_county4417_n.data());
                tbl_JOIN_INNER_TD_7976974_output.setInt64(r, 0, _ss_ext_sales_price4374);
                tbl_JOIN_INNER_TD_7976974_output.setInt32(r, 1, _d_year4388);
                tbl_JOIN_INNER_TD_7976974_output.setInt32(r, 2, _d_qoy4392);
                tbl_JOIN_INNER_TD_7976974_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4417_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7976974_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7976974_key_rightMajor, SW_JOIN_INNER_TD_7976974_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8806247_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4410_k = tbl_Filter_TD_8806247_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7976974_key_rightMajor keyA{_ca_address_sk4410_k};
            int32_t _ca_address_sk4410 = tbl_Filter_TD_8806247_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_n = tbl_Filter_TD_8806247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county4417 = std::string(_ca_county4417_n.data());
            SW_JOIN_INNER_TD_7976974_payload_rightMajor payloadA{_ca_address_sk4410, _ca_county4417};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8986387_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk4365_k = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7976974_key_rightMajor{_ss_addr_sk4365_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4410 = (it->second)._ca_address_sk4410;
                std::string _ca_county4417 = (it->second)._ca_county4417;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_n{};
                memcpy(_ca_county4417_n.data(), (_ca_county4417).data(), (_ca_county4417).length());
                int32_t _ss_addr_sk4365 = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 0);
                int64_t _ss_ext_sales_price4374 = tbl_JOIN_INNER_TD_8986387_output.getInt64(i, 1);
                int32_t _d_year4388 = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 2);
                int32_t _d_qoy4392 = tbl_JOIN_INNER_TD_8986387_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7976974_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4417_n);
                tbl_JOIN_INNER_TD_7976974_output.setInt64(r, 0, _ss_ext_sales_price4374);
                tbl_JOIN_INNER_TD_7976974_output.setInt32(r, 1, _d_year4388);
                tbl_JOIN_INNER_TD_7976974_output.setInt32(r, 2, _d_qoy4392);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7976974_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7976974_output #Row: " << tbl_JOIN_INNER_TD_7976974_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7696336_key {
    std::string _ca_county4352;
    int32_t _d_qoy4327;
    int32_t _d_year4323;
    bool operator==(const SW_Aggregate_TD_7696336_key& other) const { return (_ca_county4352 == other._ca_county4352) && (_d_qoy4327 == other._d_qoy4327) && (_d_year4323 == other._d_year4323); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7696336_key> {
    std::size_t operator() (const SW_Aggregate_TD_7696336_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4352)) + (hash<int32_t>()(k._d_qoy4327)) + (hash<int32_t>()(k._d_year4323));
    }
};
}
struct SW_Aggregate_TD_7696336_payload {
    int64_t _store_sales3596_sum_0;
};
void SW_Aggregate_TD_7696336(Table &tbl_JOIN_INNER_TD_8266314_output, Table &tbl_Aggregate_TD_7696336_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#4352, d_qoy#4327, d_year#4323, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#4309)),17,2) AS store_sales#3596)
    // Input: ListBuffer(ss_ext_sales_price#4309, d_year#4323, d_qoy#4327, ca_county#4352)
    // Output: ListBuffer(ca_county#4352, store_sales#3596)
    std::unordered_map<SW_Aggregate_TD_7696336_key, SW_Aggregate_TD_7696336_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8266314_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price4309 = tbl_JOIN_INNER_TD_8266314_output.getInt64(i, 0);
        int32_t _d_year4323 = tbl_JOIN_INNER_TD_8266314_output.getInt32(i, 1);
        int32_t _d_qoy4327 = tbl_JOIN_INNER_TD_8266314_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4352 = tbl_JOIN_INNER_TD_8266314_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_7696336_key k{std::string(_ca_county4352.data()), _d_qoy4327, _d_year4323};
        int64_t _store_sales3596_sum_0 = _ss_ext_sales_price4309;
        SW_Aggregate_TD_7696336_payload p{_store_sales3596_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._store_sales3596_sum_0 + _store_sales3596_sum_0;
            p._store_sales3596_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4352{};
        memcpy(_ca_county4352.data(), ((it.first)._ca_county4352).data(), ((it.first)._ca_county4352).length());
        tbl_Aggregate_TD_7696336_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county4352);
        // _d_qoy4327 not required in the output table
        // _d_year4323 not required in the output table
        int64_t _store_sales3596 = (it.second)._store_sales3596_sum_0;
        tbl_Aggregate_TD_7696336_output.setInt64(r, 1, _store_sales3596);
        ++r;
    }
    tbl_Aggregate_TD_7696336_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7696336_output #Row: " << tbl_Aggregate_TD_7696336_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_715884_key {
    std::string _ca_county61;
    int32_t _d_qoy130;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_715884_key& other) const { return (_ca_county61 == other._ca_county61) && (_d_qoy130 == other._d_qoy130) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_715884_key> {
    std::size_t operator() (const SW_Aggregate_TD_715884_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61)) + (hash<int32_t>()(k._d_qoy130)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_715884_payload {
    int64_t _store_sales3548_sum_0;
};
void SW_Aggregate_TD_715884(Table &tbl_JOIN_INNER_TD_8701822_output, Table &tbl_Aggregate_TD_715884_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#61, d_qoy#130, d_year#126, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS store_sales#3548)
    // Input: ListBuffer(ss_ext_sales_price#1221, d_year#126, d_qoy#130, ca_county#61)
    // Output: ListBuffer(ca_county#61, d_year#126, store_sales#3548)
    std::unordered_map<SW_Aggregate_TD_715884_key, SW_Aggregate_TD_715884_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8701822_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8701822_output.getInt64(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8701822_output.getInt32(i, 1);
        int32_t _d_qoy130 = tbl_JOIN_INNER_TD_8701822_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_JOIN_INNER_TD_8701822_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_715884_key k{std::string(_ca_county61.data()), _d_qoy130, _d_year126};
        int64_t _store_sales3548_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_715884_payload p{_store_sales3548_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._store_sales3548_sum_0 + _store_sales3548_sum_0;
            p._store_sales3548_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61{};
        memcpy(_ca_county61.data(), ((it.first)._ca_county61).data(), ((it.first)._ca_county61).length());
        tbl_Aggregate_TD_715884_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61);
        // _d_qoy130 not required in the output table
        tbl_Aggregate_TD_715884_output.setInt32(r, 1, (it.first)._d_year126);
        int64_t _store_sales3548 = (it.second)._store_sales3548_sum_0;
        tbl_Aggregate_TD_715884_output.setInt64(r, 2, _store_sales3548);
        ++r;
    }
    tbl_Aggregate_TD_715884_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_715884_output #Row: " << tbl_Aggregate_TD_715884_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6413588(Table &tbl_SerializeFromObject_TD_7614970_input, Table &tbl_Filter_TD_6413588_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#4544) AND isnotnull(d_year#4540)) AND ((d_qoy#4544 = 3) AND (d_year#4540 = 2000))) AND isnotnull(d_date_sk#4534)))
    // Input: ListBuffer(d_date_sk#4534, d_year#4540, d_qoy#4544)
    // Output: ListBuffer(d_date_sk#4534, d_year#4540, d_qoy#4544)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7614970_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy4544 = tbl_SerializeFromObject_TD_7614970_input.getInt32(i, 2);
        int32_t _d_year4540 = tbl_SerializeFromObject_TD_7614970_input.getInt32(i, 1);
        int32_t _d_date_sk4534 = tbl_SerializeFromObject_TD_7614970_input.getInt32(i, 0);
        if ((((_d_qoy4544!= 0) && (_d_year4540!= 0)) && ((_d_qoy4544 == 3) && (_d_year4540 == 2000))) && (_d_date_sk4534!= 0)) {
            int32_t _d_date_sk4534_t = tbl_SerializeFromObject_TD_7614970_input.getInt32(i, 0);
            tbl_Filter_TD_6413588_output.setInt32(r, 0, _d_date_sk4534_t);
            int32_t _d_year4540_t = tbl_SerializeFromObject_TD_7614970_input.getInt32(i, 1);
            tbl_Filter_TD_6413588_output.setInt32(r, 1, _d_year4540_t);
            int32_t _d_qoy4544_t = tbl_SerializeFromObject_TD_7614970_input.getInt32(i, 2);
            tbl_Filter_TD_6413588_output.setInt32(r, 2, _d_qoy4544_t);
            r++;
        }
    }
    tbl_Filter_TD_6413588_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6413588_output #Row: " << tbl_Filter_TD_6413588_output.getNumRow() << std::endl;
}

void SW_Filter_TD_648510(Table &tbl_SerializeFromObject_TD_7213950_input, Table &tbl_Filter_TD_648510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#4500) AND isnotnull(ws_bill_addr_sk#4507)))
    // Input: ListBuffer(ws_sold_date_sk#4500, ws_bill_addr_sk#4507, ws_ext_sales_price#4523)
    // Output: ListBuffer(ws_sold_date_sk#4500, ws_bill_addr_sk#4507, ws_ext_sales_price#4523)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7213950_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk4500 = tbl_SerializeFromObject_TD_7213950_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk4507 = tbl_SerializeFromObject_TD_7213950_input.getInt32(i, 1);
        if ((_ws_sold_date_sk4500!= 0) && (_ws_bill_addr_sk4507!= 0)) {
            int32_t _ws_sold_date_sk4500_t = tbl_SerializeFromObject_TD_7213950_input.getInt32(i, 0);
            tbl_Filter_TD_648510_output.setInt32(r, 0, _ws_sold_date_sk4500_t);
            int32_t _ws_bill_addr_sk4507_t = tbl_SerializeFromObject_TD_7213950_input.getInt32(i, 1);
            tbl_Filter_TD_648510_output.setInt32(r, 1, _ws_bill_addr_sk4507_t);
            int64_t _ws_ext_sales_price4523_t = tbl_SerializeFromObject_TD_7213950_input.getInt64(i, 2);
            tbl_Filter_TD_648510_output.setInt64(r, 2, _ws_ext_sales_price4523_t);
            r++;
        }
    }
    tbl_Filter_TD_648510_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_648510_output #Row: " << tbl_Filter_TD_648510_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6989288(Table &tbl_SerializeFromObject_TD_7386193_input, Table &tbl_Filter_TD_6989288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#4486) AND isnotnull(ca_county#4493)))
    // Input: ListBuffer(ca_address_sk#4486, ca_county#4493)
    // Output: ListBuffer(ca_address_sk#4486, ca_county#4493)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7386193_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk4486 = tbl_SerializeFromObject_TD_7386193_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4493 = tbl_SerializeFromObject_TD_7386193_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk4486!= 0) && (std::string(_ca_county4493.data()) != "NULL")) {
            int32_t _ca_address_sk4486_t = tbl_SerializeFromObject_TD_7386193_input.getInt32(i, 0);
            tbl_Filter_TD_6989288_output.setInt32(r, 0, _ca_address_sk4486_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_t = tbl_SerializeFromObject_TD_7386193_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6989288_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county4493_t);
            r++;
        }
    }
    tbl_Filter_TD_6989288_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6989288_output #Row: " << tbl_Filter_TD_6989288_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_673095_key_leftMajor {
    int32_t _ws_bill_addr_sk736;
    bool operator==(const SW_JOIN_INNER_TD_673095_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk736 == other._ws_bill_addr_sk736));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_673095_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_673095_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk736));
    }
};
}
struct SW_JOIN_INNER_TD_673095_payload_leftMajor {
    int32_t _ws_bill_addr_sk736;
    int64_t _ws_ext_sales_price752;
    int32_t _d_year3556;
    int32_t _d_qoy3560;
};
struct SW_JOIN_INNER_TD_673095_key_rightMajor {
    int32_t _ca_address_sk3578;
    bool operator==(const SW_JOIN_INNER_TD_673095_key_rightMajor& other) const {
        return ((_ca_address_sk3578 == other._ca_address_sk3578));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_673095_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_673095_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk3578));
    }
};
}
struct SW_JOIN_INNER_TD_673095_payload_rightMajor {
    int32_t _ca_address_sk3578;
    std::string _ca_county3585;
};
void SW_JOIN_INNER_TD_673095(Table &tbl_JOIN_INNER_TD_7769739_output, Table &tbl_Filter_TD_7409783_output, Table &tbl_JOIN_INNER_TD_673095_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#736 = ca_address_sk#3578))
    // Left Table: ListBuffer(ws_bill_addr_sk#736, ws_ext_sales_price#752, d_year#3556, d_qoy#3560)
    // Right Table: ListBuffer(ca_address_sk#3578, ca_county#3585)
    // Output Table: ListBuffer(ws_ext_sales_price#752, d_year#3556, d_qoy#3560, ca_county#3585)
    int left_nrow = tbl_JOIN_INNER_TD_7769739_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7409783_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_673095_key_leftMajor, SW_JOIN_INNER_TD_673095_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7769739_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_673095_key_leftMajor keyA{_ws_bill_addr_sk736_k};
            int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 0);
            int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7769739_output.getInt64(i, 1);
            int32_t _d_year3556 = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 2);
            int32_t _d_qoy3560 = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_673095_payload_leftMajor payloadA{_ws_bill_addr_sk736, _ws_ext_sales_price752, _d_year3556, _d_qoy3560};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7409783_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk3578_k = tbl_Filter_TD_7409783_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_673095_key_leftMajor{_ca_address_sk3578_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int64_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _d_year3556 = (it->second)._d_year3556;
                int32_t _d_qoy3560 = (it->second)._d_qoy3560;
                int32_t _ca_address_sk3578 = tbl_Filter_TD_7409783_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_Filter_TD_7409783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county3585 = std::string(_ca_county3585_n.data());
                tbl_JOIN_INNER_TD_673095_output.setInt64(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_673095_output.setInt32(r, 1, _d_year3556);
                tbl_JOIN_INNER_TD_673095_output.setInt32(r, 2, _d_qoy3560);
                tbl_JOIN_INNER_TD_673095_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county3585_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_673095_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_673095_key_rightMajor, SW_JOIN_INNER_TD_673095_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7409783_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk3578_k = tbl_Filter_TD_7409783_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_673095_key_rightMajor keyA{_ca_address_sk3578_k};
            int32_t _ca_address_sk3578 = tbl_Filter_TD_7409783_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_Filter_TD_7409783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county3585 = std::string(_ca_county3585_n.data());
            SW_JOIN_INNER_TD_673095_payload_rightMajor payloadA{_ca_address_sk3578, _ca_county3585};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7769739_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_673095_key_rightMajor{_ws_bill_addr_sk736_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk3578 = (it->second)._ca_address_sk3578;
                std::string _ca_county3585 = (it->second)._ca_county3585;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n{};
                memcpy(_ca_county3585_n.data(), (_ca_county3585).data(), (_ca_county3585).length());
                int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 0);
                int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7769739_output.getInt64(i, 1);
                int32_t _d_year3556 = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 2);
                int32_t _d_qoy3560 = tbl_JOIN_INNER_TD_7769739_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_673095_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county3585_n);
                tbl_JOIN_INNER_TD_673095_output.setInt64(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_673095_output.setInt32(r, 1, _d_year3556);
                tbl_JOIN_INNER_TD_673095_output.setInt32(r, 2, _d_qoy3560);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_673095_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_673095_output #Row: " << tbl_JOIN_INNER_TD_673095_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_626149_key {
    std::string _ca_county4417;
    int32_t _d_qoy4392;
    int32_t _d_year4388;
    bool operator==(const SW_Aggregate_TD_626149_key& other) const { return (_ca_county4417 == other._ca_county4417) && (_d_qoy4392 == other._d_qoy4392) && (_d_year4388 == other._d_year4388); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_626149_key> {
    std::size_t operator() (const SW_Aggregate_TD_626149_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4417)) + (hash<int32_t>()(k._d_qoy4392)) + (hash<int32_t>()(k._d_year4388));
    }
};
}
struct SW_Aggregate_TD_626149_payload {
    int64_t _store_sales3600_sum_0;
};
void SW_Aggregate_TD_626149(Table &tbl_JOIN_INNER_TD_7976974_output, Table &tbl_Aggregate_TD_626149_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#4417, d_qoy#4392, d_year#4388, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#4374)),17,2) AS store_sales#3600)
    // Input: ListBuffer(ss_ext_sales_price#4374, d_year#4388, d_qoy#4392, ca_county#4417)
    // Output: ListBuffer(ca_county#4417, store_sales#3600)
    std::unordered_map<SW_Aggregate_TD_626149_key, SW_Aggregate_TD_626149_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7976974_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price4374 = tbl_JOIN_INNER_TD_7976974_output.getInt64(i, 0);
        int32_t _d_year4388 = tbl_JOIN_INNER_TD_7976974_output.getInt32(i, 1);
        int32_t _d_qoy4392 = tbl_JOIN_INNER_TD_7976974_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4417 = tbl_JOIN_INNER_TD_7976974_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_626149_key k{std::string(_ca_county4417.data()), _d_qoy4392, _d_year4388};
        int64_t _store_sales3600_sum_0 = _ss_ext_sales_price4374;
        SW_Aggregate_TD_626149_payload p{_store_sales3600_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._store_sales3600_sum_0 + _store_sales3600_sum_0;
            p._store_sales3600_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4417{};
        memcpy(_ca_county4417.data(), ((it.first)._ca_county4417).data(), ((it.first)._ca_county4417).length());
        tbl_Aggregate_TD_626149_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county4417);
        // _d_qoy4392 not required in the output table
        // _d_year4388 not required in the output table
        int64_t _store_sales3600 = (it.second)._store_sales3600_sum_0;
        tbl_Aggregate_TD_626149_output.setInt64(r, 1, _store_sales3600);
        ++r;
    }
    tbl_Aggregate_TD_626149_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_626149_output #Row: " << tbl_Aggregate_TD_626149_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6718635_key_leftMajor {
    std::string _ca_county61;
    bool operator==(const SW_JOIN_INNER_TD_6718635_key_leftMajor& other) const {
        return ((_ca_county61 == other._ca_county61));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6718635_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6718635_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61));
    }
};
}
struct SW_JOIN_INNER_TD_6718635_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int64_t _store_sales3548;
};
struct SW_JOIN_INNER_TD_6718635_key_rightMajor {
    std::string _ca_county4352;
    bool operator==(const SW_JOIN_INNER_TD_6718635_key_rightMajor& other) const {
        return ((_ca_county4352 == other._ca_county4352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6718635_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6718635_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4352));
    }
};
}
struct SW_JOIN_INNER_TD_6718635_payload_rightMajor {
    std::string _ca_county4352;
    int64_t _store_sales3596;
};
void SW_JOIN_INNER_TD_6718635(Table &tbl_Aggregate_TD_715884_output, Table &tbl_Aggregate_TD_7696336_output, Table &tbl_JOIN_INNER_TD_6718635_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_county#61 = ca_county#4352))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548)
    // Right Table: ListBuffer(ca_county#4352, store_sales#3596)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, ca_county#4352, store_sales#3596)
    int left_nrow = tbl_Aggregate_TD_715884_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_7696336_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6718635_key_leftMajor, SW_JOIN_INNER_TD_6718635_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_715884_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_Aggregate_TD_715884_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            SW_JOIN_INNER_TD_6718635_key_leftMajor keyA{_ca_county61_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Aggregate_TD_715884_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_Aggregate_TD_715884_output.getInt32(i, 1);
            int64_t _store_sales3548 = tbl_Aggregate_TD_715884_output.getInt64(i, 2);
            SW_JOIN_INNER_TD_6718635_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales3548};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_7696336_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_k_n = tbl_Aggregate_TD_7696336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4352_k = std::string(_ca_county4352_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6718635_key_leftMajor{_ca_county4352_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int64_t _store_sales3548 = (it->second)._store_sales3548;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n = tbl_Aggregate_TD_7696336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county4352 = std::string(_ca_county4352_n.data());
                int64_t _store_sales3596 = tbl_Aggregate_TD_7696336_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_6718635_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_6718635_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6718635_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_6718635_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4352_n);
                tbl_JOIN_INNER_TD_6718635_output.setInt64(r, 4, _store_sales3596);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6718635_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6718635_key_rightMajor, SW_JOIN_INNER_TD_6718635_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_7696336_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_k_n = tbl_Aggregate_TD_7696336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4352_k = std::string(_ca_county4352_k_n.data());
            SW_JOIN_INNER_TD_6718635_key_rightMajor keyA{_ca_county4352_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n = tbl_Aggregate_TD_7696336_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4352 = std::string(_ca_county4352_n.data());
            int64_t _store_sales3596 = tbl_Aggregate_TD_7696336_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_6718635_payload_rightMajor payloadA{_ca_county4352, _store_sales3596};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_715884_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_Aggregate_TD_715884_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6718635_key_rightMajor{_ca_county61_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county4352 = (it->second)._ca_county4352;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n{};
                memcpy(_ca_county4352_n.data(), (_ca_county4352).data(), (_ca_county4352).length());
                int64_t _store_sales3596 = (it->second)._store_sales3596;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Aggregate_TD_715884_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_Aggregate_TD_715884_output.getInt32(i, 1);
                int64_t _store_sales3548 = tbl_Aggregate_TD_715884_output.getInt64(i, 2);
                tbl_JOIN_INNER_TD_6718635_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4352_n);
                tbl_JOIN_INNER_TD_6718635_output.setInt64(r, 4, _store_sales3596);
                tbl_JOIN_INNER_TD_6718635_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_6718635_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6718635_output.setInt64(r, 2, _store_sales3548);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6718635_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6718635_output #Row: " << tbl_JOIN_INNER_TD_6718635_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5786904(Table &tbl_SerializeFromObject_TD_6168328_input, Table &tbl_Filter_TD_5786904_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#4562) AND isnotnull(ca_county#4569)))
    // Input: ListBuffer(ca_address_sk#4562, ca_county#4569)
    // Output: ListBuffer(ca_address_sk#4562, ca_county#4569)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6168328_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk4562 = tbl_SerializeFromObject_TD_6168328_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4569 = tbl_SerializeFromObject_TD_6168328_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk4562!= 0) && (std::string(_ca_county4569.data()) != "NULL")) {
            int32_t _ca_address_sk4562_t = tbl_SerializeFromObject_TD_6168328_input.getInt32(i, 0);
            tbl_Filter_TD_5786904_output.setInt32(r, 0, _ca_address_sk4562_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_t = tbl_SerializeFromObject_TD_6168328_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5786904_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county4569_t);
            r++;
        }
    }
    tbl_Filter_TD_5786904_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5786904_output #Row: " << tbl_Filter_TD_5786904_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_5266001_key_leftMajor {
    int32_t _ws_bill_addr_sk4431;
    bool operator==(const SW_JOIN_INNER_TD_5266001_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk4431 == other._ws_bill_addr_sk4431));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5266001_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5266001_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk4431));
    }
};
}
struct SW_JOIN_INNER_TD_5266001_payload_leftMajor {
    int32_t _ws_bill_addr_sk4431;
    int64_t _ws_ext_sales_price4447;
    int32_t _d_year4464;
    int32_t _d_qoy4468;
};
struct SW_JOIN_INNER_TD_5266001_key_rightMajor {
    int32_t _ca_address_sk4486;
    bool operator==(const SW_JOIN_INNER_TD_5266001_key_rightMajor& other) const {
        return ((_ca_address_sk4486 == other._ca_address_sk4486));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5266001_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5266001_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4486));
    }
};
}
struct SW_JOIN_INNER_TD_5266001_payload_rightMajor {
    int32_t _ca_address_sk4486;
    std::string _ca_county4493;
};
void SW_JOIN_INNER_TD_5266001(Table &tbl_JOIN_INNER_TD_6872948_output, Table &tbl_Filter_TD_6989288_output, Table &tbl_JOIN_INNER_TD_5266001_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#4431 = ca_address_sk#4486))
    // Left Table: ListBuffer(ws_bill_addr_sk#4431, ws_ext_sales_price#4447, d_year#4464, d_qoy#4468)
    // Right Table: ListBuffer(ca_address_sk#4486, ca_county#4493)
    // Output Table: ListBuffer(ws_ext_sales_price#4447, d_year#4464, d_qoy#4468, ca_county#4493)
    int left_nrow = tbl_JOIN_INNER_TD_6872948_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6989288_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5266001_key_leftMajor, SW_JOIN_INNER_TD_5266001_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6872948_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk4431_k = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5266001_key_leftMajor keyA{_ws_bill_addr_sk4431_k};
            int32_t _ws_bill_addr_sk4431 = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 0);
            int64_t _ws_ext_sales_price4447 = tbl_JOIN_INNER_TD_6872948_output.getInt64(i, 1);
            int32_t _d_year4464 = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 2);
            int32_t _d_qoy4468 = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5266001_payload_leftMajor payloadA{_ws_bill_addr_sk4431, _ws_ext_sales_price4447, _d_year4464, _d_qoy4468};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6989288_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4486_k = tbl_Filter_TD_6989288_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5266001_key_leftMajor{_ca_address_sk4486_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_addr_sk4431 = (it->second)._ws_bill_addr_sk4431;
                int64_t _ws_ext_sales_price4447 = (it->second)._ws_ext_sales_price4447;
                int32_t _d_year4464 = (it->second)._d_year4464;
                int32_t _d_qoy4468 = (it->second)._d_qoy4468;
                int32_t _ca_address_sk4486 = tbl_Filter_TD_6989288_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_n = tbl_Filter_TD_6989288_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county4493 = std::string(_ca_county4493_n.data());
                tbl_JOIN_INNER_TD_5266001_output.setInt64(r, 0, _ws_ext_sales_price4447);
                tbl_JOIN_INNER_TD_5266001_output.setInt32(r, 1, _d_year4464);
                tbl_JOIN_INNER_TD_5266001_output.setInt32(r, 2, _d_qoy4468);
                tbl_JOIN_INNER_TD_5266001_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4493_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5266001_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5266001_key_rightMajor, SW_JOIN_INNER_TD_5266001_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6989288_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4486_k = tbl_Filter_TD_6989288_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5266001_key_rightMajor keyA{_ca_address_sk4486_k};
            int32_t _ca_address_sk4486 = tbl_Filter_TD_6989288_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_n = tbl_Filter_TD_6989288_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county4493 = std::string(_ca_county4493_n.data());
            SW_JOIN_INNER_TD_5266001_payload_rightMajor payloadA{_ca_address_sk4486, _ca_county4493};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6872948_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk4431_k = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5266001_key_rightMajor{_ws_bill_addr_sk4431_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4486 = (it->second)._ca_address_sk4486;
                std::string _ca_county4493 = (it->second)._ca_county4493;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_n{};
                memcpy(_ca_county4493_n.data(), (_ca_county4493).data(), (_ca_county4493).length());
                int32_t _ws_bill_addr_sk4431 = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 0);
                int64_t _ws_ext_sales_price4447 = tbl_JOIN_INNER_TD_6872948_output.getInt64(i, 1);
                int32_t _d_year4464 = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 2);
                int32_t _d_qoy4468 = tbl_JOIN_INNER_TD_6872948_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_5266001_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4493_n);
                tbl_JOIN_INNER_TD_5266001_output.setInt64(r, 0, _ws_ext_sales_price4447);
                tbl_JOIN_INNER_TD_5266001_output.setInt32(r, 1, _d_year4464);
                tbl_JOIN_INNER_TD_5266001_output.setInt32(r, 2, _d_qoy4468);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5266001_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5266001_output #Row: " << tbl_JOIN_INNER_TD_5266001_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5743181_key {
    std::string _ca_county3585;
    int32_t _d_qoy3560;
    int32_t _d_year3556;
    bool operator==(const SW_Aggregate_TD_5743181_key& other) const { return (_ca_county3585 == other._ca_county3585) && (_d_qoy3560 == other._d_qoy3560) && (_d_year3556 == other._d_year3556); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5743181_key> {
    std::size_t operator() (const SW_Aggregate_TD_5743181_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county3585)) + (hash<int32_t>()(k._d_qoy3560)) + (hash<int32_t>()(k._d_year3556));
    }
};
}
struct SW_Aggregate_TD_5743181_payload {
    int64_t _web_sales3549_sum_0;
};
void SW_Aggregate_TD_5743181(Table &tbl_JOIN_INNER_TD_673095_output, Table &tbl_Aggregate_TD_5743181_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#3585, d_qoy#3560, d_year#3556, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS web_sales#3549)
    // Input: ListBuffer(ws_ext_sales_price#752, d_year#3556, d_qoy#3560, ca_county#3585)
    // Output: ListBuffer(ca_county#3585, web_sales#3549)
    std::unordered_map<SW_Aggregate_TD_5743181_key, SW_Aggregate_TD_5743181_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_673095_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_673095_output.getInt64(i, 0);
        int32_t _d_year3556 = tbl_JOIN_INNER_TD_673095_output.getInt32(i, 1);
        int32_t _d_qoy3560 = tbl_JOIN_INNER_TD_673095_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3585 = tbl_JOIN_INNER_TD_673095_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_5743181_key k{std::string(_ca_county3585.data()), _d_qoy3560, _d_year3556};
        int64_t _web_sales3549_sum_0 = _ws_ext_sales_price752;
        SW_Aggregate_TD_5743181_payload p{_web_sales3549_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._web_sales3549_sum_0 + _web_sales3549_sum_0;
            p._web_sales3549_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county3585{};
        memcpy(_ca_county3585.data(), ((it.first)._ca_county3585).data(), ((it.first)._ca_county3585).length());
        tbl_Aggregate_TD_5743181_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county3585);
        // _d_qoy3560 not required in the output table
        // _d_year3556 not required in the output table
        int64_t _web_sales3549 = (it.second)._web_sales3549_sum_0;
        tbl_Aggregate_TD_5743181_output.setInt64(r, 1, _web_sales3549);
        ++r;
    }
    tbl_Aggregate_TD_5743181_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5743181_output #Row: " << tbl_Aggregate_TD_5743181_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5135323_key_leftMajor {
    std::string _ca_county4352;
    bool operator==(const SW_JOIN_INNER_TD_5135323_key_leftMajor& other) const {
        return ((_ca_county4352 == other._ca_county4352));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5135323_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5135323_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4352));
    }
};
}
struct SW_JOIN_INNER_TD_5135323_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int64_t _store_sales3548;
    std::string _ca_county4352;
    int64_t _store_sales3596;
};
struct SW_JOIN_INNER_TD_5135323_key_rightMajor {
    std::string _ca_county4417;
    bool operator==(const SW_JOIN_INNER_TD_5135323_key_rightMajor& other) const {
        return ((_ca_county4417 == other._ca_county4417));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5135323_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5135323_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4417));
    }
};
}
struct SW_JOIN_INNER_TD_5135323_payload_rightMajor {
    std::string _ca_county4417;
    int64_t _store_sales3600;
};
void SW_JOIN_INNER_TD_5135323(Table &tbl_JOIN_INNER_TD_6718635_output, Table &tbl_Aggregate_TD_626149_output, Table &tbl_JOIN_INNER_TD_5135323_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_county#4352 = ca_county#4417))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, ca_county#4352, store_sales#3596)
    // Right Table: ListBuffer(ca_county#4417, store_sales#3600)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, store_sales#3596, store_sales#3600)
    int left_nrow = tbl_JOIN_INNER_TD_6718635_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_626149_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5135323_key_leftMajor, SW_JOIN_INNER_TD_5135323_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6718635_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_k_n = tbl_JOIN_INNER_TD_6718635_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county4352_k = std::string(_ca_county4352_k_n.data());
            SW_JOIN_INNER_TD_5135323_key_leftMajor keyA{_ca_county4352_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_6718635_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_6718635_output.getInt32(i, 1);
            int64_t _store_sales3548 = tbl_JOIN_INNER_TD_6718635_output.getInt64(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n = tbl_JOIN_INNER_TD_6718635_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county4352 = std::string(_ca_county4352_n.data());
            int64_t _store_sales3596 = tbl_JOIN_INNER_TD_6718635_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_5135323_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales3548, _ca_county4352, _store_sales3596};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_626149_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_k_n = tbl_Aggregate_TD_626149_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4417_k = std::string(_ca_county4417_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5135323_key_leftMajor{_ca_county4417_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int64_t _store_sales3548 = (it->second)._store_sales3548;
                std::string _ca_county4352 = (it->second)._ca_county4352;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n{};
                memcpy(_ca_county4352_n.data(), (_ca_county4352).data(), (_ca_county4352).length());
                int64_t _store_sales3596 = (it->second)._store_sales3596;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_n = tbl_Aggregate_TD_626149_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county4417 = std::string(_ca_county4417_n.data());
                int64_t _store_sales3600 = tbl_Aggregate_TD_626149_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5135323_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_5135323_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_5135323_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_5135323_output.setInt64(r, 3, _store_sales3596);
                tbl_JOIN_INNER_TD_5135323_output.setInt64(r, 4, _store_sales3600);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5135323_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5135323_key_rightMajor, SW_JOIN_INNER_TD_5135323_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_626149_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_k_n = tbl_Aggregate_TD_626149_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4417_k = std::string(_ca_county4417_k_n.data());
            SW_JOIN_INNER_TD_5135323_key_rightMajor keyA{_ca_county4417_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_n = tbl_Aggregate_TD_626149_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4417 = std::string(_ca_county4417_n.data());
            int64_t _store_sales3600 = tbl_Aggregate_TD_626149_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5135323_payload_rightMajor payloadA{_ca_county4417, _store_sales3600};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6718635_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_k_n = tbl_JOIN_INNER_TD_6718635_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county4352_k = std::string(_ca_county4352_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5135323_key_rightMajor{_ca_county4352_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county4417 = (it->second)._ca_county4417;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4417_n{};
                memcpy(_ca_county4417_n.data(), (_ca_county4417).data(), (_ca_county4417).length());
                int64_t _store_sales3600 = (it->second)._store_sales3600;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_6718635_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_6718635_output.getInt32(i, 1);
                int64_t _store_sales3548 = tbl_JOIN_INNER_TD_6718635_output.getInt64(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4352_n = tbl_JOIN_INNER_TD_6718635_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_county4352 = std::string(_ca_county4352_n.data());
                int64_t _store_sales3596 = tbl_JOIN_INNER_TD_6718635_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_5135323_output.setInt64(r, 4, _store_sales3600);
                tbl_JOIN_INNER_TD_5135323_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_5135323_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_5135323_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_5135323_output.setInt64(r, 3, _store_sales3596);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5135323_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5135323_output #Row: " << tbl_JOIN_INNER_TD_5135323_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4795854_key_leftMajor {
    int32_t _ws_bill_addr_sk4507;
    bool operator==(const SW_JOIN_INNER_TD_4795854_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk4507 == other._ws_bill_addr_sk4507));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4795854_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4795854_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk4507));
    }
};
}
struct SW_JOIN_INNER_TD_4795854_payload_leftMajor {
    int32_t _ws_bill_addr_sk4507;
    int64_t _ws_ext_sales_price4523;
    int32_t _d_year4540;
    int32_t _d_qoy4544;
};
struct SW_JOIN_INNER_TD_4795854_key_rightMajor {
    int32_t _ca_address_sk4562;
    bool operator==(const SW_JOIN_INNER_TD_4795854_key_rightMajor& other) const {
        return ((_ca_address_sk4562 == other._ca_address_sk4562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4795854_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4795854_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4562));
    }
};
}
struct SW_JOIN_INNER_TD_4795854_payload_rightMajor {
    int32_t _ca_address_sk4562;
    std::string _ca_county4569;
};
void SW_JOIN_INNER_TD_4795854(Table &tbl_JOIN_INNER_TD_5372260_output, Table &tbl_Filter_TD_5786904_output, Table &tbl_JOIN_INNER_TD_4795854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#4507 = ca_address_sk#4562))
    // Left Table: ListBuffer(ws_bill_addr_sk#4507, ws_ext_sales_price#4523, d_year#4540, d_qoy#4544)
    // Right Table: ListBuffer(ca_address_sk#4562, ca_county#4569)
    // Output Table: ListBuffer(ws_ext_sales_price#4523, d_year#4540, d_qoy#4544, ca_county#4569)
    int left_nrow = tbl_JOIN_INNER_TD_5372260_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5786904_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4795854_key_leftMajor, SW_JOIN_INNER_TD_4795854_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5372260_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk4507_k = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4795854_key_leftMajor keyA{_ws_bill_addr_sk4507_k};
            int32_t _ws_bill_addr_sk4507 = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 0);
            int64_t _ws_ext_sales_price4523 = tbl_JOIN_INNER_TD_5372260_output.getInt64(i, 1);
            int32_t _d_year4540 = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 2);
            int32_t _d_qoy4544 = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4795854_payload_leftMajor payloadA{_ws_bill_addr_sk4507, _ws_ext_sales_price4523, _d_year4540, _d_qoy4544};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5786904_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4562_k = tbl_Filter_TD_5786904_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4795854_key_leftMajor{_ca_address_sk4562_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_addr_sk4507 = (it->second)._ws_bill_addr_sk4507;
                int64_t _ws_ext_sales_price4523 = (it->second)._ws_ext_sales_price4523;
                int32_t _d_year4540 = (it->second)._d_year4540;
                int32_t _d_qoy4544 = (it->second)._d_qoy4544;
                int32_t _ca_address_sk4562 = tbl_Filter_TD_5786904_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_n = tbl_Filter_TD_5786904_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county4569 = std::string(_ca_county4569_n.data());
                tbl_JOIN_INNER_TD_4795854_output.setInt64(r, 0, _ws_ext_sales_price4523);
                tbl_JOIN_INNER_TD_4795854_output.setInt32(r, 1, _d_year4540);
                tbl_JOIN_INNER_TD_4795854_output.setInt32(r, 2, _d_qoy4544);
                tbl_JOIN_INNER_TD_4795854_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4569_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4795854_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4795854_key_rightMajor, SW_JOIN_INNER_TD_4795854_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5786904_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4562_k = tbl_Filter_TD_5786904_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4795854_key_rightMajor keyA{_ca_address_sk4562_k};
            int32_t _ca_address_sk4562 = tbl_Filter_TD_5786904_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_n = tbl_Filter_TD_5786904_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county4569 = std::string(_ca_county4569_n.data());
            SW_JOIN_INNER_TD_4795854_payload_rightMajor payloadA{_ca_address_sk4562, _ca_county4569};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5372260_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk4507_k = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4795854_key_rightMajor{_ws_bill_addr_sk4507_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4562 = (it->second)._ca_address_sk4562;
                std::string _ca_county4569 = (it->second)._ca_county4569;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_n{};
                memcpy(_ca_county4569_n.data(), (_ca_county4569).data(), (_ca_county4569).length());
                int32_t _ws_bill_addr_sk4507 = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 0);
                int64_t _ws_ext_sales_price4523 = tbl_JOIN_INNER_TD_5372260_output.getInt64(i, 1);
                int32_t _d_year4540 = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 2);
                int32_t _d_qoy4544 = tbl_JOIN_INNER_TD_5372260_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4795854_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county4569_n);
                tbl_JOIN_INNER_TD_4795854_output.setInt64(r, 0, _ws_ext_sales_price4523);
                tbl_JOIN_INNER_TD_4795854_output.setInt32(r, 1, _d_year4540);
                tbl_JOIN_INNER_TD_4795854_output.setInt32(r, 2, _d_qoy4544);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4795854_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4795854_output #Row: " << tbl_JOIN_INNER_TD_4795854_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_43723_key {
    std::string _ca_county4493;
    int32_t _d_qoy4468;
    int32_t _d_year4464;
    bool operator==(const SW_Aggregate_TD_43723_key& other) const { return (_ca_county4493 == other._ca_county4493) && (_d_qoy4468 == other._d_qoy4468) && (_d_year4464 == other._d_year4464); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_43723_key> {
    std::size_t operator() (const SW_Aggregate_TD_43723_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4493)) + (hash<int32_t>()(k._d_qoy4468)) + (hash<int32_t>()(k._d_year4464));
    }
};
}
struct SW_Aggregate_TD_43723_payload {
    int64_t _web_sales3604_sum_0;
};
void SW_Aggregate_TD_43723(Table &tbl_JOIN_INNER_TD_5266001_output, Table &tbl_Aggregate_TD_43723_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#4493, d_qoy#4468, d_year#4464, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#4447)),17,2) AS web_sales#3604)
    // Input: ListBuffer(ws_ext_sales_price#4447, d_year#4464, d_qoy#4468, ca_county#4493)
    // Output: ListBuffer(ca_county#4493, web_sales#3604)
    std::unordered_map<SW_Aggregate_TD_43723_key, SW_Aggregate_TD_43723_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5266001_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_ext_sales_price4447 = tbl_JOIN_INNER_TD_5266001_output.getInt64(i, 0);
        int32_t _d_year4464 = tbl_JOIN_INNER_TD_5266001_output.getInt32(i, 1);
        int32_t _d_qoy4468 = tbl_JOIN_INNER_TD_5266001_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4493 = tbl_JOIN_INNER_TD_5266001_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_43723_key k{std::string(_ca_county4493.data()), _d_qoy4468, _d_year4464};
        int64_t _web_sales3604_sum_0 = _ws_ext_sales_price4447;
        SW_Aggregate_TD_43723_payload p{_web_sales3604_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._web_sales3604_sum_0 + _web_sales3604_sum_0;
            p._web_sales3604_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4493{};
        memcpy(_ca_county4493.data(), ((it.first)._ca_county4493).data(), ((it.first)._ca_county4493).length());
        tbl_Aggregate_TD_43723_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county4493);
        // _d_qoy4468 not required in the output table
        // _d_year4464 not required in the output table
        int64_t _web_sales3604 = (it.second)._web_sales3604_sum_0;
        tbl_Aggregate_TD_43723_output.setInt64(r, 1, _web_sales3604);
        ++r;
    }
    tbl_Aggregate_TD_43723_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_43723_output #Row: " << tbl_Aggregate_TD_43723_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4134806_key_leftMajor {
    std::string _ca_county61;
    bool operator==(const SW_JOIN_INNER_TD_4134806_key_leftMajor& other) const {
        return ((_ca_county61 == other._ca_county61));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4134806_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4134806_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61));
    }
};
}
struct SW_JOIN_INNER_TD_4134806_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int64_t _store_sales3548;
    int64_t _store_sales3596;
    int64_t _store_sales3600;
};
struct SW_JOIN_INNER_TD_4134806_key_rightMajor {
    std::string _ca_county3585;
    bool operator==(const SW_JOIN_INNER_TD_4134806_key_rightMajor& other) const {
        return ((_ca_county3585 == other._ca_county3585));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4134806_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4134806_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county3585));
    }
};
}
struct SW_JOIN_INNER_TD_4134806_payload_rightMajor {
    std::string _ca_county3585;
    int64_t _web_sales3549;
};
void SW_JOIN_INNER_TD_4134806(Table &tbl_JOIN_INNER_TD_5135323_output, Table &tbl_Aggregate_TD_5743181_output, Table &tbl_JOIN_INNER_TD_4134806_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_county#61 = ca_county#3585))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, store_sales#3596, store_sales#3600)
    // Right Table: ListBuffer(ca_county#3585, web_sales#3549)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, store_sales#3596, store_sales#3600, ca_county#3585, web_sales#3549)
    int left_nrow = tbl_JOIN_INNER_TD_5135323_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5743181_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4134806_key_leftMajor, SW_JOIN_INNER_TD_4134806_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5135323_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_5135323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            SW_JOIN_INNER_TD_4134806_key_leftMajor keyA{_ca_county61_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_5135323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5135323_output.getInt32(i, 1);
            int64_t _store_sales3548 = tbl_JOIN_INNER_TD_5135323_output.getInt64(i, 2);
            int64_t _store_sales3596 = tbl_JOIN_INNER_TD_5135323_output.getInt64(i, 3);
            int64_t _store_sales3600 = tbl_JOIN_INNER_TD_5135323_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_4134806_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales3548, _store_sales3596, _store_sales3600};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5743181_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_k_n = tbl_Aggregate_TD_5743181_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county3585_k = std::string(_ca_county3585_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4134806_key_leftMajor{_ca_county3585_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int64_t _store_sales3548 = (it->second)._store_sales3548;
                int64_t _store_sales3596 = (it->second)._store_sales3596;
                int64_t _store_sales3600 = (it->second)._store_sales3600;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_Aggregate_TD_5743181_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county3585 = std::string(_ca_county3585_n.data());
                int64_t _web_sales3549 = tbl_Aggregate_TD_5743181_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_4134806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_4134806_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 3, _store_sales3596);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 4, _store_sales3600);
                tbl_JOIN_INNER_TD_4134806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county3585_n);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 6, _web_sales3549);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4134806_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4134806_key_rightMajor, SW_JOIN_INNER_TD_4134806_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5743181_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_k_n = tbl_Aggregate_TD_5743181_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county3585_k = std::string(_ca_county3585_k_n.data());
            SW_JOIN_INNER_TD_4134806_key_rightMajor keyA{_ca_county3585_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_Aggregate_TD_5743181_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county3585 = std::string(_ca_county3585_n.data());
            int64_t _web_sales3549 = tbl_Aggregate_TD_5743181_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_4134806_payload_rightMajor payloadA{_ca_county3585, _web_sales3549};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5135323_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_5135323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4134806_key_rightMajor{_ca_county61_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county3585 = (it->second)._ca_county3585;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n{};
                memcpy(_ca_county3585_n.data(), (_ca_county3585).data(), (_ca_county3585).length());
                int64_t _web_sales3549 = (it->second)._web_sales3549;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_5135323_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5135323_output.getInt32(i, 1);
                int64_t _store_sales3548 = tbl_JOIN_INNER_TD_5135323_output.getInt64(i, 2);
                int64_t _store_sales3596 = tbl_JOIN_INNER_TD_5135323_output.getInt64(i, 3);
                int64_t _store_sales3600 = tbl_JOIN_INNER_TD_5135323_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_4134806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county3585_n);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 6, _web_sales3549);
                tbl_JOIN_INNER_TD_4134806_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_4134806_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 3, _store_sales3596);
                tbl_JOIN_INNER_TD_4134806_output.setInt64(r, 4, _store_sales3600);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4134806_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4134806_output #Row: " << tbl_JOIN_INNER_TD_4134806_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3900201_key {
    std::string _ca_county4569;
    int32_t _d_qoy4544;
    int32_t _d_year4540;
    bool operator==(const SW_Aggregate_TD_3900201_key& other) const { return (_ca_county4569 == other._ca_county4569) && (_d_qoy4544 == other._d_qoy4544) && (_d_year4540 == other._d_year4540); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3900201_key> {
    std::size_t operator() (const SW_Aggregate_TD_3900201_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4569)) + (hash<int32_t>()(k._d_qoy4544)) + (hash<int32_t>()(k._d_year4540));
    }
};
}
struct SW_Aggregate_TD_3900201_payload {
    int64_t _web_sales3608_sum_0;
};
void SW_Aggregate_TD_3900201(Table &tbl_JOIN_INNER_TD_4795854_output, Table &tbl_Aggregate_TD_3900201_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#4569, d_qoy#4544, d_year#4540, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#4523)),17,2) AS web_sales#3608)
    // Input: ListBuffer(ws_ext_sales_price#4523, d_year#4540, d_qoy#4544, ca_county#4569)
    // Output: ListBuffer(ca_county#4569, web_sales#3608)
    std::unordered_map<SW_Aggregate_TD_3900201_key, SW_Aggregate_TD_3900201_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4795854_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_ext_sales_price4523 = tbl_JOIN_INNER_TD_4795854_output.getInt64(i, 0);
        int32_t _d_year4540 = tbl_JOIN_INNER_TD_4795854_output.getInt32(i, 1);
        int32_t _d_qoy4544 = tbl_JOIN_INNER_TD_4795854_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4569 = tbl_JOIN_INNER_TD_4795854_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_3900201_key k{std::string(_ca_county4569.data()), _d_qoy4544, _d_year4540};
        int64_t _web_sales3608_sum_0 = _ws_ext_sales_price4523;
        SW_Aggregate_TD_3900201_payload p{_web_sales3608_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._web_sales3608_sum_0 + _web_sales3608_sum_0;
            p._web_sales3608_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county4569{};
        memcpy(_ca_county4569.data(), ((it.first)._ca_county4569).data(), ((it.first)._ca_county4569).length());
        tbl_Aggregate_TD_3900201_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county4569);
        // _d_qoy4544 not required in the output table
        // _d_year4540 not required in the output table
        int64_t _web_sales3608 = (it.second)._web_sales3608_sum_0;
        tbl_Aggregate_TD_3900201_output.setInt64(r, 1, _web_sales3608);
        ++r;
    }
    tbl_Aggregate_TD_3900201_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3900201_output #Row: " << tbl_Aggregate_TD_3900201_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3851901_key_leftMajor {
    std::string _ca_county3585;
    bool operator==(const SW_JOIN_INNER_TD_3851901_key_leftMajor& other) const {
        return ((_ca_county3585 == other._ca_county3585));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3851901_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3851901_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county3585));
    }
};
}
struct SW_JOIN_INNER_TD_3851901_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int64_t _store_sales3548;
    int64_t _store_sales3596;
    int64_t _store_sales3600;
    std::string _ca_county3585;
    int64_t _web_sales3549;
};
struct SW_JOIN_INNER_TD_3851901_key_rightMajor {
    std::string _ca_county4493;
    bool operator==(const SW_JOIN_INNER_TD_3851901_key_rightMajor& other) const {
        return ((_ca_county4493 == other._ca_county4493));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3851901_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3851901_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4493));
    }
};
}
struct SW_JOIN_INNER_TD_3851901_payload_rightMajor {
    std::string _ca_county4493;
    int64_t _web_sales3604;
};
void SW_JOIN_INNER_TD_3851901(Table &tbl_JOIN_INNER_TD_4134806_output, Table &tbl_Aggregate_TD_43723_output, Table &tbl_JOIN_INNER_TD_3851901_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_county#3585 = ca_county#4493) AND (CASE WHEN (web_sales#3549 > 0.00) THEN CheckOverflow((promote_precision(web_sales#3604) / promote_precision(web_sales#3549)), DecimalType(37,20), true) END > CASE WHEN (store_sales#3548 > 0.00) THEN CheckOverflow((promote_precision(store_sales#3596) / promote_precision(store_sales#3548)), DecimalType(37,20), true) END)))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, store_sales#3596, store_sales#3600, ca_county#3585, web_sales#3549)
    // Right Table: ListBuffer(ca_county#4493, web_sales#3604)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, store_sales#3596, store_sales#3600, ca_county#3585, web_sales#3549, web_sales#3604)
    int left_nrow = tbl_JOIN_INNER_TD_4134806_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_43723_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3851901_key_leftMajor, SW_JOIN_INNER_TD_3851901_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4134806_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_k_n = tbl_JOIN_INNER_TD_4134806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county3585_k = std::string(_ca_county3585_k_n.data());
            SW_JOIN_INNER_TD_3851901_key_leftMajor keyA{_ca_county3585_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_4134806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_4134806_output.getInt32(i, 1);
            int64_t _store_sales3548 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 2);
            int64_t _store_sales3596 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 3);
            int64_t _store_sales3600 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_JOIN_INNER_TD_4134806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county3585 = std::string(_ca_county3585_n.data());
            int64_t _web_sales3549 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 6);
            SW_JOIN_INNER_TD_3851901_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales3548, _store_sales3596, _store_sales3600, _ca_county3585, _web_sales3549};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_43723_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_k_n = tbl_Aggregate_TD_43723_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4493_k = std::string(_ca_county4493_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3851901_key_leftMajor{_ca_county4493_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int64_t _store_sales3548 = (it->second)._store_sales3548;
                int64_t _store_sales3596 = (it->second)._store_sales3596;
                int64_t _store_sales3600 = (it->second)._store_sales3600;
                std::string _ca_county3585 = (it->second)._ca_county3585;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n{};
                memcpy(_ca_county3585_n.data(), (_ca_county3585).data(), (_ca_county3585).length());
                int64_t _web_sales3549 = (it->second)._web_sales3549;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_n = tbl_Aggregate_TD_43723_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county4493 = std::string(_ca_county4493_n.data());
                int64_t _web_sales3604 = tbl_Aggregate_TD_43723_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_3851901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_3851901_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 3, _store_sales3596);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 4, _store_sales3600);
                tbl_JOIN_INNER_TD_3851901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county3585_n);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 6, _web_sales3549);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 7, _web_sales3604);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3851901_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3851901_key_rightMajor, SW_JOIN_INNER_TD_3851901_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_43723_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_k_n = tbl_Aggregate_TD_43723_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4493_k = std::string(_ca_county4493_k_n.data());
            SW_JOIN_INNER_TD_3851901_key_rightMajor keyA{_ca_county4493_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_n = tbl_Aggregate_TD_43723_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4493 = std::string(_ca_county4493_n.data());
            int64_t _web_sales3604 = tbl_Aggregate_TD_43723_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_3851901_payload_rightMajor payloadA{_ca_county4493, _web_sales3604};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4134806_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_k_n = tbl_JOIN_INNER_TD_4134806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county3585_k = std::string(_ca_county3585_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3851901_key_rightMajor{_ca_county3585_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county4493 = (it->second)._ca_county4493;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4493_n{};
                memcpy(_ca_county4493_n.data(), (_ca_county4493).data(), (_ca_county4493).length());
                int64_t _web_sales3604 = (it->second)._web_sales3604;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_4134806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_4134806_output.getInt32(i, 1);
                int64_t _store_sales3548 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 2);
                int64_t _store_sales3596 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 3);
                int64_t _store_sales3600 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_JOIN_INNER_TD_4134806_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _ca_county3585 = std::string(_ca_county3585_n.data());
                int64_t _web_sales3549 = tbl_JOIN_INNER_TD_4134806_output.getInt64(i, 6);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 7, _web_sales3604);
                tbl_JOIN_INNER_TD_3851901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_3851901_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 2, _store_sales3548);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 3, _store_sales3596);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 4, _store_sales3600);
                tbl_JOIN_INNER_TD_3851901_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county3585_n);
                tbl_JOIN_INNER_TD_3851901_output.setInt64(r, 6, _web_sales3549);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3851901_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3851901_output #Row: " << tbl_JOIN_INNER_TD_3851901_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2324966_key_leftMajor {
    std::string _ca_county3585;
    bool operator==(const SW_JOIN_INNER_TD_2324966_key_leftMajor& other) const {
        return ((_ca_county3585 == other._ca_county3585));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2324966_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2324966_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county3585));
    }
};
}
struct SW_JOIN_INNER_TD_2324966_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int64_t _store_sales3548;
    int64_t _store_sales3596;
    int64_t _store_sales3600;
    std::string _ca_county3585;
    int64_t _web_sales3549;
    int64_t _web_sales3604;
};
struct SW_JOIN_INNER_TD_2324966_key_rightMajor {
    std::string _ca_county4569;
    bool operator==(const SW_JOIN_INNER_TD_2324966_key_rightMajor& other) const {
        return ((_ca_county4569 == other._ca_county4569));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2324966_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2324966_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county4569));
    }
};
}
struct SW_JOIN_INNER_TD_2324966_payload_rightMajor {
    std::string _ca_county4569;
    int64_t _web_sales3608;
};
void SW_JOIN_INNER_TD_2324966(Table &tbl_JOIN_INNER_TD_3851901_output, Table &tbl_Aggregate_TD_3900201_output, Table &tbl_JOIN_INNER_TD_2324966_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_county#3585 = ca_county#4569) AND (CASE WHEN (web_sales#3604 > 0.00) THEN CheckOverflow((promote_precision(web_sales#3608) / promote_precision(web_sales#3604)), DecimalType(37,20), true) END > CASE WHEN (store_sales#3596 > 0.00) THEN CheckOverflow((promote_precision(store_sales#3600) / promote_precision(store_sales#3596)), DecimalType(37,20), true) END)))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#3548, store_sales#3596, store_sales#3600, ca_county#3585, web_sales#3549, web_sales#3604)
    // Right Table: ListBuffer(ca_county#4569, web_sales#3608)
    // Output Table: ListBuffer(ca_county#61, d_year#126, web_sales#3604, web_sales#3549, store_sales#3596, store_sales#3548, web_sales#3608, store_sales#3600)
    int left_nrow = tbl_JOIN_INNER_TD_3851901_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3900201_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2324966_key_leftMajor, SW_JOIN_INNER_TD_2324966_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3851901_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_k_n = tbl_JOIN_INNER_TD_3851901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county3585_k = std::string(_ca_county3585_k_n.data());
            SW_JOIN_INNER_TD_2324966_key_leftMajor keyA{_ca_county3585_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_3851901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_3851901_output.getInt32(i, 1);
            int64_t _store_sales3548 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 2);
            int64_t _store_sales3596 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 3);
            int64_t _store_sales3600 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_JOIN_INNER_TD_3851901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county3585 = std::string(_ca_county3585_n.data());
            int64_t _web_sales3549 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 6);
            int64_t _web_sales3604 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 7);
            SW_JOIN_INNER_TD_2324966_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales3548, _store_sales3596, _store_sales3600, _ca_county3585, _web_sales3549, _web_sales3604};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_3900201_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_k_n = tbl_Aggregate_TD_3900201_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4569_k = std::string(_ca_county4569_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2324966_key_leftMajor{_ca_county4569_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int64_t _store_sales3548 = (it->second)._store_sales3548;
                int64_t _store_sales3596 = (it->second)._store_sales3596;
                int64_t _store_sales3600 = (it->second)._store_sales3600;
                std::string _ca_county3585 = (it->second)._ca_county3585;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n{};
                memcpy(_ca_county3585_n.data(), (_ca_county3585).data(), (_ca_county3585).length());
                int64_t _web_sales3549 = (it->second)._web_sales3549;
                int64_t _web_sales3604 = (it->second)._web_sales3604;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_n = tbl_Aggregate_TD_3900201_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county4569 = std::string(_ca_county4569_n.data());
                int64_t _web_sales3608 = tbl_Aggregate_TD_3900201_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_2324966_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_2324966_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 5, _store_sales3548);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 4, _store_sales3596);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 7, _store_sales3600);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 3, _web_sales3549);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 2, _web_sales3604);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 6, _web_sales3608);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2324966_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2324966_key_rightMajor, SW_JOIN_INNER_TD_2324966_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3900201_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_k_n = tbl_Aggregate_TD_3900201_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4569_k = std::string(_ca_county4569_k_n.data());
            SW_JOIN_INNER_TD_2324966_key_rightMajor keyA{_ca_county4569_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_n = tbl_Aggregate_TD_3900201_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county4569 = std::string(_ca_county4569_n.data());
            int64_t _web_sales3608 = tbl_Aggregate_TD_3900201_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_2324966_payload_rightMajor payloadA{_ca_county4569, _web_sales3608};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3851901_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_k_n = tbl_JOIN_INNER_TD_3851901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county3585_k = std::string(_ca_county3585_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2324966_key_rightMajor{_ca_county3585_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county4569 = (it->second)._ca_county4569;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county4569_n{};
                memcpy(_ca_county4569_n.data(), (_ca_county4569).data(), (_ca_county4569).length());
                int64_t _web_sales3608 = (it->second)._web_sales3608;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_3851901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_3851901_output.getInt32(i, 1);
                int64_t _store_sales3548 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 2);
                int64_t _store_sales3596 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 3);
                int64_t _store_sales3600 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county3585_n = tbl_JOIN_INNER_TD_3851901_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _ca_county3585 = std::string(_ca_county3585_n.data());
                int64_t _web_sales3549 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 6);
                int64_t _web_sales3604 = tbl_JOIN_INNER_TD_3851901_output.getInt64(i, 7);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 6, _web_sales3608);
                tbl_JOIN_INNER_TD_2324966_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_2324966_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 5, _store_sales3548);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 4, _store_sales3596);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 7, _store_sales3600);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 3, _web_sales3549);
                tbl_JOIN_INNER_TD_2324966_output.setInt64(r, 2, _web_sales3604);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2324966_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2324966_output #Row: " << tbl_JOIN_INNER_TD_2324966_output.getNumRow() << std::endl;
}

void SW_Project_TD_112864(Table &tbl_JOIN_INNER_TD_2324966_output, Table &tbl_Project_TD_112864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(web_sales#3604) / promote_precision(web_sales#3549)), DecimalType(37,20), true) AS web_q1_q2_increase#3544, CheckOverflow((promote_precision(store_sales#3596) / promote_precision(store_sales#3548)), DecimalType(37,20), true) AS store_q1_q2_increase#3545, CheckOverflow((promote_precision(web_sales#3608) / promote_precision(web_sales#3604)), DecimalType(37,20), true) AS web_q2_q3_increase#3546, CheckOverflow((promote_precision(store_sales#3600) / promote_precision(store_sales#3596)), DecimalType(37,20), true) AS store_q2_q3_increase#3547)
    // Input: ListBuffer(ca_county#61, d_year#126, web_sales#3604, web_sales#3549, store_sales#3596, store_sales#3548, web_sales#3608, store_sales#3600)
    // Output: ListBuffer(ca_county#61, d_year#126, web_q1_q2_increase#3544, store_q1_q2_increase#3545, web_q2_q3_increase#3546, store_q2_q3_increase#3547)
    int nrow1 = tbl_JOIN_INNER_TD_2324966_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_JOIN_INNER_TD_2324966_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_2324966_output.getInt32(i, 1);
        int64_t _web_sales3604 = tbl_JOIN_INNER_TD_2324966_output.getInt64(i, 2);
        int64_t _web_sales3549 = tbl_JOIN_INNER_TD_2324966_output.getInt64(i, 3);
        int64_t _store_sales3596 = tbl_JOIN_INNER_TD_2324966_output.getInt64(i, 4);
        int64_t _store_sales3548 = tbl_JOIN_INNER_TD_2324966_output.getInt64(i, 5);
        int64_t _web_sales3608 = tbl_JOIN_INNER_TD_2324966_output.getInt64(i, 6);
        int64_t _store_sales3600 = tbl_JOIN_INNER_TD_2324966_output.getInt64(i, 7);
        int64_t _web_q1_q2_increase3544 = (_web_sales3604 / _web_sales3549);
        tbl_Project_TD_112864_output.setInt64(i, 2, _web_q1_q2_increase3544);
        int64_t _store_q1_q2_increase3545 = (_store_sales3596 / _store_sales3548);
        tbl_Project_TD_112864_output.setInt64(i, 3, _store_q1_q2_increase3545);
        int64_t _web_q2_q3_increase3546 = (_web_sales3608 / _web_sales3604);
        tbl_Project_TD_112864_output.setInt64(i, 4, _web_q2_q3_increase3546);
        int64_t _store_q2_q3_increase3547 = (_store_sales3600 / _store_sales3596);
        tbl_Project_TD_112864_output.setInt64(i, 5, _store_q2_q3_increase3547);
        tbl_Project_TD_112864_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _ca_county61);
        tbl_Project_TD_112864_output.setInt32(i, 1, _d_year126);
    }
    tbl_Project_TD_112864_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_112864_output #Row: " << tbl_Project_TD_112864_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0714814(Table &tbl_Project_TD_112864_output, Table &tbl_Sort_TD_0714814_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ca_county#61 ASC NULLS FIRST)
    // Input: ListBuffer(ca_county#61, d_year#126, web_q1_q2_increase#3544, store_q1_q2_increase#3545, web_q2_q3_increase#3546, store_q2_q3_increase#3547)
    // Output: ListBuffer(ca_county#61, d_year#126, web_q1_q2_increase#3544, store_q1_q2_increase#3545, web_q2_q3_increase#3546, store_q2_q3_increase#3547)
    struct SW_Sort_TD_0714814Row {
        std::string _ca_county61;
        int32_t _d_year126;
        int64_t _web_q1_q2_increase3544;
        int64_t _store_q1_q2_increase3545;
        int64_t _web_q2_q3_increase3546;
        int64_t _store_q2_q3_increase3547;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0714814Row& a, const SW_Sort_TD_0714814Row& b) const { return 
 (a._ca_county61 < b._ca_county61); 
}
    }SW_Sort_TD_0714814_order; 

    int nrow1 = tbl_Project_TD_112864_output.getNumRow();
    std::vector<SW_Sort_TD_0714814Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_Project_TD_112864_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _d_year126 = tbl_Project_TD_112864_output.getInt32(i, 1);
        int64_t _web_q1_q2_increase3544 = tbl_Project_TD_112864_output.getInt64(i, 2);
        int64_t _store_q1_q2_increase3545 = tbl_Project_TD_112864_output.getInt64(i, 3);
        int64_t _web_q2_q3_increase3546 = tbl_Project_TD_112864_output.getInt64(i, 4);
        int64_t _store_q2_q3_increase3547 = tbl_Project_TD_112864_output.getInt64(i, 5);
        SW_Sort_TD_0714814Row t = {std::string(_ca_county61.data()),_d_year126,_web_q1_q2_increase3544,_store_q1_q2_increase3545,_web_q2_q3_increase3546,_store_q2_q3_increase3547};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0714814_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61{};
        memcpy(_ca_county61.data(), (it._ca_county61).data(), (it._ca_county61).length());
        tbl_Sort_TD_0714814_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _ca_county61);
        tbl_Sort_TD_0714814_output.setInt32(r, 1, it._d_year126);
        tbl_Sort_TD_0714814_output.setInt64(r, 2, it._web_q1_q2_increase3544);
        tbl_Sort_TD_0714814_output.setInt64(r, 3, it._store_q1_q2_increase3545);
        tbl_Sort_TD_0714814_output.setInt64(r, 4, it._web_q2_q3_increase3546);
        tbl_Sort_TD_0714814_output.setInt64(r, 5, it._store_q2_q3_increase3547);
        if (r < 10) {
            std::cout << (it._ca_county61).data() << " " << it._d_year126 << " " << it._web_q1_q2_increase3544 << " " << it._store_q1_q2_increase3545 << " " << it._web_q2_q3_increase3546 << " " << it._store_q2_q3_increase3547 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0714814_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0714814_output #Row: " << tbl_Sort_TD_0714814_output.getNumRow() << std::endl;
}

