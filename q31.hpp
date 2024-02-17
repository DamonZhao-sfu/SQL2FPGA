#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_10650(Table &tbl_SerializeFromObject_TD_11265_input, Table &tbl_Filter_TD_10650_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#6026) AND isnotnull(d_year#6022)) AND ((d_qoy#6026 = 2) AND (d_year#6022 = 2000))) AND isnotnull(d_date_sk#6016)))
    // Input: ListBuffer(d_date_sk#6016, d_year#6022, d_qoy#6026)
    // Output: ListBuffer(d_date_sk#6016, d_year#6022, d_qoy#6026)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11265_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy6026 = tbl_SerializeFromObject_TD_11265_input.getInt32(i, 2);
        int32_t _d_year6022 = tbl_SerializeFromObject_TD_11265_input.getInt32(i, 1);
        int32_t _d_date_sk6016 = tbl_SerializeFromObject_TD_11265_input.getInt32(i, 0);
        if ((((_d_qoy6026!= 0) && (_d_year6022!= 0)) && ((_d_qoy6026 == 2) && (_d_year6022 == 2000))) && (_d_date_sk6016!= 0)) {
            int32_t _d_date_sk6016_t = tbl_SerializeFromObject_TD_11265_input.getInt32(i, 0);
            tbl_Filter_TD_10650_output.setInt32(r, 0, _d_date_sk6016_t);
            int32_t _d_year6022_t = tbl_SerializeFromObject_TD_11265_input.getInt32(i, 1);
            tbl_Filter_TD_10650_output.setInt32(r, 1, _d_year6022_t);
            int32_t _d_qoy6026_t = tbl_SerializeFromObject_TD_11265_input.getInt32(i, 2);
            tbl_Filter_TD_10650_output.setInt32(r, 2, _d_qoy6026_t);
            r++;
        }
    }
    tbl_Filter_TD_10650_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10650_output #Row: " << tbl_Filter_TD_10650_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10556(Table &tbl_SerializeFromObject_TD_11359_input, Table &tbl_Filter_TD_10556_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#5993) AND isnotnull(ss_addr_sk#5999)))
    // Input: ListBuffer(ss_sold_date_sk#5993, ss_addr_sk#5999, ss_ext_sales_price#6008)
    // Output: ListBuffer(ss_sold_date_sk#5993, ss_addr_sk#5999, ss_ext_sales_price#6008)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11359_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk5993 = tbl_SerializeFromObject_TD_11359_input.getInt32(i, 0);
        int32_t _ss_addr_sk5999 = tbl_SerializeFromObject_TD_11359_input.getInt32(i, 1);
        if ((_ss_sold_date_sk5993!= 0) && (_ss_addr_sk5999!= 0)) {
            int32_t _ss_sold_date_sk5993_t = tbl_SerializeFromObject_TD_11359_input.getInt32(i, 0);
            tbl_Filter_TD_10556_output.setInt32(r, 0, _ss_sold_date_sk5993_t);
            int32_t _ss_addr_sk5999_t = tbl_SerializeFromObject_TD_11359_input.getInt32(i, 1);
            tbl_Filter_TD_10556_output.setInt32(r, 1, _ss_addr_sk5999_t);
            int32_t _ss_ext_sales_price6008_t = tbl_SerializeFromObject_TD_11359_input.getInt32(i, 2);
            tbl_Filter_TD_10556_output.setInt32(r, 2, _ss_ext_sales_price6008_t);
            r++;
        }
    }
    tbl_Filter_TD_10556_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10556_output #Row: " << tbl_Filter_TD_10556_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10709(Table &tbl_SerializeFromObject_TD_11348_input, Table &tbl_Filter_TD_10709_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#130) AND isnotnull(d_year#126)) AND ((d_qoy#130 = 1) AND (d_year#126 = 2000))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11348_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy130 = tbl_SerializeFromObject_TD_11348_input.getInt32(i, 2);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_11348_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_11348_input.getInt32(i, 0);
        if ((((_d_qoy130!= 0) && (_d_year126!= 0)) && ((_d_qoy130 == 1) && (_d_year126 == 2000))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_11348_input.getInt32(i, 0);
            tbl_Filter_TD_10709_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_11348_input.getInt32(i, 1);
            tbl_Filter_TD_10709_output.setInt32(r, 1, _d_year126_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_11348_input.getInt32(i, 2);
            tbl_Filter_TD_10709_output.setInt32(r, 2, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_10709_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10709_output #Row: " << tbl_Filter_TD_10709_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10302(Table &tbl_SerializeFromObject_TD_1148_input, Table &tbl_Filter_TD_10302_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_addr_sk#1212)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1148_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_addr_sk1212!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 0);
            tbl_Filter_TD_10302_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 1);
            tbl_Filter_TD_10302_output.setInt32(r, 1, _ss_addr_sk1212_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_1148_input.getInt32(i, 2);
            tbl_Filter_TD_10302_output.setInt32(r, 2, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_10302_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10302_output #Row: " << tbl_Filter_TD_10302_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9117(Table &tbl_SerializeFromObject_TD_10713_input, Table &tbl_Filter_TD_9117_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#6091) AND isnotnull(d_year#6087)) AND ((d_qoy#6091 = 3) AND (d_year#6087 = 2000))) AND isnotnull(d_date_sk#6081)))
    // Input: ListBuffer(d_date_sk#6081, d_year#6087, d_qoy#6091)
    // Output: ListBuffer(d_date_sk#6081, d_year#6087, d_qoy#6091)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10713_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy6091 = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 2);
        int32_t _d_year6087 = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 1);
        int32_t _d_date_sk6081 = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 0);
        if ((((_d_qoy6091!= 0) && (_d_year6087!= 0)) && ((_d_qoy6091 == 3) && (_d_year6087 == 2000))) && (_d_date_sk6081!= 0)) {
            int32_t _d_date_sk6081_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 0);
            tbl_Filter_TD_9117_output.setInt32(r, 0, _d_date_sk6081_t);
            int32_t _d_year6087_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 1);
            tbl_Filter_TD_9117_output.setInt32(r, 1, _d_year6087_t);
            int32_t _d_qoy6091_t = tbl_SerializeFromObject_TD_10713_input.getInt32(i, 2);
            tbl_Filter_TD_9117_output.setInt32(r, 2, _d_qoy6091_t);
            r++;
        }
    }
    tbl_Filter_TD_9117_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9117_output #Row: " << tbl_Filter_TD_9117_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9120(Table &tbl_SerializeFromObject_TD_10336_input, Table &tbl_Filter_TD_9120_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#6058) AND isnotnull(ss_addr_sk#6064)))
    // Input: ListBuffer(ss_sold_date_sk#6058, ss_addr_sk#6064, ss_ext_sales_price#6073)
    // Output: ListBuffer(ss_sold_date_sk#6058, ss_addr_sk#6064, ss_ext_sales_price#6073)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10336_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk6058 = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 0);
        int32_t _ss_addr_sk6064 = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 1);
        if ((_ss_sold_date_sk6058!= 0) && (_ss_addr_sk6064!= 0)) {
            int32_t _ss_sold_date_sk6058_t = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 0);
            tbl_Filter_TD_9120_output.setInt32(r, 0, _ss_sold_date_sk6058_t);
            int32_t _ss_addr_sk6064_t = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 1);
            tbl_Filter_TD_9120_output.setInt32(r, 1, _ss_addr_sk6064_t);
            int32_t _ss_ext_sales_price6073_t = tbl_SerializeFromObject_TD_10336_input.getInt32(i, 2);
            tbl_Filter_TD_9120_output.setInt32(r, 2, _ss_ext_sales_price6073_t);
            r++;
        }
    }
    tbl_Filter_TD_9120_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9120_output #Row: " << tbl_Filter_TD_9120_output.getNumRow() << std::endl;
}

void SW_Filter_TD_997(Table &tbl_SerializeFromObject_TD_10923_input, Table &tbl_Filter_TD_997_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#6044) AND isnotnull(ca_county#6051)))
    // Input: ListBuffer(ca_address_sk#6044, ca_county#6051)
    // Output: ListBuffer(ca_address_sk#6044, ca_county#6051)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10923_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk6044 = tbl_SerializeFromObject_TD_10923_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6051 = tbl_SerializeFromObject_TD_10923_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk6044!= 0) && （std::string(_isnotnullca_county6051.data()) != "NULL")) {
            int32_t _ca_address_sk6044_t = tbl_SerializeFromObject_TD_10923_input.getInt32(i, 0);
            tbl_Filter_TD_997_output.setInt32(r, 0, _ca_address_sk6044_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_t = tbl_SerializeFromObject_TD_10923_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_997_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county6051_t);
            r++;
        }
    }
    tbl_Filter_TD_997_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_997_output #Row: " << tbl_Filter_TD_997_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9356_key_leftMajor {
    int32_t _ss_sold_date_sk5993;
    bool operator==(const SW_JOIN_INNER_TD_9356_key_leftMajor& other) const {
        return ((_ss_sold_date_sk5993 == other._ss_sold_date_sk5993));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9356_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9356_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk5993));
    }
};
}
struct SW_JOIN_INNER_TD_9356_payload_leftMajor {
    int32_t _ss_sold_date_sk5993;
    int32_t _ss_addr_sk5999;
    int32_t _ss_ext_sales_price6008;
};
struct SW_JOIN_INNER_TD_9356_key_rightMajor {
    int32_t _d_date_sk6016;
    bool operator==(const SW_JOIN_INNER_TD_9356_key_rightMajor& other) const {
        return ((_d_date_sk6016 == other._d_date_sk6016));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9356_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9356_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6016));
    }
};
}
struct SW_JOIN_INNER_TD_9356_payload_rightMajor {
    int32_t _d_date_sk6016;
    int32_t _d_year6022;
    int32_t _d_qoy6026;
};
void SW_JOIN_INNER_TD_9356(Table &tbl_Filter_TD_10556_output, Table &tbl_Filter_TD_10650_output, Table &tbl_JOIN_INNER_TD_9356_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#5993 = d_date_sk#6016))
    // Left Table: ListBuffer(ss_sold_date_sk#5993, ss_addr_sk#5999, ss_ext_sales_price#6008)
    // Right Table: ListBuffer(d_date_sk#6016, d_year#6022, d_qoy#6026)
    // Output Table: ListBuffer(ss_addr_sk#5999, ss_ext_sales_price#6008, d_year#6022, d_qoy#6026)
    int left_nrow = tbl_Filter_TD_10556_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10650_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9356_key_leftMajor, SW_JOIN_INNER_TD_9356_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10556_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk5993_k = tbl_Filter_TD_10556_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9356_key_leftMajor keyA{_ss_sold_date_sk5993_k};
            int32_t _ss_sold_date_sk5993 = tbl_Filter_TD_10556_output.getInt32(i, 0);
            int32_t _ss_addr_sk5999 = tbl_Filter_TD_10556_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price6008 = tbl_Filter_TD_10556_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9356_payload_leftMajor payloadA{_ss_sold_date_sk5993, _ss_addr_sk5999, _ss_ext_sales_price6008};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10650_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6016_k = tbl_Filter_TD_10650_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9356_key_leftMajor{_d_date_sk6016_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk5993 = (it->second)._ss_sold_date_sk5993;
                int32_t _ss_addr_sk5999 = (it->second)._ss_addr_sk5999;
                int32_t _ss_ext_sales_price6008 = (it->second)._ss_ext_sales_price6008;
                int32_t _d_date_sk6016 = tbl_Filter_TD_10650_output.getInt32(i, 0);
                int32_t _d_year6022 = tbl_Filter_TD_10650_output.getInt32(i, 1);
                int32_t _d_qoy6026 = tbl_Filter_TD_10650_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 0, _ss_addr_sk5999);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 1, _ss_ext_sales_price6008);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 2, _d_year6022);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 3, _d_qoy6026);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9356_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9356_key_rightMajor, SW_JOIN_INNER_TD_9356_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10650_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6016_k = tbl_Filter_TD_10650_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9356_key_rightMajor keyA{_d_date_sk6016_k};
            int32_t _d_date_sk6016 = tbl_Filter_TD_10650_output.getInt32(i, 0);
            int32_t _d_year6022 = tbl_Filter_TD_10650_output.getInt32(i, 1);
            int32_t _d_qoy6026 = tbl_Filter_TD_10650_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_9356_payload_rightMajor payloadA{_d_date_sk6016, _d_year6022, _d_qoy6026};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10556_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk5993_k = tbl_Filter_TD_10556_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9356_key_rightMajor{_ss_sold_date_sk5993_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6016 = (it->second)._d_date_sk6016;
                int32_t _d_year6022 = (it->second)._d_year6022;
                int32_t _d_qoy6026 = (it->second)._d_qoy6026;
                int32_t _ss_sold_date_sk5993 = tbl_Filter_TD_10556_output.getInt32(i, 0);
                int32_t _ss_addr_sk5999 = tbl_Filter_TD_10556_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price6008 = tbl_Filter_TD_10556_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 2, _d_year6022);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 3, _d_qoy6026);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 0, _ss_addr_sk5999);
                tbl_JOIN_INNER_TD_9356_output.setInt32(r, 1, _ss_ext_sales_price6008);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9356_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9356_output #Row: " << tbl_JOIN_INNER_TD_9356_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9534(Table &tbl_SerializeFromObject_TD_10779_input, Table &tbl_Filter_TD_9534_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#54) AND isnotnull(ca_county#61)))
    // Input: ListBuffer(ca_address_sk#54, ca_county#61)
    // Output: ListBuffer(ca_address_sk#54, ca_county#61)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10779_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_10779_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_SerializeFromObject_TD_10779_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk54!= 0) && （std::string(_isnotnullca_county61.data()) != "NULL")) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_10779_input.getInt32(i, 0);
            tbl_Filter_TD_9534_output.setInt32(r, 0, _ca_address_sk54_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_t = tbl_SerializeFromObject_TD_10779_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_9534_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county61_t);
            r++;
        }
    }
    tbl_Filter_TD_9534_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9534_output #Row: " << tbl_Filter_TD_9534_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_970_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_970_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_970_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_970_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_970_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_970_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_970_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_970_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_970_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_970_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
    int32_t _d_qoy130;
};
void SW_JOIN_INNER_TD_970(Table &tbl_Filter_TD_10302_output, Table &tbl_Filter_TD_10709_output, Table &tbl_JOIN_INNER_TD_970_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126, d_qoy#130)
    // Output Table: ListBuffer(ss_addr_sk#1212, ss_ext_sales_price#1221, d_year#126, d_qoy#130)
    int left_nrow = tbl_Filter_TD_10302_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10709_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_970_key_leftMajor, SW_JOIN_INNER_TD_970_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_10302_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10302_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_970_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10302_output.getInt32(i, 0);
            int32_t _ss_addr_sk1212 = tbl_Filter_TD_10302_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_10302_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_970_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_addr_sk1212, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10709_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10709_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_970_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_10709_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_10709_output.getInt32(i, 1);
                int32_t _d_qoy130 = tbl_Filter_TD_10709_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 0, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 2, _d_year126);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 3, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_970_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_970_key_rightMajor, SW_JOIN_INNER_TD_970_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10709_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_10709_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_970_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_10709_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_10709_output.getInt32(i, 1);
            int32_t _d_qoy130 = tbl_Filter_TD_10709_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_970_payload_rightMajor payloadA{_d_date_sk120, _d_year126, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10302_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_Filter_TD_10302_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_970_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_10302_output.getInt32(i, 0);
                int32_t _ss_addr_sk1212 = tbl_Filter_TD_10302_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_10302_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 2, _d_year126);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 3, _d_qoy130);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 0, _ss_addr_sk1212);
                tbl_JOIN_INNER_TD_970_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_970_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_970_output #Row: " << tbl_JOIN_INNER_TD_970_output.getNumRow() << std::endl;
}

