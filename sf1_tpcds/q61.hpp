#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_9855778(Table &tbl_SerializeFromObject_TD_10358855_input, Table &tbl_Filter_TD_9855778_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10358855_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10358855_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10358855_input.getInt32(i, 0);
            tbl_Filter_TD_9855778_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_9855778_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9855778_output #Row: " << tbl_Filter_TD_9855778_output.getNumRow() << std::endl;
}

void SW_Filter_TD_976386(Table &tbl_SerializeFromObject_TD_10229947_input, Table &tbl_Filter_TD_976386_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ss_store_sk#1213) AND isnotnull(ss_promo_sk#1214)) AND ((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_customer_sk#1209)) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_customer_sk#1209, ss_store_sk#1213, ss_promo_sk#1214, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10229947_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 3);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 4);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 0);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 1);
        if (((_ss_store_sk1213!= 0) && (_ss_promo_sk1214!= 0)) && (((_ss_sold_date_sk1206!= 0) && (_ss_customer_sk1209!= 0)) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 0);
            tbl_Filter_TD_976386_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 1);
            tbl_Filter_TD_976386_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_customer_sk1209_t = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 2);
            tbl_Filter_TD_976386_output.setInt32(r, 2, _ss_customer_sk1209_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 3);
            tbl_Filter_TD_976386_output.setInt32(r, 3, _ss_store_sk1213_t);
            int32_t _ss_promo_sk1214_t = tbl_SerializeFromObject_TD_10229947_input.getInt32(i, 4);
            tbl_Filter_TD_976386_output.setInt32(r, 4, _ss_promo_sk1214_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10229947_input.getInt64(i, 5);
            tbl_Filter_TD_976386_output.setInt64(r, 5, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_976386_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_976386_output #Row: " << tbl_Filter_TD_976386_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8954598(Table &tbl_SerializeFromObject_TD_9660566_input, Table &tbl_Filter_TD_8954598_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#3569))
    // Input: ListBuffer(s_store_sk#3569)
    // Output: ListBuffer(s_store_sk#3569)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9660566_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk3569 = tbl_SerializeFromObject_TD_9660566_input.getInt32(i, 0);
        if (_s_store_sk3569!= 0) {
            int32_t _s_store_sk3569_t = tbl_SerializeFromObject_TD_9660566_input.getInt32(i, 0);
            tbl_Filter_TD_8954598_output.setInt32(r, 0, _s_store_sk3569_t);
            r++;
        }
    }
    tbl_Filter_TD_8954598_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8954598_output #Row: " << tbl_Filter_TD_8954598_output.getNumRow() << std::endl;
}

