#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_14202005(Table &tbl_SerializeFromObject_TD_15658259_input, Table &tbl_Filter_TD_14202005_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#126 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15658259_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_15658259_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_15658259_input.getInt32(i, 0);
        auto reuse_col_str_765 = _d_year126;
        if (((reuse_col_str_765 == 2000) || (reuse_col_str_765 == 2001) || (reuse_col_str_765 == 2002) || (reuse_col_str_765 == 2003) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_15658259_input.getInt32(i, 0);
            tbl_Filter_TD_14202005_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_15658259_input.getInt32(i, 1);
            tbl_Filter_TD_14202005_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_14202005_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14202005_output #Row: " << tbl_Filter_TD_14202005_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14347231(Table &tbl_SerializeFromObject_TD_15417621_input, Table &tbl_Filter_TD_14347231_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15417621_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15417621_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15417621_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15417621_input.getInt32(i, 0);
            tbl_Filter_TD_14347231_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15417621_input.getInt32(i, 1);
            tbl_Filter_TD_14347231_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_14347231_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14347231_output #Row: " << tbl_Filter_TD_14347231_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14996937(Table &tbl_SerializeFromObject_TD_1541384_input, Table &tbl_Filter_TD_14996937_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#126 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_date#122)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1541384_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_1541384_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_1541384_input.getInt32(i, 0);
        auto reuse_col_str_12 = _d_year126;
        if (((reuse_col_str_12 == 2000) || (reuse_col_str_12 == 2001) || (reuse_col_str_12 == 2002) || (reuse_col_str_12 == 2003) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_1541384_input.getInt32(i, 0);
            tbl_Filter_TD_14996937_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_date122_t = tbl_SerializeFromObject_TD_1541384_input.getInt32(i, 1);
            tbl_Filter_TD_14996937_output.setInt32(r, 1, _d_date122_t);
            r++;
        }
    }
    tbl_Filter_TD_14996937_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14996937_output #Row: " << tbl_Filter_TD_14996937_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14164835(Table &tbl_SerializeFromObject_TD_15164172_input, Table &tbl_Filter_TD_14164835_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_item_sk#1208)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15164172_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_15164172_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_15164172_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_item_sk1208!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_15164172_input.getInt32(i, 0);
            tbl_Filter_TD_14164835_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_15164172_input.getInt32(i, 1);
            tbl_Filter_TD_14164835_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_14164835_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14164835_output #Row: " << tbl_Filter_TD_14164835_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13380660(Table &tbl_SerializeFromObject_TD_14632060_input, Table &tbl_Filter_TD_13380660_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14632060_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14632060_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14632060_input.getInt32(i, 0);
            tbl_Filter_TD_13380660_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13380660_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13380660_output #Row: " << tbl_Filter_TD_13380660_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13767647(Table &tbl_SerializeFromObject_TD_14241048_input, Table &tbl_Filter_TD_13767647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#3561) AND isnotnull(ss_sold_date_sk#3558)))
    // Input: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    // Output: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14241048_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3561 = tbl_SerializeFromObject_TD_14241048_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk3558 = tbl_SerializeFromObject_TD_14241048_input.getInt32(i, 0);
        if ((_ss_customer_sk3561!= 0) && (_ss_sold_date_sk3558!= 0)) {
            int32_t _ss_sold_date_sk3558_t = tbl_SerializeFromObject_TD_14241048_input.getInt32(i, 0);
            tbl_Filter_TD_13767647_output.setInt32(r, 0, _ss_sold_date_sk3558_t);
            int32_t _ss_customer_sk3561_t = tbl_SerializeFromObject_TD_14241048_input.getInt32(i, 1);
            tbl_Filter_TD_13767647_output.setInt32(r, 1, _ss_customer_sk3561_t);
            int32_t _ss_quantity3568_t = tbl_SerializeFromObject_TD_14241048_input.getInt32(i, 2);
            tbl_Filter_TD_13767647_output.setInt32(r, 2, _ss_quantity3568_t);
            int64_t _ss_sales_price3571_t = tbl_SerializeFromObject_TD_14241048_input.getInt64(i, 3);
            tbl_Filter_TD_13767647_output.setInt64(r, 3, _ss_sales_price3571_t);
            r++;
        }
    }
    tbl_Filter_TD_13767647_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13767647_output #Row: " << tbl_Filter_TD_13767647_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13628174(Table &tbl_SerializeFromObject_TD_14470233_input, Table &tbl_Filter_TD_13628174_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14470233_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14470233_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14470233_input.getInt32(i, 0);
            tbl_Filter_TD_13628174_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13628174_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13628174_output #Row: " << tbl_Filter_TD_13628174_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13259639(Table &tbl_SerializeFromObject_TD_14203114_input, Table &tbl_Filter_TD_13259639_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#3561) AND isnotnull(ss_sold_date_sk#3558)))
    // Input: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    // Output: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14203114_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3561 = tbl_SerializeFromObject_TD_14203114_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk3558 = tbl_SerializeFromObject_TD_14203114_input.getInt32(i, 0);
        if ((_ss_customer_sk3561!= 0) && (_ss_sold_date_sk3558!= 0)) {
            int32_t _ss_sold_date_sk3558_t = tbl_SerializeFromObject_TD_14203114_input.getInt32(i, 0);
            tbl_Filter_TD_13259639_output.setInt32(r, 0, _ss_sold_date_sk3558_t);
            int32_t _ss_customer_sk3561_t = tbl_SerializeFromObject_TD_14203114_input.getInt32(i, 1);
            tbl_Filter_TD_13259639_output.setInt32(r, 1, _ss_customer_sk3561_t);
            int32_t _ss_quantity3568_t = tbl_SerializeFromObject_TD_14203114_input.getInt32(i, 2);
            tbl_Filter_TD_13259639_output.setInt32(r, 2, _ss_quantity3568_t);
            int64_t _ss_sales_price3571_t = tbl_SerializeFromObject_TD_14203114_input.getInt64(i, 3);
            tbl_Filter_TD_13259639_output.setInt64(r, 3, _ss_sales_price3571_t);
            r++;
        }
    }
    tbl_Filter_TD_13259639_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13259639_output #Row: " << tbl_Filter_TD_13259639_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13252891(Table &tbl_SerializeFromObject_TD_14954139_input, Table &tbl_Filter_TD_13252891_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14954139_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_14954139_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_14954139_input.getInt32(i, 0);
            tbl_Filter_TD_13252891_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_14954139_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13252891_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_13252891_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13252891_output #Row: " << tbl_Filter_TD_13252891_output.getNumRow() << std::endl;
}


void SW_Filter_TD_13199027(Table &tbl_SerializeFromObject_TD_14785688_input, Table &tbl_Filter_TD_13199027_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14785688_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14785688_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14785688_input.getInt32(i, 0);
            tbl_Filter_TD_13199027_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13199027_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13199027_output #Row: " << tbl_Filter_TD_13199027_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13860804(Table &tbl_SerializeFromObject_TD_14687258_input, Table &tbl_Filter_TD_13860804_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#3561) AND isnotnull(ss_sold_date_sk#3558)))
    // Input: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    // Output: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14687258_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3561 = tbl_SerializeFromObject_TD_14687258_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk3558 = tbl_SerializeFromObject_TD_14687258_input.getInt32(i, 0);
        if ((_ss_customer_sk3561!= 0) && (_ss_sold_date_sk3558!= 0)) {
            int32_t _ss_sold_date_sk3558_t = tbl_SerializeFromObject_TD_14687258_input.getInt32(i, 0);
            tbl_Filter_TD_13860804_output.setInt32(r, 0, _ss_sold_date_sk3558_t);
            int32_t _ss_customer_sk3561_t = tbl_SerializeFromObject_TD_14687258_input.getInt32(i, 1);
            tbl_Filter_TD_13860804_output.setInt32(r, 1, _ss_customer_sk3561_t);
            int32_t _ss_quantity3568_t = tbl_SerializeFromObject_TD_14687258_input.getInt32(i, 2);
            tbl_Filter_TD_13860804_output.setInt32(r, 2, _ss_quantity3568_t);
            int64_t _ss_sales_price3571_t = tbl_SerializeFromObject_TD_14687258_input.getInt64(i, 3);
            tbl_Filter_TD_13860804_output.setInt64(r, 3, _ss_sales_price3571_t);
            r++;
        }
    }
    tbl_Filter_TD_13860804_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13860804_output #Row: " << tbl_Filter_TD_13860804_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13959534(Table &tbl_SerializeFromObject_TD_14655597_input, Table &tbl_Filter_TD_13959534_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#0))
    // Input: ListBuffer(c_customer_sk#0)
    // Output: ListBuffer(c_customer_sk#0)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14655597_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk0 = tbl_SerializeFromObject_TD_14655597_input.getInt32(i, 0);
        if (_c_customer_sk0!= 0) {
            int32_t _c_customer_sk0_t = tbl_SerializeFromObject_TD_14655597_input.getInt32(i, 0);
            tbl_Filter_TD_13959534_output.setInt32(r, 0, _c_customer_sk0_t);
            r++;
        }
    }
    tbl_Filter_TD_13959534_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13959534_output #Row: " << tbl_Filter_TD_13959534_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13661488(Table &tbl_SerializeFromObject_TD_14990777_input, Table &tbl_Filter_TD_13661488_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_customer_sk#3561) AND isnotnull(ss_sold_date_sk#3558)))
    // Input: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    // Output: ListBuffer(ss_sold_date_sk#3558, ss_customer_sk#3561, ss_quantity#3568, ss_sales_price#3571)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14990777_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3561 = tbl_SerializeFromObject_TD_14990777_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk3558 = tbl_SerializeFromObject_TD_14990777_input.getInt32(i, 0);
        if ((_ss_customer_sk3561!= 0) && (_ss_sold_date_sk3558!= 0)) {
            int32_t _ss_sold_date_sk3558_t = tbl_SerializeFromObject_TD_14990777_input.getInt32(i, 0);
            tbl_Filter_TD_13661488_output.setInt32(r, 0, _ss_sold_date_sk3558_t);
            int32_t _ss_customer_sk3561_t = tbl_SerializeFromObject_TD_14990777_input.getInt32(i, 1);
            tbl_Filter_TD_13661488_output.setInt32(r, 1, _ss_customer_sk3561_t);
            int32_t _ss_quantity3568_t = tbl_SerializeFromObject_TD_14990777_input.getInt32(i, 2);
            tbl_Filter_TD_13661488_output.setInt32(r, 2, _ss_quantity3568_t);
            int64_t _ss_sales_price3571_t = tbl_SerializeFromObject_TD_14990777_input.getInt64(i, 3);
            tbl_Filter_TD_13661488_output.setInt64(r, 3, _ss_sales_price3571_t);
            r++;
        }
    }
    tbl_Filter_TD_13661488_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13661488_output #Row: " << tbl_Filter_TD_13661488_output.getNumRow() << std::endl;
}