void SW_Filter_TD_882(Table &tbl_SerializeFromObject_TD_9192_input, Table &tbl_Filter_TD_882_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#5259) AND isnotnull(d_year#5255)) AND ((d_qoy#5259 = 1) AND (d_year#5255 = 2000))) AND isnotnull(d_date_sk#5249)))
    // Input: ListBuffer(d_date_sk#5249, d_year#5255, d_qoy#5259)
    // Output: ListBuffer(d_date_sk#5249, d_year#5255, d_qoy#5259)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9192_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy5259 = tbl_SerializeFromObject_TD_9192_input.getInt32(i, 2);
        int32_t _d_year5255 = tbl_SerializeFromObject_TD_9192_input.getInt32(i, 1);
        int32_t _d_date_sk5249 = tbl_SerializeFromObject_TD_9192_input.getInt32(i, 0);
        if ((((_d_qoy5259!= 0) && (_d_year5255!= 0)) && ((_d_qoy5259 == 1) && (_d_year5255 == 2000))) && (_d_date_sk5249!= 0)) {
            int32_t _d_date_sk5249_t = tbl_SerializeFromObject_TD_9192_input.getInt32(i, 0);
            tbl_Filter_TD_882_output.setInt32(r, 0, _d_date_sk5249_t);
            int32_t _d_year5255_t = tbl_SerializeFromObject_TD_9192_input.getInt32(i, 1);
            tbl_Filter_TD_882_output.setInt32(r, 1, _d_year5255_t);
            int32_t _d_qoy5259_t = tbl_SerializeFromObject_TD_9192_input.getInt32(i, 2);
            tbl_Filter_TD_882_output.setInt32(r, 2, _d_qoy5259_t);
            r++;
        }
    }
    tbl_Filter_TD_882_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_882_output #Row: " << tbl_Filter_TD_882_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8992(Table &tbl_SerializeFromObject_TD_9397_input, Table &tbl_Filter_TD_8992_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_bill_addr_sk#736)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9397_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_9397_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk736 = tbl_SerializeFromObject_TD_9397_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && (_ws_bill_addr_sk736!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_9397_input.getInt32(i, 0);
            tbl_Filter_TD_8992_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_bill_addr_sk736_t = tbl_SerializeFromObject_TD_9397_input.getInt32(i, 1);
            tbl_Filter_TD_8992_output.setInt32(r, 1, _ws_bill_addr_sk736_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_9397_input.getInt32(i, 2);
            tbl_Filter_TD_8992_output.setInt32(r, 2, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_8992_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8992_output #Row: " << tbl_Filter_TD_8992_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8821(Table &tbl_SerializeFromObject_TD_9177_input, Table &tbl_Filter_TD_8821_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#6109) AND isnotnull(ca_county#6116)))
    // Input: ListBuffer(ca_address_sk#6109, ca_county#6116)
    // Output: ListBuffer(ca_address_sk#6109, ca_county#6116)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9177_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk6109 = tbl_SerializeFromObject_TD_9177_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6116 = tbl_SerializeFromObject_TD_9177_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk6109!= 0) && （std::string(_isnotnullca_county6116.data()) != "NULL")) {
            int32_t _ca_address_sk6109_t = tbl_SerializeFromObject_TD_9177_input.getInt32(i, 0);
            tbl_Filter_TD_8821_output.setInt32(r, 0, _ca_address_sk6109_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_t = tbl_SerializeFromObject_TD_9177_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8821_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county6116_t);
            r++;
        }
    }
    tbl_Filter_TD_8821_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8821_output #Row: " << tbl_Filter_TD_8821_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8738_key_leftMajor {
    int32_t _ss_sold_date_sk6058;
    bool operator==(const SW_JOIN_INNER_TD_8738_key_leftMajor& other) const {
        return ((_ss_sold_date_sk6058 == other._ss_sold_date_sk6058));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8738_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8738_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk6058));
    }
};
}
struct SW_JOIN_INNER_TD_8738_payload_leftMajor {
    int32_t _ss_sold_date_sk6058;
    int32_t _ss_addr_sk6064;
    int32_t _ss_ext_sales_price6073;
};
struct SW_JOIN_INNER_TD_8738_key_rightMajor {
    int32_t _d_date_sk6081;
    bool operator==(const SW_JOIN_INNER_TD_8738_key_rightMajor& other) const {
        return ((_d_date_sk6081 == other._d_date_sk6081));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8738_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8738_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6081));
    }
};
}
struct SW_JOIN_INNER_TD_8738_payload_rightMajor {
    int32_t _d_date_sk6081;
    int32_t _d_year6087;
    int32_t _d_qoy6091;
};
void SW_JOIN_INNER_TD_8738(Table &tbl_Filter_TD_9120_output, Table &tbl_Filter_TD_9117_output, Table &tbl_JOIN_INNER_TD_8738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#6058 = d_date_sk#6081))
    // Left Table: ListBuffer(ss_sold_date_sk#6058, ss_addr_sk#6064, ss_ext_sales_price#6073)
    // Right Table: ListBuffer(d_date_sk#6081, d_year#6087, d_qoy#6091)
    // Output Table: ListBuffer(ss_addr_sk#6064, ss_ext_sales_price#6073, d_year#6087, d_qoy#6091)
    int left_nrow = tbl_Filter_TD_9120_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9117_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8738_key_leftMajor, SW_JOIN_INNER_TD_8738_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9120_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk6058_k = tbl_Filter_TD_9120_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8738_key_leftMajor keyA{_ss_sold_date_sk6058_k};
            int32_t _ss_sold_date_sk6058 = tbl_Filter_TD_9120_output.getInt32(i, 0);
            int32_t _ss_addr_sk6064 = tbl_Filter_TD_9120_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price6073 = tbl_Filter_TD_9120_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8738_payload_leftMajor payloadA{_ss_sold_date_sk6058, _ss_addr_sk6064, _ss_ext_sales_price6073};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9117_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6081_k = tbl_Filter_TD_9117_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8738_key_leftMajor{_d_date_sk6081_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk6058 = (it->second)._ss_sold_date_sk6058;
                int32_t _ss_addr_sk6064 = (it->second)._ss_addr_sk6064;
                int32_t _ss_ext_sales_price6073 = (it->second)._ss_ext_sales_price6073;
                int32_t _d_date_sk6081 = tbl_Filter_TD_9117_output.getInt32(i, 0);
                int32_t _d_year6087 = tbl_Filter_TD_9117_output.getInt32(i, 1);
                int32_t _d_qoy6091 = tbl_Filter_TD_9117_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 0, _ss_addr_sk6064);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 1, _ss_ext_sales_price6073);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 2, _d_year6087);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 3, _d_qoy6091);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8738_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8738_key_rightMajor, SW_JOIN_INNER_TD_8738_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9117_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6081_k = tbl_Filter_TD_9117_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8738_key_rightMajor keyA{_d_date_sk6081_k};
            int32_t _d_date_sk6081 = tbl_Filter_TD_9117_output.getInt32(i, 0);
            int32_t _d_year6087 = tbl_Filter_TD_9117_output.getInt32(i, 1);
            int32_t _d_qoy6091 = tbl_Filter_TD_9117_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_8738_payload_rightMajor payloadA{_d_date_sk6081, _d_year6087, _d_qoy6091};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9120_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk6058_k = tbl_Filter_TD_9120_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8738_key_rightMajor{_ss_sold_date_sk6058_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6081 = (it->second)._d_date_sk6081;
                int32_t _d_year6087 = (it->second)._d_year6087;
                int32_t _d_qoy6091 = (it->second)._d_qoy6091;
                int32_t _ss_sold_date_sk6058 = tbl_Filter_TD_9120_output.getInt32(i, 0);
                int32_t _ss_addr_sk6064 = tbl_Filter_TD_9120_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price6073 = tbl_Filter_TD_9120_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 2, _d_year6087);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 3, _d_qoy6091);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 0, _ss_addr_sk6064);
                tbl_JOIN_INNER_TD_8738_output.setInt32(r, 1, _ss_ext_sales_price6073);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8738_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8738_output #Row: " << tbl_JOIN_INNER_TD_8738_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8258_key_leftMajor {
    int32_t _ss_addr_sk5999;
    bool operator==(const SW_JOIN_INNER_TD_8258_key_leftMajor& other) const {
        return ((_ss_addr_sk5999 == other._ss_addr_sk5999));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8258_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8258_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk5999));
    }
};
}
struct SW_JOIN_INNER_TD_8258_payload_leftMajor {
    int32_t _ss_addr_sk5999;
    int32_t _ss_ext_sales_price6008;
    int32_t _d_year6022;
    int32_t _d_qoy6026;
};
struct SW_JOIN_INNER_TD_8258_key_rightMajor {
    int32_t _ca_address_sk6044;
    bool operator==(const SW_JOIN_INNER_TD_8258_key_rightMajor& other) const {
        return ((_ca_address_sk6044 == other._ca_address_sk6044));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8258_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8258_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6044));
    }
};
}
struct SW_JOIN_INNER_TD_8258_payload_rightMajor {
    int32_t _ca_address_sk6044;
    std::string _ca_county6051;
};
void SW_JOIN_INNER_TD_8258(Table &tbl_JOIN_INNER_TD_9356_output, Table &tbl_Filter_TD_997_output, Table &tbl_JOIN_INNER_TD_8258_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#5999 = ca_address_sk#6044))
    // Left Table: ListBuffer(ss_addr_sk#5999, ss_ext_sales_price#6008, d_year#6022, d_qoy#6026)
    // Right Table: ListBuffer(ca_address_sk#6044, ca_county#6051)
    // Output Table: ListBuffer(ss_ext_sales_price#6008, d_year#6022, d_qoy#6026, ca_county#6051)
    int left_nrow = tbl_JOIN_INNER_TD_9356_output.getNumRow();
    int right_nrow = tbl_Filter_TD_997_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8258_key_leftMajor, SW_JOIN_INNER_TD_8258_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_9356_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk5999_k = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8258_key_leftMajor keyA{_ss_addr_sk5999_k};
            int32_t _ss_addr_sk5999 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price6008 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 1);
            int32_t _d_year6022 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 2);
            int32_t _d_qoy6026 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8258_payload_leftMajor payloadA{_ss_addr_sk5999, _ss_ext_sales_price6008, _d_year6022, _d_qoy6026};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_997_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6044_k = tbl_Filter_TD_997_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8258_key_leftMajor{_ca_address_sk6044_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_addr_sk5999 = (it->second)._ss_addr_sk5999;
                int32_t _ss_ext_sales_price6008 = (it->second)._ss_ext_sales_price6008;
                int32_t _d_year6022 = (it->second)._d_year6022;
                int32_t _d_qoy6026 = (it->second)._d_qoy6026;
                int32_t _ca_address_sk6044 = tbl_Filter_TD_997_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n = tbl_Filter_TD_997_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county6051 = std::string(_ca_county6051_n.data());
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 0, _ss_ext_sales_price6008);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 1, _d_year6022);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 2, _d_qoy6026);
                tbl_JOIN_INNER_TD_8258_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6051_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8258_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8258_key_rightMajor, SW_JOIN_INNER_TD_8258_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_997_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6044_k = tbl_Filter_TD_997_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8258_key_rightMajor keyA{_ca_address_sk6044_k};
            int32_t _ca_address_sk6044 = tbl_Filter_TD_997_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n = tbl_Filter_TD_997_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county6051 = std::string(_ca_county6051_n.data());
            SW_JOIN_INNER_TD_8258_payload_rightMajor payloadA{_ca_address_sk6044, _ca_county6051};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_9356_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk5999_k = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8258_key_rightMajor{_ss_addr_sk5999_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6044 = (it->second)._ca_address_sk6044;
                std::string _ca_county6051 = (it->second)._ca_county6051;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n{};
                memcpy(_ca_county6051_n.data(), (_ca_county6051).data(), (_ca_county6051).length());
                int32_t _ss_addr_sk5999 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price6008 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 1);
                int32_t _d_year6022 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 2);
                int32_t _d_qoy6026 = tbl_JOIN_INNER_TD_9356_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8258_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6051_n);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 0, _ss_ext_sales_price6008);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 1, _d_year6022);
                tbl_JOIN_INNER_TD_8258_output.setInt32(r, 2, _d_qoy6026);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8258_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8258_output #Row: " << tbl_JOIN_INNER_TD_8258_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8325_key_leftMajor {
    int32_t _ss_addr_sk1212;
    bool operator==(const SW_JOIN_INNER_TD_8325_key_leftMajor& other) const {
        return ((_ss_addr_sk1212 == other._ss_addr_sk1212));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8325_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8325_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk1212));
    }
};
}
struct SW_JOIN_INNER_TD_8325_payload_leftMajor {
    int32_t _ss_addr_sk1212;
    int32_t _ss_ext_sales_price1221;
    int32_t _d_year126;
    int32_t _d_qoy130;
};
struct SW_JOIN_INNER_TD_8325_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_8325_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8325_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8325_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_8325_payload_rightMajor {
    int32_t _ca_address_sk54;
    std::string _ca_county61;
};
void SW_JOIN_INNER_TD_8325(Table &tbl_JOIN_INNER_TD_970_output, Table &tbl_Filter_TD_9534_output, Table &tbl_JOIN_INNER_TD_8325_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#1212 = ca_address_sk#54))
    // Left Table: ListBuffer(ss_addr_sk#1212, ss_ext_sales_price#1221, d_year#126, d_qoy#130)
    // Right Table: ListBuffer(ca_address_sk#54, ca_county#61)
    // Output Table: ListBuffer(ss_ext_sales_price#1221, d_year#126, d_qoy#130, ca_county#61)
    int left_nrow = tbl_JOIN_INNER_TD_970_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9534_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8325_key_leftMajor, SW_JOIN_INNER_TD_8325_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_970_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_970_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8325_key_leftMajor keyA{_ss_addr_sk1212_k};
            int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 1);
            int32_t _d_year126 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 2);
            int32_t _d_qoy130 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8325_payload_leftMajor payloadA{_ss_addr_sk1212, _ss_ext_sales_price1221, _d_year126, _d_qoy130};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9534_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9534_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8325_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_addr_sk1212 = (it->second)._ss_addr_sk1212;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _d_qoy130 = (it->second)._d_qoy130;
                int32_t _ca_address_sk54 = tbl_Filter_TD_9534_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_9534_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 2, _d_qoy130);
                tbl_JOIN_INNER_TD_8325_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8325_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8325_key_rightMajor, SW_JOIN_INNER_TD_8325_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9534_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_9534_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8325_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_9534_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Filter_TD_9534_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            SW_JOIN_INNER_TD_8325_payload_rightMajor payloadA{_ca_address_sk54, _ca_county61};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_970_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk1212_k = tbl_JOIN_INNER_TD_970_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8325_key_rightMajor{_ss_addr_sk1212_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _ss_addr_sk1212 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 1);
                int32_t _d_year126 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 2);
                int32_t _d_qoy130 = tbl_JOIN_INNER_TD_970_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_8325_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county61_n);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 0, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_8325_output.setInt32(r, 2, _d_qoy130);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8325_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8325_output #Row: " << tbl_JOIN_INNER_TD_8325_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7786(Table &tbl_SerializeFromObject_TD_8533_input, Table &tbl_Filter_TD_7786_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#6167) AND isnotnull(d_year#6163)) AND ((d_qoy#6167 = 2) AND (d_year#6163 = 2000))) AND isnotnull(d_date_sk#6157)))
    // Input: ListBuffer(d_date_sk#6157, d_year#6163, d_qoy#6167)
    // Output: ListBuffer(d_date_sk#6157, d_year#6163, d_qoy#6167)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8533_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy6167 = tbl_SerializeFromObject_TD_8533_input.getInt32(i, 2);
        int32_t _d_year6163 = tbl_SerializeFromObject_TD_8533_input.getInt32(i, 1);
        int32_t _d_date_sk6157 = tbl_SerializeFromObject_TD_8533_input.getInt32(i, 0);
        if ((((_d_qoy6167!= 0) && (_d_year6163!= 0)) && ((_d_qoy6167 == 2) && (_d_year6163 == 2000))) && (_d_date_sk6157!= 0)) {
            int32_t _d_date_sk6157_t = tbl_SerializeFromObject_TD_8533_input.getInt32(i, 0);
            tbl_Filter_TD_7786_output.setInt32(r, 0, _d_date_sk6157_t);
            int32_t _d_year6163_t = tbl_SerializeFromObject_TD_8533_input.getInt32(i, 1);
            tbl_Filter_TD_7786_output.setInt32(r, 1, _d_year6163_t);
            int32_t _d_qoy6167_t = tbl_SerializeFromObject_TD_8533_input.getInt32(i, 2);
            tbl_Filter_TD_7786_output.setInt32(r, 2, _d_qoy6167_t);
            r++;
        }
    }
    tbl_Filter_TD_7786_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7786_output #Row: " << tbl_Filter_TD_7786_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7547(Table &tbl_SerializeFromObject_TD_8427_input, Table &tbl_Filter_TD_7547_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#6123) AND isnotnull(ws_bill_addr_sk#6130)))
    // Input: ListBuffer(ws_sold_date_sk#6123, ws_bill_addr_sk#6130, ws_ext_sales_price#6146)
    // Output: ListBuffer(ws_sold_date_sk#6123, ws_bill_addr_sk#6130, ws_ext_sales_price#6146)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8427_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk6123 = tbl_SerializeFromObject_TD_8427_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk6130 = tbl_SerializeFromObject_TD_8427_input.getInt32(i, 1);
        if ((_ws_sold_date_sk6123!= 0) && (_ws_bill_addr_sk6130!= 0)) {
            int32_t _ws_sold_date_sk6123_t = tbl_SerializeFromObject_TD_8427_input.getInt32(i, 0);
            tbl_Filter_TD_7547_output.setInt32(r, 0, _ws_sold_date_sk6123_t);
            int32_t _ws_bill_addr_sk6130_t = tbl_SerializeFromObject_TD_8427_input.getInt32(i, 1);
            tbl_Filter_TD_7547_output.setInt32(r, 1, _ws_bill_addr_sk6130_t);
            int32_t _ws_ext_sales_price6146_t = tbl_SerializeFromObject_TD_8427_input.getInt32(i, 2);
            tbl_Filter_TD_7547_output.setInt32(r, 2, _ws_ext_sales_price6146_t);
            r++;
        }
    }
    tbl_Filter_TD_7547_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7547_output #Row: " << tbl_Filter_TD_7547_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7121(Table &tbl_SerializeFromObject_TD_8581_input, Table &tbl_Filter_TD_7121_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#5277) AND isnotnull(ca_county#5284)))
    // Input: ListBuffer(ca_address_sk#5277, ca_county#5284)
    // Output: ListBuffer(ca_address_sk#5277, ca_county#5284)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8581_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk5277 = tbl_SerializeFromObject_TD_8581_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county5284 = tbl_SerializeFromObject_TD_8581_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk5277!= 0) && （std::string(_isnotnullca_county5284.data()) != "NULL")) {
            int32_t _ca_address_sk5277_t = tbl_SerializeFromObject_TD_8581_input.getInt32(i, 0);
            tbl_Filter_TD_7121_output.setInt32(r, 0, _ca_address_sk5277_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_t = tbl_SerializeFromObject_TD_8581_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_7121_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county5284_t);
            r++;
        }
    }
    tbl_Filter_TD_7121_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7121_output #Row: " << tbl_Filter_TD_7121_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7281_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_7281_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7281_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7281_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_7281_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_7281_key_rightMajor {
    int32_t _d_date_sk5249;
    bool operator==(const SW_JOIN_INNER_TD_7281_key_rightMajor& other) const {
        return ((_d_date_sk5249 == other._d_date_sk5249));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7281_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7281_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5249));
    }
};
}
struct SW_JOIN_INNER_TD_7281_payload_rightMajor {
    int32_t _d_date_sk5249;
    int32_t _d_year5255;
    int32_t _d_qoy5259;
};
void SW_JOIN_INNER_TD_7281(Table &tbl_Filter_TD_8992_output, Table &tbl_Filter_TD_882_output, Table &tbl_JOIN_INNER_TD_7281_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#5249))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Right Table: ListBuffer(d_date_sk#5249, d_year#5255, d_qoy#5259)
    // Output Table: ListBuffer(ws_bill_addr_sk#736, ws_ext_sales_price#752, d_year#5255, d_qoy#5259)
    int left_nrow = tbl_Filter_TD_8992_output.getNumRow();
    int right_nrow = tbl_Filter_TD_882_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7281_key_leftMajor, SW_JOIN_INNER_TD_7281_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8992_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_8992_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7281_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8992_output.getInt32(i, 0);
            int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_8992_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_8992_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7281_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_addr_sk736, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_882_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5249_k = tbl_Filter_TD_882_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7281_key_leftMajor{_d_date_sk5249_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _d_date_sk5249 = tbl_Filter_TD_882_output.getInt32(i, 0);
                int32_t _d_year5255 = tbl_Filter_TD_882_output.getInt32(i, 1);
                int32_t _d_qoy5259 = tbl_Filter_TD_882_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 0, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 1, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 2, _d_year5255);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 3, _d_qoy5259);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7281_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7281_key_rightMajor, SW_JOIN_INNER_TD_7281_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_882_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5249_k = tbl_Filter_TD_882_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7281_key_rightMajor keyA{_d_date_sk5249_k};
            int32_t _d_date_sk5249 = tbl_Filter_TD_882_output.getInt32(i, 0);
            int32_t _d_year5255 = tbl_Filter_TD_882_output.getInt32(i, 1);
            int32_t _d_qoy5259 = tbl_Filter_TD_882_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_7281_payload_rightMajor payloadA{_d_date_sk5249, _d_year5255, _d_qoy5259};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8992_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_Filter_TD_8992_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7281_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5249 = (it->second)._d_date_sk5249;
                int32_t _d_year5255 = (it->second)._d_year5255;
                int32_t _d_qoy5259 = (it->second)._d_qoy5259;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_8992_output.getInt32(i, 0);
                int32_t _ws_bill_addr_sk736 = tbl_Filter_TD_8992_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_8992_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 2, _d_year5255);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 3, _d_qoy5259);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 0, _ws_bill_addr_sk736);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 1, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7281_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7281_output #Row: " << tbl_JOIN_INNER_TD_7281_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7640_key_leftMajor {
    int32_t _ss_addr_sk6064;
    bool operator==(const SW_JOIN_INNER_TD_7640_key_leftMajor& other) const {
        return ((_ss_addr_sk6064 == other._ss_addr_sk6064));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7640_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7640_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_addr_sk6064));
    }
};
}
struct SW_JOIN_INNER_TD_7640_payload_leftMajor {
    int32_t _ss_addr_sk6064;
    int32_t _ss_ext_sales_price6073;
    int32_t _d_year6087;
    int32_t _d_qoy6091;
};
struct SW_JOIN_INNER_TD_7640_key_rightMajor {
    int32_t _ca_address_sk6109;
    bool operator==(const SW_JOIN_INNER_TD_7640_key_rightMajor& other) const {
        return ((_ca_address_sk6109 == other._ca_address_sk6109));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7640_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7640_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6109));
    }
};
}
struct SW_JOIN_INNER_TD_7640_payload_rightMajor {
    int32_t _ca_address_sk6109;
    std::string _ca_county6116;
};
void SW_JOIN_INNER_TD_7640(Table &tbl_JOIN_INNER_TD_8738_output, Table &tbl_Filter_TD_8821_output, Table &tbl_JOIN_INNER_TD_7640_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_addr_sk#6064 = ca_address_sk#6109))
    // Left Table: ListBuffer(ss_addr_sk#6064, ss_ext_sales_price#6073, d_year#6087, d_qoy#6091)
    // Right Table: ListBuffer(ca_address_sk#6109, ca_county#6116)
    // Output Table: ListBuffer(ss_ext_sales_price#6073, d_year#6087, d_qoy#6091, ca_county#6116)
    int left_nrow = tbl_JOIN_INNER_TD_8738_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8821_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7640_key_leftMajor, SW_JOIN_INNER_TD_7640_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8738_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_addr_sk6064_k = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7640_key_leftMajor keyA{_ss_addr_sk6064_k};
            int32_t _ss_addr_sk6064 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price6073 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 1);
            int32_t _d_year6087 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 2);
            int32_t _d_qoy6091 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7640_payload_leftMajor payloadA{_ss_addr_sk6064, _ss_ext_sales_price6073, _d_year6087, _d_qoy6091};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8821_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6109_k = tbl_Filter_TD_8821_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7640_key_leftMajor{_ca_address_sk6109_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_addr_sk6064 = (it->second)._ss_addr_sk6064;
                int32_t _ss_ext_sales_price6073 = (it->second)._ss_ext_sales_price6073;
                int32_t _d_year6087 = (it->second)._d_year6087;
                int32_t _d_qoy6091 = (it->second)._d_qoy6091;
                int32_t _ca_address_sk6109 = tbl_Filter_TD_8821_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_n = tbl_Filter_TD_8821_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county6116 = std::string(_ca_county6116_n.data());
                tbl_JOIN_INNER_TD_7640_output.setInt32(r, 0, _ss_ext_sales_price6073);
                tbl_JOIN_INNER_TD_7640_output.setInt32(r, 1, _d_year6087);
                tbl_JOIN_INNER_TD_7640_output.setInt32(r, 2, _d_qoy6091);
                tbl_JOIN_INNER_TD_7640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6116_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7640_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7640_key_rightMajor, SW_JOIN_INNER_TD_7640_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8821_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6109_k = tbl_Filter_TD_8821_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7640_key_rightMajor keyA{_ca_address_sk6109_k};
            int32_t _ca_address_sk6109 = tbl_Filter_TD_8821_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_n = tbl_Filter_TD_8821_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county6116 = std::string(_ca_county6116_n.data());
            SW_JOIN_INNER_TD_7640_payload_rightMajor payloadA{_ca_address_sk6109, _ca_county6116};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8738_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_addr_sk6064_k = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7640_key_rightMajor{_ss_addr_sk6064_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6109 = (it->second)._ca_address_sk6109;
                std::string _ca_county6116 = (it->second)._ca_county6116;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_n{};
                memcpy(_ca_county6116_n.data(), (_ca_county6116).data(), (_ca_county6116).length());
                int32_t _ss_addr_sk6064 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price6073 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 1);
                int32_t _d_year6087 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 2);
                int32_t _d_qoy6091 = tbl_JOIN_INNER_TD_8738_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_7640_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6116_n);
                tbl_JOIN_INNER_TD_7640_output.setInt32(r, 0, _ss_ext_sales_price6073);
                tbl_JOIN_INNER_TD_7640_output.setInt32(r, 1, _d_year6087);
                tbl_JOIN_INNER_TD_7640_output.setInt32(r, 2, _d_qoy6091);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7640_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7640_output #Row: " << tbl_JOIN_INNER_TD_7640_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7187_key {
    std::string _ca_county6051;
    int32_t _d_qoy6026;
    int32_t _d_year6022;
    bool operator==(const SW_Aggregate_TD_7187_key& other) const { return (_ca_county6051 == other._ca_county6051) && (_d_qoy6026 == other._d_qoy6026) && (_d_year6022 == other._d_year6022); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7187_key> {
    std::size_t operator() (const SW_Aggregate_TD_7187_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6051)) + (hash<int32_t>()(k._d_qoy6026)) + (hash<int32_t>()(k._d_year6022));
    }
};
}
struct SW_Aggregate_TD_7187_payload {
    int32_t _store_sales5295_sum_0;
};
void SW_Aggregate_TD_7187(Table &tbl_JOIN_INNER_TD_8258_output, Table &tbl_Aggregate_TD_7187_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#6051, d_qoy#6026, d_year#6022, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#6008)),17,2) AS store_sales#5295)
    // Input: ListBuffer(ss_ext_sales_price#6008, d_year#6022, d_qoy#6026, ca_county#6051)
    // Output: ListBuffer(ca_county#6051, store_sales#5295)
    std::unordered_map<SW_Aggregate_TD_7187_key, SW_Aggregate_TD_7187_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8258_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price6008 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 0);
        int32_t _d_year6022 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 1);
        int32_t _d_qoy6026 = tbl_JOIN_INNER_TD_8258_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6051 = tbl_JOIN_INNER_TD_8258_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_7187_key k{std::string(_ca_county6051.data()), _d_qoy6026, _d_year6022};
        int64_t _store_sales5295_sum_0 = _ss_ext_sales_price6008;
        SW_Aggregate_TD_7187_payload p{_store_sales5295_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._store_sales5295_sum_0 + _store_sales5295_sum_0;
            p._store_sales5295_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6051{};
        memcpy(_ca_county6051.data(), ((it.first)._ca_county6051).data(), ((it.first)._ca_county6051).length());
        tbl_Aggregate_TD_7187_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county6051);
        // _d_qoy6026 not required in the output table
        // _d_year6022 not required in the output table
        int32_t _store_sales5295 = (it.second)._store_sales5295_sum_0;
        tbl_Aggregate_TD_7187_output.setInt32(r, 1, _store_sales5295);
        ++r;
    }
    tbl_Aggregate_TD_7187_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7187_output #Row: " << tbl_Aggregate_TD_7187_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_7120_key {
    std::string _ca_county61;
    int32_t _d_qoy130;
    int32_t _d_year126;
    bool operator==(const SW_Aggregate_TD_7120_key& other) const { return (_ca_county61 == other._ca_county61) && (_d_qoy130 == other._d_qoy130) && (_d_year126 == other._d_year126); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_7120_key> {
    std::size_t operator() (const SW_Aggregate_TD_7120_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61)) + (hash<int32_t>()(k._d_qoy130)) + (hash<int32_t>()(k._d_year126));
    }
};
}
struct SW_Aggregate_TD_7120_payload {
    int32_t _store_sales5247_sum_0;
};
void SW_Aggregate_TD_7120(Table &tbl_JOIN_INNER_TD_8325_output, Table &tbl_Aggregate_TD_7120_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#61, d_qoy#130, d_year#126, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS store_sales#5247)
    // Input: ListBuffer(ss_ext_sales_price#1221, d_year#126, d_qoy#130, ca_county#61)
    // Output: ListBuffer(ca_county#61, d_year#126, store_sales#5247)
    std::unordered_map<SW_Aggregate_TD_7120_key, SW_Aggregate_TD_7120_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_8325_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 1);
        int32_t _d_qoy130 = tbl_JOIN_INNER_TD_8325_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_JOIN_INNER_TD_8325_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_7120_key k{std::string(_ca_county61.data()), _d_qoy130, _d_year126};
        int64_t _store_sales5247_sum_0 = _ss_ext_sales_price1221;
        SW_Aggregate_TD_7120_payload p{_store_sales5247_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._store_sales5247_sum_0 + _store_sales5247_sum_0;
            p._store_sales5247_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61{};
        memcpy(_ca_county61.data(), ((it.first)._ca_county61).data(), ((it.first)._ca_county61).length());
        tbl_Aggregate_TD_7120_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61);
        // _d_qoy130 not required in the output table
        tbl_Aggregate_TD_7120_output.setInt32(r, 1, (it.first)._d_year126);
        int32_t _store_sales5247 = (it.second)._store_sales5247_sum_0;
        tbl_Aggregate_TD_7120_output.setInt32(r, 2, _store_sales5247);
        ++r;
    }
    tbl_Aggregate_TD_7120_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7120_output #Row: " << tbl_Aggregate_TD_7120_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6369(Table &tbl_SerializeFromObject_TD_7577_input, Table &tbl_Filter_TD_6369_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#6243) AND isnotnull(d_year#6239)) AND ((d_qoy#6243 = 3) AND (d_year#6239 = 2000))) AND isnotnull(d_date_sk#6233)))
    // Input: ListBuffer(d_date_sk#6233, d_year#6239, d_qoy#6243)
    // Output: ListBuffer(d_date_sk#6233, d_year#6239, d_qoy#6243)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7577_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy6243 = tbl_SerializeFromObject_TD_7577_input.getInt32(i, 2);
        int32_t _d_year6239 = tbl_SerializeFromObject_TD_7577_input.getInt32(i, 1);
        int32_t _d_date_sk6233 = tbl_SerializeFromObject_TD_7577_input.getInt32(i, 0);
        if ((((_d_qoy6243!= 0) && (_d_year6239!= 0)) && ((_d_qoy6243 == 3) && (_d_year6239 == 2000))) && (_d_date_sk6233!= 0)) {
            int32_t _d_date_sk6233_t = tbl_SerializeFromObject_TD_7577_input.getInt32(i, 0);
            tbl_Filter_TD_6369_output.setInt32(r, 0, _d_date_sk6233_t);
            int32_t _d_year6239_t = tbl_SerializeFromObject_TD_7577_input.getInt32(i, 1);
            tbl_Filter_TD_6369_output.setInt32(r, 1, _d_year6239_t);
            int32_t _d_qoy6243_t = tbl_SerializeFromObject_TD_7577_input.getInt32(i, 2);
            tbl_Filter_TD_6369_output.setInt32(r, 2, _d_qoy6243_t);
            r++;
        }
    }
    tbl_Filter_TD_6369_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6369_output #Row: " << tbl_Filter_TD_6369_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6942(Table &tbl_SerializeFromObject_TD_7787_input, Table &tbl_Filter_TD_6942_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#6199) AND isnotnull(ws_bill_addr_sk#6206)))
    // Input: ListBuffer(ws_sold_date_sk#6199, ws_bill_addr_sk#6206, ws_ext_sales_price#6222)
    // Output: ListBuffer(ws_sold_date_sk#6199, ws_bill_addr_sk#6206, ws_ext_sales_price#6222)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7787_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk6199 = tbl_SerializeFromObject_TD_7787_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk6206 = tbl_SerializeFromObject_TD_7787_input.getInt32(i, 1);
        if ((_ws_sold_date_sk6199!= 0) && (_ws_bill_addr_sk6206!= 0)) {
            int32_t _ws_sold_date_sk6199_t = tbl_SerializeFromObject_TD_7787_input.getInt32(i, 0);
            tbl_Filter_TD_6942_output.setInt32(r, 0, _ws_sold_date_sk6199_t);
            int32_t _ws_bill_addr_sk6206_t = tbl_SerializeFromObject_TD_7787_input.getInt32(i, 1);
            tbl_Filter_TD_6942_output.setInt32(r, 1, _ws_bill_addr_sk6206_t);
            int32_t _ws_ext_sales_price6222_t = tbl_SerializeFromObject_TD_7787_input.getInt32(i, 2);
            tbl_Filter_TD_6942_output.setInt32(r, 2, _ws_ext_sales_price6222_t);
            r++;
        }
    }
    tbl_Filter_TD_6942_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6942_output #Row: " << tbl_Filter_TD_6942_output.getNumRow() << std::endl;
}