void SW_Filter_TD_886047(Table &tbl_SerializeFromObject_TD_9999442_input, Table &tbl_Filter_TD_886047_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#3553) AND ((isnotnull(ss_sold_date_sk#3546) AND isnotnull(ss_customer_sk#3549)) AND isnotnull(ss_item_sk#3548))))
    // Input: ListBuffer(ss_sold_date_sk#3546, ss_item_sk#3548, ss_customer_sk#3549, ss_store_sk#3553, ss_ext_sales_price#3561)
    // Output: ListBuffer(ss_sold_date_sk#3546, ss_item_sk#3548, ss_customer_sk#3549, ss_store_sk#3553, ss_ext_sales_price#3561)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9999442_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3553 = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 3);
        int32_t _ss_sold_date_sk3546 = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 0);
        int32_t _ss_customer_sk3549 = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 2);
        int32_t _ss_item_sk3548 = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 1);
        if ((_ss_store_sk3553!= 0) && (((_ss_sold_date_sk3546!= 0) && (_ss_customer_sk3549!= 0)) && (_ss_item_sk3548!= 0))) {
            int32_t _ss_sold_date_sk3546_t = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 0);
            tbl_Filter_TD_886047_output.setInt32(r, 0, _ss_sold_date_sk3546_t);
            int32_t _ss_item_sk3548_t = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 1);
            tbl_Filter_TD_886047_output.setInt32(r, 1, _ss_item_sk3548_t);
            int32_t _ss_customer_sk3549_t = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 2);
            tbl_Filter_TD_886047_output.setInt32(r, 2, _ss_customer_sk3549_t);
            int32_t _ss_store_sk3553_t = tbl_SerializeFromObject_TD_9999442_input.getInt32(i, 3);
            tbl_Filter_TD_886047_output.setInt32(r, 3, _ss_store_sk3553_t);
            int64_t _ss_ext_sales_price3561_t = tbl_SerializeFromObject_TD_9999442_input.getInt64(i, 4);
            tbl_Filter_TD_886047_output.setInt64(r, 4, _ss_ext_sales_price3561_t);
            r++;
        }
    }
    tbl_Filter_TD_886047_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_886047_output #Row: " << tbl_Filter_TD_886047_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8477570(Table &tbl_SerializeFromObject_TD_9919042_input, Table &tbl_Filter_TD_8477570_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((p_channel_dmail#302 = Y) OR (p_channel_email#303 = Y)) OR (p_channel_tv#305 = Y)) AND isnotnull(p_promo_sk#294)))
    // Input: ListBuffer(p_promo_sk#294, p_channel_dmail#302, p_channel_email#303, p_channel_tv#305)
    // Output: ListBuffer(p_promo_sk#294)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9919042_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_dmail302 = tbl_SerializeFromObject_TD_9919042_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_email303 = tbl_SerializeFromObject_TD_9919042_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _p_channel_tv305 = tbl_SerializeFromObject_TD_9919042_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _p_promo_sk294 = tbl_SerializeFromObject_TD_9919042_input.getInt32(i, 0);
        if ((((std::string(_p_channel_dmail302.data()) == "Y") || (std::string(_p_channel_email303.data()) == "Y")) || (std::string(_p_channel_tv305.data()) == "Y")) && (_p_promo_sk294!= 0)) {
            int32_t _p_promo_sk294_t = tbl_SerializeFromObject_TD_9919042_input.getInt32(i, 0);
            tbl_Filter_TD_8477570_output.setInt32(r, 0, _p_promo_sk294_t);
            r++;
        }
    }
    tbl_Filter_TD_8477570_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8477570_output #Row: " << tbl_Filter_TD_8477570_output.getNumRow() << std::endl;
}