void SW_Filter_TD_13754626(Table &tbl_SerializeFromObject_TD_14705754_input, Table &tbl_Filter_TD_13754626_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(i_item_sk#228, i_item_desc#232)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_14705754_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_14705754_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_14705754_input.getInt32(i, 0);
            tbl_Filter_TD_13754626_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_t = tbl_SerializeFromObject_TD_14705754_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_13754626_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_item_desc232_t);
            r++;
        }
    }
    tbl_Filter_TD_13754626_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_13754626_output #Row: " << tbl_Filter_TD_13754626_output.getNumRow() << std::endl;
}


void SW_Filter_TD_12980403(Table &tbl_SerializeFromObject_TD_13930581_input, Table &tbl_Filter_TD_12980403_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#3587 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#3581)))
    // Input: ListBuffer(d_date_sk#3581, d_year#3587)
    // Output: ListBuffer(d_date_sk#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13930581_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3587 = tbl_SerializeFromObject_TD_13930581_input.getInt32(i, 1);
        int32_t _d_date_sk3581 = tbl_SerializeFromObject_TD_13930581_input.getInt32(i, 0);
        auto reuse_col_str_260 = _d_year3587;
        if (((reuse_col_str_260 == 2000) || (reuse_col_str_260 == 2001) || (reuse_col_str_260 == 2002) || (reuse_col_str_260 == 2003) || (0)) && (_d_date_sk3581!= 0)) {
            int32_t _d_date_sk3581_t = tbl_SerializeFromObject_TD_13930581_input.getInt32(i, 0);
            tbl_Filter_TD_12980403_output.setInt32(r, 0, _d_date_sk3581_t);
            r++;
        }
    }
    tbl_Filter_TD_12980403_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12980403_output #Row: " << tbl_Filter_TD_12980403_output.getNumRow() << std::endl;
}


void SW_Filter_TD_12414135(Table &tbl_SerializeFromObject_TD_13589383_input, Table &tbl_Filter_TD_12414135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#3587 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#3581)))
    // Input: ListBuffer(d_date_sk#3581, d_year#3587)
    // Output: ListBuffer(d_date_sk#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13589383_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3587 = tbl_SerializeFromObject_TD_13589383_input.getInt32(i, 1);
        int32_t _d_date_sk3581 = tbl_SerializeFromObject_TD_13589383_input.getInt32(i, 0);
        auto reuse_col_str_363 = _d_year3587;
        if (((reuse_col_str_363 == 2000) || (reuse_col_str_363 == 2001) || (reuse_col_str_363 == 2002) || (reuse_col_str_363 == 2003) || (0)) && (_d_date_sk3581!= 0)) {
            int32_t _d_date_sk3581_t = tbl_SerializeFromObject_TD_13589383_input.getInt32(i, 0);
            tbl_Filter_TD_12414135_output.setInt32(r, 0, _d_date_sk3581_t);
            r++;
        }
    }
    tbl_Filter_TD_12414135_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12414135_output #Row: " << tbl_Filter_TD_12414135_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_12219972_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_12219972_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12219972_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12219972_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_12219972_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_12219972_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_12219972_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12219972_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12219972_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_12219972_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_12219972(Table &tbl_JOIN_INNER_TD_13291829_output, Table &tbl_Filter_TD_13252891_output, Table &tbl_JOIN_INNER_TD_12219972_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, d_date#122)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output Table: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_13291829_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13252891_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12219972_key_leftMajor, SW_JOIN_INNER_TD_12219972_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13291829_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13291829_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12219972_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13291829_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_13291829_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12219972_payload_leftMajor payloadA{_ss_item_sk1208, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13252891_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13252891_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12219972_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _i_item_sk228 = tbl_Filter_TD_13252891_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13252891_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_12219972_output.setInt32(r, 0, _d_date122);
                tbl_JOIN_INNER_TD_12219972_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12219972_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12219972_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12219972_key_rightMajor, SW_JOIN_INNER_TD_12219972_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13252891_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13252891_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12219972_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_13252891_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13252891_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_12219972_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13291829_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13291829_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12219972_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13291829_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_13291829_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_12219972_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12219972_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_12219972_output.setInt32(r, 0, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12219972_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12219972_output #Row: " << tbl_JOIN_INNER_TD_12219972_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12982527(Table &tbl_SerializeFromObject_TD_13870841_input, Table &tbl_Filter_TD_12982527_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#3587 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#3581)))
    // Input: ListBuffer(d_date_sk#3581, d_year#3587)
    // Output: ListBuffer(d_date_sk#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13870841_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3587 = tbl_SerializeFromObject_TD_13870841_input.getInt32(i, 1);
        int32_t _d_date_sk3581 = tbl_SerializeFromObject_TD_13870841_input.getInt32(i, 0);
        auto reuse_col_str_654 = _d_year3587;
        if (((reuse_col_str_654 == 2000) || (reuse_col_str_654 == 2001) || (reuse_col_str_654 == 2002) || (reuse_col_str_654 == 2003) || (0)) && (_d_date_sk3581!= 0)) {
            int32_t _d_date_sk3581_t = tbl_SerializeFromObject_TD_13870841_input.getInt32(i, 0);
            tbl_Filter_TD_12982527_output.setInt32(r, 0, _d_date_sk3581_t);
            r++;
        }
    }
    tbl_Filter_TD_12982527_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12982527_output #Row: " << tbl_Filter_TD_12982527_output.getNumRow() << std::endl;
}


void SW_Filter_TD_1250278(Table &tbl_SerializeFromObject_TD_13158825_input, Table &tbl_Filter_TD_1250278_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_year#3587 IN (2000,2001,2002,2003) AND isnotnull(d_date_sk#3581)))
    // Input: ListBuffer(d_date_sk#3581, d_year#3587)
    // Output: ListBuffer(d_date_sk#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13158825_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3587 = tbl_SerializeFromObject_TD_13158825_input.getInt32(i, 1);
        int32_t _d_date_sk3581 = tbl_SerializeFromObject_TD_13158825_input.getInt32(i, 0);
        auto reuse_col_str_53 = _d_year3587;
        if (((reuse_col_str_53 == 2000) || (reuse_col_str_53 == 2001) || (reuse_col_str_53 == 2002) || (reuse_col_str_53 == 2003) || (0)) && (_d_date_sk3581!= 0)) {
            int32_t _d_date_sk3581_t = tbl_SerializeFromObject_TD_13158825_input.getInt32(i, 0);
            tbl_Filter_TD_1250278_output.setInt32(r, 0, _d_date_sk3581_t);
            r++;
        }
    }
    tbl_Filter_TD_1250278_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1250278_output #Row: " << tbl_Filter_TD_1250278_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_12490786_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_12490786_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12490786_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12490786_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_12490786_payload_leftMajor {
    int32_t _ss_item_sk1208;
    int32_t _d_date122;
};
struct SW_JOIN_INNER_TD_12490786_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_12490786_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_12490786_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_12490786_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_12490786_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_item_desc232;
};
void SW_JOIN_INNER_TD_12490786(Table &tbl_JOIN_INNER_TD_13351568_output, Table &tbl_Filter_TD_13754626_output, Table &tbl_JOIN_INNER_TD_12490786_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#228))
    // Left Table: ListBuffer(ss_item_sk#1208, d_date#122)
    // Right Table: ListBuffer(i_item_sk#228, i_item_desc#232)
    // Output Table: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    int left_nrow = tbl_JOIN_INNER_TD_13351568_output.getNumRow();
    int right_nrow = tbl_Filter_TD_13754626_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12490786_key_leftMajor, SW_JOIN_INNER_TD_12490786_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_13351568_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13351568_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12490786_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13351568_output.getInt32(i, 0);
            int32_t _d_date122 = tbl_JOIN_INNER_TD_13351568_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_12490786_payload_leftMajor payloadA{_ss_item_sk1208, _d_date122};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_13754626_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13754626_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12490786_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _d_date122 = (it->second)._d_date122;
                int32_t _i_item_sk228 = tbl_Filter_TD_13754626_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13754626_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
                tbl_JOIN_INNER_TD_12490786_output.setInt32(r, 0, _d_date122);
                tbl_JOIN_INNER_TD_12490786_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12490786_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12490786_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_12490786_key_rightMajor, SW_JOIN_INNER_TD_12490786_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_13754626_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_13754626_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_12490786_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_13754626_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n = tbl_Filter_TD_13754626_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_item_desc232 = std::string(_i_item_desc232_n.data());
            SW_JOIN_INNER_TD_12490786_payload_rightMajor payloadA{_i_item_sk228, _i_item_desc232};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_13351568_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_13351568_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_12490786_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_item_desc232 = (it->second)._i_item_desc232;
                std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232_n{};
                memcpy(_i_item_desc232_n.data(), (_i_item_desc232).data(), (_i_item_desc232).length());
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_13351568_output.getInt32(i, 0);
                int32_t _d_date122 = tbl_JOIN_INNER_TD_13351568_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_12490786_output.setInt32(r, 1, _i_item_sk228);
                tbl_JOIN_INNER_TD_12490786_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_item_desc232_n);
                tbl_JOIN_INNER_TD_12490786_output.setInt32(r, 0, _d_date122);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_12490786_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_12490786_output #Row: " << tbl_JOIN_INNER_TD_12490786_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11809128(Table &tbl_SerializeFromObject_TD_12254236_input, Table &tbl_Filter_TD_11809128_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3632))
    // Input: ListBuffer(c_customer_sk#3632)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12254236_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3632 = tbl_SerializeFromObject_TD_12254236_input.getInt32(i, 0);
        if (_c_customer_sk3632!= 0) {
            int32_t _c_customer_sk3632_t = tbl_SerializeFromObject_TD_12254236_input.getInt32(i, 0);
            tbl_Filter_TD_11809128_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_11809128_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11809128_output #Row: " << tbl_Filter_TD_11809128_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11820471(Table &tbl_SerializeFromObject_TD_12228760_input, Table &tbl_Filter_TD_11820471_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#3612))
    // Input: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    // Output: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12228760_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3612 = tbl_SerializeFromObject_TD_12228760_input.getInt32(i, 0);
        if (_ss_customer_sk3612!= 0) {
            int32_t _ss_customer_sk3612_t = tbl_SerializeFromObject_TD_12228760_input.getInt32(i, 0);
            tbl_Filter_TD_11820471_output.setInt32(r, 0, _ss_customer_sk3612_t);
            int32_t _ss_quantity3619_t = tbl_SerializeFromObject_TD_12228760_input.getInt32(i, 1);
            tbl_Filter_TD_11820471_output.setInt32(r, 1, _ss_quantity3619_t);
            int64_t _ss_sales_price3622_t = tbl_SerializeFromObject_TD_12228760_input.getInt64(i, 2);
            tbl_Filter_TD_11820471_output.setInt64(r, 2, _ss_sales_price3622_t);
            r++;
        }
    }
    tbl_Filter_TD_11820471_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11820471_output #Row: " << tbl_Filter_TD_11820471_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11136802(Table &tbl_SerializeFromObject_TD_12613679_input, Table &tbl_Filter_TD_11136802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3632))
    // Input: ListBuffer(c_customer_sk#3632)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12613679_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3632 = tbl_SerializeFromObject_TD_12613679_input.getInt32(i, 0);
        if (_c_customer_sk3632!= 0) {
            int32_t _c_customer_sk3632_t = tbl_SerializeFromObject_TD_12613679_input.getInt32(i, 0);
            tbl_Filter_TD_11136802_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_11136802_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11136802_output #Row: " << tbl_Filter_TD_11136802_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11362879(Table &tbl_SerializeFromObject_TD_12869914_input, Table &tbl_Filter_TD_11362879_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#3612))
    // Input: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    // Output: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12869914_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3612 = tbl_SerializeFromObject_TD_12869914_input.getInt32(i, 0);
        if (_ss_customer_sk3612!= 0) {
            int32_t _ss_customer_sk3612_t = tbl_SerializeFromObject_TD_12869914_input.getInt32(i, 0);
            tbl_Filter_TD_11362879_output.setInt32(r, 0, _ss_customer_sk3612_t);
            int32_t _ss_quantity3619_t = tbl_SerializeFromObject_TD_12869914_input.getInt32(i, 1);
            tbl_Filter_TD_11362879_output.setInt32(r, 1, _ss_quantity3619_t);
            int64_t _ss_sales_price3622_t = tbl_SerializeFromObject_TD_12869914_input.getInt64(i, 2);
            tbl_Filter_TD_11362879_output.setInt64(r, 2, _ss_sales_price3622_t);
            r++;
        }
    }
    tbl_Filter_TD_11362879_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11362879_output #Row: " << tbl_Filter_TD_11362879_output.getNumRow() << std::endl;
}

