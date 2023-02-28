#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_9683427(Table &tbl_SerializeFromObject_TD_10349140_input, Table &tbl_Filter_TD_9683427_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND (isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_store_sk#1213, ss_sales_price#1219)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10349140_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10349140_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10349140_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_10349140_input.getInt32(i, 2);
        if ((_ss_item_sk1208!= 0) && ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10349140_input.getInt32(i, 0);
            tbl_Filter_TD_9683427_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10349140_input.getInt32(i, 1);
            tbl_Filter_TD_9683427_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_10349140_input.getInt32(i, 2);
            tbl_Filter_TD_9683427_output.setInt32(r, 2, _ss_store_sk1213_t);
            int64_t _ss_sales_price1219_t = tbl_SerializeFromObject_TD_10349140_input.getInt64(i, 3);
            tbl_Filter_TD_9683427_output.setInt64(r, 3, _ss_sales_price1219_t);
            r++;
        }
    }
    tbl_Filter_TD_9683427_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9683427_output #Row: " << tbl_Filter_TD_9683427_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9435581(Table &tbl_SerializeFromObject_TD_10937322_input, Table &tbl_Filter_TD_9435581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((((i_category#240 IN (Books,Children,Electronics) AND i_class#238 IN (personal,portable,reference,self-help)) AND i_brand#236 IN (scholaramalgamalg #14,scholaramalgamalg #7,exportiunivamalg #9,scholaramalgamalg #9)) OR ((i_category#240 IN (Women,Music,Men) AND i_class#238 IN (accessories,classical,fragrances,pants)) AND i_brand#236 IN (amalgimporto #1,edu packscholar #1,exportiimporto #1,importoamalg #1))) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_manager_id#248, i_category#240, i_class#238, i_brand#236)
    // Output: ListBuffer(i_item_sk#228, i_manager_id#248)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10937322_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_10937322_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_class238 = tbl_SerializeFromObject_TD_10937322_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_SerializeFromObject_TD_10937322_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_10937322_input.getInt32(i, 0);
        auto reuse_col_str_211 = std::string(_i_category240.data());
        auto reuse_col_str_648 = std::string(_i_class238.data());
        auto reuse_col_str_837 = std::string(_i_brand236.data());
        auto reuse_col_str_695 = std::string(_i_category240.data());
        auto reuse_col_str_303 = std::string(_i_class238.data());
        auto reuse_col_str_14 = std::string(_i_brand236.data());
        if ((((((reuse_col_str_211 == "Books") || (reuse_col_str_211 == "Children") || (reuse_col_str_211 == "Electronics") || (0)) && ((reuse_col_str_648 == "personal") || (reuse_col_str_648 == "portable") || (reuse_col_str_648 == "reference") || (reuse_col_str_648 == "self-help") || (0))) && ((reuse_col_str_837 == "scholaramalgamalg #14") || (reuse_col_str_837 == "scholaramalgamalg #7") || (reuse_col_str_837 == "exportiunivamalg #9") || (reuse_col_str_837 == "scholaramalgamalg #9") || (0))) || ((((reuse_col_str_695 == "Women") || (reuse_col_str_695 == "Music") || (reuse_col_str_695 == "Men") || (0)) && ((reuse_col_str_303 == "accessories") || (reuse_col_str_303 == "classical") || (reuse_col_str_303 == "fragrances") || (reuse_col_str_303 == "pants") || (0))) && ((reuse_col_str_14 == "amalgimporto #1") || (reuse_col_str_14 == "edu packscholar #1") || (reuse_col_str_14 == "exportiimporto #1") || (reuse_col_str_14 == "importoamalg #1") || (0)))) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_10937322_input.getInt32(i, 0);
            tbl_Filter_TD_9435581_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_manager_id248_t = tbl_SerializeFromObject_TD_10937322_input.getInt32(i, 1);
            tbl_Filter_TD_9435581_output.setInt32(r, 1, _i_manager_id248_t);
            r++;
        }
    }
    tbl_Filter_TD_9435581_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9435581_output #Row: " << tbl_Filter_TD_9435581_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8353447(Table &tbl_SerializeFromObject_TD_92441_input, Table &tbl_Filter_TD_8353447_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((d_month_seq#123 INSET 1200, 1201, 1202, 1203, 1204, 1205, 1206, 1207, 1208, 1209, 1210, 1211 AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_month_seq#123)
    // Output: ListBuffer(d_date_sk#120, d_moy#128)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_92441_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_month_seq123 = tbl_SerializeFromObject_TD_92441_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_92441_input.getInt32(i, 0);
        std::vector<int32_t>vec_406 = {
        1210,1208,1209,1204,1201,1203,1207,1200,1211,1206,1202,1205
        };
        bool elementExists = std::find(vec_406.begin(), vec_406.end(),_d_month_seq123) != vec_406.end();
        if (((elementExists) || (0)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_92441_input.getInt32(i, 0);
            tbl_Filter_TD_8353447_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_moy128_t = tbl_SerializeFromObject_TD_92441_input.getInt32(i, 1);
            tbl_Filter_TD_8353447_output.setInt32(r, 1, _d_moy128_t);
            r++;
        }
    }
    tbl_Filter_TD_8353447_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8353447_output #Row: " << tbl_Filter_TD_8353447_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7570431(Table &tbl_SerializeFromObject_TD_889634_input, Table &tbl_Filter_TD_7570431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_889634_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_889634_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_889634_input.getInt32(i, 0);
            tbl_Filter_TD_7570431_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_7570431_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7570431_output #Row: " << tbl_Filter_TD_7570431_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_549036_consolidate(Table &tbl_Aggregate_TD_549036_output_preprocess, Table &tbl_Aggregate_TD_549036_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_549036_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_manager_id248 = tbl_Aggregate_TD_549036_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_549036_output.setInt32(r, 0, _i_manager_id248);
        int64_t _sum_sales3665 = tbl_Aggregate_TD_549036_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_549036_output.setInt64(r, 1, _sum_sales3665);
        int64_t __w03670 = tbl_Aggregate_TD_549036_output_preprocess.combineInt64(r, 9, 1);
        tbl_Aggregate_TD_549036_output.setInt64(r, 2, __w03670);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_549036_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_549036_output #Row: " << tbl_Aggregate_TD_549036_output.getNumRow() << std::endl;
}

