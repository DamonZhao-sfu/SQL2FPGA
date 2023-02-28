#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_4672289(Table &tbl_SerializeFromObject_TD_5653941_input, Table &tbl_Filter_TD_4672289_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_dep_count#207) AND (hd_dep_count#207 = 7)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5653941_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_5653941_input.getInt32(i, 1);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_5653941_input.getInt32(i, 0);
        if (((_hd_dep_count207!= 0) && (_hd_dep_count207 == 7)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_5653941_input.getInt32(i, 0);
            tbl_Filter_TD_4672289_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_4672289_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4672289_output #Row: " << tbl_Filter_TD_4672289_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4873819(Table &tbl_SerializeFromObject_TD_5556030_input, Table &tbl_Filter_TD_4873819_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#1211) AND (isnotnull(ss_sold_time_sk#1207) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    // Output: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5556030_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_5556030_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk1207 = tbl_SerializeFromObject_TD_5556030_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_5556030_input.getInt32(i, 2);
        if ((_ss_hdemo_sk1211!= 0) && ((_ss_sold_time_sk1207!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_5556030_input.getInt32(i, 0);
            tbl_Filter_TD_4873819_output.setInt32(r, 0, _ss_sold_time_sk1207_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_5556030_input.getInt32(i, 1);
            tbl_Filter_TD_4873819_output.setInt32(r, 1, _ss_hdemo_sk1211_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_5556030_input.getInt32(i, 2);
            tbl_Filter_TD_4873819_output.setInt32(r, 2, _ss_store_sk1213_t);
            r++;
        }
    }
    tbl_Filter_TD_4873819_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4873819_output #Row: " << tbl_Filter_TD_4873819_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3799447(Table &tbl_SerializeFromObject_TD_4927284_input, Table &tbl_Filter_TD_3799447_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#468) AND isnotnull(t_minute#469)) AND ((t_hour#468 = 20) AND (t_minute#469 >= 30))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4927284_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour468 = tbl_SerializeFromObject_TD_4927284_input.getInt32(i, 1);
        int32_t _t_minute469 = tbl_SerializeFromObject_TD_4927284_input.getInt32(i, 2);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_4927284_input.getInt32(i, 0);
        if ((((_t_hour468!= 0) && (_t_minute469!= 0)) && ((_t_hour468 == 20) && (_t_minute469 >= 30))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_4927284_input.getInt32(i, 0);
            tbl_Filter_TD_3799447_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_3799447_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3799447_output #Row: " << tbl_Filter_TD_3799447_output.getNumRow() << std::endl;
}


void SW_Filter_TD_271160(Table &tbl_SerializeFromObject_TD_3667473_input, Table &tbl_Filter_TD_271160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#383) AND (s_store_name#383 = ese)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_3667473_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_3667473_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_3667473_input.getInt32(i, 0);
        if (((std::string(_s_store_name383.data()) != "NULL") && (std::string(_s_store_name383.data()) == "ese")) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_3667473_input.getInt32(i, 0);
            tbl_Filter_TD_271160_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_271160_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_271160_output #Row: " << tbl_Filter_TD_271160_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_0995291(Table &tbl_JOIN_INNER_TD_1541857_output, Table &tbl_Aggregate_TD_0995291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS count(1)#3546L)
    // Input: ListBuffer(ss_store_sk#1213, s_store_sk#378)
    // Output: ListBuffer(count(1)#3546L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_1541857_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_1541857_output.getInt32(i, 0);
        int32_t _s_store_sk378 = tbl_JOIN_INNER_TD_1541857_output.getInt32(i, 1);
        int64_t _count13546L_count_0 = 1;
        count_0 += _count13546L_count_0;
    }
    int r = 0;
    int64_t _count13546L = count_0;
    tbl_Aggregate_TD_0995291_output.setInt64(r++, 0, _count13546L);
    tbl_Aggregate_TD_0995291_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_0995291_output #Row: " << tbl_Aggregate_TD_0995291_output.getNumRow() << std::endl;
}