void SW_Project_TD_11589783(Table &tbl_JOIN_INNER_TD_12219972_output, Table &tbl_Project_TD_11589783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(substr(i_item_desc#232, 1, 30) AS _groupingexpression#4009)
    // Input: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#4009)
    int nrow1 = tbl_JOIN_INNER_TD_12219972_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_JOIN_INNER_TD_12219972_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_12219972_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_12219972_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string __groupingexpression4009_str = std::string(_i_item_desc232.data()).substr(0, 30);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression4009{};
        memcpy(__groupingexpression4009.data(), __groupingexpression4009_str.data(), (__groupingexpression4009_str).length());
        tbl_Project_TD_11589783_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, __groupingexpression4009);
        tbl_Project_TD_11589783_output.setInt32(i, 0, _d_date122);
        tbl_Project_TD_11589783_output.setInt32(i, 1, _i_item_sk228);
    }
    tbl_Project_TD_11589783_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_11589783_output #Row: " << tbl_Project_TD_11589783_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11405369(Table &tbl_SerializeFromObject_TD_12483785_input, Table &tbl_Filter_TD_11405369_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3632))
    // Input: ListBuffer(c_customer_sk#3632)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12483785_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3632 = tbl_SerializeFromObject_TD_12483785_input.getInt32(i, 0);
        if (_c_customer_sk3632!= 0) {
            int32_t _c_customer_sk3632_t = tbl_SerializeFromObject_TD_12483785_input.getInt32(i, 0);
            tbl_Filter_TD_11405369_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_11405369_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11405369_output #Row: " << tbl_Filter_TD_11405369_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11360698(Table &tbl_SerializeFromObject_TD_12265106_input, Table &tbl_Filter_TD_11360698_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#3612))
    // Input: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    // Output: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12265106_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3612 = tbl_SerializeFromObject_TD_12265106_input.getInt32(i, 0);
        if (_ss_customer_sk3612!= 0) {
            int32_t _ss_customer_sk3612_t = tbl_SerializeFromObject_TD_12265106_input.getInt32(i, 0);
            tbl_Filter_TD_11360698_output.setInt32(r, 0, _ss_customer_sk3612_t);
            int32_t _ss_quantity3619_t = tbl_SerializeFromObject_TD_12265106_input.getInt32(i, 1);
            tbl_Filter_TD_11360698_output.setInt32(r, 1, _ss_quantity3619_t);
            int64_t _ss_sales_price3622_t = tbl_SerializeFromObject_TD_12265106_input.getInt64(i, 2);
            tbl_Filter_TD_11360698_output.setInt64(r, 2, _ss_sales_price3622_t);
            r++;
        }
    }
    tbl_Filter_TD_11360698_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11360698_output #Row: " << tbl_Filter_TD_11360698_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11431283(Table &tbl_SerializeFromObject_TD_12927837_input, Table &tbl_Filter_TD_11431283_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3632))
    // Input: ListBuffer(c_customer_sk#3632)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12927837_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3632 = tbl_SerializeFromObject_TD_12927837_input.getInt32(i, 0);
        if (_c_customer_sk3632!= 0) {
            int32_t _c_customer_sk3632_t = tbl_SerializeFromObject_TD_12927837_input.getInt32(i, 0);
            tbl_Filter_TD_11431283_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_11431283_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11431283_output #Row: " << tbl_Filter_TD_11431283_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11962588(Table &tbl_SerializeFromObject_TD_12162060_input, Table &tbl_Filter_TD_11962588_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_customer_sk#3612))
    // Input: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    // Output: ListBuffer(ss_customer_sk#3612, ss_quantity#3619, ss_sales_price#3622)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12162060_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_customer_sk3612 = tbl_SerializeFromObject_TD_12162060_input.getInt32(i, 0);
        if (_ss_customer_sk3612!= 0) {
            int32_t _ss_customer_sk3612_t = tbl_SerializeFromObject_TD_12162060_input.getInt32(i, 0);
            tbl_Filter_TD_11962588_output.setInt32(r, 0, _ss_customer_sk3612_t);
            int32_t _ss_quantity3619_t = tbl_SerializeFromObject_TD_12162060_input.getInt32(i, 1);
            tbl_Filter_TD_11962588_output.setInt32(r, 1, _ss_quantity3619_t);
            int64_t _ss_sales_price3622_t = tbl_SerializeFromObject_TD_12162060_input.getInt64(i, 2);
            tbl_Filter_TD_11962588_output.setInt64(r, 2, _ss_sales_price3622_t);
            r++;
        }
    }
    tbl_Filter_TD_11962588_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11962588_output #Row: " << tbl_Filter_TD_11962588_output.getNumRow() << std::endl;
}

void SW_Project_TD_11601950(Table &tbl_JOIN_INNER_TD_12490786_output, Table &tbl_Project_TD_11601950_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(substr(i_item_desc#232, 1, 30) AS _groupingexpression#4008)
    // Input: ListBuffer(d_date#122, i_item_sk#228, i_item_desc#232)
    // Output: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#4008)
    int nrow1 = tbl_JOIN_INNER_TD_12490786_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_JOIN_INNER_TD_12490786_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_12490786_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_item_desc232 = tbl_JOIN_INNER_TD_12490786_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::string __groupingexpression4008_str = std::string(_i_item_desc232.data()).substr(0, 30);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression4008{};
        memcpy(__groupingexpression4008.data(), __groupingexpression4008_str.data(), (__groupingexpression4008_str).length());
        tbl_Project_TD_11601950_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, __groupingexpression4008);
        tbl_Project_TD_11601950_output.setInt32(i, 0, _d_date122);
        tbl_Project_TD_11601950_output.setInt32(i, 1, _i_item_sk228);
    }
    tbl_Project_TD_11601950_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_11601950_output #Row: " << tbl_Project_TD_11601950_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_10591488_consolidate(Table &tbl_Aggregate_TD_10591488_output_preprocess, Table &tbl_Aggregate_TD_10591488_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_10591488_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _csales3554 = tbl_Aggregate_TD_10591488_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_10591488_output.setInt64(r, 0, _csales3554);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_10591488_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_10591488_output #Row: " << tbl_Aggregate_TD_10591488_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_1016926_consolidate(Table &tbl_Aggregate_TD_1016926_output_preprocess, Table &tbl_Aggregate_TD_1016926_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1016926_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _csales3554 = tbl_Aggregate_TD_1016926_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_1016926_output.setInt64(r, 0, _csales3554);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1016926_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1016926_output #Row: " << tbl_Aggregate_TD_1016926_output.getNumRow() << std::endl;
}


