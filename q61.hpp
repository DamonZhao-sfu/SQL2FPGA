#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9421(Table &tbl_SerializeFromObject_TD_10666_input, Table &tbl_Filter_TD_9421_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_gmt_offset#405) AND (s_gmt_offset#405 = -5.00)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_gmt_offset#405)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10666_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_gmt_offset405 = tbl_SerializeFromObject_TD_10666_input.getInt32(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10666_input.getInt32(i, 0);
        if (((_s_gmt_offset405!= 0) && (_s_gmt_offset405 == -5.00)) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10666_input.getInt32(i, 0);
            tbl_Filter_TD_9421_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_9421_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9421_output #Row: " << tbl_Filter_TD_9421_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9583(Table &tbl_SerializeFromObject_TD_10168_input, Table &tbl_Filter_TD_9583_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_store_sk#1213) AND isnotnull(ss_promo_sk#1214)) AND ((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10168_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 3);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 4);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 1);
        if (((_ss_store_sk1213!= 0) && (_ss_promo_sk1214!= 0)) && (((_ss_sold_date_sk1206!= 0) && (_ss_customer_sk1209!= 0)) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 0);
            tbl_Filter_TD_9583_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 1);
            tbl_Filter_TD_9583_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 2);
            tbl_Filter_TD_9583_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 3);
            tbl_Filter_TD_9583_output.setInt32(r, 3, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 4);
            tbl_Filter_TD_9583_output.setInt32(r, 4, _ss_promo_sk1214_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10168_input.getInt32(i, 5);
            tbl_Filter_TD_9583_output.setInt32(r, 5, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9583_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9583_output #Row: " << tbl_Filter_TD_9583_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8599(Table &tbl_SerializeFromObject_TD_98_input, Table &tbl_Filter_TD_8599_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_gmt_offset#4413) AND (s_gmt_offset#4413 = -5.00)) AND isnotnull(s_store_sk#4386)))
    // Input: ListBuffer(s_store_sk#4386, s_gmt_offset#4413)
    // Output: ListBuffer(s_store_sk#4386)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_98_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_gmt_offset4413 = tbl_SerializeFromObject_TD_98_input.getInt32(i, 1);
        int32_t _s_store_sk4386 = tbl_SerializeFromObject_TD_98_input.getInt32(i, 0);
        if (((_s_gmt_offset4413!= 0) && (_s_gmt_offset4413 == -5.00)) && (_s_store_sk4386!= 0)) {
            int32_t _s_store_sk4386_t = tbl_SerializeFromObject_TD_98_input.getInt32(i, 0);
            tbl_Filter_TD_8599_output.setInt32(r, 0, _s_store_sk4386_t);
            r++;
        }
    }
    tbl_Filter_TD_8599_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8599_output #Row: " << tbl_Filter_TD_8599_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8492(Table &tbl_SerializeFromObject_TD_9545_input, Table &tbl_Filter_TD_8492_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#4370) AND ((isnotnull(ss_sold_date_sk#4363) AND isnotnull(ss_customer_sk#4366)) AND isnotnull(ss_item_sk#4365))))
    // Input: ListBuffer(ss_sold_date_sk#4363, ss_item_sk#4365, ss_customer_sk#4366, ss_store_sk#4370, ss_ext_sales_price#4378)
    // Output: ListBuffer(ss_sold_date_sk#4363, ss_item_sk#4365, ss_customer_sk#4366, ss_store_sk#4370, ss_ext_sales_price#4378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9545_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk4370 = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 3);
        int32_t _ss_sold_date_sk4363 = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 0);
        int32_t _ss_customer_sk4366 = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 2);
        int32_t _ss_item_sk4365 = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 1);
        if ((_ss_store_sk4370!= 0) && (((_ss_sold_date_sk4363!= 0) && (_ss_customer_sk4366!= 0)) && (_ss_item_sk4365!= 0))) {
            int32_t _ss_sold_date_sk4363_t = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 0);
            tbl_Filter_TD_8492_output.setInt32(r, 0, _ss_sold_date_sk4363_t);
            int32_t _ss_item_sk4365_t = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 1);
            tbl_Filter_TD_8492_output.setInt32(r, 1, _ss_item_sk4365_t);
            int32_t _ss_customer_sk4366_t = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 2);
            tbl_Filter_TD_8492_output.setInt32(r, 2, _ss_customer_sk4366_t);
            int32_t _ss_store_sk4370_t = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 3);
            tbl_Filter_TD_8492_output.setInt32(r, 3, _ss_store_sk4370_t);
            int32_t _ss_ext_sales_price4378_t = tbl_SerializeFromObject_TD_9545_input.getInt32(i, 4);
            tbl_Filter_TD_8492_output.setInt32(r, 4, _ss_ext_sales_price4378_t);
            r++;
        }
    }
    tbl_Filter_TD_8492_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8492_output #Row: " << tbl_Filter_TD_8492_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8121(Table &tbl_SerializeFromObject_TD_9645_input, Table &tbl_Filter_TD_8121_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((p_channel_dmail#302 = Y) OR (p_channel_email#303 = Y)) OR (p_channel_tv#305 = Y)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_dmail#302, p_channel_email#303, p_channel_tv#305)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9645_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_dmail302 = tbl_SerializeFromObject_TD_9645_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_email303 = tbl_SerializeFromObject_TD_9645_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv305 = tbl_SerializeFromObject_TD_9645_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_9645_input.getInt32(i, 0);
        if ((((std::string(_p_channel_dmail302.data()) == "Y") || (std::string(_p_channel_email303.data()) == "Y")) || (std::string(_p_channel_tv305.data()) == "Y")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_9645_input.getInt32(i, 0);
            tbl_Filter_TD_8121_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_8121_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8121_output #Row: " << tbl_Filter_TD_8121_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_8387_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_8387_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8387_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8387_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_8387_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_store_sk1213;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_8387_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_8387_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_8387_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_8387_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_8387_payload_rightMajor {
    int32_t _s_store_sk378;
};
void SW_JOIN_INNER_TD_8387(Table &tbl_Filter_TD_9583_output, Table &tbl_Filter_TD_9421_output, Table &tbl_JOIN_INNER_TD_8387_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(s_store_sk#378)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_promo_sk#1214, ss_ext_sales_price#1221)
    int left_nrow = tbl_Filter_TD_9583_output.getNumRow();
    int right_nrow = tbl_Filter_TD_9421_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8387_key_leftMajor, SW_JOIN_INNER_TD_8387_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_9583_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_Filter_TD_9583_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_8387_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9583_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_9583_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_Filter_TD_9583_output.getInt32(i, 2);
            int32_t _ss_store_sk1213 = tbl_Filter_TD_9583_output.getInt32(i, 3);
            int32_t _ss_promo_sk1214 = tbl_Filter_TD_9583_output.getInt32(i, 4);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9583_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_8387_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_store_sk1213, _ss_promo_sk1214, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9421_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_9421_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8387_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _s_store_sk378 = tbl_Filter_TD_9421_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 4, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8387_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_8387_key_rightMajor, SW_JOIN_INNER_TD_8387_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_9421_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_9421_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8387_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_9421_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_8387_payload_rightMajor payloadA{_s_store_sk378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_9583_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_Filter_TD_9583_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_8387_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_9583_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_9583_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_Filter_TD_9583_output.getInt32(i, 2);
                int32_t _ss_store_sk1213 = tbl_Filter_TD_9583_output.getInt32(i, 3);
                int32_t _ss_promo_sk1214 = tbl_Filter_TD_9583_output.getInt32(i, 4);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_9583_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 3, _ss_promo_sk1214);
                tbl_JOIN_INNER_TD_8387_output.setInt32(r, 4, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_8387_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_8387_output #Row: " << tbl_JOIN_INNER_TD_8387_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7643(Table &tbl_SerializeFromObject_TD_8642_input, Table &tbl_Filter_TD_7643_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4421) AND isnotnull(d_moy#4423)) AND ((d_year#4421 = 1998) AND (d_moy#4423 = 11))) AND isnotnull(d_date_sk#4415)))
    // Input: ListBuffer(d_date_sk#4415, d_year#4421, d_moy#4423)
    // Output: ListBuffer(d_date_sk#4415)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8642_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4421 = tbl_SerializeFromObject_TD_8642_input.getInt32(i, 1);
        int32_t _d_moy4423 = tbl_SerializeFromObject_TD_8642_input.getInt32(i, 2);
        int32_t _d_date_sk4415 = tbl_SerializeFromObject_TD_8642_input.getInt32(i, 0);
        if ((((_d_year4421!= 0) && (_d_moy4423!= 0)) && ((_d_year4421 == 1998) && (_d_moy4423 == 11))) && (_d_date_sk4415!= 0)) {
            int32_t _d_date_sk4415_t = tbl_SerializeFromObject_TD_8642_input.getInt32(i, 0);
            tbl_Filter_TD_7643_output.setInt32(r, 0, _d_date_sk4415_t);
            r++;
        }
    }
    tbl_Filter_TD_7643_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7643_output #Row: " << tbl_Filter_TD_7643_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7129_key_leftMajor {
    int32_t _ss_store_sk4370;
    bool operator==(const SW_JOIN_INNER_TD_7129_key_leftMajor& other) const {
        return ((_ss_store_sk4370 == other._ss_store_sk4370));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7129_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7129_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk4370));
    }
};
}
struct SW_JOIN_INNER_TD_7129_payload_leftMajor {
    int32_t _ss_sold_date_sk4363;
    int32_t _ss_item_sk4365;
    int32_t _ss_customer_sk4366;
    int32_t _ss_store_sk4370;
    int32_t _ss_ext_sales_price4378;
};
struct SW_JOIN_INNER_TD_7129_key_rightMajor {
    int32_t _s_store_sk4386;
    bool operator==(const SW_JOIN_INNER_TD_7129_key_rightMajor& other) const {
        return ((_s_store_sk4386 == other._s_store_sk4386));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7129_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7129_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk4386));
    }
};
}
struct SW_JOIN_INNER_TD_7129_payload_rightMajor {
    int32_t _s_store_sk4386;
};
void SW_JOIN_INNER_TD_7129(Table &tbl_Filter_TD_8492_output, Table &tbl_Filter_TD_8599_output, Table &tbl_JOIN_INNER_TD_7129_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#4370 = s_store_sk#4386))
    // Left Table: ListBuffer(ss_sold_date_sk#4363, ss_item_sk#4365, ss_customer_sk#4366, ss_store_sk#4370, ss_ext_sales_price#4378)
    // Right Table: ListBuffer(s_store_sk#4386)
    // Output Table: ListBuffer(ss_sold_date_sk#4363, ss_item_sk#4365, ss_customer_sk#4366, ss_ext_sales_price#4378)
    int left_nrow = tbl_Filter_TD_8492_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8599_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7129_key_leftMajor, SW_JOIN_INNER_TD_7129_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_8492_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk4370_k = tbl_Filter_TD_8492_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7129_key_leftMajor keyA{_ss_store_sk4370_k};
            int32_t _ss_sold_date_sk4363 = tbl_Filter_TD_8492_output.getInt32(i, 0);
            int32_t _ss_item_sk4365 = tbl_Filter_TD_8492_output.getInt32(i, 1);
            int32_t _ss_customer_sk4366 = tbl_Filter_TD_8492_output.getInt32(i, 2);
            int32_t _ss_store_sk4370 = tbl_Filter_TD_8492_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price4378 = tbl_Filter_TD_8492_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7129_payload_leftMajor payloadA{_ss_sold_date_sk4363, _ss_item_sk4365, _ss_customer_sk4366, _ss_store_sk4370, _ss_ext_sales_price4378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8599_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk4386_k = tbl_Filter_TD_8599_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7129_key_leftMajor{_s_store_sk4386_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4363 = (it->second)._ss_sold_date_sk4363;
                int32_t _ss_item_sk4365 = (it->second)._ss_item_sk4365;
                int32_t _ss_customer_sk4366 = (it->second)._ss_customer_sk4366;
                int32_t _ss_store_sk4370 = (it->second)._ss_store_sk4370;
                int32_t _ss_ext_sales_price4378 = (it->second)._ss_ext_sales_price4378;
                int32_t _s_store_sk4386 = tbl_Filter_TD_8599_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 0, _ss_sold_date_sk4363);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 1, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 2, _ss_customer_sk4366);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 3, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7129_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7129_key_rightMajor, SW_JOIN_INNER_TD_7129_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8599_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk4386_k = tbl_Filter_TD_8599_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7129_key_rightMajor keyA{_s_store_sk4386_k};
            int32_t _s_store_sk4386 = tbl_Filter_TD_8599_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7129_payload_rightMajor payloadA{_s_store_sk4386};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8492_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk4370_k = tbl_Filter_TD_8492_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7129_key_rightMajor{_ss_store_sk4370_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk4386 = (it->second)._s_store_sk4386;
                int32_t _ss_sold_date_sk4363 = tbl_Filter_TD_8492_output.getInt32(i, 0);
                int32_t _ss_item_sk4365 = tbl_Filter_TD_8492_output.getInt32(i, 1);
                int32_t _ss_customer_sk4366 = tbl_Filter_TD_8492_output.getInt32(i, 2);
                int32_t _ss_store_sk4370 = tbl_Filter_TD_8492_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price4378 = tbl_Filter_TD_8492_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 0, _ss_sold_date_sk4363);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 1, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 2, _ss_customer_sk4366);
                tbl_JOIN_INNER_TD_7129_output.setInt32(r, 3, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7129_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7129_output #Row: " << tbl_JOIN_INNER_TD_7129_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7790(Table &tbl_SerializeFromObject_TD_8522_input, Table &tbl_Filter_TD_7790_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 1998) AND (d_moy#128 = 11))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8522_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8522_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_8522_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8522_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 1998) && (_d_moy128 == 11))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8522_input.getInt32(i, 0);
            tbl_Filter_TD_7790_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7790_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7790_output #Row: " << tbl_Filter_TD_7790_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7281_key_leftMajor {
    int32_t _ss_promo_sk1214;
    bool operator==(const SW_JOIN_INNER_TD_7281_key_leftMajor& other) const {
        return ((_ss_promo_sk1214 == other._ss_promo_sk1214));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7281_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7281_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_promo_sk1214));
    }
};
}
struct SW_JOIN_INNER_TD_7281_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_promo_sk1214;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_7281_key_rightMajor {
    int32_t _p_promo_sk294;
    bool operator==(const SW_JOIN_INNER_TD_7281_key_rightMajor& other) const {
        return ((_p_promo_sk294 == other._p_promo_sk294));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7281_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7281_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._p_promo_sk294));
    }
};
}
struct SW_JOIN_INNER_TD_7281_payload_rightMajor {
    int32_t _p_promo_sk294;
};
void SW_JOIN_INNER_TD_7281(Table &tbl_JOIN_INNER_TD_8387_output, Table &tbl_Filter_TD_8121_output, Table &tbl_JOIN_INNER_TD_7281_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_promo_sk#1214 = p_promo_sk#294))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_promo_sk#1214, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(p_promo_sk#294)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_8387_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8121_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7281_key_leftMajor, SW_JOIN_INNER_TD_7281_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8387_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_7281_key_leftMajor keyA{_ss_promo_sk1214_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 2);
            int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_7281_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_promo_sk1214, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8121_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_8121_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7281_key_leftMajor{_p_promo_sk294_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_promo_sk1214 = (it->second)._ss_promo_sk1214;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _p_promo_sk294 = tbl_Filter_TD_8121_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 3, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7281_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7281_key_rightMajor, SW_JOIN_INNER_TD_7281_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8121_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _p_promo_sk294_k = tbl_Filter_TD_8121_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7281_key_rightMajor keyA{_p_promo_sk294_k};
            int32_t _p_promo_sk294 = tbl_Filter_TD_8121_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7281_payload_rightMajor payloadA{_p_promo_sk294};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8387_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_promo_sk1214_k = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7281_key_rightMajor{_ss_promo_sk1214_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _p_promo_sk294 = (it->second)._p_promo_sk294;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 2);
                int32_t _ss_promo_sk1214 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_8387_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 2, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_7281_output.setInt32(r, 3, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7281_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7281_output #Row: " << tbl_JOIN_INNER_TD_7281_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6677(Table &tbl_SerializeFromObject_TD_7148_input, Table &tbl_Filter_TD_6677_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#4443) AND isnotnull(c_current_addr_sk#4447)))
    // Input: ListBuffer(c_customer_sk#4443, c_current_addr_sk#4447)
    // Output: ListBuffer(c_customer_sk#4443, c_current_addr_sk#4447)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7148_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk4443 = tbl_SerializeFromObject_TD_7148_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4447 = tbl_SerializeFromObject_TD_7148_input.getInt32(i, 1);
        if ((_c_customer_sk4443!= 0) && (_c_current_addr_sk4447!= 0)) {
            int32_t _c_customer_sk4443_t = tbl_SerializeFromObject_TD_7148_input.getInt32(i, 0);
            tbl_Filter_TD_6677_output.setInt32(r, 0, _c_customer_sk4443_t);
            int32_t _c_current_addr_sk4447_t = tbl_SerializeFromObject_TD_7148_input.getInt32(i, 1);
            tbl_Filter_TD_6677_output.setInt32(r, 1, _c_current_addr_sk4447_t);
            r++;
        }
    }
    tbl_Filter_TD_6677_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6677_output #Row: " << tbl_Filter_TD_6677_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6539_key_leftMajor {
    int32_t _ss_sold_date_sk4363;
    bool operator==(const SW_JOIN_INNER_TD_6539_key_leftMajor& other) const {
        return ((_ss_sold_date_sk4363 == other._ss_sold_date_sk4363));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6539_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6539_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk4363));
    }
};
}
struct SW_JOIN_INNER_TD_6539_payload_leftMajor {
    int32_t _ss_sold_date_sk4363;
    int32_t _ss_item_sk4365;
    int32_t _ss_customer_sk4366;
    int32_t _ss_ext_sales_price4378;
};
struct SW_JOIN_INNER_TD_6539_key_rightMajor {
    int32_t _d_date_sk4415;
    bool operator==(const SW_JOIN_INNER_TD_6539_key_rightMajor& other) const {
        return ((_d_date_sk4415 == other._d_date_sk4415));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6539_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6539_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4415));
    }
};
}
struct SW_JOIN_INNER_TD_6539_payload_rightMajor {
    int32_t _d_date_sk4415;
};
void SW_JOIN_INNER_TD_6539(Table &tbl_JOIN_INNER_TD_7129_output, Table &tbl_Filter_TD_7643_output, Table &tbl_JOIN_INNER_TD_6539_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#4363 = d_date_sk#4415))
    // Left Table: ListBuffer(ss_sold_date_sk#4363, ss_item_sk#4365, ss_customer_sk#4366, ss_ext_sales_price#4378)
    // Right Table: ListBuffer(d_date_sk#4415)
    // Output Table: ListBuffer(ss_item_sk#4365, ss_customer_sk#4366, ss_ext_sales_price#4378)
    int left_nrow = tbl_JOIN_INNER_TD_7129_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7643_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6539_key_leftMajor, SW_JOIN_INNER_TD_6539_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7129_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk4363_k = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6539_key_leftMajor keyA{_ss_sold_date_sk4363_k};
            int32_t _ss_sold_date_sk4363 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 0);
            int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 1);
            int32_t _ss_customer_sk4366 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6539_payload_leftMajor payloadA{_ss_sold_date_sk4363, _ss_item_sk4365, _ss_customer_sk4366, _ss_ext_sales_price4378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7643_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4415_k = tbl_Filter_TD_7643_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6539_key_leftMajor{_d_date_sk4415_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk4363 = (it->second)._ss_sold_date_sk4363;
                int32_t _ss_item_sk4365 = (it->second)._ss_item_sk4365;
                int32_t _ss_customer_sk4366 = (it->second)._ss_customer_sk4366;
                int32_t _ss_ext_sales_price4378 = (it->second)._ss_ext_sales_price4378;
                int32_t _d_date_sk4415 = tbl_Filter_TD_7643_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 0, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 1, _ss_customer_sk4366);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 2, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6539_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6539_key_rightMajor, SW_JOIN_INNER_TD_6539_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7643_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4415_k = tbl_Filter_TD_7643_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6539_key_rightMajor keyA{_d_date_sk4415_k};
            int32_t _d_date_sk4415 = tbl_Filter_TD_7643_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6539_payload_rightMajor payloadA{_d_date_sk4415};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7129_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk4363_k = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6539_key_rightMajor{_ss_sold_date_sk4363_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4415 = (it->second)._d_date_sk4415;
                int32_t _ss_sold_date_sk4363 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 0);
                int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 1);
                int32_t _ss_customer_sk4366 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_7129_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 0, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 1, _ss_customer_sk4366);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 2, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6539_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6539_output #Row: " << tbl_JOIN_INNER_TD_6539_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6425(Table &tbl_SerializeFromObject_TD_7338_input, Table &tbl_Filter_TD_6425_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7338_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_7338_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_7338_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_7338_input.getInt32(i, 0);
            tbl_Filter_TD_6425_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_7338_input.getInt32(i, 1);
            tbl_Filter_TD_6425_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_6425_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6425_output #Row: " << tbl_Filter_TD_6425_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6409_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_6409_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6409_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6409_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_6409_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_6409_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6409_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6409_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6409_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6409_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_6409(Table &tbl_JOIN_INNER_TD_7281_output, Table &tbl_Filter_TD_7790_output, Table &tbl_JOIN_INNER_TD_6409_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_7281_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7790_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6409_key_leftMajor, SW_JOIN_INNER_TD_6409_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_7281_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6409_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 1);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 2);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_6409_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_customer_sk1209, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7790_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7790_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6409_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _d_date_sk120 = tbl_Filter_TD_7790_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_6409_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6409_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6409_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6409_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6409_key_rightMajor, SW_JOIN_INNER_TD_6409_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7790_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_7790_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6409_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_7790_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6409_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_7281_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6409_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 1);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 2);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_7281_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_6409_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_6409_output.setInt32(r, 1, _ss_customer_sk1209);
                tbl_JOIN_INNER_TD_6409_output.setInt32(r, 2, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6409_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6409_output #Row: " << tbl_JOIN_INNER_TD_6409_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5452(Table &tbl_SerializeFromObject_TD_6395_input, Table &tbl_Filter_TD_5452_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#4472) AND (ca_gmt_offset#4472 = -5.00)) AND isnotnull(ca_address_sk#4461)))
    // Input: ListBuffer(ca_address_sk#4461, ca_gmt_offset#4472)
    // Output: ListBuffer(ca_address_sk#4461)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6395_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset4472 = tbl_SerializeFromObject_TD_6395_input.getInt32(i, 1);
        int32_t _ca_address_sk4461 = tbl_SerializeFromObject_TD_6395_input.getInt32(i, 0);
        if (((_ca_gmt_offset4472!= 0) && (_ca_gmt_offset4472 == -5.00)) && (_ca_address_sk4461!= 0)) {
            int32_t _ca_address_sk4461_t = tbl_SerializeFromObject_TD_6395_input.getInt32(i, 0);
            tbl_Filter_TD_5452_output.setInt32(r, 0, _ca_address_sk4461_t);
            r++;
        }
    }
    tbl_Filter_TD_5452_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5452_output #Row: " << tbl_Filter_TD_5452_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5829_key_leftMajor {
    int32_t _ss_customer_sk4366;
    bool operator==(const SW_JOIN_INNER_TD_5829_key_leftMajor& other) const {
        return ((_ss_customer_sk4366 == other._ss_customer_sk4366));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5829_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5829_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk4366));
    }
};
}
struct SW_JOIN_INNER_TD_5829_payload_leftMajor {
    int32_t _ss_item_sk4365;
    int32_t _ss_customer_sk4366;
    int32_t _ss_ext_sales_price4378;
};
struct SW_JOIN_INNER_TD_5829_key_rightMajor {
    int32_t _c_customer_sk4443;
    bool operator==(const SW_JOIN_INNER_TD_5829_key_rightMajor& other) const {
        return ((_c_customer_sk4443 == other._c_customer_sk4443));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5829_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5829_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk4443));
    }
};
}
struct SW_JOIN_INNER_TD_5829_payload_rightMajor {
    int32_t _c_customer_sk4443;
    int32_t _c_current_addr_sk4447;
};
void SW_JOIN_INNER_TD_5829(Table &tbl_JOIN_INNER_TD_6539_output, Table &tbl_Filter_TD_6677_output, Table &tbl_JOIN_INNER_TD_5829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#4366 = c_customer_sk#4443))
    // Left Table: ListBuffer(ss_item_sk#4365, ss_customer_sk#4366, ss_ext_sales_price#4378)
    // Right Table: ListBuffer(c_customer_sk#4443, c_current_addr_sk#4447)
    // Output Table: ListBuffer(ss_item_sk#4365, ss_ext_sales_price#4378, c_current_addr_sk#4447)
    int left_nrow = tbl_JOIN_INNER_TD_6539_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6677_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5829_key_leftMajor, SW_JOIN_INNER_TD_5829_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6539_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk4366_k = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5829_key_leftMajor keyA{_ss_customer_sk4366_k};
            int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 0);
            int32_t _ss_customer_sk4366 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5829_payload_leftMajor payloadA{_ss_item_sk4365, _ss_customer_sk4366, _ss_ext_sales_price4378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6677_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk4443_k = tbl_Filter_TD_6677_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5829_key_leftMajor{_c_customer_sk4443_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk4365 = (it->second)._ss_item_sk4365;
                int32_t _ss_customer_sk4366 = (it->second)._ss_customer_sk4366;
                int32_t _ss_ext_sales_price4378 = (it->second)._ss_ext_sales_price4378;
                int32_t _c_customer_sk4443 = tbl_Filter_TD_6677_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4447 = tbl_Filter_TD_6677_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5829_output.setInt32(r, 0, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_5829_output.setInt32(r, 1, _ss_ext_sales_price4378);
                tbl_JOIN_INNER_TD_5829_output.setInt32(r, 2, _c_current_addr_sk4447);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5829_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5829_key_rightMajor, SW_JOIN_INNER_TD_5829_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6677_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk4443_k = tbl_Filter_TD_6677_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5829_key_rightMajor keyA{_c_customer_sk4443_k};
            int32_t _c_customer_sk4443 = tbl_Filter_TD_6677_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4447 = tbl_Filter_TD_6677_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5829_payload_rightMajor payloadA{_c_customer_sk4443, _c_current_addr_sk4447};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6539_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk4366_k = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5829_key_rightMajor{_ss_customer_sk4366_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk4443 = (it->second)._c_customer_sk4443;
                int32_t _c_current_addr_sk4447 = (it->second)._c_current_addr_sk4447;
                int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 0);
                int32_t _ss_customer_sk4366 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5829_output.setInt32(r, 2, _c_current_addr_sk4447);
                tbl_JOIN_INNER_TD_5829_output.setInt32(r, 0, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_5829_output.setInt32(r, 1, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5829_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5829_output #Row: " << tbl_JOIN_INNER_TD_5829_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5996(Table &tbl_SerializeFromObject_TD_6128_input, Table &tbl_Filter_TD_5996_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#65) AND (ca_gmt_offset#65 = -5.00)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_gmt_offset#65)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6128_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_gmt_offset65 = tbl_SerializeFromObject_TD_6128_input.getInt32(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_6128_input.getInt32(i, 0);
        if (((_ca_gmt_offset65!= 0) && (_ca_gmt_offset65 == -5.00)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_6128_input.getInt32(i, 0);
            tbl_Filter_TD_5996_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_5996_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5996_output #Row: " << tbl_Filter_TD_5996_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5226_key_leftMajor {
    int32_t _ss_customer_sk1209;
    bool operator==(const SW_JOIN_INNER_TD_5226_key_leftMajor& other) const {
        return ((_ss_customer_sk1209 == other._ss_customer_sk1209));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5226_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5226_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_customer_sk1209));
    }
};
}
struct SW_JOIN_INNER_TD_5226_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_customer_sk1209;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_5226_key_rightMajor {
    int32_t _c_customer_sk0;
    bool operator==(const SW_JOIN_INNER_TD_5226_key_rightMajor& other) const {
        return ((_c_customer_sk0 == other._c_customer_sk0));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5226_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5226_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk0));
    }
};
}
struct SW_JOIN_INNER_TD_5226_payload_rightMajor {
    int32_t _c_customer_sk0;
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_5226(Table &tbl_JOIN_INNER_TD_6409_output, Table &tbl_Filter_TD_6425_output, Table &tbl_JOIN_INNER_TD_5226_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_customer_sk#1209 = c_customer_sk#0))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_customer_sk#1209, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221, c_current_addr_sk#4)
    int left_nrow = tbl_JOIN_INNER_TD_6409_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6425_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5226_key_leftMajor, SW_JOIN_INNER_TD_5226_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6409_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5226_key_leftMajor keyA{_ss_customer_sk1209_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 0);
            int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 1);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5226_payload_leftMajor payloadA{_ss_item_sk1208, _ss_customer_sk1209, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6425_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_6425_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5226_key_leftMajor{_c_customer_sk0_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_customer_sk1209 = (it->second)._ss_customer_sk1209;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _c_customer_sk0 = tbl_Filter_TD_6425_output.getInt32(i, 0);
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_6425_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_5226_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5226_output.setInt32(r, 1, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_5226_output.setInt32(r, 2, _c_current_addr_sk4);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5226_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5226_key_rightMajor, SW_JOIN_INNER_TD_5226_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6425_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk0_k = tbl_Filter_TD_6425_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5226_key_rightMajor keyA{_c_customer_sk0_k};
            int32_t _c_customer_sk0 = tbl_Filter_TD_6425_output.getInt32(i, 0);
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_6425_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5226_payload_rightMajor payloadA{_c_customer_sk0, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6409_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_customer_sk1209_k = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5226_key_rightMajor{_ss_customer_sk1209_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk0 = (it->second)._c_customer_sk0;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 0);
                int32_t _ss_customer_sk1209 = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 1);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6409_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5226_output.setInt32(r, 2, _c_current_addr_sk4);
                tbl_JOIN_INNER_TD_5226_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_5226_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5226_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5226_output #Row: " << tbl_JOIN_INNER_TD_5226_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4283(Table &tbl_SerializeFromObject_TD_587_input, Table &tbl_Filter_TD_4283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_category#4486) AND (i_category#4486 = Jewelry)) AND isnotnull(i_item_sk#4474)))
    // Input: ListBuffer(i_item_sk#4474, i_category#4486)
    // Output: ListBuffer(i_item_sk#4474)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_587_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4486 = tbl_SerializeFromObject_TD_587_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _i_item_sk4474 = tbl_SerializeFromObject_TD_587_input.getInt32(i, 0);
        if ((（std::string(_isnotnulli_category4486.data()) != "NULL") && (std::string(_i_category4486.data()) == "Jewelry")) && (_i_item_sk4474!= 0)) {
            int32_t _i_item_sk4474_t = tbl_SerializeFromObject_TD_587_input.getInt32(i, 0);
            tbl_Filter_TD_4283_output.setInt32(r, 0, _i_item_sk4474_t);
            r++;
        }
    }
    tbl_Filter_TD_4283_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4283_output #Row: " << tbl_Filter_TD_4283_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4836_key_leftMajor {
    int32_t _c_current_addr_sk4447;
    bool operator==(const SW_JOIN_INNER_TD_4836_key_leftMajor& other) const {
        return ((_c_current_addr_sk4447 == other._c_current_addr_sk4447));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4836_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4836_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4447));
    }
};
}
struct SW_JOIN_INNER_TD_4836_payload_leftMajor {
    int32_t _ss_item_sk4365;
    int32_t _ss_ext_sales_price4378;
    int32_t _c_current_addr_sk4447;
};
struct SW_JOIN_INNER_TD_4836_key_rightMajor {
    int32_t _ca_address_sk4461;
    bool operator==(const SW_JOIN_INNER_TD_4836_key_rightMajor& other) const {
        return ((_ca_address_sk4461 == other._ca_address_sk4461));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4836_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4836_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk4461));
    }
};
}
struct SW_JOIN_INNER_TD_4836_payload_rightMajor {
    int32_t _ca_address_sk4461;
};
void SW_JOIN_INNER_TD_4836(Table &tbl_JOIN_INNER_TD_5829_output, Table &tbl_Filter_TD_5452_output, Table &tbl_JOIN_INNER_TD_4836_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#4461 = c_current_addr_sk#4447))
    // Left Table: ListBuffer(ss_item_sk#4365, ss_ext_sales_price#4378, c_current_addr_sk#4447)
    // Right Table: ListBuffer(ca_address_sk#4461)
    // Output Table: ListBuffer(ss_item_sk#4365, ss_ext_sales_price#4378)
    int left_nrow = tbl_JOIN_INNER_TD_5829_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5452_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4836_key_leftMajor, SW_JOIN_INNER_TD_4836_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4447_k = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4836_key_leftMajor keyA{_c_current_addr_sk4447_k};
            int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4447 = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4836_payload_leftMajor payloadA{_ss_item_sk4365, _ss_ext_sales_price4378, _c_current_addr_sk4447};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5452_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk4461_k = tbl_Filter_TD_5452_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4836_key_leftMajor{_ca_address_sk4461_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk4365 = (it->second)._ss_item_sk4365;
                int32_t _ss_ext_sales_price4378 = (it->second)._ss_ext_sales_price4378;
                int32_t _c_current_addr_sk4447 = (it->second)._c_current_addr_sk4447;
                int32_t _ca_address_sk4461 = tbl_Filter_TD_5452_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4836_output.setInt32(r, 0, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_4836_output.setInt32(r, 1, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4836_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4836_key_rightMajor, SW_JOIN_INNER_TD_4836_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5452_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk4461_k = tbl_Filter_TD_5452_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4836_key_rightMajor keyA{_ca_address_sk4461_k};
            int32_t _ca_address_sk4461 = tbl_Filter_TD_5452_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4836_payload_rightMajor payloadA{_ca_address_sk4461};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4447_k = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4836_key_rightMajor{_c_current_addr_sk4447_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk4461 = (it->second)._ca_address_sk4461;
                int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4447 = tbl_JOIN_INNER_TD_5829_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_4836_output.setInt32(r, 0, _ss_item_sk4365);
                tbl_JOIN_INNER_TD_4836_output.setInt32(r, 1, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4836_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4836_output #Row: " << tbl_JOIN_INNER_TD_4836_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4618(Table &tbl_SerializeFromObject_TD_5565_input, Table &tbl_Filter_TD_4618_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_category#240) AND (i_category#240 = Jewelry)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_category#240)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5565_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_5565_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_5565_input.getInt32(i, 0);
        if ((（std::string(_isnotnulli_category240.data()) != "NULL") && (std::string(_i_category240.data()) == "Jewelry")) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_5565_input.getInt32(i, 0);
            tbl_Filter_TD_4618_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4618_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4618_output #Row: " << tbl_Filter_TD_4618_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4605_key_leftMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_4605_key_leftMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4605_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4605_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_4605_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
    int32_t _c_current_addr_sk4;
};
struct SW_JOIN_INNER_TD_4605_key_rightMajor {
    int32_t _ca_address_sk54;
    bool operator==(const SW_JOIN_INNER_TD_4605_key_rightMajor& other) const {
        return ((_ca_address_sk54 == other._ca_address_sk54));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4605_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4605_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk54));
    }
};
}
struct SW_JOIN_INNER_TD_4605_payload_rightMajor {
    int32_t _ca_address_sk54;
};
void SW_JOIN_INNER_TD_4605(Table &tbl_JOIN_INNER_TD_5226_output, Table &tbl_Filter_TD_5996_output, Table &tbl_JOIN_INNER_TD_4605_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#54 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221, c_current_addr_sk#4)
    // Right Table: ListBuffer(ca_address_sk#54)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_5226_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5996_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4605_key_leftMajor, SW_JOIN_INNER_TD_4605_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5226_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4605_key_leftMajor keyA{_c_current_addr_sk4_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 1);
            int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_4605_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221, _c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5996_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_5996_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4605_key_leftMajor{_ca_address_sk54_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk54 = tbl_Filter_TD_5996_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4605_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_4605_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4605_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4605_key_rightMajor, SW_JOIN_INNER_TD_4605_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5996_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk54_k = tbl_Filter_TD_5996_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4605_key_rightMajor keyA{_ca_address_sk54_k};
            int32_t _ca_address_sk54 = tbl_Filter_TD_5996_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4605_payload_rightMajor payloadA{_ca_address_sk54};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5226_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4605_key_rightMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk54 = (it->second)._ca_address_sk54;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 1);
                int32_t _c_current_addr_sk4 = tbl_JOIN_INNER_TD_5226_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_4605_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_4605_output.setInt32(r, 1, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4605_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4605_output #Row: " << tbl_JOIN_INNER_TD_4605_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3875_key_leftMajor {
    int32_t _ss_item_sk4365;
    bool operator==(const SW_JOIN_INNER_TD_3875_key_leftMajor& other) const {
        return ((_ss_item_sk4365 == other._ss_item_sk4365));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3875_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3875_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk4365));
    }
};
}
struct SW_JOIN_INNER_TD_3875_payload_leftMajor {
    int32_t _ss_item_sk4365;
    int32_t _ss_ext_sales_price4378;
};
struct SW_JOIN_INNER_TD_3875_key_rightMajor {
    int32_t _i_item_sk4474;
    bool operator==(const SW_JOIN_INNER_TD_3875_key_rightMajor& other) const {
        return ((_i_item_sk4474 == other._i_item_sk4474));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3875_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3875_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4474));
    }
};
}
struct SW_JOIN_INNER_TD_3875_payload_rightMajor {
    int32_t _i_item_sk4474;
};
void SW_JOIN_INNER_TD_3875(Table &tbl_JOIN_INNER_TD_4836_output, Table &tbl_Filter_TD_4283_output, Table &tbl_JOIN_INNER_TD_3875_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#4365 = i_item_sk#4474))
    // Left Table: ListBuffer(ss_item_sk#4365, ss_ext_sales_price#4378)
    // Right Table: ListBuffer(i_item_sk#4474)
    // Output Table: ListBuffer(ss_ext_sales_price#4378)
    int left_nrow = tbl_JOIN_INNER_TD_4836_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4283_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3875_key_leftMajor, SW_JOIN_INNER_TD_3875_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4836_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk4365_k = tbl_JOIN_INNER_TD_4836_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3875_key_leftMajor keyA{_ss_item_sk4365_k};
            int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_4836_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_4836_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3875_payload_leftMajor payloadA{_ss_item_sk4365, _ss_ext_sales_price4378};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4283_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4474_k = tbl_Filter_TD_4283_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3875_key_leftMajor{_i_item_sk4474_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk4365 = (it->second)._ss_item_sk4365;
                int32_t _ss_ext_sales_price4378 = (it->second)._ss_ext_sales_price4378;
                int32_t _i_item_sk4474 = tbl_Filter_TD_4283_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3875_output.setInt32(r, 0, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3875_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3875_key_rightMajor, SW_JOIN_INNER_TD_3875_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4283_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4474_k = tbl_Filter_TD_4283_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3875_key_rightMajor keyA{_i_item_sk4474_k};
            int32_t _i_item_sk4474 = tbl_Filter_TD_4283_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3875_payload_rightMajor payloadA{_i_item_sk4474};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4836_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk4365_k = tbl_JOIN_INNER_TD_4836_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3875_key_rightMajor{_ss_item_sk4365_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4474 = (it->second)._i_item_sk4474;
                int32_t _ss_item_sk4365 = tbl_JOIN_INNER_TD_4836_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_4836_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3875_output.setInt32(r, 0, _ss_ext_sales_price4378);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3875_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3875_output #Row: " << tbl_JOIN_INNER_TD_3875_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3885_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_3885_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3885_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3885_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_3885_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_3885_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_3885_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3885_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3885_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_3885_payload_rightMajor {
    int32_t _i_item_sk228;
};
void SW_JOIN_INNER_TD_3885(Table &tbl_JOIN_INNER_TD_4605_output, Table &tbl_Filter_TD_4618_output, Table &tbl_JOIN_INNER_TD_3885_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#228)
    // Output Table: ListBuffer(ss_ext_sales_price#1221)
    int left_nrow = tbl_JOIN_INNER_TD_4605_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4618_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3885_key_leftMajor, SW_JOIN_INNER_TD_3885_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4605_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_4605_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3885_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_4605_output.getInt32(i, 0);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4605_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_3885_payload_leftMajor payloadA{_ss_item_sk1208, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4618_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4618_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3885_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk228 = tbl_Filter_TD_4618_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3885_output.setInt32(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3885_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3885_key_rightMajor, SW_JOIN_INNER_TD_3885_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4618_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4618_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3885_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_4618_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3885_payload_rightMajor payloadA{_i_item_sk228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4605_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_4605_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3885_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_4605_output.getInt32(i, 0);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_4605_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_3885_output.setInt32(r, 0, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3885_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3885_output #Row: " << tbl_JOIN_INNER_TD_3885_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2707(Table &tbl_JOIN_INNER_TD_3875_output, Table &tbl_Aggregate_TD_2707_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#4378)),17,2) AS total#4362)
    // Input: ListBuffer(ss_ext_sales_price#4378)
    // Output: ListBuffer(total#4362)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3875_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price4378 = tbl_JOIN_INNER_TD_3875_output.getInt32(i, 0);
        int64_t _total4362_sum_0 = _ss_ext_sales_price4378;
        sum_0 += _total4362_sum_0;
    }
    int r = 0;
    int32_t _total4362 = sum_0;
    tbl_Aggregate_TD_2707_output.setInt32(r++, 0, _total4362);
    tbl_Aggregate_TD_2707_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2707_output #Row: " << tbl_Aggregate_TD_2707_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2441(Table &tbl_JOIN_INNER_TD_3885_output, Table &tbl_Aggregate_TD_2441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS promotions#4361)
    // Input: ListBuffer(ss_ext_sales_price#1221)
    // Output: ListBuffer(promotions#4361)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3885_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_3885_output.getInt32(i, 0);
        int64_t _promotions4361_sum_0 = _ss_ext_sales_price1221;
        sum_0 += _promotions4361_sum_0;
    }
    int r = 0;
    int32_t _promotions4361 = sum_0;
    tbl_Aggregate_TD_2441_output.setInt32(r++, 0, _promotions4361);
    tbl_Aggregate_TD_2441_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2441_output #Row: " << tbl_Aggregate_TD_2441_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1998(Table &tbl_Aggregate_TD_2441_output, Table &tbl_Aggregate_TD_2707_output, Table &tbl_JOIN_CROSS_TD_1998_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(promotions#4361)
    // Right Table: ListBuffer(total#4362)
    // Output Table: ListBuffer(promotions#4361, total#4362)
    int left_nrow = tbl_Aggregate_TD_2441_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_2707_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_1998_output.setInt32(r, 0, tbl_Aggregate_TD_2441_output.getInt32(i, 0));
        tbl_JOIN_CROSS_TD_1998_output.setInt32(r, 1, tbl_Aggregate_TD_2707_output.getInt32(j, 1));
        ++r;
    }
    tbl_JOIN_CROSS_TD_1998_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1998_output #Row: " << tbl_JOIN_CROSS_TD_1998_output.getNumRow() << std::endl;
}

void SW_Project_TD_0854(Table &tbl_JOIN_CROSS_TD_1998_output, Table &tbl_Project_TD_0854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(CheckOverflow((promote_precision(promotions#4361) / promote_precision(total#4362)), DecimalType(37,20), true)) * 100.00000000000000000000), DecimalType(38,17), true) AS ((promotions / total) * 100)#4498)
    // Input: ListBuffer(promotions#4361, total#4362)
    // Output: ListBuffer(promotions#4361, total#4362, ((promotions / total) * 100)#4498)
    int nrow1 = tbl_JOIN_CROSS_TD_1998_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _promotions4361 = tbl_JOIN_CROSS_TD_1998_output.getInt32(i, 0);
        int32_t _total4362 = tbl_JOIN_CROSS_TD_1998_output.getInt32(i, 1);
        int32_t _1004498 = ((_promotions4361 / _total4362) * 100.00000000000000000000);
        tbl_Project_TD_0854_output.setInt32(i, 2, _1004498);
        tbl_Project_TD_0854_output.setInt32(i, 0, _promotions4361);
        tbl_Project_TD_0854_output.setInt32(i, 1, _total4362);
    }
    tbl_Project_TD_0854_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0854_output #Row: " << tbl_Project_TD_0854_output.getNumRow() << std::endl;
}