void SW_Filter_TD_670(Table &tbl_SerializeFromObject_TD_7296_input, Table &tbl_Filter_TD_670_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#6185) AND isnotnull(ca_county#6192)))
    // Input: ListBuffer(ca_address_sk#6185, ca_county#6192)
    // Output: ListBuffer(ca_address_sk#6185, ca_county#6192)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7296_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk6185 = tbl_SerializeFromObject_TD_7296_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6192 = tbl_SerializeFromObject_TD_7296_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk6185!= 0) && （std::string(_isnotnullca_county6192.data()) != "NULL")) {
            int32_t _ca_address_sk6185_t = tbl_SerializeFromObject_TD_7296_input.getInt32(i, 0);
            tbl_Filter_TD_670_output.setInt32(r, 0, _ca_address_sk6185_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_t = tbl_SerializeFromObject_TD_7296_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_670_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county6192_t);
            r++;
        }
    }
    tbl_Filter_TD_670_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_670_output #Row: " << tbl_Filter_TD_670_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6916_key_leftMajor {
    int32_t _ws_sold_date_sk6123;
    bool operator==(const SW_JOIN_INNER_TD_6916_key_leftMajor& other) const {
        return ((_ws_sold_date_sk6123 == other._ws_sold_date_sk6123));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6916_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6916_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk6123));
    }
};
}
struct SW_JOIN_INNER_TD_6916_payload_leftMajor {
    int32_t _ws_sold_date_sk6123;
    int32_t _ws_bill_addr_sk6130;
    int32_t _ws_ext_sales_price6146;
};
struct SW_JOIN_INNER_TD_6916_key_rightMajor {
    int32_t _d_date_sk6157;
    bool operator==(const SW_JOIN_INNER_TD_6916_key_rightMajor& other) const {
        return ((_d_date_sk6157 == other._d_date_sk6157));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6916_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6916_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6157));
    }
};
}
struct SW_JOIN_INNER_TD_6916_payload_rightMajor {
    int32_t _d_date_sk6157;
    int32_t _d_year6163;
    int32_t _d_qoy6167;
};
void SW_JOIN_INNER_TD_6916(Table &tbl_Filter_TD_7547_output, Table &tbl_Filter_TD_7786_output, Table &tbl_JOIN_INNER_TD_6916_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#6123 = d_date_sk#6157))
    // Left Table: ListBuffer(ws_sold_date_sk#6123, ws_bill_addr_sk#6130, ws_ext_sales_price#6146)
    // Right Table: ListBuffer(d_date_sk#6157, d_year#6163, d_qoy#6167)
    // Output Table: ListBuffer(ws_bill_addr_sk#6130, ws_ext_sales_price#6146, d_year#6163, d_qoy#6167)
    int left_nrow = tbl_Filter_TD_7547_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7786_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6916_key_leftMajor, SW_JOIN_INNER_TD_6916_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_7547_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk6123_k = tbl_Filter_TD_7547_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6916_key_leftMajor keyA{_ws_sold_date_sk6123_k};
            int32_t _ws_sold_date_sk6123 = tbl_Filter_TD_7547_output.getInt32(i, 0);
            int32_t _ws_bill_addr_sk6130 = tbl_Filter_TD_7547_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price6146 = tbl_Filter_TD_7547_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6916_payload_leftMajor payloadA{_ws_sold_date_sk6123, _ws_bill_addr_sk6130, _ws_ext_sales_price6146};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7786_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6157_k = tbl_Filter_TD_7786_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6916_key_leftMajor{_d_date_sk6157_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk6123 = (it->second)._ws_sold_date_sk6123;
                int32_t _ws_bill_addr_sk6130 = (it->second)._ws_bill_addr_sk6130;
                int32_t _ws_ext_sales_price6146 = (it->second)._ws_ext_sales_price6146;
                int32_t _d_date_sk6157 = tbl_Filter_TD_7786_output.getInt32(i, 0);
                int32_t _d_year6163 = tbl_Filter_TD_7786_output.getInt32(i, 1);
                int32_t _d_qoy6167 = tbl_Filter_TD_7786_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 0, _ws_bill_addr_sk6130);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 1, _ws_ext_sales_price6146);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 2, _d_year6163);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 3, _d_qoy6167);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6916_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6916_key_rightMajor, SW_JOIN_INNER_TD_6916_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7786_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6157_k = tbl_Filter_TD_7786_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6916_key_rightMajor keyA{_d_date_sk6157_k};
            int32_t _d_date_sk6157 = tbl_Filter_TD_7786_output.getInt32(i, 0);
            int32_t _d_year6163 = tbl_Filter_TD_7786_output.getInt32(i, 1);
            int32_t _d_qoy6167 = tbl_Filter_TD_7786_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6916_payload_rightMajor payloadA{_d_date_sk6157, _d_year6163, _d_qoy6167};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7547_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk6123_k = tbl_Filter_TD_7547_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6916_key_rightMajor{_ws_sold_date_sk6123_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6157 = (it->second)._d_date_sk6157;
                int32_t _d_year6163 = (it->second)._d_year6163;
                int32_t _d_qoy6167 = (it->second)._d_qoy6167;
                int32_t _ws_sold_date_sk6123 = tbl_Filter_TD_7547_output.getInt32(i, 0);
                int32_t _ws_bill_addr_sk6130 = tbl_Filter_TD_7547_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price6146 = tbl_Filter_TD_7547_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 2, _d_year6163);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 3, _d_qoy6167);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 0, _ws_bill_addr_sk6130);
                tbl_JOIN_INNER_TD_6916_output.setInt32(r, 1, _ws_ext_sales_price6146);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6916_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6916_output #Row: " << tbl_JOIN_INNER_TD_6916_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6820_key_leftMajor {
    int32_t _ws_bill_addr_sk736;
    bool operator==(const SW_JOIN_INNER_TD_6820_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk736 == other._ws_bill_addr_sk736));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6820_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6820_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk736));
    }
};
}
struct SW_JOIN_INNER_TD_6820_payload_leftMajor {
    int32_t _ws_bill_addr_sk736;
    int32_t _ws_ext_sales_price752;
    int32_t _d_year5255;
    int32_t _d_qoy5259;
};
struct SW_JOIN_INNER_TD_6820_key_rightMajor {
    int32_t _ca_address_sk5277;
    bool operator==(const SW_JOIN_INNER_TD_6820_key_rightMajor& other) const {
        return ((_ca_address_sk5277 == other._ca_address_sk5277));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6820_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6820_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk5277));
    }
};
}
struct SW_JOIN_INNER_TD_6820_payload_rightMajor {
    int32_t _ca_address_sk5277;
    std::string _ca_county5284;
};
void SW_JOIN_INNER_TD_6820(Table &tbl_JOIN_INNER_TD_7281_output, Table &tbl_Filter_TD_7121_output, Table &tbl_JOIN_INNER_TD_6820_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#736 = ca_address_sk#5277))
    // Left Table: ListBuffer(ws_bill_addr_sk#736, ws_ext_sales_price#752, d_year#5255, d_qoy#5259)
    // Right Table: ListBuffer(ca_address_sk#5277, ca_county#5284)
    // Output Table: ListBuffer(ws_ext_sales_price#752, d_year#5255, d_qoy#5259, ca_county#5284)
    int left_nrow = tbl_JOIN_INNER_TD_7281_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7121_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6820_key_leftMajor, SW_JOIN_INNER_TD_6820_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7281_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6820_key_leftMajor keyA{_ws_bill_addr_sk736_k};
            int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 1);
            int32_t _d_year5255 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 2);
            int32_t _d_qoy5259 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6820_payload_leftMajor payloadA{_ws_bill_addr_sk736, _ws_ext_sales_price752, _d_year5255, _d_qoy5259};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7121_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk5277_k = tbl_Filter_TD_7121_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6820_key_leftMajor{_ca_address_sk5277_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_addr_sk736 = (it->second)._ws_bill_addr_sk736;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _d_year5255 = (it->second)._d_year5255;
                int32_t _d_qoy5259 = (it->second)._d_qoy5259;
                int32_t _ca_address_sk5277 = tbl_Filter_TD_7121_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_Filter_TD_7121_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county5284 = std::string(_ca_county5284_n.data());
                tbl_JOIN_INNER_TD_6820_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6820_output.setInt32(r, 1, _d_year5255);
                tbl_JOIN_INNER_TD_6820_output.setInt32(r, 2, _d_qoy5259);
                tbl_JOIN_INNER_TD_6820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county5284_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6820_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6820_key_rightMajor, SW_JOIN_INNER_TD_6820_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7121_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk5277_k = tbl_Filter_TD_7121_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6820_key_rightMajor keyA{_ca_address_sk5277_k};
            int32_t _ca_address_sk5277 = tbl_Filter_TD_7121_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_Filter_TD_7121_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county5284 = std::string(_ca_county5284_n.data());
            SW_JOIN_INNER_TD_6820_payload_rightMajor payloadA{_ca_address_sk5277, _ca_county5284};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7281_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk736_k = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6820_key_rightMajor{_ws_bill_addr_sk736_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk5277 = (it->second)._ca_address_sk5277;
                std::string _ca_county5284 = (it->second)._ca_county5284;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n{};
                memcpy(_ca_county5284_n.data(), (_ca_county5284).data(), (_ca_county5284).length());
                int32_t _ws_bill_addr_sk736 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 1);
                int32_t _d_year5255 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 2);
                int32_t _d_qoy5259 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6820_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county5284_n);
                tbl_JOIN_INNER_TD_6820_output.setInt32(r, 0, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_6820_output.setInt32(r, 1, _d_year5255);
                tbl_JOIN_INNER_TD_6820_output.setInt32(r, 2, _d_qoy5259);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6820_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6820_output #Row: " << tbl_JOIN_INNER_TD_6820_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6469_key {
    std::string _ca_county6116;
    int32_t _d_qoy6091;
    int32_t _d_year6087;
    bool operator==(const SW_Aggregate_TD_6469_key& other) const { return (_ca_county6116 == other._ca_county6116) && (_d_qoy6091 == other._d_qoy6091) && (_d_year6087 == other._d_year6087); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6469_key> {
    std::size_t operator() (const SW_Aggregate_TD_6469_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6116)) + (hash<int32_t>()(k._d_qoy6091)) + (hash<int32_t>()(k._d_year6087));
    }
};
}
struct SW_Aggregate_TD_6469_payload {
    int32_t _store_sales5299_sum_0;
};
void SW_Aggregate_TD_6469(Table &tbl_JOIN_INNER_TD_7640_output, Table &tbl_Aggregate_TD_6469_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#6116, d_qoy#6091, d_year#6087, MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#6073)),17,2) AS store_sales#5299)
    // Input: ListBuffer(ss_ext_sales_price#6073, d_year#6087, d_qoy#6091, ca_county#6116)
    // Output: ListBuffer(ca_county#6116, store_sales#5299)
    std::unordered_map<SW_Aggregate_TD_6469_key, SW_Aggregate_TD_6469_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7640_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price6073 = tbl_JOIN_INNER_TD_7640_output.getInt32(i, 0);
        int32_t _d_year6087 = tbl_JOIN_INNER_TD_7640_output.getInt32(i, 1);
        int32_t _d_qoy6091 = tbl_JOIN_INNER_TD_7640_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6116 = tbl_JOIN_INNER_TD_7640_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_6469_key k{std::string(_ca_county6116.data()), _d_qoy6091, _d_year6087};
        int64_t _store_sales5299_sum_0 = _ss_ext_sales_price6073;
        SW_Aggregate_TD_6469_payload p{_store_sales5299_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._store_sales5299_sum_0 + _store_sales5299_sum_0;
            p._store_sales5299_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6116{};
        memcpy(_ca_county6116.data(), ((it.first)._ca_county6116).data(), ((it.first)._ca_county6116).length());
        tbl_Aggregate_TD_6469_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county6116);
        // _d_qoy6091 not required in the output table
        // _d_year6087 not required in the output table
        int32_t _store_sales5299 = (it.second)._store_sales5299_sum_0;
        tbl_Aggregate_TD_6469_output.setInt32(r, 1, _store_sales5299);
        ++r;
    }
    tbl_Aggregate_TD_6469_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6469_output #Row: " << tbl_Aggregate_TD_6469_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6144_key_leftMajor {
    std::string _ca_county61;
    bool operator==(const SW_JOIN_INNER_TD_6144_key_leftMajor& other) const {
        return ((_ca_county61 == other._ca_county61));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6144_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6144_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61));
    }
};
}
struct SW_JOIN_INNER_TD_6144_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int32_t _store_sales5247;
};
struct SW_JOIN_INNER_TD_6144_key_rightMajor {
    std::string _ca_county6051;
    bool operator==(const SW_JOIN_INNER_TD_6144_key_rightMajor& other) const {
        return ((_ca_county6051 == other._ca_county6051));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6144_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6144_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6051));
    }
};
}
struct SW_JOIN_INNER_TD_6144_payload_rightMajor {
    std::string _ca_county6051;
    int32_t _store_sales5295;
};
void SW_JOIN_INNER_TD_6144(Table &tbl_Aggregate_TD_7120_output, Table &tbl_Aggregate_TD_7187_output, Table &tbl_JOIN_INNER_TD_6144_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_county#61 = ca_county#6051))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247)
    // Right Table: ListBuffer(ca_county#6051, store_sales#5295)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, ca_county#6051, store_sales#5295)
    int left_nrow = tbl_Aggregate_TD_7120_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_7187_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6144_key_leftMajor, SW_JOIN_INNER_TD_6144_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_7120_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_Aggregate_TD_7120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            SW_JOIN_INNER_TD_6144_key_leftMajor keyA{_ca_county61_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Aggregate_TD_7120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_Aggregate_TD_7120_output.getInt32(i, 1);
            int32_t _store_sales5247 = tbl_Aggregate_TD_7120_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_6144_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales5247};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_7187_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_k_n = tbl_Aggregate_TD_7187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6051_k = std::string(_ca_county6051_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6144_key_leftMajor{_ca_county6051_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _store_sales5247 = (it->second)._store_sales5247;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n = tbl_Aggregate_TD_7187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county6051 = std::string(_ca_county6051_n.data());
                int32_t _store_sales5295 = tbl_Aggregate_TD_7187_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6144_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_6144_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6144_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_6144_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6051_n);
                tbl_JOIN_INNER_TD_6144_output.setInt32(r, 4, _store_sales5295);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6144_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6144_key_rightMajor, SW_JOIN_INNER_TD_6144_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_7187_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_k_n = tbl_Aggregate_TD_7187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6051_k = std::string(_ca_county6051_k_n.data());
            SW_JOIN_INNER_TD_6144_key_rightMajor keyA{_ca_county6051_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n = tbl_Aggregate_TD_7187_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6051 = std::string(_ca_county6051_n.data());
            int32_t _store_sales5295 = tbl_Aggregate_TD_7187_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6144_payload_rightMajor payloadA{_ca_county6051, _store_sales5295};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_7120_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_Aggregate_TD_7120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6144_key_rightMajor{_ca_county61_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county6051 = (it->second)._ca_county6051;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n{};
                memcpy(_ca_county6051_n.data(), (_ca_county6051).data(), (_ca_county6051).length());
                int32_t _store_sales5295 = (it->second)._store_sales5295;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_Aggregate_TD_7120_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_Aggregate_TD_7120_output.getInt32(i, 1);
                int32_t _store_sales5247 = tbl_Aggregate_TD_7120_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_6144_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6051_n);
                tbl_JOIN_INNER_TD_6144_output.setInt32(r, 4, _store_sales5295);
                tbl_JOIN_INNER_TD_6144_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_6144_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_6144_output.setInt32(r, 2, _store_sales5247);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6144_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6144_output #Row: " << tbl_JOIN_INNER_TD_6144_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5616(Table &tbl_SerializeFromObject_TD_6730_input, Table &tbl_Filter_TD_5616_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ca_address_sk#6261) AND isnotnull(ca_county#6268)))
    // Input: ListBuffer(ca_address_sk#6261, ca_county#6268)
    // Output: ListBuffer(ca_address_sk#6261, ca_county#6268)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6730_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk6261 = tbl_SerializeFromObject_TD_6730_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6268 = tbl_SerializeFromObject_TD_6730_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((_ca_address_sk6261!= 0) && （std::string(_isnotnullca_county6268.data()) != "NULL")) {
            int32_t _ca_address_sk6261_t = tbl_SerializeFromObject_TD_6730_input.getInt32(i, 0);
            tbl_Filter_TD_5616_output.setInt32(r, 0, _ca_address_sk6261_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_t = tbl_SerializeFromObject_TD_6730_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5616_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_county6268_t);
            r++;
        }
    }
    tbl_Filter_TD_5616_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5616_output #Row: " << tbl_Filter_TD_5616_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5899_key_leftMajor {
    int32_t _ws_sold_date_sk6199;
    bool operator==(const SW_JOIN_INNER_TD_5899_key_leftMajor& other) const {
        return ((_ws_sold_date_sk6199 == other._ws_sold_date_sk6199));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5899_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5899_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk6199));
    }
};
}
struct SW_JOIN_INNER_TD_5899_payload_leftMajor {
    int32_t _ws_sold_date_sk6199;
    int32_t _ws_bill_addr_sk6206;
    int32_t _ws_ext_sales_price6222;
};
struct SW_JOIN_INNER_TD_5899_key_rightMajor {
    int32_t _d_date_sk6233;
    bool operator==(const SW_JOIN_INNER_TD_5899_key_rightMajor& other) const {
        return ((_d_date_sk6233 == other._d_date_sk6233));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5899_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5899_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6233));
    }
};
}
struct SW_JOIN_INNER_TD_5899_payload_rightMajor {
    int32_t _d_date_sk6233;
    int32_t _d_year6239;
    int32_t _d_qoy6243;
};
void SW_JOIN_INNER_TD_5899(Table &tbl_Filter_TD_6942_output, Table &tbl_Filter_TD_6369_output, Table &tbl_JOIN_INNER_TD_5899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#6199 = d_date_sk#6233))
    // Left Table: ListBuffer(ws_sold_date_sk#6199, ws_bill_addr_sk#6206, ws_ext_sales_price#6222)
    // Right Table: ListBuffer(d_date_sk#6233, d_year#6239, d_qoy#6243)
    // Output Table: ListBuffer(ws_bill_addr_sk#6206, ws_ext_sales_price#6222, d_year#6239, d_qoy#6243)
    int left_nrow = tbl_Filter_TD_6942_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6369_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5899_key_leftMajor, SW_JOIN_INNER_TD_5899_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6942_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk6199_k = tbl_Filter_TD_6942_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5899_key_leftMajor keyA{_ws_sold_date_sk6199_k};
            int32_t _ws_sold_date_sk6199 = tbl_Filter_TD_6942_output.getInt32(i, 0);
            int32_t _ws_bill_addr_sk6206 = tbl_Filter_TD_6942_output.getInt32(i, 1);
            int32_t _ws_ext_sales_price6222 = tbl_Filter_TD_6942_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5899_payload_leftMajor payloadA{_ws_sold_date_sk6199, _ws_bill_addr_sk6206, _ws_ext_sales_price6222};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6369_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6233_k = tbl_Filter_TD_6369_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5899_key_leftMajor{_d_date_sk6233_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk6199 = (it->second)._ws_sold_date_sk6199;
                int32_t _ws_bill_addr_sk6206 = (it->second)._ws_bill_addr_sk6206;
                int32_t _ws_ext_sales_price6222 = (it->second)._ws_ext_sales_price6222;
                int32_t _d_date_sk6233 = tbl_Filter_TD_6369_output.getInt32(i, 0);
                int32_t _d_year6239 = tbl_Filter_TD_6369_output.getInt32(i, 1);
                int32_t _d_qoy6243 = tbl_Filter_TD_6369_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 0, _ws_bill_addr_sk6206);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 1, _ws_ext_sales_price6222);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 2, _d_year6239);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 3, _d_qoy6243);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5899_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5899_key_rightMajor, SW_JOIN_INNER_TD_5899_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6369_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6233_k = tbl_Filter_TD_6369_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5899_key_rightMajor keyA{_d_date_sk6233_k};
            int32_t _d_date_sk6233 = tbl_Filter_TD_6369_output.getInt32(i, 0);
            int32_t _d_year6239 = tbl_Filter_TD_6369_output.getInt32(i, 1);
            int32_t _d_qoy6243 = tbl_Filter_TD_6369_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5899_payload_rightMajor payloadA{_d_date_sk6233, _d_year6239, _d_qoy6243};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6942_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk6199_k = tbl_Filter_TD_6942_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5899_key_rightMajor{_ws_sold_date_sk6199_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6233 = (it->second)._d_date_sk6233;
                int32_t _d_year6239 = (it->second)._d_year6239;
                int32_t _d_qoy6243 = (it->second)._d_qoy6243;
                int32_t _ws_sold_date_sk6199 = tbl_Filter_TD_6942_output.getInt32(i, 0);
                int32_t _ws_bill_addr_sk6206 = tbl_Filter_TD_6942_output.getInt32(i, 1);
                int32_t _ws_ext_sales_price6222 = tbl_Filter_TD_6942_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 2, _d_year6239);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 3, _d_qoy6243);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 0, _ws_bill_addr_sk6206);
                tbl_JOIN_INNER_TD_5899_output.setInt32(r, 1, _ws_ext_sales_price6222);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5899_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5899_output #Row: " << tbl_JOIN_INNER_TD_5899_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5990_key_leftMajor {
    int32_t _ws_bill_addr_sk6130;
    bool operator==(const SW_JOIN_INNER_TD_5990_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk6130 == other._ws_bill_addr_sk6130));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5990_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5990_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk6130));
    }
};
}
struct SW_JOIN_INNER_TD_5990_payload_leftMajor {
    int32_t _ws_bill_addr_sk6130;
    int32_t _ws_ext_sales_price6146;
    int32_t _d_year6163;
    int32_t _d_qoy6167;
};
struct SW_JOIN_INNER_TD_5990_key_rightMajor {
    int32_t _ca_address_sk6185;
    bool operator==(const SW_JOIN_INNER_TD_5990_key_rightMajor& other) const {
        return ((_ca_address_sk6185 == other._ca_address_sk6185));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5990_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5990_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6185));
    }
};
}
struct SW_JOIN_INNER_TD_5990_payload_rightMajor {
    int32_t _ca_address_sk6185;
    std::string _ca_county6192;
};
void SW_JOIN_INNER_TD_5990(Table &tbl_JOIN_INNER_TD_6916_output, Table &tbl_Filter_TD_670_output, Table &tbl_JOIN_INNER_TD_5990_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#6130 = ca_address_sk#6185))
    // Left Table: ListBuffer(ws_bill_addr_sk#6130, ws_ext_sales_price#6146, d_year#6163, d_qoy#6167)
    // Right Table: ListBuffer(ca_address_sk#6185, ca_county#6192)
    // Output Table: ListBuffer(ws_ext_sales_price#6146, d_year#6163, d_qoy#6167, ca_county#6192)
    int left_nrow = tbl_JOIN_INNER_TD_6916_output.getNumRow();
    int right_nrow = tbl_Filter_TD_670_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5990_key_leftMajor, SW_JOIN_INNER_TD_5990_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6916_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk6130_k = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5990_key_leftMajor keyA{_ws_bill_addr_sk6130_k};
            int32_t _ws_bill_addr_sk6130 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price6146 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 1);
            int32_t _d_year6163 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 2);
            int32_t _d_qoy6167 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_5990_payload_leftMajor payloadA{_ws_bill_addr_sk6130, _ws_ext_sales_price6146, _d_year6163, _d_qoy6167};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_670_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6185_k = tbl_Filter_TD_670_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5990_key_leftMajor{_ca_address_sk6185_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_addr_sk6130 = (it->second)._ws_bill_addr_sk6130;
                int32_t _ws_ext_sales_price6146 = (it->second)._ws_ext_sales_price6146;
                int32_t _d_year6163 = (it->second)._d_year6163;
                int32_t _d_qoy6167 = (it->second)._d_qoy6167;
                int32_t _ca_address_sk6185 = tbl_Filter_TD_670_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_n = tbl_Filter_TD_670_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county6192 = std::string(_ca_county6192_n.data());
                tbl_JOIN_INNER_TD_5990_output.setInt32(r, 0, _ws_ext_sales_price6146);
                tbl_JOIN_INNER_TD_5990_output.setInt32(r, 1, _d_year6163);
                tbl_JOIN_INNER_TD_5990_output.setInt32(r, 2, _d_qoy6167);
                tbl_JOIN_INNER_TD_5990_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6192_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5990_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5990_key_rightMajor, SW_JOIN_INNER_TD_5990_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_670_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6185_k = tbl_Filter_TD_670_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5990_key_rightMajor keyA{_ca_address_sk6185_k};
            int32_t _ca_address_sk6185 = tbl_Filter_TD_670_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_n = tbl_Filter_TD_670_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county6192 = std::string(_ca_county6192_n.data());
            SW_JOIN_INNER_TD_5990_payload_rightMajor payloadA{_ca_address_sk6185, _ca_county6192};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6916_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk6130_k = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5990_key_rightMajor{_ws_bill_addr_sk6130_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6185 = (it->second)._ca_address_sk6185;
                std::string _ca_county6192 = (it->second)._ca_county6192;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_n{};
                memcpy(_ca_county6192_n.data(), (_ca_county6192).data(), (_ca_county6192).length());
                int32_t _ws_bill_addr_sk6130 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price6146 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 1);
                int32_t _d_year6163 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 2);
                int32_t _d_qoy6167 = tbl_JOIN_INNER_TD_6916_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_5990_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6192_n);
                tbl_JOIN_INNER_TD_5990_output.setInt32(r, 0, _ws_ext_sales_price6146);
                tbl_JOIN_INNER_TD_5990_output.setInt32(r, 1, _d_year6163);
                tbl_JOIN_INNER_TD_5990_output.setInt32(r, 2, _d_qoy6167);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5990_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5990_output #Row: " << tbl_JOIN_INNER_TD_5990_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5223_key {
    std::string _ca_county5284;
    int32_t _d_qoy5259;
    int32_t _d_year5255;
    bool operator==(const SW_Aggregate_TD_5223_key& other) const { return (_ca_county5284 == other._ca_county5284) && (_d_qoy5259 == other._d_qoy5259) && (_d_year5255 == other._d_year5255); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5223_key> {
    std::size_t operator() (const SW_Aggregate_TD_5223_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county5284)) + (hash<int32_t>()(k._d_qoy5259)) + (hash<int32_t>()(k._d_year5255));
    }
};
}
struct SW_Aggregate_TD_5223_payload {
    int32_t _web_sales5248_sum_0;
};
void SW_Aggregate_TD_5223(Table &tbl_JOIN_INNER_TD_6820_output, Table &tbl_Aggregate_TD_5223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#5284, d_qoy#5259, d_year#5255, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#752)),17,2) AS web_sales#5248)
    // Input: ListBuffer(ws_ext_sales_price#752, d_year#5255, d_qoy#5259, ca_county#5284)
    // Output: ListBuffer(ca_county#5284, web_sales#5248)
    std::unordered_map<SW_Aggregate_TD_5223_key, SW_Aggregate_TD_5223_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6820_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6820_output.getInt32(i, 0);
        int32_t _d_year5255 = tbl_JOIN_INNER_TD_6820_output.getInt32(i, 1);
        int32_t _d_qoy5259 = tbl_JOIN_INNER_TD_6820_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county5284 = tbl_JOIN_INNER_TD_6820_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_5223_key k{std::string(_ca_county5284.data()), _d_qoy5259, _d_year5255};
        int64_t _web_sales5248_sum_0 = _ws_ext_sales_price752;
        SW_Aggregate_TD_5223_payload p{_web_sales5248_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._web_sales5248_sum_0 + _web_sales5248_sum_0;
            p._web_sales5248_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county5284{};
        memcpy(_ca_county5284.data(), ((it.first)._ca_county5284).data(), ((it.first)._ca_county5284).length());
        tbl_Aggregate_TD_5223_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county5284);
        // _d_qoy5259 not required in the output table
        // _d_year5255 not required in the output table
        int32_t _web_sales5248 = (it.second)._web_sales5248_sum_0;
        tbl_Aggregate_TD_5223_output.setInt32(r, 1, _web_sales5248);
        ++r;
    }
    tbl_Aggregate_TD_5223_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5223_output #Row: " << tbl_Aggregate_TD_5223_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5168_key_leftMajor {
    std::string _ca_county6051;
    bool operator==(const SW_JOIN_INNER_TD_5168_key_leftMajor& other) const {
        return ((_ca_county6051 == other._ca_county6051));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5168_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5168_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6051));
    }
};
}
struct SW_JOIN_INNER_TD_5168_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int32_t _store_sales5247;
    std::string _ca_county6051;
    int32_t _store_sales5295;
};
struct SW_JOIN_INNER_TD_5168_key_rightMajor {
    std::string _ca_county6116;
    bool operator==(const SW_JOIN_INNER_TD_5168_key_rightMajor& other) const {
        return ((_ca_county6116 == other._ca_county6116));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5168_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5168_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6116));
    }
};
}
struct SW_JOIN_INNER_TD_5168_payload_rightMajor {
    std::string _ca_county6116;
    int32_t _store_sales5299;
};
void SW_JOIN_INNER_TD_5168(Table &tbl_JOIN_INNER_TD_6144_output, Table &tbl_Aggregate_TD_6469_output, Table &tbl_JOIN_INNER_TD_5168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_county#6051 = ca_county#6116))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, ca_county#6051, store_sales#5295)
    // Right Table: ListBuffer(ca_county#6116, store_sales#5299)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, store_sales#5295, store_sales#5299)
    int left_nrow = tbl_JOIN_INNER_TD_6144_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6469_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5168_key_leftMajor, SW_JOIN_INNER_TD_5168_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6144_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_k_n = tbl_JOIN_INNER_TD_6144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county6051_k = std::string(_ca_county6051_k_n.data());
            SW_JOIN_INNER_TD_5168_key_leftMajor keyA{_ca_county6051_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_6144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_6144_output.getInt32(i, 1);
            int32_t _store_sales5247 = tbl_JOIN_INNER_TD_6144_output.getInt32(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n = tbl_JOIN_INNER_TD_6144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county6051 = std::string(_ca_county6051_n.data());
            int32_t _store_sales5295 = tbl_JOIN_INNER_TD_6144_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_5168_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales5247, _ca_county6051, _store_sales5295};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_6469_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_k_n = tbl_Aggregate_TD_6469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6116_k = std::string(_ca_county6116_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5168_key_leftMajor{_ca_county6116_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _store_sales5247 = (it->second)._store_sales5247;
                std::string _ca_county6051 = (it->second)._ca_county6051;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n{};
                memcpy(_ca_county6051_n.data(), (_ca_county6051).data(), (_ca_county6051).length());
                int32_t _store_sales5295 = (it->second)._store_sales5295;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_n = tbl_Aggregate_TD_6469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county6116 = std::string(_ca_county6116_n.data());
                int32_t _store_sales5299 = tbl_Aggregate_TD_6469_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 3, _store_sales5295);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 4, _store_sales5299);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5168_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5168_key_rightMajor, SW_JOIN_INNER_TD_5168_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_6469_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_k_n = tbl_Aggregate_TD_6469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6116_k = std::string(_ca_county6116_k_n.data());
            SW_JOIN_INNER_TD_5168_key_rightMajor keyA{_ca_county6116_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_n = tbl_Aggregate_TD_6469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6116 = std::string(_ca_county6116_n.data());
            int32_t _store_sales5299 = tbl_Aggregate_TD_6469_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5168_payload_rightMajor payloadA{_ca_county6116, _store_sales5299};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6144_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_k_n = tbl_JOIN_INNER_TD_6144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _ca_county6051_k = std::string(_ca_county6051_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5168_key_rightMajor{_ca_county6051_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county6116 = (it->second)._ca_county6116;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6116_n{};
                memcpy(_ca_county6116_n.data(), (_ca_county6116).data(), (_ca_county6116).length());
                int32_t _store_sales5299 = (it->second)._store_sales5299;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_6144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_6144_output.getInt32(i, 1);
                int32_t _store_sales5247 = tbl_JOIN_INNER_TD_6144_output.getInt32(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6051_n = tbl_JOIN_INNER_TD_6144_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _ca_county6051 = std::string(_ca_county6051_n.data());
                int32_t _store_sales5295 = tbl_JOIN_INNER_TD_6144_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 4, _store_sales5299);
                tbl_JOIN_INNER_TD_5168_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_5168_output.setInt32(r, 3, _store_sales5295);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5168_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5168_output #Row: " << tbl_JOIN_INNER_TD_5168_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4101_key_leftMajor {
    int32_t _ws_bill_addr_sk6206;
    bool operator==(const SW_JOIN_INNER_TD_4101_key_leftMajor& other) const {
        return ((_ws_bill_addr_sk6206 == other._ws_bill_addr_sk6206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4101_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4101_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_addr_sk6206));
    }
};
}
struct SW_JOIN_INNER_TD_4101_payload_leftMajor {
    int32_t _ws_bill_addr_sk6206;
    int32_t _ws_ext_sales_price6222;
    int32_t _d_year6239;
    int32_t _d_qoy6243;
};
struct SW_JOIN_INNER_TD_4101_key_rightMajor {
    int32_t _ca_address_sk6261;
    bool operator==(const SW_JOIN_INNER_TD_4101_key_rightMajor& other) const {
        return ((_ca_address_sk6261 == other._ca_address_sk6261));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4101_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4101_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk6261));
    }
};
}
struct SW_JOIN_INNER_TD_4101_payload_rightMajor {
    int32_t _ca_address_sk6261;
    std::string _ca_county6268;
};
void SW_JOIN_INNER_TD_4101(Table &tbl_JOIN_INNER_TD_5899_output, Table &tbl_Filter_TD_5616_output, Table &tbl_JOIN_INNER_TD_4101_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_addr_sk#6206 = ca_address_sk#6261))
    // Left Table: ListBuffer(ws_bill_addr_sk#6206, ws_ext_sales_price#6222, d_year#6239, d_qoy#6243)
    // Right Table: ListBuffer(ca_address_sk#6261, ca_county#6268)
    // Output Table: ListBuffer(ws_ext_sales_price#6222, d_year#6239, d_qoy#6243, ca_county#6268)
    int left_nrow = tbl_JOIN_INNER_TD_5899_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5616_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4101_key_leftMajor, SW_JOIN_INNER_TD_4101_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5899_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_addr_sk6206_k = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4101_key_leftMajor keyA{_ws_bill_addr_sk6206_k};
            int32_t _ws_bill_addr_sk6206 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 0);
            int32_t _ws_ext_sales_price6222 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 1);
            int32_t _d_year6239 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 2);
            int32_t _d_qoy6243 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_4101_payload_leftMajor payloadA{_ws_bill_addr_sk6206, _ws_ext_sales_price6222, _d_year6239, _d_qoy6243};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5616_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk6261_k = tbl_Filter_TD_5616_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4101_key_leftMajor{_ca_address_sk6261_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_bill_addr_sk6206 = (it->second)._ws_bill_addr_sk6206;
                int32_t _ws_ext_sales_price6222 = (it->second)._ws_ext_sales_price6222;
                int32_t _d_year6239 = (it->second)._d_year6239;
                int32_t _d_qoy6243 = (it->second)._d_qoy6243;
                int32_t _ca_address_sk6261 = tbl_Filter_TD_5616_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_n = tbl_Filter_TD_5616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_county6268 = std::string(_ca_county6268_n.data());
                tbl_JOIN_INNER_TD_4101_output.setInt32(r, 0, _ws_ext_sales_price6222);
                tbl_JOIN_INNER_TD_4101_output.setInt32(r, 1, _d_year6239);
                tbl_JOIN_INNER_TD_4101_output.setInt32(r, 2, _d_qoy6243);
                tbl_JOIN_INNER_TD_4101_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6268_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4101_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4101_key_rightMajor, SW_JOIN_INNER_TD_4101_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5616_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk6261_k = tbl_Filter_TD_5616_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4101_key_rightMajor keyA{_ca_address_sk6261_k};
            int32_t _ca_address_sk6261 = tbl_Filter_TD_5616_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_n = tbl_Filter_TD_5616_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_county6268 = std::string(_ca_county6268_n.data());
            SW_JOIN_INNER_TD_4101_payload_rightMajor payloadA{_ca_address_sk6261, _ca_county6268};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5899_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_addr_sk6206_k = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4101_key_rightMajor{_ws_bill_addr_sk6206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk6261 = (it->second)._ca_address_sk6261;
                std::string _ca_county6268 = (it->second)._ca_county6268;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_n{};
                memcpy(_ca_county6268_n.data(), (_ca_county6268).data(), (_ca_county6268).length());
                int32_t _ws_bill_addr_sk6206 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 0);
                int32_t _ws_ext_sales_price6222 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 1);
                int32_t _d_year6239 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 2);
                int32_t _d_qoy6243 = tbl_JOIN_INNER_TD_5899_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_4101_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _ca_county6268_n);
                tbl_JOIN_INNER_TD_4101_output.setInt32(r, 0, _ws_ext_sales_price6222);
                tbl_JOIN_INNER_TD_4101_output.setInt32(r, 1, _d_year6239);
                tbl_JOIN_INNER_TD_4101_output.setInt32(r, 2, _d_qoy6243);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4101_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4101_output #Row: " << tbl_JOIN_INNER_TD_4101_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4908_key {
    std::string _ca_county6192;
    int32_t _d_qoy6167;
    int32_t _d_year6163;
    bool operator==(const SW_Aggregate_TD_4908_key& other) const { return (_ca_county6192 == other._ca_county6192) && (_d_qoy6167 == other._d_qoy6167) && (_d_year6163 == other._d_year6163); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4908_key> {
    std::size_t operator() (const SW_Aggregate_TD_4908_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6192)) + (hash<int32_t>()(k._d_qoy6167)) + (hash<int32_t>()(k._d_year6163));
    }
};
}
struct SW_Aggregate_TD_4908_payload {
    int32_t _web_sales5303_sum_0;
};
void SW_Aggregate_TD_4908(Table &tbl_JOIN_INNER_TD_5990_output, Table &tbl_Aggregate_TD_4908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#6192, d_qoy#6167, d_year#6163, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#6146)),17,2) AS web_sales#5303)
    // Input: ListBuffer(ws_ext_sales_price#6146, d_year#6163, d_qoy#6167, ca_county#6192)
    // Output: ListBuffer(ca_county#6192, web_sales#5303)
    std::unordered_map<SW_Aggregate_TD_4908_key, SW_Aggregate_TD_4908_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5990_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price6146 = tbl_JOIN_INNER_TD_5990_output.getInt32(i, 0);
        int32_t _d_year6163 = tbl_JOIN_INNER_TD_5990_output.getInt32(i, 1);
        int32_t _d_qoy6167 = tbl_JOIN_INNER_TD_5990_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6192 = tbl_JOIN_INNER_TD_5990_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_4908_key k{std::string(_ca_county6192.data()), _d_qoy6167, _d_year6163};
        int64_t _web_sales5303_sum_0 = _ws_ext_sales_price6146;
        SW_Aggregate_TD_4908_payload p{_web_sales5303_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._web_sales5303_sum_0 + _web_sales5303_sum_0;
            p._web_sales5303_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6192{};
        memcpy(_ca_county6192.data(), ((it.first)._ca_county6192).data(), ((it.first)._ca_county6192).length());
        tbl_Aggregate_TD_4908_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county6192);
        // _d_qoy6167 not required in the output table
        // _d_year6163 not required in the output table
        int32_t _web_sales5303 = (it.second)._web_sales5303_sum_0;
        tbl_Aggregate_TD_4908_output.setInt32(r, 1, _web_sales5303);
        ++r;
    }
    tbl_Aggregate_TD_4908_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4908_output #Row: " << tbl_Aggregate_TD_4908_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4331_key_leftMajor {
    std::string _ca_county61;
    bool operator==(const SW_JOIN_INNER_TD_4331_key_leftMajor& other) const {
        return ((_ca_county61 == other._ca_county61));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4331_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4331_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county61));
    }
};
}
struct SW_JOIN_INNER_TD_4331_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int32_t _store_sales5247;
    int32_t _store_sales5295;
    int32_t _store_sales5299;
};
struct SW_JOIN_INNER_TD_4331_key_rightMajor {
    std::string _ca_county5284;
    bool operator==(const SW_JOIN_INNER_TD_4331_key_rightMajor& other) const {
        return ((_ca_county5284 == other._ca_county5284));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4331_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4331_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county5284));
    }
};
}
struct SW_JOIN_INNER_TD_4331_payload_rightMajor {
    std::string _ca_county5284;
    int32_t _web_sales5248;
};
void SW_JOIN_INNER_TD_4331(Table &tbl_JOIN_INNER_TD_5168_output, Table &tbl_Aggregate_TD_5223_output, Table &tbl_JOIN_INNER_TD_4331_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_county#61 = ca_county#5284))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, store_sales#5295, store_sales#5299)
    // Right Table: ListBuffer(ca_county#5284, web_sales#5248)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, store_sales#5295, store_sales#5299, ca_county#5284, web_sales#5248)
    int left_nrow = tbl_JOIN_INNER_TD_5168_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5223_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4331_key_leftMajor, SW_JOIN_INNER_TD_4331_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5168_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_5168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            SW_JOIN_INNER_TD_4331_key_leftMajor keyA{_ca_county61_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_5168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 1);
            int32_t _store_sales5247 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 2);
            int32_t _store_sales5295 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 3);
            int32_t _store_sales5299 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4331_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales5247, _store_sales5295, _store_sales5299};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5223_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_k_n = tbl_Aggregate_TD_5223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county5284_k = std::string(_ca_county5284_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4331_key_leftMajor{_ca_county5284_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _store_sales5247 = (it->second)._store_sales5247;
                int32_t _store_sales5295 = (it->second)._store_sales5295;
                int32_t _store_sales5299 = (it->second)._store_sales5299;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_Aggregate_TD_5223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county5284 = std::string(_ca_county5284_n.data());
                int32_t _web_sales5248 = tbl_Aggregate_TD_5223_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4331_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 3, _store_sales5295);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 4, _store_sales5299);
                tbl_JOIN_INNER_TD_4331_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county5284_n);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 6, _web_sales5248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4331_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4331_key_rightMajor, SW_JOIN_INNER_TD_4331_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5223_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_k_n = tbl_Aggregate_TD_5223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county5284_k = std::string(_ca_county5284_k_n.data());
            SW_JOIN_INNER_TD_4331_key_rightMajor keyA{_ca_county5284_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_Aggregate_TD_5223_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county5284 = std::string(_ca_county5284_n.data());
            int32_t _web_sales5248 = tbl_Aggregate_TD_5223_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4331_payload_rightMajor payloadA{_ca_county5284, _web_sales5248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5168_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_k_n = tbl_JOIN_INNER_TD_5168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61_k = std::string(_ca_county61_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4331_key_rightMajor{_ca_county61_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county5284 = (it->second)._ca_county5284;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n{};
                memcpy(_ca_county5284_n.data(), (_ca_county5284).data(), (_ca_county5284).length());
                int32_t _web_sales5248 = (it->second)._web_sales5248;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_5168_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 1);
                int32_t _store_sales5247 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 2);
                int32_t _store_sales5295 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 3);
                int32_t _store_sales5299 = tbl_JOIN_INNER_TD_5168_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_4331_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county5284_n);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 6, _web_sales5248);
                tbl_JOIN_INNER_TD_4331_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 3, _store_sales5295);
                tbl_JOIN_INNER_TD_4331_output.setInt32(r, 4, _store_sales5299);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4331_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4331_output #Row: " << tbl_JOIN_INNER_TD_4331_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3469_key {
    std::string _ca_county6268;
    int32_t _d_qoy6243;
    int32_t _d_year6239;
    bool operator==(const SW_Aggregate_TD_3469_key& other) const { return (_ca_county6268 == other._ca_county6268) && (_d_qoy6243 == other._d_qoy6243) && (_d_year6239 == other._d_year6239); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3469_key> {
    std::size_t operator() (const SW_Aggregate_TD_3469_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6268)) + (hash<int32_t>()(k._d_qoy6243)) + (hash<int32_t>()(k._d_year6239));
    }
};
}
struct SW_Aggregate_TD_3469_payload {
    int32_t _web_sales5307_sum_0;
};
void SW_Aggregate_TD_3469(Table &tbl_JOIN_INNER_TD_4101_output, Table &tbl_Aggregate_TD_3469_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_county#6268, d_qoy#6243, d_year#6239, MakeDecimal(sum(UnscaledValue(ws_ext_sales_price#6222)),17,2) AS web_sales#5307)
    // Input: ListBuffer(ws_ext_sales_price#6222, d_year#6239, d_qoy#6243, ca_county#6268)
    // Output: ListBuffer(ca_county#6268, web_sales#5307)
    std::unordered_map<SW_Aggregate_TD_3469_key, SW_Aggregate_TD_3469_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4101_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ext_sales_price6222 = tbl_JOIN_INNER_TD_4101_output.getInt32(i, 0);
        int32_t _d_year6239 = tbl_JOIN_INNER_TD_4101_output.getInt32(i, 1);
        int32_t _d_qoy6243 = tbl_JOIN_INNER_TD_4101_output.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6268 = tbl_JOIN_INNER_TD_4101_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_3469_key k{std::string(_ca_county6268.data()), _d_qoy6243, _d_year6239};
        int64_t _web_sales5307_sum_0 = _ws_ext_sales_price6222;
        SW_Aggregate_TD_3469_payload p{_web_sales5307_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._web_sales5307_sum_0 + _web_sales5307_sum_0;
            p._web_sales5307_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county6268{};
        memcpy(_ca_county6268.data(), ((it.first)._ca_county6268).data(), ((it.first)._ca_county6268).length());
        tbl_Aggregate_TD_3469_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county6268);
        // _d_qoy6243 not required in the output table
        // _d_year6239 not required in the output table
        int32_t _web_sales5307 = (it.second)._web_sales5307_sum_0;
        tbl_Aggregate_TD_3469_output.setInt32(r, 1, _web_sales5307);
        ++r;
    }
    tbl_Aggregate_TD_3469_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3469_output #Row: " << tbl_Aggregate_TD_3469_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3222_key_leftMajor {
    std::string _ca_county5284;
    bool operator==(const SW_JOIN_INNER_TD_3222_key_leftMajor& other) const {
        return ((_ca_county5284 == other._ca_county5284));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3222_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3222_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county5284));
    }
};
}
struct SW_JOIN_INNER_TD_3222_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int32_t _store_sales5247;
    int32_t _store_sales5295;
    int32_t _store_sales5299;
    std::string _ca_county5284;
    int32_t _web_sales5248;
};
struct SW_JOIN_INNER_TD_3222_key_rightMajor {
    std::string _ca_county6192;
    bool operator==(const SW_JOIN_INNER_TD_3222_key_rightMajor& other) const {
        return ((_ca_county6192 == other._ca_county6192));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3222_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3222_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6192));
    }
};
}
struct SW_JOIN_INNER_TD_3222_payload_rightMajor {
    std::string _ca_county6192;
    int32_t _web_sales5303;
};
void SW_JOIN_INNER_TD_3222(Table &tbl_JOIN_INNER_TD_4331_output, Table &tbl_Aggregate_TD_4908_output, Table &tbl_JOIN_INNER_TD_3222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_county#5284 = ca_county#6192) AND (CASE WHEN (web_sales#5248 > 0.00) THEN CheckOverflow((promote_precision(web_sales#5303) / promote_precision(web_sales#5248)), DecimalType(37,20), true) END > CASE WHEN (store_sales#5247 > 0.00) THEN CheckOverflow((promote_precision(store_sales#5295) / promote_precision(store_sales#5247)), DecimalType(37,20), true) END)))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, store_sales#5295, store_sales#5299, ca_county#5284, web_sales#5248)
    // Right Table: ListBuffer(ca_county#6192, web_sales#5303)
    // Output Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, store_sales#5295, store_sales#5299, ca_county#5284, web_sales#5248, web_sales#5303)
    int left_nrow = tbl_JOIN_INNER_TD_4331_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4908_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3222_key_leftMajor, SW_JOIN_INNER_TD_3222_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4331_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_k_n = tbl_JOIN_INNER_TD_4331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county5284_k = std::string(_ca_county5284_k_n.data());
            SW_JOIN_INNER_TD_3222_key_leftMajor keyA{_ca_county5284_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_4331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 1);
            int32_t _store_sales5247 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 2);
            int32_t _store_sales5295 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 3);
            int32_t _store_sales5299 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_JOIN_INNER_TD_4331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county5284 = std::string(_ca_county5284_n.data());
            int32_t _web_sales5248 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_3222_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales5247, _store_sales5295, _store_sales5299, _ca_county5284, _web_sales5248};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_4908_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_k_n = tbl_Aggregate_TD_4908_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6192_k = std::string(_ca_county6192_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3222_key_leftMajor{_ca_county6192_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _store_sales5247 = (it->second)._store_sales5247;
                int32_t _store_sales5295 = (it->second)._store_sales5295;
                int32_t _store_sales5299 = (it->second)._store_sales5299;
                std::string _ca_county5284 = (it->second)._ca_county5284;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n{};
                memcpy(_ca_county5284_n.data(), (_ca_county5284).data(), (_ca_county5284).length());
                int32_t _web_sales5248 = (it->second)._web_sales5248;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_n = tbl_Aggregate_TD_4908_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county6192 = std::string(_ca_county6192_n.data());
                int32_t _web_sales5303 = tbl_Aggregate_TD_4908_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 3, _store_sales5295);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 4, _store_sales5299);
                tbl_JOIN_INNER_TD_3222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county5284_n);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 6, _web_sales5248);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 7, _web_sales5303);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3222_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3222_key_rightMajor, SW_JOIN_INNER_TD_3222_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_4908_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_k_n = tbl_Aggregate_TD_4908_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6192_k = std::string(_ca_county6192_k_n.data());
            SW_JOIN_INNER_TD_3222_key_rightMajor keyA{_ca_county6192_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_n = tbl_Aggregate_TD_4908_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6192 = std::string(_ca_county6192_n.data());
            int32_t _web_sales5303 = tbl_Aggregate_TD_4908_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3222_payload_rightMajor payloadA{_ca_county6192, _web_sales5303};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4331_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_k_n = tbl_JOIN_INNER_TD_4331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county5284_k = std::string(_ca_county5284_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3222_key_rightMajor{_ca_county5284_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county6192 = (it->second)._ca_county6192;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6192_n{};
                memcpy(_ca_county6192_n.data(), (_ca_county6192).data(), (_ca_county6192).length());
                int32_t _web_sales5303 = (it->second)._web_sales5303;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_4331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 1);
                int32_t _store_sales5247 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 2);
                int32_t _store_sales5295 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 3);
                int32_t _store_sales5299 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_JOIN_INNER_TD_4331_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _ca_county5284 = std::string(_ca_county5284_n.data());
                int32_t _web_sales5248 = tbl_JOIN_INNER_TD_4331_output.getInt32(i, 6);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 7, _web_sales5303);
                tbl_JOIN_INNER_TD_3222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 2, _store_sales5247);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 3, _store_sales5295);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 4, _store_sales5299);
                tbl_JOIN_INNER_TD_3222_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 5, _ca_county5284_n);
                tbl_JOIN_INNER_TD_3222_output.setInt32(r, 6, _web_sales5248);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3222_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3222_output #Row: " << tbl_JOIN_INNER_TD_3222_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2198_key_leftMajor {
    std::string _ca_county5284;
    bool operator==(const SW_JOIN_INNER_TD_2198_key_leftMajor& other) const {
        return ((_ca_county5284 == other._ca_county5284));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2198_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2198_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county5284));
    }
};
}
struct SW_JOIN_INNER_TD_2198_payload_leftMajor {
    std::string _ca_county61;
    int32_t _d_year126;
    int32_t _store_sales5247;
    int32_t _store_sales5295;
    int32_t _store_sales5299;
    std::string _ca_county5284;
    int32_t _web_sales5248;
    int32_t _web_sales5303;
};
struct SW_JOIN_INNER_TD_2198_key_rightMajor {
    std::string _ca_county6268;
    bool operator==(const SW_JOIN_INNER_TD_2198_key_rightMajor& other) const {
        return ((_ca_county6268 == other._ca_county6268));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2198_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2198_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_county6268));
    }
};
}
struct SW_JOIN_INNER_TD_2198_payload_rightMajor {
    std::string _ca_county6268;
    int32_t _web_sales5307;
};
void SW_JOIN_INNER_TD_2198(Table &tbl_JOIN_INNER_TD_3222_output, Table &tbl_Aggregate_TD_3469_output, Table &tbl_JOIN_INNER_TD_2198_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((ca_county#5284 = ca_county#6268) AND (CASE WHEN (web_sales#5303 > 0.00) THEN CheckOverflow((promote_precision(web_sales#5307) / promote_precision(web_sales#5303)), DecimalType(37,20), true) END > CASE WHEN (store_sales#5295 > 0.00) THEN CheckOverflow((promote_precision(store_sales#5299) / promote_precision(store_sales#5295)), DecimalType(37,20), true) END)))
    // Left Table: ListBuffer(ca_county#61, d_year#126, store_sales#5247, store_sales#5295, store_sales#5299, ca_county#5284, web_sales#5248, web_sales#5303)
    // Right Table: ListBuffer(ca_county#6268, web_sales#5307)
    // Output Table: ListBuffer(ca_county#61, d_year#126, web_sales#5303, web_sales#5248, store_sales#5295, store_sales#5247, web_sales#5307, store_sales#5299)
    int left_nrow = tbl_JOIN_INNER_TD_3222_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_3469_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2198_key_leftMajor, SW_JOIN_INNER_TD_2198_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_3222_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_k_n = tbl_JOIN_INNER_TD_3222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county5284_k = std::string(_ca_county5284_k_n.data());
            SW_JOIN_INNER_TD_2198_key_leftMajor keyA{_ca_county5284_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_3222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county61 = std::string(_ca_county61_n.data());
            int32_t _d_year126 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 1);
            int32_t _store_sales5247 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 2);
            int32_t _store_sales5295 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 3);
            int32_t _store_sales5299 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 4);
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_JOIN_INNER_TD_3222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county5284 = std::string(_ca_county5284_n.data());
            int32_t _web_sales5248 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 6);
            int32_t _web_sales5303 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_2198_payload_leftMajor payloadA{_ca_county61, _d_year126, _store_sales5247, _store_sales5295, _store_sales5299, _ca_county5284, _web_sales5248, _web_sales5303};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_3469_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_k_n = tbl_Aggregate_TD_3469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6268_k = std::string(_ca_county6268_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2198_key_leftMajor{_ca_county6268_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county61 = (it->second)._ca_county61;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n{};
                memcpy(_ca_county61_n.data(), (_ca_county61).data(), (_ca_county61).length());
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _store_sales5247 = (it->second)._store_sales5247;
                int32_t _store_sales5295 = (it->second)._store_sales5295;
                int32_t _store_sales5299 = (it->second)._store_sales5299;
                std::string _ca_county5284 = (it->second)._ca_county5284;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n{};
                memcpy(_ca_county5284_n.data(), (_ca_county5284).data(), (_ca_county5284).length());
                int32_t _web_sales5248 = (it->second)._web_sales5248;
                int32_t _web_sales5303 = (it->second)._web_sales5303;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_n = tbl_Aggregate_TD_3469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county6268 = std::string(_ca_county6268_n.data());
                int32_t _web_sales5307 = tbl_Aggregate_TD_3469_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_2198_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 5, _store_sales5247);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 4, _store_sales5295);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 7, _store_sales5299);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 3, _web_sales5248);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 2, _web_sales5303);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 6, _web_sales5307);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2198_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2198_key_rightMajor, SW_JOIN_INNER_TD_2198_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_3469_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_k_n = tbl_Aggregate_TD_3469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6268_k = std::string(_ca_county6268_k_n.data());
            SW_JOIN_INNER_TD_2198_key_rightMajor keyA{_ca_county6268_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_n = tbl_Aggregate_TD_3469_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_county6268 = std::string(_ca_county6268_n.data());
            int32_t _web_sales5307 = tbl_Aggregate_TD_3469_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_2198_payload_rightMajor payloadA{_ca_county6268, _web_sales5307};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_3222_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_k_n = tbl_JOIN_INNER_TD_3222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
            std::string _ca_county5284_k = std::string(_ca_county5284_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2198_key_rightMajor{_ca_county5284_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_county6268 = (it->second)._ca_county6268;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county6268_n{};
                memcpy(_ca_county6268_n.data(), (_ca_county6268).data(), (_ca_county6268).length());
                int32_t _web_sales5307 = (it->second)._web_sales5307;
                std::array<char, TPCDS_READ_MAX + 1> _ca_county61_n = tbl_JOIN_INNER_TD_3222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_county61 = std::string(_ca_county61_n.data());
                int32_t _d_year126 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 1);
                int32_t _store_sales5247 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 2);
                int32_t _store_sales5295 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 3);
                int32_t _store_sales5299 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 4);
                std::array<char, TPCDS_READ_MAX + 1> _ca_county5284_n = tbl_JOIN_INNER_TD_3222_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
                std::string _ca_county5284 = std::string(_ca_county5284_n.data());
                int32_t _web_sales5248 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 6);
                int32_t _web_sales5303 = tbl_JOIN_INNER_TD_3222_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 6, _web_sales5307);
                tbl_JOIN_INNER_TD_2198_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_county61_n);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 1, _d_year126);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 5, _store_sales5247);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 4, _store_sales5295);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 7, _store_sales5299);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 3, _web_sales5248);
                tbl_JOIN_INNER_TD_2198_output.setInt32(r, 2, _web_sales5303);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2198_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2198_output #Row: " << tbl_JOIN_INNER_TD_2198_output.getNumRow() << std::endl;
}