struct SW_Aggregate_TD_10674991_key {
    std::string __groupingexpression4009;
    int32_t _i_item_sk228;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_10674991_key& other) const { return (__groupingexpression4009 == other.__groupingexpression4009) && (_i_item_sk228 == other._i_item_sk228) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10674991_key> {
    std::size_t operator() (const SW_Aggregate_TD_10674991_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k.__groupingexpression4009)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_10674991_payload {
    int32_t _item_sk3551;
    int64_t _cnt3553L_count_0;
};
void SW_Aggregate_TD_10674991(Table &tbl_Project_TD_11589783_output, Table &tbl_Aggregate_TD_10674991_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(_groupingexpression#4009, i_item_sk#228, d_date#122, i_item_sk#228 AS item_sk#3551, count(1) AS cnt#3553L)
    // Input: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#4009)
    // Output: ListBuffer(item_sk#3551, cnt#3553L)
    std::unordered_map<SW_Aggregate_TD_10674991_key, SW_Aggregate_TD_10674991_payload> ht1;
    int nrow1 = tbl_Project_TD_11589783_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_Project_TD_11589783_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_Project_TD_11589783_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression4009 = tbl_Project_TD_11589783_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_10674991_key k{std::string(__groupingexpression4009.data()), _i_item_sk228, _d_date122};
        int32_t _item_sk3551 = _i_item_sk228;
        int64_t _cnt3553L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_10674991_payload p{_item_sk3551, _cnt3553L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt3553L_count_0 + _cnt3553L_count_0;
            p._cnt3553L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // __groupingexpression4009 not required in the output table
        // _i_item_sk228 not required in the output table
        // _d_date122 not required in the output table
        tbl_Aggregate_TD_10674991_output.setInt32(r, 0, (it.second)._item_sk3551);
        int64_t _cnt3553L = (it.second)._cnt3553L_count_0;
        tbl_Aggregate_TD_10674991_output.setInt64(r, 1, _cnt3553L);
        ++r;
    }
    tbl_Aggregate_TD_10674991_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10674991_output #Row: " << tbl_Aggregate_TD_10674991_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_10249456_consolidate(Table &tbl_Aggregate_TD_10249456_output_preprocess, Table &tbl_Aggregate_TD_10249456_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_10249456_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _csales3554 = tbl_Aggregate_TD_10249456_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_10249456_output.setInt64(r, 0, _csales3554);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_10249456_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_10249456_output #Row: " << tbl_Aggregate_TD_10249456_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_10341848_consolidate(Table &tbl_Aggregate_TD_10341848_output_preprocess, Table &tbl_Aggregate_TD_10341848_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_10341848_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _csales3554 = tbl_Aggregate_TD_10341848_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_10341848_output.setInt64(r, 0, _csales3554);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_10341848_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_10341848_output #Row: " << tbl_Aggregate_TD_10341848_output.getNumRow() << std::endl;
}


struct SW_Aggregate_TD_10689047_key {
    std::string __groupingexpression4008;
    int32_t _i_item_sk228;
    int32_t _d_date122;
    bool operator==(const SW_Aggregate_TD_10689047_key& other) const { return (__groupingexpression4008 == other.__groupingexpression4008) && (_i_item_sk228 == other._i_item_sk228) && (_d_date122 == other._d_date122); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_10689047_key> {
    std::size_t operator() (const SW_Aggregate_TD_10689047_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k.__groupingexpression4008)) + (hash<int32_t>()(k._i_item_sk228)) + (hash<int32_t>()(k._d_date122));
    }
};
}
struct SW_Aggregate_TD_10689047_payload {
    int32_t _item_sk3551;
    int64_t _cnt3553L_count_0;
};
void SW_Aggregate_TD_10689047(Table &tbl_Project_TD_11601950_output, Table &tbl_Aggregate_TD_10689047_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(_groupingexpression#4008, i_item_sk#228, d_date#122, i_item_sk#228 AS item_sk#3551, count(1) AS cnt#3553L)
    // Input: ListBuffer(d_date#122, i_item_sk#228, _groupingexpression#4008)
    // Output: ListBuffer(item_sk#3551, cnt#3553L)
    std::unordered_map<SW_Aggregate_TD_10689047_key, SW_Aggregate_TD_10689047_payload> ht1;
    int nrow1 = tbl_Project_TD_11601950_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_Project_TD_11601950_output.getInt32(i, 0);
        int32_t _i_item_sk228 = tbl_Project_TD_11601950_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> __groupingexpression4008 = tbl_Project_TD_11601950_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_10689047_key k{std::string(__groupingexpression4008.data()), _i_item_sk228, _d_date122};
        int32_t _item_sk3551 = _i_item_sk228;
        int64_t _cnt3553L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_10689047_payload p{_item_sk3551, _cnt3553L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt3553L_count_0 + _cnt3553L_count_0;
            p._cnt3553L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // __groupingexpression4008 not required in the output table
        // _i_item_sk228 not required in the output table
        // _d_date122 not required in the output table
        tbl_Aggregate_TD_10689047_output.setInt32(r, 0, (it.second)._item_sk3551);
        int64_t _cnt3553L = (it.second)._cnt3553L_count_0;
        tbl_Aggregate_TD_10689047_output.setInt64(r, 1, _cnt3553L);
        ++r;
    }
    tbl_Aggregate_TD_10689047_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10689047_output #Row: " << tbl_Aggregate_TD_10689047_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9541362(Table &tbl_Aggregate_TD_10591488_output, Table &tbl_Aggregate_TD_9541362_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#3554) AS tpcds_cmax#3555)
    // Input: ListBuffer(csales#3554)
    // Output: ListBuffer(tpcds_cmax#3555)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10591488_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _csales3554 = tbl_Aggregate_TD_10591488_output.getInt64(i, 0);
        int64_t _tpcds_cmax3555_max_0 = _csales3554;
        max_0 = max_0 < _tpcds_cmax3555_max_0 ? _tpcds_cmax3555_max_0 : max_0;
    }
    int r = 0;
    int64_t _tpcds_cmax3555 = max_0;
    tbl_Aggregate_TD_9541362_output.setInt64(r++, 0, _tpcds_cmax3555);
    tbl_Aggregate_TD_9541362_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9541362_output #Row: " << tbl_Aggregate_TD_9541362_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9540992_consolidate(Table &tbl_Aggregate_TD_9540992_output_preprocess, Table &tbl_Aggregate_TD_9540992_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_9540992_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_customer_sk3632 = tbl_Aggregate_TD_9540992_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_9540992_output.setInt32(r, 0, _c_customer_sk3632);
        int64_t _ssales3556 = tbl_Aggregate_TD_9540992_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_9540992_output.setInt64(r, 1, _ssales3556);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_9540992_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_9540992_output #Row: " << tbl_Aggregate_TD_9540992_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9543664(Table &tbl_Aggregate_TD_1016926_output, Table &tbl_Aggregate_TD_9543664_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#3554) AS tpcds_cmax#3555)
    // Input: ListBuffer(csales#3554)
    // Output: ListBuffer(tpcds_cmax#3555)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_1016926_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _csales3554 = tbl_Aggregate_TD_1016926_output.getInt64(i, 0);
        int64_t _tpcds_cmax3555_max_0 = _csales3554;
        max_0 = max_0 < _tpcds_cmax3555_max_0 ? _tpcds_cmax3555_max_0 : max_0;
    }
    int r = 0;
    int64_t _tpcds_cmax3555 = max_0;
    tbl_Aggregate_TD_9543664_output.setInt64(r++, 0, _tpcds_cmax3555);
    tbl_Aggregate_TD_9543664_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9543664_output #Row: " << tbl_Aggregate_TD_9543664_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_997594_consolidate(Table &tbl_Aggregate_TD_997594_output_preprocess, Table &tbl_Aggregate_TD_997594_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_997594_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_customer_sk3632 = tbl_Aggregate_TD_997594_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_997594_output.setInt32(r, 0, _c_customer_sk3632);
        int64_t _ssales3556 = tbl_Aggregate_TD_997594_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_997594_output.setInt64(r, 1, _ssales3556);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_997594_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_997594_output #Row: " << tbl_Aggregate_TD_997594_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9188431(Table &tbl_Aggregate_TD_10674991_output, Table &tbl_Filter_TD_9188431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#3553L > 4))
    // Input: ListBuffer(item_sk#3551, cnt#3553L)
    // Output: ListBuffer(item_sk#3551)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10674991_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt3553L = tbl_Aggregate_TD_10674991_output.getInt64(i, 1);
        if (_cnt3553L > 4) {
            int32_t _item_sk3551_t = tbl_Aggregate_TD_10674991_output.getInt32(i, 0);
            tbl_Filter_TD_9188431_output.setInt32(r, 0, _item_sk3551_t);
            r++;
        }
    }
    tbl_Filter_TD_9188431_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9188431_output #Row: " << tbl_Filter_TD_9188431_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9116027(Table &tbl_SerializeFromObject_TD_10146884_input, Table &tbl_Filter_TD_9116027_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_bill_customer_sk#733) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10146884_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_bill_customer_sk733 = tbl_SerializeFromObject_TD_10146884_input.getInt32(i, 2);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10146884_input.getInt32(i, 0);
        if ((_ws_bill_customer_sk733!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10146884_input.getInt32(i, 0);
            tbl_Filter_TD_9116027_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10146884_input.getInt32(i, 1);
            tbl_Filter_TD_9116027_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_customer_sk733_t = tbl_SerializeFromObject_TD_10146884_input.getInt32(i, 2);
            tbl_Filter_TD_9116027_output.setInt32(r, 2, _ws_bill_customer_sk733_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_10146884_input.getInt32(i, 3);
            tbl_Filter_TD_9116027_output.setInt32(r, 3, _ws_quantity747_t);
            int64_t _ws_list_price749_t = tbl_SerializeFromObject_TD_10146884_input.getInt64(i, 4);
            tbl_Filter_TD_9116027_output.setInt64(r, 4, _ws_list_price749_t);
            r++;
        }
    }
    tbl_Filter_TD_9116027_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9116027_output #Row: " << tbl_Filter_TD_9116027_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9303521(Table &tbl_Aggregate_TD_10249456_output, Table &tbl_Aggregate_TD_9303521_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#3554) AS tpcds_cmax#3555)
    // Input: ListBuffer(csales#3554)
    // Output: ListBuffer(tpcds_cmax#3555)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10249456_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _csales3554 = tbl_Aggregate_TD_10249456_output.getInt64(i, 0);
        int64_t _tpcds_cmax3555_max_0 = _csales3554;
        max_0 = max_0 < _tpcds_cmax3555_max_0 ? _tpcds_cmax3555_max_0 : max_0;
    }
    int r = 0;
    int64_t _tpcds_cmax3555 = max_0;
    tbl_Aggregate_TD_9303521_output.setInt64(r++, 0, _tpcds_cmax3555);
    tbl_Aggregate_TD_9303521_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9303521_output #Row: " << tbl_Aggregate_TD_9303521_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9662598_consolidate(Table &tbl_Aggregate_TD_9662598_output_preprocess, Table &tbl_Aggregate_TD_9662598_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_9662598_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_customer_sk3632 = tbl_Aggregate_TD_9662598_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_9662598_output.setInt32(r, 0, _c_customer_sk3632);
        int64_t _ssales3556 = tbl_Aggregate_TD_9662598_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_9662598_output.setInt64(r, 1, _ssales3556);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_9662598_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_9662598_output #Row: " << tbl_Aggregate_TD_9662598_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9473599(Table &tbl_Aggregate_TD_10341848_output, Table &tbl_Aggregate_TD_9473599_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(max(csales#3554) AS tpcds_cmax#3555)
    // Input: ListBuffer(csales#3554)
    // Output: ListBuffer(tpcds_cmax#3555)
    int64_t max_0 = 0;
    int nrow1 = tbl_Aggregate_TD_10341848_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _csales3554 = tbl_Aggregate_TD_10341848_output.getInt64(i, 0);
        int64_t _tpcds_cmax3555_max_0 = _csales3554;
        max_0 = max_0 < _tpcds_cmax3555_max_0 ? _tpcds_cmax3555_max_0 : max_0;
    }
    int r = 0;
    int64_t _tpcds_cmax3555 = max_0;
    tbl_Aggregate_TD_9473599_output.setInt64(r++, 0, _tpcds_cmax3555);
    tbl_Aggregate_TD_9473599_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9473599_output #Row: " << tbl_Aggregate_TD_9473599_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_9642948_consolidate(Table &tbl_Aggregate_TD_9642948_output_preprocess, Table &tbl_Aggregate_TD_9642948_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_9642948_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _c_customer_sk3632 = tbl_Aggregate_TD_9642948_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_9642948_output.setInt32(r, 0, _c_customer_sk3632);
        int64_t _ssales3556 = tbl_Aggregate_TD_9642948_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_9642948_output.setInt64(r, 1, _ssales3556);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_9642948_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_9642948_output #Row: " << tbl_Aggregate_TD_9642948_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9214268(Table &tbl_Aggregate_TD_10689047_output, Table &tbl_Filter_TD_9214268_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#3553L > 4))
    // Input: ListBuffer(item_sk#3551, cnt#3553L)
    // Output: ListBuffer(item_sk#3551)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10689047_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt3553L = tbl_Aggregate_TD_10689047_output.getInt64(i, 1);
        if (_cnt3553L > 4) {
            int32_t _item_sk3551_t = tbl_Aggregate_TD_10689047_output.getInt32(i, 0);
            tbl_Filter_TD_9214268_output.setInt32(r, 0, _item_sk3551_t);
            r++;
        }
    }
    tbl_Filter_TD_9214268_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9214268_output #Row: " << tbl_Filter_TD_9214268_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9571006(Table &tbl_SerializeFromObject_TD_10274596_input, Table &tbl_Filter_TD_9571006_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_bill_customer_sk#1107) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_item_sk#1119, cs_quantity#1122, cs_list_price#1124)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10274596_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_bill_customer_sk1107 = tbl_SerializeFromObject_TD_10274596_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10274596_input.getInt32(i, 0);
        if ((_cs_bill_customer_sk1107!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10274596_input.getInt32(i, 0);
            tbl_Filter_TD_9571006_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_customer_sk1107_t = tbl_SerializeFromObject_TD_10274596_input.getInt32(i, 1);
            tbl_Filter_TD_9571006_output.setInt32(r, 1, _cs_bill_customer_sk1107_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_10274596_input.getInt32(i, 2);
            tbl_Filter_TD_9571006_output.setInt32(r, 2, _cs_item_sk1119_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_10274596_input.getInt32(i, 3);
            tbl_Filter_TD_9571006_output.setInt32(r, 3, _cs_quantity1122_t);
            int64_t _cs_list_price1124_t = tbl_SerializeFromObject_TD_10274596_input.getInt64(i, 4);
            tbl_Filter_TD_9571006_output.setInt64(r, 4, _cs_list_price1124_t);
            r++;
        }
    }
    tbl_Filter_TD_9571006_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9571006_output #Row: " << tbl_Filter_TD_9571006_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8143206(Table &tbl_Aggregate_TD_9540992_output, Table &tbl_Aggregate_TD_9541362_output, Table &tbl_Filter_TD_8143206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#3556) AND (cast(ssales#3556 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#3557 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#3632, ssales#3556)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9540992_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ssales3556 = tbl_Aggregate_TD_9540992_output.getInt64(i, 1);
        if ((_ssales3556!= 0) && (_ssales3556 > (0.950000 * tbl_Aggregate_TD_9541362_output.getInt64(0, 0)))) {
            int32_t _c_customer_sk3632_t = tbl_Aggregate_TD_9540992_output.getInt32(i, 0);
            tbl_Filter_TD_8143206_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_8143206_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8143206_output #Row: " << tbl_Filter_TD_8143206_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8356588(Table &tbl_SerializeFromObject_TD_9526106_input, Table &tbl_Filter_TD_8356588_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3696))
    // Input: ListBuffer(c_customer_sk#3696, c_first_name#3704, c_last_name#3705)
    // Output: ListBuffer(c_customer_sk#3696, c_first_name#3704, c_last_name#3705)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9526106_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3696 = tbl_SerializeFromObject_TD_9526106_input.getInt32(i, 0);
        if (_c_customer_sk3696!= 0) {
            int32_t _c_customer_sk3696_t = tbl_SerializeFromObject_TD_9526106_input.getInt32(i, 0);
            tbl_Filter_TD_8356588_output.setInt32(r, 0, _c_customer_sk3696_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_t = tbl_SerializeFromObject_TD_9526106_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8356588_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3704_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_t = tbl_SerializeFromObject_TD_9526106_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8356588_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3705_t);
            r++;
        }
    }
    tbl_Filter_TD_8356588_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8356588_output #Row: " << tbl_Filter_TD_8356588_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8911589(Table &tbl_Aggregate_TD_997594_output, Table &tbl_Aggregate_TD_9543664_output, Table &tbl_Filter_TD_8911589_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#3556) AND (cast(ssales#3556 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#3557 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#3632, ssales#3556)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_997594_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ssales3556 = tbl_Aggregate_TD_997594_output.getInt64(i, 1);
        if ((_ssales3556!= 0) && (_ssales3556 > (0.950000 * tbl_Aggregate_TD_9543664_output.getInt64(0, 0)))) {
            int32_t _c_customer_sk3632_t = tbl_Aggregate_TD_997594_output.getInt32(i, 0);
            tbl_Filter_TD_8911589_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_8911589_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8911589_output #Row: " << tbl_Filter_TD_8911589_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8729823(Table &tbl_Aggregate_TD_9662598_output, Table &tbl_Aggregate_TD_9303521_output, Table &tbl_Filter_TD_8729823_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#3556) AND (cast(ssales#3556 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#3557 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#3632, ssales#3556)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9662598_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ssales3556 = tbl_Aggregate_TD_9662598_output.getInt64(i, 1);
        if ((_ssales3556!= 0) && (_ssales3556 > (0.950000 * tbl_Aggregate_TD_9303521_output.getInt64(0, 0)))) {
            int32_t _c_customer_sk3632_t = tbl_Aggregate_TD_9662598_output.getInt32(i, 0);
            tbl_Filter_TD_8729823_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_8729823_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8729823_output #Row: " << tbl_Filter_TD_8729823_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8803226(Table &tbl_SerializeFromObject_TD_970876_input, Table &tbl_Filter_TD_8803226_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(c_customer_sk#3650))
    // Input: ListBuffer(c_customer_sk#3650, c_first_name#3658, c_last_name#3659)
    // Output: ListBuffer(c_customer_sk#3650, c_first_name#3658, c_last_name#3659)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_970876_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _c_customer_sk3650 = tbl_SerializeFromObject_TD_970876_input.getInt32(i, 0);
        if (_c_customer_sk3650!= 0) {
            int32_t _c_customer_sk3650_t = tbl_SerializeFromObject_TD_970876_input.getInt32(i, 0);
            tbl_Filter_TD_8803226_output.setInt32(r, 0, _c_customer_sk3650_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_t = tbl_SerializeFromObject_TD_970876_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8803226_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3658_t);
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_t = tbl_SerializeFromObject_TD_970876_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_8803226_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3659_t);
            r++;
        }
    }
    tbl_Filter_TD_8803226_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8803226_output #Row: " << tbl_Filter_TD_8803226_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8827897(Table &tbl_Aggregate_TD_9642948_output, Table &tbl_Aggregate_TD_9473599_output, Table &tbl_Filter_TD_8827897_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ssales#3556) AND (cast(ssales#3556 as decimal(38,8)) > CheckOverflow((0.950000 * promote_precision(cast(scalar-subquery#3557 [] as decimal(32,6)))), DecimalType(38,8), true))))
    // Input: ListBuffer(c_customer_sk#3632, ssales#3556)
    // Output: ListBuffer(c_customer_sk#3632)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9642948_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ssales3556 = tbl_Aggregate_TD_9642948_output.getInt64(i, 1);
        if ((_ssales3556!= 0) && (_ssales3556 > (0.950000 * tbl_Aggregate_TD_9473599_output.getInt64(0, 0)))) {
            int32_t _c_customer_sk3632_t = tbl_Aggregate_TD_9642948_output.getInt32(i, 0);
            tbl_Filter_TD_8827897_output.setInt32(r, 0, _c_customer_sk3632_t);
            r++;
        }
    }
    tbl_Filter_TD_8827897_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8827897_output #Row: " << tbl_Filter_TD_8827897_output.getNumRow() << std::endl;
}