void SW_Window_TD_4580910(Table &tbl_Aggregate_TD_549036_output, Table &tbl_Window_TD_4580910_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(avg(_w0#3670) windowspecdefinition(i_manager_id#248, specifiedwindowframe(RowFrame, unboundedpreceding$(), unboundedfollowing$())) AS avg_monthly_sales#3666)
    // Input: ListBuffer(i_manager_id#248, sum_sales#3665, _w0#3670)
    // Output: ListBuffer(i_manager_id#248, sum_sales#3665, _w0#3670, avg_monthly_sales#3666)
    struct SW_Window_TD_4580910Row {
        int32_t _i_manager_id248;
        int64_t _sum_sales3665;
        int64_t __w03670;
    }; 

    int nrow = tbl_Aggregate_TD_549036_output.getNumRow();
    std::vector<SW_Window_TD_4580910Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _i_manager_id248 = tbl_Aggregate_TD_549036_output.getInt32(i, 0);
        tbl_Window_TD_4580910_output.setInt32(r, 0,_i_manager_id248);
        int64_t _sum_sales3665 = tbl_Aggregate_TD_549036_output.getInt64(i, 1);
        tbl_Window_TD_4580910_output.setInt64(r, 1,_sum_sales3665);
        int64_t __w03670 = tbl_Aggregate_TD_549036_output.getInt64(i, 2);
        tbl_Window_TD_4580910_output.setInt64(r, 2,__w03670);
        r++;
        SW_Window_TD_4580910Row t = {_i_manager_id248,_sum_sales3665,__w03670};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_4580910Row& a, const SW_Window_TD_4580910Row& b) const { return 
(a._i_manager_id248 < b._i_manager_id248); 
}
    }SW_Window_TD_4580910_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_4580910_order0);
    int64_t sum0 = 0;
    int64_t currentRow0 = 0;
    int32_t current_i_manager_id2480 = std::numeric_limits<int32_t>::min();
    for (auto& it : rows0) {
        if (current_i_manager_id2480 != it._i_manager_id248) {
            sum0 = 0;
            currentRow0 = 0;
            current_i_manager_id2480 = it._i_manager_id248;
        }
        sum0 += it.__w03670;
        currentRow0 +=1;
        tbl_Window_TD_4580910_output.setInt64(r, 3, sum0 / currentRow0 );
    }
    tbl_Window_TD_4580910_output.setNumRow(r);
    std::cout << "tbl_Window_TD_4580910_output #Row: " << tbl_Window_TD_4580910_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3795578(Table &tbl_Window_TD_4580910_output, Table &tbl_Filter_TD_3795578_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(avg_monthly_sales#3666) AND ((avg_monthly_sales#3666 > 0.000000) AND (CheckOverflow((promote_precision(abs(CheckOverflow((promote_precision(cast(sum_sales#3665 as decimal(22,6))) - promote_precision(cast(avg_monthly_sales#3666 as decimal(22,6)))), DecimalType(22,6), true), false)) / promote_precision(cast(avg_monthly_sales#3666 as decimal(22,6)))), DecimalType(38,16), true) > 0.1000000000000000))))
    // Input: ListBuffer(i_manager_id#248, sum_sales#3665, _w0#3670, avg_monthly_sales#3666)
    // Output: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    int r = 0;
    int nrow1 = tbl_Window_TD_4580910_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _avg_monthly_sales3666 = tbl_Window_TD_4580910_output.getInt64(i, 3);
        int64_t _sum_sales3665 = tbl_Window_TD_4580910_output.getInt64(i, 1);
        if ((_avg_monthly_sales3666!= 0) && ((_avg_monthly_sales3666 > 0.000000) && (_sum_sales3665 > 0.1000000000000000))) {
            int32_t _i_manager_id248_t = tbl_Window_TD_4580910_output.getInt32(i, 0);
            tbl_Filter_TD_3795578_output.setInt32(r, 0, _i_manager_id248_t);
            int64_t _sum_sales3665_t = tbl_Window_TD_4580910_output.getInt64(i, 1);
            tbl_Filter_TD_3795578_output.setInt64(r, 1, _sum_sales3665_t);
            int64_t _avg_monthly_sales3666_t = tbl_Window_TD_4580910_output.getInt64(i, 3);
            tbl_Filter_TD_3795578_output.setInt64(r, 2, _avg_monthly_sales3666_t);
            r++;
        }
    }
    tbl_Filter_TD_3795578_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3795578_output #Row: " << tbl_Filter_TD_3795578_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2111396(Table &tbl_Filter_TD_3795578_output, Table &tbl_Sort_TD_2111396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_manager_id#248 ASC NULLS FIRST, avg_monthly_sales#3666 ASC NULLS FIRST, sum_sales#3665 ASC NULLS FIRST)
    // Input: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    // Output: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    struct SW_Sort_TD_2111396Row {
        int32_t _i_manager_id248;
        int64_t _sum_sales3665;
        int64_t _avg_monthly_sales3666;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2111396Row& a, const SW_Sort_TD_2111396Row& b) const { return 
 (a._i_manager_id248 < b._i_manager_id248) || 
 ((a._i_manager_id248 == b._i_manager_id248) && (a._avg_monthly_sales3666 < b._avg_monthly_sales3666)) || 
 ((a._i_manager_id248 == b._i_manager_id248) && (a._avg_monthly_sales3666 == b._avg_monthly_sales3666) && (a._sum_sales3665 < b._sum_sales3665)); 
}
    }SW_Sort_TD_2111396_order; 

    int nrow1 = tbl_Filter_TD_3795578_output.getNumRow();
    std::vector<SW_Sort_TD_2111396Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_Filter_TD_3795578_output.getInt32(i, 0);
        int64_t _sum_sales3665 = tbl_Filter_TD_3795578_output.getInt64(i, 1);
        int64_t _avg_monthly_sales3666 = tbl_Filter_TD_3795578_output.getInt64(i, 2);
        SW_Sort_TD_2111396Row t = {_i_manager_id248,_sum_sales3665,_avg_monthly_sales3666};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2111396_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2111396_output.setInt32(r, 0, it._i_manager_id248);
        tbl_Sort_TD_2111396_output.setInt64(r, 1, it._sum_sales3665);
        tbl_Sort_TD_2111396_output.setInt64(r, 2, it._avg_monthly_sales3666);
        ++r;
    }
    tbl_Sort_TD_2111396_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2111396_output #Row: " << tbl_Sort_TD_2111396_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1229295(Table &tbl_Sort_TD_2111396_output, Table &tbl_LocalLimit_TD_1229295_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    // Output: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1229295_output.setInt32(r, 0, tbl_Sort_TD_2111396_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1229295_output.setInt64(r, 1, tbl_Sort_TD_2111396_output.getInt64(i, 1));
        tbl_LocalLimit_TD_1229295_output.setInt64(r, 2, tbl_Sort_TD_2111396_output.getInt64(i, 2));
        r++;
    }
    tbl_LocalLimit_TD_1229295_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1229295_output #Row: " << tbl_LocalLimit_TD_1229295_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0927380(Table &tbl_LocalLimit_TD_1229295_output, Table &tbl_GlobalLimit_TD_0927380_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    // Output: ListBuffer(i_manager_id#248, sum_sales#3665, avg_monthly_sales#3666)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0927380_output.setInt32(r, 0, tbl_LocalLimit_TD_1229295_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0927380_output.setInt64(r, 1, tbl_LocalLimit_TD_1229295_output.getInt64(i, 1));
        tbl_GlobalLimit_TD_0927380_output.setInt64(r, 2, tbl_LocalLimit_TD_1229295_output.getInt64(i, 2));
        r++;
    }
    tbl_GlobalLimit_TD_0927380_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0927380_output #Row: " << tbl_GlobalLimit_TD_0927380_output.getNumRow() << std::endl;
}