void SW_Project_TD_1142(Table &tbl_JOIN_INNER_TD_2198_output, Table &tbl_Project_TD_1142_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(web_sales#5303) / promote_precision(web_sales#5248)), DecimalType(37,20), true) AS web_q1_q2_increase#5243, CheckOverflow((promote_precision(store_sales#5295) / promote_precision(store_sales#5247)), DecimalType(37,20), true) AS store_q1_q2_increase#5244, CheckOverflow((promote_precision(web_sales#5307) / promote_precision(web_sales#5303)), DecimalType(37,20), true) AS web_q2_q3_increase#5245, CheckOverflow((promote_precision(store_sales#5299) / promote_precision(store_sales#5295)), DecimalType(37,20), true) AS store_q2_q3_increase#5246)
    // Input: ListBuffer(ca_county#61, d_year#126, web_sales#5303, web_sales#5248, store_sales#5295, store_sales#5247, web_sales#5307, store_sales#5299)
    // Output: ListBuffer(ca_county#61, d_year#126, web_q1_q2_increase#5243, store_q1_q2_increase#5244, web_q2_q3_increase#5245, store_q2_q3_increase#5246)
    int nrow1 = tbl_JOIN_INNER_TD_2198_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_JOIN_INNER_TD_2198_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 1);
        int32_t _web_sales5303 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 2);
        int32_t _web_sales5248 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 3);
        int32_t _store_sales5295 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 4);
        int32_t _store_sales5247 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 5);
        int32_t _web_sales5307 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 6);
        int32_t _store_sales5299 = tbl_JOIN_INNER_TD_2198_output.getInt32(i, 7);
        int32_t _web_q1_q2_increase5243 = (_web_sales5303 / _web_sales5248);
        tbl_Project_TD_1142_output.setInt32(i, 2, _web_q1_q2_increase5243);
        int32_t _store_q1_q2_increase5244 = (_store_sales5295 / _store_sales5247);
        tbl_Project_TD_1142_output.setInt32(i, 3, _store_q1_q2_increase5244);
        int32_t _web_q2_q3_increase5245 = (_web_sales5307 / _web_sales5303);
        tbl_Project_TD_1142_output.setInt32(i, 4, _web_q2_q3_increase5245);
        int32_t _store_q2_q3_increase5246 = (_store_sales5299 / _store_sales5295);
        tbl_Project_TD_1142_output.setInt32(i, 5, _store_q2_q3_increase5246);
        tbl_Project_TD_1142_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _ca_county61);
        tbl_Project_TD_1142_output.setInt32(i, 1, _d_year126);
    }
    tbl_Project_TD_1142_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1142_output #Row: " << tbl_Project_TD_1142_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0776(Table &tbl_Project_TD_1142_output, Table &tbl_Sort_TD_0776_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ca_county#61 ASC NULLS FIRST)
    // Input: ListBuffer(ca_county#61, d_year#126, web_q1_q2_increase#5243, store_q1_q2_increase#5244, web_q2_q3_increase#5245, store_q2_q3_increase#5246)
    // Output: ListBuffer(ca_county#61, d_year#126, web_q1_q2_increase#5243, store_q1_q2_increase#5244, web_q2_q3_increase#5245, store_q2_q3_increase#5246)
    struct SW_Sort_TD_0776Row {
        std::string _ca_county61;
        int32_t _d_year126;
        int32_t _web_q1_q2_increase5243;
        int32_t _store_q1_q2_increase5244;
        int32_t _web_q2_q3_increase5245;
        int32_t _store_q2_q3_increase5246;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0776Row& a, const SW_Sort_TD_0776Row& b) const { return 
 (a._ca_county61 < b._ca_county61); 
}
    }SW_Sort_TD_0776_order; 

    int nrow1 = tbl_Project_TD_1142_output.getNumRow();
    std::vector<SW_Sort_TD_0776Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61 = tbl_Project_TD_1142_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _d_year126 = tbl_Project_TD_1142_output.getInt32(i, 1);
        int32_t _web_q1_q2_increase5243 = tbl_Project_TD_1142_output.getInt32(i, 2);
        int32_t _store_q1_q2_increase5244 = tbl_Project_TD_1142_output.getInt32(i, 3);
        int32_t _web_q2_q3_increase5245 = tbl_Project_TD_1142_output.getInt32(i, 4);
        int32_t _store_q2_q3_increase5246 = tbl_Project_TD_1142_output.getInt32(i, 5);
        SW_Sort_TD_0776Row t = {std::string(_ca_county61.data()),_d_year126,_web_q1_q2_increase5243,_store_q1_q2_increase5244,_web_q2_q3_increase5245,_store_q2_q3_increase5246};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0776_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_county61{};
        memcpy(_ca_county61.data(), (it._ca_county61).data(), (it._ca_county61).length());
        tbl_Sort_TD_0776_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _ca_county61);
        tbl_Sort_TD_0776_output.setInt32(r, 1, it._d_year126);
        tbl_Sort_TD_0776_output.setInt32(r, 2, it._web_q1_q2_increase5243);
        tbl_Sort_TD_0776_output.setInt32(r, 3, it._store_q1_q2_increase5244);
        tbl_Sort_TD_0776_output.setInt32(r, 4, it._web_q2_q3_increase5245);
        tbl_Sort_TD_0776_output.setInt32(r, 5, it._store_q2_q3_increase5246);
        if (r < 10) {
            std::cout << (it._ca_county61).data() << " " << it._d_year126 << " " << it._web_q1_q2_increase5243 << " " << it._store_q1_q2_increase5244 << " " << it._web_q2_q3_increase5245 << " " << it._store_q2_q3_increase5246 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0776_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0776_output #Row: " << tbl_Sort_TD_0776_output.getNumRow() << std::endl;
}