struct SW_JOIN_LEFTSEMI_TD_7911421_key_leftMajor {
    int32_t _c_customer_sk3696;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7911421_key_leftMajor& other) const {
        return ((_c_customer_sk3696 == other._c_customer_sk3696));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7911421_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7911421_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3696));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7911421_payload_leftMajor {
    int32_t _c_customer_sk3696;
    std::string _c_first_name3704;
    std::string _c_last_name3705;
};
struct SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor {
    int32_t _c_customer_sk3632;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor& other) const {
        return ((_c_customer_sk3632 == other._c_customer_sk3632));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3632));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7911421_payload_rightMajor {
    int32_t _c_customer_sk3632;
};
void SW_JOIN_LEFTSEMI_TD_7911421(Table &tbl_Filter_TD_8356588_output, Table &tbl_Filter_TD_8143206_output, Table &tbl_JOIN_LEFTSEMI_TD_7911421_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#3696 = c_customer_sk#3632))
    // Left Table: ListBuffer(c_customer_sk#3696, c_first_name#3704, c_last_name#3705)
    // Right Table: ListBuffer(c_customer_sk#3632)
    // Output Table: ListBuffer(c_customer_sk#3696, c_first_name#3704, c_last_name#3705)
    int left_nrow = tbl_Filter_TD_8356588_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8143206_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7911421_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8143206_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8356588_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3632_k = tbl_Filter_TD_8143206_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor keyA{_c_customer_sk3632_k};
            int32_t _c_customer_sk3632 = tbl_Filter_TD_8143206_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7911421_payload_rightMajor payloadA{_c_customer_sk3632};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3696_k = tbl_Filter_TD_8356588_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7911421_key_rightMajor{_c_customer_sk3696_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk3696 = tbl_Filter_TD_8356588_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704 = tbl_Filter_TD_8356588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705 = tbl_Filter_TD_8356588_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                tbl_JOIN_LEFTSEMI_TD_7911421_output.setInt32(r, 0, _c_customer_sk3696);
                tbl_JOIN_LEFTSEMI_TD_7911421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3704);
                tbl_JOIN_LEFTSEMI_TD_7911421_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3705);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7911421_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7911421_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7911421_output.getNumRow() << std::endl;
}