void SW_Filter_TD_734435(Table &tbl_SerializeFromObject_TD_8710814_input, Table &tbl_Filter_TD_734435_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3604) AND isnotnull(d_moy#3606)) AND ((d_year#3604 = 1998) AND (d_moy#3606 = 11))) AND isnotnull(d_date_sk#3598)))
    // Input: ListBuffer(d_date_sk#3598, d_year#3604, d_moy#3606)
    // Output: ListBuffer(d_date_sk#3598)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8710814_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3604 = tbl_SerializeFromObject_TD_8710814_input.getInt32(i, 1);
        int32_t _d_moy3606 = tbl_SerializeFromObject_TD_8710814_input.getInt32(i, 2);
        int32_t _d_date_sk3598 = tbl_SerializeFromObject_TD_8710814_input.getInt32(i, 0);
        if ((((_d_year3604!= 0) && (_d_moy3606!= 0)) && ((_d_year3604 == 1998) && (_d_moy3606 == 11))) && (_d_date_sk3598!= 0)) {
            int32_t _d_date_sk3598_t = tbl_SerializeFromObject_TD_8710814_input.getInt32(i, 0);
            tbl_Filter_TD_734435_output.setInt32(r, 0, _d_date_sk3598_t);
            r++;
        }
    }
    tbl_Filter_TD_734435_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_734435_output #Row: " << tbl_Filter_TD_734435_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7220209(Table &tbl_SerializeFromObject_TD_8711274_input, Table &tbl_Filter_TD_7220209_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 1998) AND (d_moy#128 = 11))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8711274_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8711274_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_8711274_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8711274_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 1998) && (_d_moy128 == 11))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8711274_input.getInt32(i, 0);
            tbl_Filter_TD_7220209_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7220209_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7220209_output #Row: " << tbl_Filter_TD_7220209_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6246114(Table &tbl_SerializeFromObject_TD_738147_input, Table &tbl_Filter_TD_6246114_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#3626) AND isnotnull(c_current_addr_sk#3630)))
    // Input: ListBuffer(c_customer_sk#3626, c_current_addr_sk#3630)
    // Output: ListBuffer(c_customer_sk#3626, c_current_addr_sk#3630)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_738147_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3626 = tbl_SerializeFromObject_TD_738147_input.getInt32(i, 0);
        int32_t _c_current_addr_sk3630 = tbl_SerializeFromObject_TD_738147_input.getInt32(i, 1);
        if ((_c_customer_sk3626!= 0) && (_c_current_addr_sk3630!= 0)) {
            int32_t _c_customer_sk3626_t = tbl_SerializeFromObject_TD_738147_input.getInt32(i, 0);
            tbl_Filter_TD_6246114_output.setInt32(r, 0, _c_customer_sk3626_t);
            int32_t _c_current_addr_sk3630_t = tbl_SerializeFromObject_TD_738147_input.getInt32(i, 1);
            tbl_Filter_TD_6246114_output.setInt32(r, 1, _c_current_addr_sk3630_t);
            r++;
        }
    }
    tbl_Filter_TD_6246114_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6246114_output #Row: " << tbl_Filter_TD_6246114_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6956007(Table &tbl_SerializeFromObject_TD_7157816_input, Table &tbl_Filter_TD_6956007_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(c_customer_sk#0) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    // Output: ListBuffer(c_customer_sk#0, c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7157816_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_7157816_input.getInt32(i, 0);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_7157816_input.getInt32(i, 1);
        if ((_c_customer_sk0!= 0) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_7157816_input.getInt32(i, 0);
            tbl_Filter_TD_6956007_output.setInt32(r, 0, _c_customer_sk0_t);
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_7157816_input.getInt32(i, 1);
            tbl_Filter_TD_6956007_output.setInt32(r, 1, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_6956007_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6956007_output #Row: " << tbl_Filter_TD_6956007_output.getNumRow() << std::endl;
}


void SW_Filter_TD_59492(Table &tbl_SerializeFromObject_TD_619818_input, Table &tbl_Filter_TD_59492_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#3644))
    // Input: ListBuffer(ca_address_sk#3644)
    // Output: ListBuffer(ca_address_sk#3644)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_619818_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk3644 = tbl_SerializeFromObject_TD_619818_input.getInt32(i, 0);
        if (_ca_address_sk3644!= 0) {
            int32_t _ca_address_sk3644_t = tbl_SerializeFromObject_TD_619818_input.getInt32(i, 0);
            tbl_Filter_TD_59492_output.setInt32(r, 0, _ca_address_sk3644_t);
            r++;
        }
    }
    tbl_Filter_TD_59492_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_59492_output #Row: " << tbl_Filter_TD_59492_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5208645(Table &tbl_SerializeFromObject_TD_6321357_input, Table &tbl_Filter_TD_5208645_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#54))
    // Input: ListBuffer(ca_address_sk#54)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6321357_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_6321357_input.getInt32(i, 0);
        if (_ca_address_sk54!= 0) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_6321357_input.getInt32(i, 0);
            tbl_Filter_TD_5208645_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_5208645_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5208645_output #Row: " << tbl_Filter_TD_5208645_output.getNumRow() << std::endl;
}


void SW_Filter_TD_464720(Table &tbl_SerializeFromObject_TD_5999383_input, Table &tbl_Filter_TD_464720_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_category#3669) AND (i_category#3669 = Jewelry)) AND isnotnull(i_item_sk#3657)))
    // Input: ListBuffer(i_item_sk#3657, i_category#3669)
    // Output: ListBuffer(i_item_sk#3657)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5999383_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category3669 = tbl_SerializeFromObject_TD_5999383_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _i_item_sk3657 = tbl_SerializeFromObject_TD_5999383_input.getInt32(i, 0);
        if (((std::string(_i_category3669.data()) != "NULL") && (std::string(_i_category3669.data()) == "Jewelry")) && (_i_item_sk3657!= 0)) {
            int32_t _i_item_sk3657_t = tbl_SerializeFromObject_TD_5999383_input.getInt32(i, 0);
            tbl_Filter_TD_464720_output.setInt32(r, 0, _i_item_sk3657_t);
            r++;
        }
    }
    tbl_Filter_TD_464720_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_464720_output #Row: " << tbl_Filter_TD_464720_output.getNumRow() << std::endl;
}


