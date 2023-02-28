#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_9806442(Table &tbl_SerializeFromObject_TD_10538747_input, Table &tbl_Filter_TD_9806442_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10538747_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10538747_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10538747_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10538747_input.getInt32(i, 2);
        if ((_ss_item_sk1208!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10538747_input.getInt32(i, 0);
            tbl_Filter_TD_9806442_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10538747_input.getInt32(i, 1);
            tbl_Filter_TD_9806442_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10538747_input.getInt32(i, 2);
            tbl_Filter_TD_9806442_output.setInt32(r, 2, _ss_store_sk1213_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_10538747_input.getInt64(i, 3);
            tbl_Filter_TD_9806442_output.setInt64(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_9806442_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9806442_output #Row: " << tbl_Filter_TD_9806442_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9492965(Table &tbl_SerializeFromObject_TD_10633948_input, Table &tbl_Filter_TD_9492965_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((i_category#240 IN (Books,Children,Electronics) AND i_class#238 IN (personal,portable,reference,self-help)) AND i_brand#236 IN (scholaramalgamalg #14,scholaramalgamalg #7,exportiunivamalg #9,scholaramalgamalg #9)) OR ((i_category#240 IN (Women,Music,Men) AND i_class#238 IN (accessories,classical,fragrances,pants)) AND i_brand#236 IN (amalgimporto #1,edu packscholar #1,exportiimporto #1,importoamalg #1))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241, i_category#240, i_class#238, i_brand#236)
    // Output: ListBuffer(i_item_sk#228, i_manufact_id#241)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10633948_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_10633948_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_10633948_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_10633948_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10633948_input.getInt32(i, 0);
        auto reuse_col_str_365 = std::string(_i_category240.data());
        auto reuse_col_str_754 = std::string(_i_class238.data());
        auto reuse_col_str_286 = std::string(_i_brand236.data());
        auto reuse_col_str_400 = std::string(_i_category240.data());
        auto reuse_col_str_930 = std::string(_i_class238.data());
        auto reuse_col_str_144 = std::string(_i_brand236.data());
        if ((((((reuse_col_str_365 == "Books") || (reuse_col_str_365 == "Children") || (reuse_col_str_365 == "Electronics") || (0)) && ((reuse_col_str_754 == "personal") || (reuse_col_str_754 == "portable") || (reuse_col_str_754 == "reference") || (reuse_col_str_754 == "self-help") || (0))) && ((reuse_col_str_286 == "scholaramalgamalg #14") || (reuse_col_str_286 == "scholaramalgamalg #7") || (reuse_col_str_286 == "exportiunivamalg #9") || (reuse_col_str_286 == "scholaramalgamalg #9") || (0))) || ((((reuse_col_str_400 == "Women") || (reuse_col_str_400 == "Music") || (reuse_col_str_400 == "Men") || (0)) && ((reuse_col_str_930 == "accessories") || (reuse_col_str_930 == "classical") || (reuse_col_str_930 == "fragrances") || (reuse_col_str_930 == "pants") || (0))) && ((reuse_col_str_144 == "amalgimporto #1") || (reuse_col_str_144 == "edu packscholar #1") || (reuse_col_str_144 == "exportiimporto #1") || (reuse_col_str_144 == "importoamalg #1") || (0)))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10633948_input.getInt32(i, 0);
            tbl_Filter_TD_9492965_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_manufact_id241_t = tbl_SerializeFromObject_TD_10633948_input.getInt32(i, 1);
            tbl_Filter_TD_9492965_output.setInt32(r, 1, _i_manufact_id241_t);
            r++;
        }
    }
    tbl_Filter_TD_9492965_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9492965_output #Row: " << tbl_Filter_TD_9492965_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8795786(Table &tbl_SerializeFromObject_TD_920261_input, Table &tbl_Filter_TD_8795786_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_month_seq#123 INSET 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211 AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_qoy#130, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_qoy#130)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_920261_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_920261_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_920261_input.getInt32(i, 0);
        std::vector<int32_t>vec_855 = {
        1210,1208,1209,1204,1201,1203,1207,1200,1211,1206,1202,1205
        };
        bool elementExists = std::find(vec_855.begin(), vec_855.end(),_d_month_seq123) != vec_855.end();
        if (((elementExists) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_920261_input.getInt32(i, 0);
            tbl_Filter_TD_8795786_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_qoy130_t = tbl_SerializeFromObject_TD_920261_input.getInt32(i, 1);
            tbl_Filter_TD_8795786_output.setInt32(r, 1, _d_qoy130_t);
            r++;
        }
    }
    tbl_Filter_TD_8795786_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8795786_output #Row: " << tbl_Filter_TD_8795786_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7453153(Table &tbl_SerializeFromObject_TD_8850360_input, Table &tbl_Filter_TD_7453153_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8850360_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_8850360_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_8850360_input.getInt32(i, 0);
            tbl_Filter_TD_7453153_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_7453153_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7453153_output #Row: " << tbl_Filter_TD_7453153_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_5443923_consolidate(Table &tbl_Aggregate_TD_5443923_output_preprocess, Table &tbl_Aggregate_TD_5443923_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_5443923_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_5443923_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_5443923_output.setInt32(r, 0, _i_manufact_id241);
        int64_t _sum_sales3609 = tbl_Aggregate_TD_5443923_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_5443923_output.setInt64(r, 1, _sum_sales3609);
        int64_t __w03614 = tbl_Aggregate_TD_5443923_output_preprocess.combineInt64(r, 9, 1);
        tbl_Aggregate_TD_5443923_output.setInt64(r, 2, __w03614);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_5443923_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_5443923_output #Row: " << tbl_Aggregate_TD_5443923_output.getNumRow() << std::endl;
}

void SW_Window_TD_4186099(Table &tbl_Aggregate_TD_5443923_output, Table &tbl_Window_TD_4186099_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#3614) windowspecdefinition(i_manufact_id#241, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_quarterly_sales#3610)
    // Input: ListBuffer(i_manufact_id#241, sum_sales#3609, _w0#3614)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#3609, _w0#3614, avg_quarterly_sales#3610)
    struct SW_Window_TD_4186099Row {
        int32_t _i_manufact_id241;
        int64_t _sum_sales3609;
        int64_t __w03614;
    }; 

    int nrow = tbl_Aggregate_TD_5443923_output.getNumRow();
    std::vector<SW_Window_TD_4186099Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_5443923_output.getInt32(i, 0);
        tbl_Window_TD_4186099_output.setInt32(r, 0,_i_manufact_id241);
        int64_t _sum_sales3609 = tbl_Aggregate_TD_5443923_output.getInt64(i, 1);
        tbl_Window_TD_4186099_output.setInt64(r, 1,_sum_sales3609);
        int64_t __w03614 = tbl_Aggregate_TD_5443923_output.getInt64(i, 2);
        tbl_Window_TD_4186099_output.setInt64(r, 2,__w03614);
        r++;
        SW_Window_TD_4186099Row t = {_i_manufact_id241,_sum_sales3609,__w03614};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4186099Row& a, const SW_Window_TD_4186099Row& b) const { return 
(a._i_manufact_id241 < b._i_manufact_id241); 
}
    }SW_Window_TD_4186099_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4186099_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    int32_t current_i_manufact_id2410 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_manufact_id2410 != it._i_manufact_id241) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_manufact_id2410 = it._i_manufact_id241;
        }
        sum0 += it.__w03614;
        currentRow0 +=1;
        tbl_Window_TD_4186099_output.setInt64(r, 3, sum0 / currentRow0 );
    }
    tbl_Window_TD_4186099_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4186099_output #Row: " << tbl_Window_TD_4186099_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3647644(Table &tbl_Window_TD_4186099_output, Table &tbl_Filter_TD_3647644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(avg_quarterly_sales#3610) AND ((avg_quarterly_sales#3610 > 0.000000) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#3609 as decimal(22,6))) - promote_precision(cast(avg_quarterly_sales#3610 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_quarterly_sales#3610 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000))))
    // Input: ListBuffer(i_manufact_id#241, sum_sales#3609, _w0#3614, avg_quarterly_sales#3610)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    int r = 0;
    int nrow1 = tbl_Window_TD_4186099_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _avg_quarterly_sales3610 = tbl_Window_TD_4186099_output.getInt64(i, 3);
        int64_t _sum_sales3609 = tbl_Window_TD_4186099_output.getInt64(i, 1);
        if ((_avg_quarterly_sales3610!= 0) && ((_avg_quarterly_sales3610 > 0.000000) && (_sum_sales3609 > 0.1000000000000000))) {
            int32_t _i_manufact_id241_t = tbl_Window_TD_4186099_output.getInt32(i, 0);
            tbl_Filter_TD_3647644_output.setInt32(r, 0, _i_manufact_id241_t);
            int64_t _sum_sales3609_t = tbl_Window_TD_4186099_output.getInt64(i, 1);
            tbl_Filter_TD_3647644_output.setInt64(r, 1, _sum_sales3609_t);
            int64_t _avg_quarterly_sales3610_t = tbl_Window_TD_4186099_output.getInt64(i, 3);
            tbl_Filter_TD_3647644_output.setInt64(r, 2, _avg_quarterly_sales3610_t);
            r++;
        }
    }
    tbl_Filter_TD_3647644_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3647644_output #Row: " << tbl_Filter_TD_3647644_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2425859(Table &tbl_Filter_TD_3647644_output, Table &tbl_Sort_TD_2425859_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(avg_quarterly_sales#3610 ASC NULLS FIRST, sum_sales#3609 ASC NULLS FIRST, i_manufact_id#241 ASC NULLS FIRST)
    // Input: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    struct SW_Sort_TD_2425859Row {
        int32_t _i_manufact_id241;
        int64_t _sum_sales3609;
        int64_t _avg_quarterly_sales3610;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2425859Row& a, const SW_Sort_TD_2425859Row& b) const { return 
 (a._avg_quarterly_sales3610 < b._avg_quarterly_sales3610) || 
 ((a._avg_quarterly_sales3610 == b._avg_quarterly_sales3610) && (a._sum_sales3609 < b._sum_sales3609)) || 
 ((a._avg_quarterly_sales3610 == b._avg_quarterly_sales3610) && (a._sum_sales3609 == b._sum_sales3609) && (a._i_manufact_id241 < b._i_manufact_id241)); 
}
    }SW_Sort_TD_2425859_order; 

    int nrow1 = tbl_Filter_TD_3647644_output.getNumRow();
    std::vector<SW_Sort_TD_2425859Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_Filter_TD_3647644_output.getInt32(i, 0);
        int64_t _sum_sales3609 = tbl_Filter_TD_3647644_output.getInt64(i, 1);
        int64_t _avg_quarterly_sales3610 = tbl_Filter_TD_3647644_output.getInt64(i, 2);
        SW_Sort_TD_2425859Row t = {_i_manufact_id241,_sum_sales3609,_avg_quarterly_sales3610};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2425859_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2425859_output.setInt32(r, 0, it._i_manufact_id241);
        tbl_Sort_TD_2425859_output.setInt64(r, 1, it._sum_sales3609);
        tbl_Sort_TD_2425859_output.setInt64(r, 2, it._avg_quarterly_sales3610);
        ++r;
    }
    tbl_Sort_TD_2425859_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2425859_output #Row: " << tbl_Sort_TD_2425859_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1513490(Table &tbl_Sort_TD_2425859_output, Table &tbl_LocalLimit_TD_1513490_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1513490_output.setInt32(r, 0, tbl_Sort_TD_2425859_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1513490_output.setInt64(r, 1, tbl_Sort_TD_2425859_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1513490_output.setInt64(r, 2, tbl_Sort_TD_2425859_output.getInt64(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1513490_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1513490_output #Row: " << tbl_LocalLimit_TD_1513490_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0585361(Table &tbl_LocalLimit_TD_1513490_output, Table &tbl_GlobalLimit_TD_0585361_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    // Output: ListBuffer(i_manufact_id#241, sum_sales#3609, avg_quarterly_sales#3610)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0585361_output.setInt32(r, 0, tbl_LocalLimit_TD_1513490_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0585361_output.setInt64(r, 1, tbl_LocalLimit_TD_1513490_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0585361_output.setInt64(r, 2, tbl_LocalLimit_TD_1513490_output.getInt64(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0585361_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0585361_output #Row: " << tbl_GlobalLimit_TD_0585361_output.getNumRow() << std::endl;
}