struct SW_JOIN_LEFTSEMI_TD_7223440_key_leftMajor {
    int32_t _c_customer_sk3650;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7223440_key_leftMajor& other) const {
        return ((_c_customer_sk3650 == other._c_customer_sk3650));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7223440_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7223440_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3650));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7223440_payload_leftMajor {
    int32_t _c_customer_sk3650;
    std::string _c_first_name3658;
    std::string _c_last_name3659;
};
struct SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor {
    int32_t _c_customer_sk3632;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor& other) const {
        return ((_c_customer_sk3632 == other._c_customer_sk3632));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3632));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_7223440_payload_rightMajor {
    int32_t _c_customer_sk3632;
};
void SW_JOIN_LEFTSEMI_TD_7223440(Table &tbl_Filter_TD_8803226_output, Table &tbl_Filter_TD_8729823_output, Table &tbl_JOIN_LEFTSEMI_TD_7223440_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((c_customer_sk#3650 = c_customer_sk#3632))
    // Left Table: ListBuffer(c_customer_sk#3650, c_first_name#3658, c_last_name#3659)
    // Right Table: ListBuffer(c_customer_sk#3632)
    // Output Table: ListBuffer(c_customer_sk#3650, c_first_name#3658, c_last_name#3659)
    int left_nrow = tbl_Filter_TD_8803226_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8729823_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor, SW_JOIN_LEFTSEMI_TD_7223440_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8729823_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8803226_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3632_k = tbl_Filter_TD_8729823_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor keyA{_c_customer_sk3632_k};
            int32_t _c_customer_sk3632 = tbl_Filter_TD_8729823_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_7223440_payload_rightMajor payloadA{_c_customer_sk3632};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3650_k = tbl_Filter_TD_8803226_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_7223440_key_rightMajor{_c_customer_sk3650_k});
            if (it != ht1.end()) {
                int32_t _c_customer_sk3650 = tbl_Filter_TD_8803226_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658 = tbl_Filter_TD_8803226_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659 = tbl_Filter_TD_8803226_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                tbl_JOIN_LEFTSEMI_TD_7223440_output.setInt32(r, 0, _c_customer_sk3650);
                tbl_JOIN_LEFTSEMI_TD_7223440_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3658);
                tbl_JOIN_LEFTSEMI_TD_7223440_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_last_name3659);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_7223440_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_7223440_output #Row: " << tbl_JOIN_LEFTSEMI_TD_7223440_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6646894(Table &tbl_SerializeFromObject_TD_7192624_input, Table &tbl_Filter_TD_6646894_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3720) AND isnotnull(d_moy#3722)) AND ((d_year#3720 = 2000) AND (d_moy#3722 = 2))) AND isnotnull(d_date_sk#3714)))
    // Input: ListBuffer(d_date_sk#3714, d_year#3720, d_moy#3722)
    // Output: ListBuffer(d_date_sk#3714)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7192624_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3720 = tbl_SerializeFromObject_TD_7192624_input.getInt32(i, 1);
        int32_t _d_moy3722 = tbl_SerializeFromObject_TD_7192624_input.getInt32(i, 2);
        int32_t _d_date_sk3714 = tbl_SerializeFromObject_TD_7192624_input.getInt32(i, 0);
        if ((((_d_year3720!= 0) && (_d_moy3722!= 0)) && ((_d_year3720 == 2000) && (_d_moy3722 == 2))) && (_d_date_sk3714!= 0)) {
            int32_t _d_date_sk3714_t = tbl_SerializeFromObject_TD_7192624_input.getInt32(i, 0);
            tbl_Filter_TD_6646894_output.setInt32(r, 0, _d_date_sk3714_t);
            r++;
        }
    }
    tbl_Filter_TD_6646894_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6646894_output #Row: " << tbl_Filter_TD_6646894_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6617171_key_leftMajor {
    int32_t _ws_bill_customer_sk733;
    bool operator==(const SW_JOIN_INNER_TD_6617171_key_leftMajor& other) const {
        return ((_ws_bill_customer_sk733 == other._ws_bill_customer_sk733));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6617171_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6617171_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_bill_customer_sk733));
    }
};
}
struct SW_JOIN_INNER_TD_6617171_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_bill_customer_sk733;
    int32_t _ws_quantity747;
    int64_t _ws_list_price749;
};
struct SW_JOIN_INNER_TD_6617171_key_rightMajor {
    int32_t _c_customer_sk3696;
    bool operator==(const SW_JOIN_INNER_TD_6617171_key_rightMajor& other) const {
        return ((_c_customer_sk3696 == other._c_customer_sk3696));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6617171_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6617171_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3696));
    }
};
}
struct SW_JOIN_INNER_TD_6617171_payload_rightMajor {
    int32_t _c_customer_sk3696;
    std::string _c_first_name3704;
    std::string _c_last_name3705;
};
void SW_JOIN_INNER_TD_6617171(Table &tbl_JOIN_LEFTSEMI_TD_7974833_output, Table &tbl_JOIN_LEFTSEMI_TD_7911421_output, Table &tbl_JOIN_INNER_TD_6617171_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_bill_customer_sk#733 = c_customer_sk#3696))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_bill_customer_sk#733, ws_quantity#747, ws_list_price#749)
    // Right Table: ListBuffer(c_customer_sk#3696, c_first_name#3704, c_last_name#3705)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_list_price#749, c_first_name#3704, c_last_name#3705)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_7974833_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7911421_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6617171_key_leftMajor, SW_JOIN_INNER_TD_6617171_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6617171_key_leftMajor keyA{_ws_bill_customer_sk733_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 0);
            int32_t _ws_bill_customer_sk733 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 1);
            int32_t _ws_quantity747 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 2);
            int64_t _ws_list_price749 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_6617171_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_bill_customer_sk733, _ws_quantity747, _ws_list_price749};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7911421_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3696_k = tbl_JOIN_LEFTSEMI_TD_7911421_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6617171_key_leftMajor{_c_customer_sk3696_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_bill_customer_sk733 = (it->second)._ws_bill_customer_sk733;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_list_price749 = (it->second)._ws_list_price749;
                int32_t _c_customer_sk3696 = tbl_JOIN_LEFTSEMI_TD_7911421_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n = tbl_JOIN_LEFTSEMI_TD_7911421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3704 = std::string(_c_first_name3704_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n = tbl_JOIN_LEFTSEMI_TD_7911421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3705 = std::string(_c_last_name3705_n.data());
                tbl_JOIN_INNER_TD_6617171_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6617171_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6617171_output.setInt64(r, 2, _ws_list_price749);
                tbl_JOIN_INNER_TD_6617171_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name3704_n);
                tbl_JOIN_INNER_TD_6617171_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name3705_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6617171_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6617171_key_rightMajor, SW_JOIN_INNER_TD_6617171_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7911421_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3696_k = tbl_JOIN_LEFTSEMI_TD_7911421_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6617171_key_rightMajor keyA{_c_customer_sk3696_k};
            int32_t _c_customer_sk3696 = tbl_JOIN_LEFTSEMI_TD_7911421_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n = tbl_JOIN_LEFTSEMI_TD_7911421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3704 = std::string(_c_first_name3704_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n = tbl_JOIN_LEFTSEMI_TD_7911421_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3705 = std::string(_c_last_name3705_n.data());
            SW_JOIN_INNER_TD_6617171_payload_rightMajor payloadA{_c_customer_sk3696, _c_first_name3704, _c_last_name3705};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_bill_customer_sk733_k = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6617171_key_rightMajor{_ws_bill_customer_sk733_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3696 = (it->second)._c_customer_sk3696;
                std::string _c_first_name3704 = (it->second)._c_first_name3704;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n{};
                memcpy(_c_first_name3704_n.data(), (_c_first_name3704).data(), (_c_first_name3704).length());
                std::string _c_last_name3705 = (it->second)._c_last_name3705;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n{};
                memcpy(_c_last_name3705_n.data(), (_c_last_name3705).data(), (_c_last_name3705).length());
                int32_t _ws_sold_date_sk729 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 0);
                int32_t _ws_bill_customer_sk733 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 1);
                int32_t _ws_quantity747 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt32(i, 2);
                int64_t _ws_list_price749 = tbl_JOIN_LEFTSEMI_TD_7974833_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_6617171_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name3704_n);
                tbl_JOIN_INNER_TD_6617171_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name3705_n);
                tbl_JOIN_INNER_TD_6617171_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_6617171_output.setInt32(r, 1, _ws_quantity747);
                tbl_JOIN_INNER_TD_6617171_output.setInt64(r, 2, _ws_list_price749);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6617171_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6617171_output #Row: " << tbl_JOIN_INNER_TD_6617171_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6354216(Table &tbl_SerializeFromObject_TD_7231476_input, Table &tbl_Filter_TD_6354216_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3674) AND isnotnull(d_moy#3676)) AND ((d_year#3674 = 2000) AND (d_moy#3676 = 2))) AND isnotnull(d_date_sk#3668)))
    // Input: ListBuffer(d_date_sk#3668, d_year#3674, d_moy#3676)
    // Output: ListBuffer(d_date_sk#3668)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7231476_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3674 = tbl_SerializeFromObject_TD_7231476_input.getInt32(i, 1);
        int32_t _d_moy3676 = tbl_SerializeFromObject_TD_7231476_input.getInt32(i, 2);
        int32_t _d_date_sk3668 = tbl_SerializeFromObject_TD_7231476_input.getInt32(i, 0);
        if ((((_d_year3674!= 0) && (_d_moy3676!= 0)) && ((_d_year3674 == 2000) && (_d_moy3676 == 2))) && (_d_date_sk3668!= 0)) {
            int32_t _d_date_sk3668_t = tbl_SerializeFromObject_TD_7231476_input.getInt32(i, 0);
            tbl_Filter_TD_6354216_output.setInt32(r, 0, _d_date_sk3668_t);
            r++;
        }
    }
    tbl_Filter_TD_6354216_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6354216_output #Row: " << tbl_Filter_TD_6354216_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6478730_key_leftMajor {
    int32_t _cs_bill_customer_sk1107;
    bool operator==(const SW_JOIN_INNER_TD_6478730_key_leftMajor& other) const {
        return ((_cs_bill_customer_sk1107 == other._cs_bill_customer_sk1107));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6478730_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6478730_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_bill_customer_sk1107));
    }
};
}
struct SW_JOIN_INNER_TD_6478730_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_bill_customer_sk1107;
    int32_t _cs_quantity1122;
    int64_t _cs_list_price1124;
};
struct SW_JOIN_INNER_TD_6478730_key_rightMajor {
    int32_t _c_customer_sk3650;
    bool operator==(const SW_JOIN_INNER_TD_6478730_key_rightMajor& other) const {
        return ((_c_customer_sk3650 == other._c_customer_sk3650));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6478730_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6478730_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_customer_sk3650));
    }
};
}
struct SW_JOIN_INNER_TD_6478730_payload_rightMajor {
    int32_t _c_customer_sk3650;
    std::string _c_first_name3658;
    std::string _c_last_name3659;
};
void SW_JOIN_INNER_TD_6478730(Table &tbl_JOIN_LEFTSEMI_TD_7744073_output, Table &tbl_JOIN_LEFTSEMI_TD_7223440_output, Table &tbl_JOIN_INNER_TD_6478730_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_bill_customer_sk#1107 = c_customer_sk#3650))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_bill_customer_sk#1107, cs_quantity#1122, cs_list_price#1124)
    // Right Table: ListBuffer(c_customer_sk#3650, c_first_name#3658, c_last_name#3659)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_quantity#1122, cs_list_price#1124, c_first_name#3658, c_last_name#3659)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_7744073_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_7223440_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6478730_key_leftMajor, SW_JOIN_INNER_TD_6478730_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6478730_key_leftMajor keyA{_cs_bill_customer_sk1107_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 0);
            int32_t _cs_bill_customer_sk1107 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 1);
            int32_t _cs_quantity1122 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 2);
            int64_t _cs_list_price1124 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt64(i, 3);
            SW_JOIN_INNER_TD_6478730_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_bill_customer_sk1107, _cs_quantity1122, _cs_list_price1124};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7223440_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_customer_sk3650_k = tbl_JOIN_LEFTSEMI_TD_7223440_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6478730_key_leftMajor{_c_customer_sk3650_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_bill_customer_sk1107 = (it->second)._cs_bill_customer_sk1107;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int64_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                int32_t _c_customer_sk3650 = tbl_JOIN_LEFTSEMI_TD_7223440_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_JOIN_LEFTSEMI_TD_7223440_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _c_first_name3658 = std::string(_c_first_name3658_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_JOIN_LEFTSEMI_TD_7223440_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _c_last_name3659 = std::string(_c_last_name3659_n.data());
                tbl_JOIN_INNER_TD_6478730_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_6478730_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6478730_output.setInt64(r, 2, _cs_list_price1124);
                tbl_JOIN_INNER_TD_6478730_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name3658_n);
                tbl_JOIN_INNER_TD_6478730_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name3659_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6478730_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6478730_key_rightMajor, SW_JOIN_INNER_TD_6478730_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_7223440_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_customer_sk3650_k = tbl_JOIN_LEFTSEMI_TD_7223440_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6478730_key_rightMajor keyA{_c_customer_sk3650_k};
            int32_t _c_customer_sk3650 = tbl_JOIN_LEFTSEMI_TD_7223440_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_JOIN_LEFTSEMI_TD_7223440_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _c_first_name3658 = std::string(_c_first_name3658_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_JOIN_LEFTSEMI_TD_7223440_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _c_last_name3659 = std::string(_c_last_name3659_n.data());
            SW_JOIN_INNER_TD_6478730_payload_rightMajor payloadA{_c_customer_sk3650, _c_first_name3658, _c_last_name3659};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_bill_customer_sk1107_k = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6478730_key_rightMajor{_cs_bill_customer_sk1107_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_customer_sk3650 = (it->second)._c_customer_sk3650;
                std::string _c_first_name3658 = (it->second)._c_first_name3658;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n{};
                memcpy(_c_first_name3658_n.data(), (_c_first_name3658).data(), (_c_first_name3658).length());
                std::string _c_last_name3659 = (it->second)._c_last_name3659;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n{};
                memcpy(_c_last_name3659_n.data(), (_c_last_name3659).data(), (_c_last_name3659).length());
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 0);
                int32_t _cs_bill_customer_sk1107 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 1);
                int32_t _cs_quantity1122 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt32(i, 2);
                int64_t _cs_list_price1124 = tbl_JOIN_LEFTSEMI_TD_7744073_output.getInt64(i, 3);
                tbl_JOIN_INNER_TD_6478730_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_first_name3658_n);
                tbl_JOIN_INNER_TD_6478730_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _c_last_name3659_n);
                tbl_JOIN_INNER_TD_6478730_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_6478730_output.setInt32(r, 1, _cs_quantity1122);
                tbl_JOIN_INNER_TD_6478730_output.setInt64(r, 2, _cs_list_price1124);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6478730_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6478730_output #Row: " << tbl_JOIN_INNER_TD_6478730_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5209561_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_5209561_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5209561_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5209561_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_5209561_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_quantity747;
    int64_t _ws_list_price749;
    std::string _c_first_name3704;
    std::string _c_last_name3705;
};
struct SW_JOIN_INNER_TD_5209561_key_rightMajor {
    int32_t _d_date_sk3714;
    bool operator==(const SW_JOIN_INNER_TD_5209561_key_rightMajor& other) const {
        return ((_d_date_sk3714 == other._d_date_sk3714));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5209561_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5209561_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3714));
    }
};
}
struct SW_JOIN_INNER_TD_5209561_payload_rightMajor {
    int32_t _d_date_sk3714;
};
void SW_JOIN_INNER_TD_5209561(Table &tbl_JOIN_INNER_TD_6617171_output, Table &tbl_Filter_TD_6646894_output, Table &tbl_JOIN_INNER_TD_5209561_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3714))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_quantity#747, ws_list_price#749, c_first_name#3704, c_last_name#3705)
    // Right Table: ListBuffer(d_date_sk#3714)
    // Output Table: ListBuffer(ws_quantity#747, ws_list_price#749, c_first_name#3704, c_last_name#3705)
    int left_nrow = tbl_JOIN_INNER_TD_6617171_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6646894_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5209561_key_leftMajor, SW_JOIN_INNER_TD_5209561_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6617171_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_6617171_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5209561_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_6617171_output.getInt32(i, 0);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6617171_output.getInt32(i, 1);
            int64_t _ws_list_price749 = tbl_JOIN_INNER_TD_6617171_output.getInt64(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n = tbl_JOIN_INNER_TD_6617171_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_first_name3704 = std::string(_c_first_name3704_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n = tbl_JOIN_INNER_TD_6617171_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_last_name3705 = std::string(_c_last_name3705_n.data());
            SW_JOIN_INNER_TD_5209561_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_quantity747, _ws_list_price749, _c_first_name3704, _c_last_name3705};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6646894_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3714_k = tbl_Filter_TD_6646894_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5209561_key_leftMajor{_d_date_sk3714_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int64_t _ws_list_price749 = (it->second)._ws_list_price749;
                std::string _c_first_name3704 = (it->second)._c_first_name3704;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n{};
                memcpy(_c_first_name3704_n.data(), (_c_first_name3704).data(), (_c_first_name3704).length());
                std::string _c_last_name3705 = (it->second)._c_last_name3705;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n{};
                memcpy(_c_last_name3705_n.data(), (_c_last_name3705).data(), (_c_last_name3705).length());
                int32_t _d_date_sk3714 = tbl_Filter_TD_6646894_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5209561_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_5209561_output.setInt64(r, 1, _ws_list_price749);
                tbl_JOIN_INNER_TD_5209561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name3704_n);
                tbl_JOIN_INNER_TD_5209561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name3705_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5209561_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5209561_key_rightMajor, SW_JOIN_INNER_TD_5209561_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6646894_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3714_k = tbl_Filter_TD_6646894_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5209561_key_rightMajor keyA{_d_date_sk3714_k};
            int32_t _d_date_sk3714 = tbl_Filter_TD_6646894_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5209561_payload_rightMajor payloadA{_d_date_sk3714};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6617171_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_6617171_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5209561_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3714 = (it->second)._d_date_sk3714;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_6617171_output.getInt32(i, 0);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_6617171_output.getInt32(i, 1);
                int64_t _ws_list_price749 = tbl_JOIN_INNER_TD_6617171_output.getInt64(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n = tbl_JOIN_INNER_TD_6617171_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_first_name3704 = std::string(_c_first_name3704_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n = tbl_JOIN_INNER_TD_6617171_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_last_name3705 = std::string(_c_last_name3705_n.data());
                tbl_JOIN_INNER_TD_5209561_output.setInt32(r, 0, _ws_quantity747);
                tbl_JOIN_INNER_TD_5209561_output.setInt64(r, 1, _ws_list_price749);
                tbl_JOIN_INNER_TD_5209561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name3704_n);
                tbl_JOIN_INNER_TD_5209561_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name3705_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5209561_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5209561_output #Row: " << tbl_JOIN_INNER_TD_5209561_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5575645_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_5575645_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5575645_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5575645_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_5575645_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_quantity1122;
    int64_t _cs_list_price1124;
    std::string _c_first_name3658;
    std::string _c_last_name3659;
};
struct SW_JOIN_INNER_TD_5575645_key_rightMajor {
    int32_t _d_date_sk3668;
    bool operator==(const SW_JOIN_INNER_TD_5575645_key_rightMajor& other) const {
        return ((_d_date_sk3668 == other._d_date_sk3668));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5575645_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5575645_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3668));
    }
};
}
struct SW_JOIN_INNER_TD_5575645_payload_rightMajor {
    int32_t _d_date_sk3668;
};
void SW_JOIN_INNER_TD_5575645(Table &tbl_JOIN_INNER_TD_6478730_output, Table &tbl_Filter_TD_6354216_output, Table &tbl_JOIN_INNER_TD_5575645_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3668))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_quantity#1122, cs_list_price#1124, c_first_name#3658, c_last_name#3659)
    // Right Table: ListBuffer(d_date_sk#3668)
    // Output Table: ListBuffer(cs_quantity#1122, cs_list_price#1124, c_first_name#3658, c_last_name#3659)
    int left_nrow = tbl_JOIN_INNER_TD_6478730_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6354216_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5575645_key_leftMajor, SW_JOIN_INNER_TD_5575645_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6478730_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_6478730_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5575645_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_6478730_output.getInt32(i, 0);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6478730_output.getInt32(i, 1);
            int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6478730_output.getInt64(i, 2);
            std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_JOIN_INNER_TD_6478730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
            std::string _c_first_name3658 = std::string(_c_first_name3658_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_JOIN_INNER_TD_6478730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
            std::string _c_last_name3659 = std::string(_c_last_name3659_n.data());
            SW_JOIN_INNER_TD_5575645_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_quantity1122, _cs_list_price1124, _c_first_name3658, _c_last_name3659};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6354216_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3668_k = tbl_Filter_TD_6354216_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5575645_key_leftMajor{_d_date_sk3668_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int64_t _cs_list_price1124 = (it->second)._cs_list_price1124;
                std::string _c_first_name3658 = (it->second)._c_first_name3658;
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n{};
                memcpy(_c_first_name3658_n.data(), (_c_first_name3658).data(), (_c_first_name3658).length());
                std::string _c_last_name3659 = (it->second)._c_last_name3659;
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n{};
                memcpy(_c_last_name3659_n.data(), (_c_last_name3659).data(), (_c_last_name3659).length());
                int32_t _d_date_sk3668 = tbl_Filter_TD_6354216_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5575645_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5575645_output.setInt64(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5575645_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name3658_n);
                tbl_JOIN_INNER_TD_5575645_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name3659_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5575645_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5575645_key_rightMajor, SW_JOIN_INNER_TD_5575645_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6354216_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3668_k = tbl_Filter_TD_6354216_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5575645_key_rightMajor keyA{_d_date_sk3668_k};
            int32_t _d_date_sk3668 = tbl_Filter_TD_6354216_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5575645_payload_rightMajor payloadA{_d_date_sk3668};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6478730_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_6478730_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5575645_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3668 = (it->second)._d_date_sk3668;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_6478730_output.getInt32(i, 0);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_6478730_output.getInt32(i, 1);
                int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_6478730_output.getInt64(i, 2);
                std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_JOIN_INNER_TD_6478730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
                std::string _c_first_name3658 = std::string(_c_first_name3658_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_JOIN_INNER_TD_6478730_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
                std::string _c_last_name3659 = std::string(_c_last_name3659_n.data());
                tbl_JOIN_INNER_TD_5575645_output.setInt32(r, 0, _cs_quantity1122);
                tbl_JOIN_INNER_TD_5575645_output.setInt64(r, 1, _cs_list_price1124);
                tbl_JOIN_INNER_TD_5575645_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _c_first_name3658_n);
                tbl_JOIN_INNER_TD_5575645_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _c_last_name3659_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5575645_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5575645_output #Row: " << tbl_JOIN_INNER_TD_5575645_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4895784_key {
    std::string _c_last_name3705;
    std::string _c_first_name3704;
    bool operator==(const SW_Aggregate_TD_4895784_key& other) const { return (_c_last_name3705 == other._c_last_name3705) && (_c_first_name3704 == other._c_first_name3704); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4895784_key> {
    std::size_t operator() (const SW_Aggregate_TD_4895784_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3705)) + (hash<string>()(k._c_first_name3704));
    }
};
}
struct SW_Aggregate_TD_4895784_payload {
    int64_t _sales3547_sum_0;
};
void SW_Aggregate_TD_4895784(Table &tbl_JOIN_INNER_TD_5209561_output, Table &tbl_Aggregate_TD_4895784_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3705, c_first_name#3704, sum(CheckOverflow((promote_precision(cast(cast(ws_quantity#747 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ws_list_price#749 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#3547)
    // Input: ListBuffer(ws_quantity#747, ws_list_price#749, c_first_name#3704, c_last_name#3705)
    // Output: ListBuffer(c_last_name#3705, c_first_name#3704, sales#3547)
    std::unordered_map<SW_Aggregate_TD_4895784_key, SW_Aggregate_TD_4895784_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5209561_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_5209561_output.getInt32(i, 0);
        int64_t _ws_list_price749 = tbl_JOIN_INNER_TD_5209561_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704 = tbl_JOIN_INNER_TD_5209561_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705 = tbl_JOIN_INNER_TD_5209561_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_4895784_key k{std::string(_c_last_name3705.data()), std::string(_c_first_name3704.data())};
        int64_t _sales3547_sum_0 = (_ws_quantity747 * _ws_list_price749);
        SW_Aggregate_TD_4895784_payload p{_sales3547_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales3547_sum_0 + _sales3547_sum_0;
            p._sales3547_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705{};
        memcpy(_c_last_name3705.data(), ((it.first)._c_last_name3705).data(), ((it.first)._c_last_name3705).length());
        tbl_Aggregate_TD_4895784_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3705);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704{};
        memcpy(_c_first_name3704.data(), ((it.first)._c_first_name3704).data(), ((it.first)._c_first_name3704).length());
        tbl_Aggregate_TD_4895784_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3704);
        int64_t _sales3547 = (it.second)._sales3547_sum_0;
        tbl_Aggregate_TD_4895784_output.setInt64(r, 2, _sales3547);
        ++r;
    }
    tbl_Aggregate_TD_4895784_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4895784_output #Row: " << tbl_Aggregate_TD_4895784_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_4543734_key {
    std::string _c_last_name3659;
    std::string _c_first_name3658;
    bool operator==(const SW_Aggregate_TD_4543734_key& other) const { return (_c_last_name3659 == other._c_last_name3659) && (_c_first_name3658 == other._c_first_name3658); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_4543734_key> {
    std::size_t operator() (const SW_Aggregate_TD_4543734_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._c_last_name3659)) + (hash<string>()(k._c_first_name3658));
    }
};
}
struct SW_Aggregate_TD_4543734_payload {
    int64_t _sales3544_sum_0;
};
void SW_Aggregate_TD_4543734(Table &tbl_JOIN_INNER_TD_5575645_output, Table &tbl_Aggregate_TD_4543734_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(c_last_name#3659, c_first_name#3658, sum(CheckOverflow((promote_precision(cast(cast(cs_quantity#1122 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(cs_list_price#1124 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#3544)
    // Input: ListBuffer(cs_quantity#1122, cs_list_price#1124, c_first_name#3658, c_last_name#3659)
    // Output: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    std::unordered_map<SW_Aggregate_TD_4543734_key, SW_Aggregate_TD_4543734_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_5575645_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_5575645_output.getInt32(i, 0);
        int64_t _cs_list_price1124 = tbl_JOIN_INNER_TD_5575645_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658 = tbl_JOIN_INNER_TD_5575645_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659 = tbl_JOIN_INNER_TD_5575645_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        SW_Aggregate_TD_4543734_key k{std::string(_c_last_name3659.data()), std::string(_c_first_name3658.data())};
        int64_t _sales3544_sum_0 = (_cs_quantity1122 * _cs_list_price1124);
        SW_Aggregate_TD_4543734_payload p{_sales3544_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales3544_sum_0 + _sales3544_sum_0;
            p._sales3544_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659{};
        memcpy(_c_last_name3659.data(), ((it.first)._c_last_name3659).data(), ((it.first)._c_last_name3659).length());
        tbl_Aggregate_TD_4543734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3659);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658{};
        memcpy(_c_first_name3658.data(), ((it.first)._c_first_name3658).data(), ((it.first)._c_first_name3658).length());
        tbl_Aggregate_TD_4543734_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3658);
        int64_t _sales3544 = (it.second)._sales3544_sum_0;
        tbl_Aggregate_TD_4543734_output.setInt64(r, 2, _sales3544);
        ++r;
    }
    tbl_Aggregate_TD_4543734_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4543734_output #Row: " << tbl_Aggregate_TD_4543734_output.getNumRow() << std::endl;
}