void SW_Filter_TD_4553009(Table &tbl_SerializeFromObject_TD_5288304_input, Table &tbl_Filter_TD_4553009_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_category#240) AND (i_category#240 = Jewelry)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_category#240)
    // Output: ListBuffer(i_item_sk#228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5288304_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_5288304_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_5288304_input.getInt32(i, 0);
        if (((std::string(_i_category240.data()) != "NULL") && (std::string(_i_category240.data()) == "Jewelry")) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_5288304_input.getInt32(i, 0);
            tbl_Filter_TD_4553009_output.setInt32(r, 0, _i_item_sk228_t);
            r++;
        }
    }
    tbl_Filter_TD_4553009_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4553009_output #Row: " << tbl_Filter_TD_4553009_output.getNumRow() << std::endl;
}




void SW_Aggregate_TD_2614382(Table &tbl_JOIN_INNER_TD_3209219_output, Table &tbl_Aggregate_TD_2614382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#3561)),17,2) AS total#3545)
    // Input: ListBuffer(ss_ext_sales_price#3561)
    // Output: ListBuffer(total#3545)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3209219_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price3561 = tbl_JOIN_INNER_TD_3209219_output.getInt64(i, 0);
        int64_t _total3545_sum_0 = _ss_ext_sales_price3561;
        sum_0 += _total3545_sum_0;
    }
    int r = 0;
    int64_t _total3545 = sum_0;
    tbl_Aggregate_TD_2614382_output.setInt64(r++, 0, _total3545);
    tbl_Aggregate_TD_2614382_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2614382_output #Row: " << tbl_Aggregate_TD_2614382_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_282105(Table &tbl_JOIN_INNER_TD_3339401_output, Table &tbl_Aggregate_TD_282105_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(MakeDecimal(sum(UnscaledValue(ss_ext_sales_price#1221)),17,2) AS promotions#3544)
    // Input: ListBuffer(ss_ext_sales_price#1221)
    // Output: ListBuffer(promotions#3544)
    int64_t sum_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3339401_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_3339401_output.getInt64(i, 0);
        int64_t _promotions3544_sum_0 = _ss_ext_sales_price1221;
        sum_0 += _promotions3544_sum_0;
    }
    int r = 0;
    int64_t _promotions3544 = sum_0;
    tbl_Aggregate_TD_282105_output.setInt64(r++, 0, _promotions3544);
    tbl_Aggregate_TD_282105_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_282105_output #Row: " << tbl_Aggregate_TD_282105_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1659217(Table &tbl_Aggregate_TD_282105_output, Table &tbl_Aggregate_TD_2614382_output, Table &tbl_JOIN_CROSS_TD_1659217_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(promotions#3544)
    // Right Table: ListBuffer(total#3545)
    // Output Table: ListBuffer(promotions#3544, total#3545)
    int left_nrow = tbl_Aggregate_TD_282105_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_2614382_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_1659217_output.setInt64(r, 0, tbl_Aggregate_TD_282105_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_1659217_output.setInt64(r, 1, tbl_Aggregate_TD_2614382_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_1659217_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1659217_output #Row: " << tbl_JOIN_CROSS_TD_1659217_output.getNumRow() << std::endl;
}

void SW_Project_TD_0211574(Table &tbl_JOIN_CROSS_TD_1659217_output, Table &tbl_Project_TD_0211574_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(CheckOverflow((promote_precision(promotions#3544) / promote_precision(total#3545)), DecimalType(37,20), true)) * 100.00000000000000000000), DecimalType(38,17), true) AS ((promotions / total) * 100)#3681)
    // Input: ListBuffer(promotions#3544, total#3545)
    // Output: ListBuffer(promotions#3544, total#3545, ((promotions / total) * 100)#3681)
    int nrow1 = tbl_JOIN_CROSS_TD_1659217_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _promotions3544 = tbl_JOIN_CROSS_TD_1659217_output.getInt64(i, 0);
        int64_t _total3545 = tbl_JOIN_CROSS_TD_1659217_output.getInt64(i, 1);
        int64_t _1003681 = ((_promotions3544 / _total3545) * 100.00000000000000000000);
        tbl_Project_TD_0211574_output.setInt64(i, 2, _1003681);
        tbl_Project_TD_0211574_output.setInt64(i, 0, _promotions3544);
        tbl_Project_TD_0211574_output.setInt64(i, 1, _total3545);
    }
    tbl_Project_TD_0211574_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0211574_output #Row: " << tbl_Project_TD_0211574_output.getNumRow() << std::endl;
}