void SW_Union_TD_3306647(Table &tbl_Aggregate_TD_4543734_output, Table &tbl_Aggregate_TD_4895784_output, Table &tbl_Union_TD_3306647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    int r = 0;
    int row0 = tbl_Aggregate_TD_4543734_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_Union_TD_3306647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_3306647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3659_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_Union_TD_3306647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_Union_TD_3306647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3658_n);
        tbl_Union_TD_3306647_output.setInt32(r, 2, tbl_Aggregate_TD_4543734_output.getInt64(i, 2));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_4895784_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3705_n = tbl_Union_TD_3306647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_Union_TD_3306647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3705_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3704_n = tbl_Union_TD_3306647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_Union_TD_3306647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3704_n);
        tbl_Union_TD_3306647_output.setInt32(r, 2, tbl_Aggregate_TD_4895784_output.getInt64(i, 2));
        ++r;
    }
    tbl_Union_TD_3306647_output.setNumRow(r);
    std::cout << "tbl_Union_TD_3306647_output #Row: " << tbl_Union_TD_3306647_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2805766(Table &tbl_Union_TD_3306647_output, Table &tbl_Sort_TD_2805766_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(c_last_name#3659 ASC NULLS FIRST, c_first_name#3658 ASC NULLS FIRST, sales#3544 ASC NULLS FIRST)
    // Input: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    // Output: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    struct SW_Sort_TD_2805766Row {
        std::string _c_last_name3659;
        std::string _c_first_name3658;
        int64_t _sales3544;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2805766Row& a, const SW_Sort_TD_2805766Row& b) const { return 
 (a._c_last_name3659 < b._c_last_name3659) || 
 ((a._c_last_name3659 == b._c_last_name3659) && (a._c_first_name3658 < b._c_first_name3658)) || 
 ((a._c_last_name3659 == b._c_last_name3659) && (a._c_first_name3658 == b._c_first_name3658) && (a._sales3544 < b._sales3544)); 
}
    }SW_Sort_TD_2805766_order; 

    int nrow1 = tbl_Union_TD_3306647_output.getNumRow();
    std::vector<SW_Sort_TD_2805766Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659 = tbl_Union_TD_3306647_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658 = tbl_Union_TD_3306647_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int64_t _sales3544 = tbl_Union_TD_3306647_output.getInt64(i, 2);
        SW_Sort_TD_2805766Row t = {std::string(_c_last_name3659.data()),std::string(_c_first_name3658.data()),_sales3544};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2805766_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659{};
        memcpy(_c_last_name3659.data(), (it._c_last_name3659).data(), (it._c_last_name3659).length());
        tbl_Sort_TD_2805766_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _c_last_name3659);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658{};
        memcpy(_c_first_name3658.data(), (it._c_first_name3658).data(), (it._c_first_name3658).length());
        tbl_Sort_TD_2805766_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _c_first_name3658);
        tbl_Sort_TD_2805766_output.setInt64(r, 2, it._sales3544);
        ++r;
    }
    tbl_Sort_TD_2805766_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2805766_output #Row: " << tbl_Sort_TD_2805766_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1726255(Table &tbl_Sort_TD_2805766_output, Table &tbl_LocalLimit_TD_1726255_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    // Output: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_Sort_TD_2805766_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1726255_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3659_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_Sort_TD_2805766_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1726255_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3658_n);
        tbl_LocalLimit_TD_1726255_output.setInt64(r, 2, tbl_Sort_TD_2805766_output.getInt64(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1726255_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1726255_output #Row: " << tbl_LocalLimit_TD_1726255_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0597065(Table &tbl_LocalLimit_TD_1726255_output, Table &tbl_GlobalLimit_TD_0597065_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    // Output: ListBuffer(c_last_name#3659, c_first_name#3658, sales#3544)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_last_name3659_n = tbl_LocalLimit_TD_1726255_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0597065_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _c_last_name3659_n);
        std::array<char, TPCDS_READ_MAX + 1> _c_first_name3658_n = tbl_LocalLimit_TD_1726255_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0597065_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _c_first_name3658_n);
        tbl_GlobalLimit_TD_0597065_output.setInt64(r, 2, tbl_LocalLimit_TD_1726255_output.getInt64(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0597065_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0597065_output #Row: " << tbl_GlobalLimit_TD_0597065_output.getNumRow() << std::endl;
}

