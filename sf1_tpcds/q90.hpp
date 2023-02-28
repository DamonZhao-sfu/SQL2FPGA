#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_6633999(Table &tbl_SerializeFromObject_TD_7366927_input, Table &tbl_Filter_TD_6633999_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_dep_count#3584) AND (hd_dep_count#3584 = 6)) AND isnotnull(hd_demo_sk#3581)))
    // Input: ListBuffer(hd_demo_sk#3581, hd_dep_count#3584)
    // Output: ListBuffer(hd_demo_sk#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7366927_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3584 = tbl_SerializeFromObject_TD_7366927_input.getInt32(i, 1);
        int32_t _hd_demo_sk3581 = tbl_SerializeFromObject_TD_7366927_input.getInt32(i, 0);
        if (((_hd_dep_count3584!= 0) && (_hd_dep_count3584 == 6)) && (_hd_demo_sk3581!= 0)) {
            int32_t _hd_demo_sk3581_t = tbl_SerializeFromObject_TD_7366927_input.getInt32(i, 0);
            tbl_Filter_TD_6633999_output.setInt32(r, 0, _hd_demo_sk3581_t);
            r++;
        }
    }
    tbl_Filter_TD_6633999_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6633999_output #Row: " << tbl_Filter_TD_6633999_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6511180(Table &tbl_SerializeFromObject_TD_7303184_input, Table &tbl_Filter_TD_6511180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_ship_hdemo_sk#3557) AND (isnotnull(ws_sold_time_sk#3548) AND isnotnull(ws_web_page_sk#3559))))
    // Input: ListBuffer(ws_sold_time_sk#3548, ws_ship_hdemo_sk#3557, ws_web_page_sk#3559)
    // Output: ListBuffer(ws_sold_time_sk#3548, ws_ship_hdemo_sk#3557, ws_web_page_sk#3559)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7303184_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_hdemo_sk3557 = tbl_SerializeFromObject_TD_7303184_input.getInt32(i, 1);
        int32_t _ws_sold_time_sk3548 = tbl_SerializeFromObject_TD_7303184_input.getInt32(i, 0);
        int32_t _ws_web_page_sk3559 = tbl_SerializeFromObject_TD_7303184_input.getInt32(i, 2);
        if ((_ws_ship_hdemo_sk3557!= 0) && ((_ws_sold_time_sk3548!= 0) && (_ws_web_page_sk3559!= 0))) {
            int32_t _ws_sold_time_sk3548_t = tbl_SerializeFromObject_TD_7303184_input.getInt32(i, 0);
            tbl_Filter_TD_6511180_output.setInt32(r, 0, _ws_sold_time_sk3548_t);
            int32_t _ws_ship_hdemo_sk3557_t = tbl_SerializeFromObject_TD_7303184_input.getInt32(i, 1);
            tbl_Filter_TD_6511180_output.setInt32(r, 1, _ws_ship_hdemo_sk3557_t);
            int32_t _ws_web_page_sk3559_t = tbl_SerializeFromObject_TD_7303184_input.getInt32(i, 2);
            tbl_Filter_TD_6511180_output.setInt32(r, 2, _ws_web_page_sk3559_t);
            r++;
        }
    }
    tbl_Filter_TD_6511180_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6511180_output #Row: " << tbl_Filter_TD_6511180_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6189517(Table &tbl_SerializeFromObject_TD_7909277_input, Table &tbl_Filter_TD_6189517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_dep_count#207) AND (hd_dep_count#207 = 6)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7909277_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_7909277_input.getInt32(i, 1);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_7909277_input.getInt32(i, 0);
        if (((_hd_dep_count207!= 0) && (_hd_dep_count207 == 6)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_7909277_input.getInt32(i, 0);
            tbl_Filter_TD_6189517_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_6189517_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6189517_output #Row: " << tbl_Filter_TD_6189517_output.getNumRow() << std::endl;
}

void SW_Filter_TD_655281(Table &tbl_SerializeFromObject_TD_7654654_input, Table &tbl_Filter_TD_655281_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_ship_hdemo_sk#739) AND (isnotnull(ws_sold_time_sk#730) AND isnotnull(ws_web_page_sk#741))))
    // Input: ListBuffer(ws_sold_time_sk#730, ws_ship_hdemo_sk#739, ws_web_page_sk#741)
    // Output: ListBuffer(ws_sold_time_sk#730, ws_ship_hdemo_sk#739, ws_web_page_sk#741)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7654654_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_hdemo_sk739 = tbl_SerializeFromObject_TD_7654654_input.getInt32(i, 1);
        int32_t _ws_sold_time_sk730 = tbl_SerializeFromObject_TD_7654654_input.getInt32(i, 0);
        int32_t _ws_web_page_sk741 = tbl_SerializeFromObject_TD_7654654_input.getInt32(i, 2);
        if ((_ws_ship_hdemo_sk739!= 0) && ((_ws_sold_time_sk730!= 0) && (_ws_web_page_sk741!= 0))) {
            int32_t _ws_sold_time_sk730_t = tbl_SerializeFromObject_TD_7654654_input.getInt32(i, 0);
            tbl_Filter_TD_655281_output.setInt32(r, 0, _ws_sold_time_sk730_t);
            int32_t _ws_ship_hdemo_sk739_t = tbl_SerializeFromObject_TD_7654654_input.getInt32(i, 1);
            tbl_Filter_TD_655281_output.setInt32(r, 1, _ws_ship_hdemo_sk739_t);
            int32_t _ws_web_page_sk741_t = tbl_SerializeFromObject_TD_7654654_input.getInt32(i, 2);
            tbl_Filter_TD_655281_output.setInt32(r, 2, _ws_web_page_sk741_t);
            r++;
        }
    }
    tbl_Filter_TD_655281_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_655281_output #Row: " << tbl_Filter_TD_655281_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5583903(Table &tbl_SerializeFromObject_TD_6967561_input, Table &tbl_Filter_TD_5583903_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(t_hour#3589) AND ((t_hour#3589 >= 19) AND (t_hour#3589 <= 20))) AND isnotnull(t_time_sk#3586)))
    // Input: ListBuffer(t_time_sk#3586, t_hour#3589)
    // Output: ListBuffer(t_time_sk#3586)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6967561_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3589 = tbl_SerializeFromObject_TD_6967561_input.getInt32(i, 1);
        int32_t _t_time_sk3586 = tbl_SerializeFromObject_TD_6967561_input.getInt32(i, 0);
        if (((_t_hour3589!= 0) && ((_t_hour3589 >= 19) && (_t_hour3589 <= 20))) && (_t_time_sk3586!= 0)) {
            int32_t _t_time_sk3586_t = tbl_SerializeFromObject_TD_6967561_input.getInt32(i, 0);
            tbl_Filter_TD_5583903_output.setInt32(r, 0, _t_time_sk3586_t);
            r++;
        }
    }
    tbl_Filter_TD_5583903_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5583903_output #Row: " << tbl_Filter_TD_5583903_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5945676(Table &tbl_SerializeFromObject_TD_6915499_input, Table &tbl_Filter_TD_5945676_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(t_hour#468) AND ((t_hour#468 >= 8) AND (t_hour#468 <= 9))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6915499_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour468 = tbl_SerializeFromObject_TD_6915499_input.getInt32(i, 1);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_6915499_input.getInt32(i, 0);
        if (((_t_hour468!= 0) && ((_t_hour468 >= 8) && (_t_hour468 <= 9))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_6915499_input.getInt32(i, 0);
            tbl_Filter_TD_5945676_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_5945676_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5945676_output #Row: " << tbl_Filter_TD_5945676_output.getNumRow() << std::endl;
}


void SW_Filter_TD_4527149(Table &tbl_SerializeFromObject_TD_5985009_input, Table &tbl_Filter_TD_4527149_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wp_char_count#3606) AND ((wp_char_count#3606 >= 5000) AND (wp_char_count#3606 <= 5200))) AND isnotnull(wp_web_page_sk#3596)))
    // Input: ListBuffer(wp_web_page_sk#3596, wp_char_count#3606)
    // Output: ListBuffer(wp_web_page_sk#3596)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5985009_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_char_count3606 = tbl_SerializeFromObject_TD_5985009_input.getInt32(i, 1);
        int32_t _wp_web_page_sk3596 = tbl_SerializeFromObject_TD_5985009_input.getInt32(i, 0);
        if (((_wp_char_count3606!= 0) && ((_wp_char_count3606 >= 5000) && (_wp_char_count3606 <= 5200))) && (_wp_web_page_sk3596!= 0)) {
            int32_t _wp_web_page_sk3596_t = tbl_SerializeFromObject_TD_5985009_input.getInt32(i, 0);
            tbl_Filter_TD_4527149_output.setInt32(r, 0, _wp_web_page_sk3596_t);
            r++;
        }
    }
    tbl_Filter_TD_4527149_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4527149_output #Row: " << tbl_Filter_TD_4527149_output.getNumRow() << std::endl;
}


void SW_Filter_TD_4434162(Table &tbl_SerializeFromObject_TD_5268380_input, Table &tbl_Filter_TD_4434162_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wp_char_count#625) AND ((wp_char_count#625 >= 5000) AND (wp_char_count#625 <= 5200))) AND isnotnull(wp_web_page_sk#615)))
    // Input: ListBuffer(wp_web_page_sk#615, wp_char_count#625)
    // Output: ListBuffer(wp_web_page_sk#615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5268380_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_char_count625 = tbl_SerializeFromObject_TD_5268380_input.getInt32(i, 1);
        int32_t _wp_web_page_sk615 = tbl_SerializeFromObject_TD_5268380_input.getInt32(i, 0);
        if (((_wp_char_count625!= 0) && ((_wp_char_count625 >= 5000) && (_wp_char_count625 <= 5200))) && (_wp_web_page_sk615!= 0)) {
            int32_t _wp_web_page_sk615_t = tbl_SerializeFromObject_TD_5268380_input.getInt32(i, 0);
            tbl_Filter_TD_4434162_output.setInt32(r, 0, _wp_web_page_sk615_t);
            r++;
        }
    }
    tbl_Filter_TD_4434162_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4434162_output #Row: " << tbl_Filter_TD_4434162_output.getNumRow() << std::endl;
}




void SW_Aggregate_TD_248662(Table &tbl_JOIN_INNER_TD_3547194_output, Table &tbl_Aggregate_TD_248662_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS pmc#3545L)
    // Input: ListBuffer(ws_web_page_sk#3559, wp_web_page_sk#3596)
    // Output: ListBuffer(pmc#3545L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3547194_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_page_sk3559 = tbl_JOIN_INNER_TD_3547194_output.getInt32(i, 0);
        int32_t _wp_web_page_sk3596 = tbl_JOIN_INNER_TD_3547194_output.getInt32(i, 1);
        int64_t _pmc3545L_count_0 = 1;
        count_0 += _pmc3545L_count_0;
    }
    int r = 0;
    int64_t _pmc3545L = count_0;
    tbl_Aggregate_TD_248662_output.setInt64(r++, 0, _pmc3545L);
    tbl_Aggregate_TD_248662_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_248662_output #Row: " << tbl_Aggregate_TD_248662_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2963332(Table &tbl_JOIN_INNER_TD_328805_output, Table &tbl_Aggregate_TD_2963332_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS amc#3544L)
    // Input: ListBuffer(ws_web_page_sk#741, wp_web_page_sk#615)
    // Output: ListBuffer(amc#3544L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_328805_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_328805_output.getInt32(i, 0);
        int32_t _wp_web_page_sk615 = tbl_JOIN_INNER_TD_328805_output.getInt32(i, 1);
        int64_t _amc3544L_count_0 = 1;
        count_0 += _amc3544L_count_0;
    }
    int r = 0;
    int64_t _amc3544L = count_0;
    tbl_Aggregate_TD_2963332_output.setInt64(r++, 0, _amc3544L);
    tbl_Aggregate_TD_2963332_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2963332_output #Row: " << tbl_Aggregate_TD_2963332_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1182859(Table &tbl_Aggregate_TD_2963332_output, Table &tbl_Aggregate_TD_248662_output, Table &tbl_JOIN_CROSS_TD_1182859_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(amc#3544L)
    // Right Table: ListBuffer(pmc#3545L)
    // Output Table: ListBuffer(amc#3544L, pmc#3545L)
    int left_nrow = tbl_Aggregate_TD_2963332_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_248662_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_1182859_output.setInt64(r, 0, tbl_Aggregate_TD_2963332_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_1182859_output.setInt64(r, 1, tbl_Aggregate_TD_248662_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_1182859_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1182859_output #Row: " << tbl_JOIN_CROSS_TD_1182859_output.getNumRow() << std::endl;
}

void SW_Project_TD_0896501(Table &tbl_JOIN_CROSS_TD_1182859_output, Table &tbl_Project_TD_0896501_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(amc#3544L as decimal(15,4))) / promote_precision(cast(pmc#3545L as decimal(15,4)))), DecimalType(35,20), true) AS am_pm_ratio#3546)
    // Input: ListBuffer(amc#3544L, pmc#3545L)
    // Output: ListBuffer(am_pm_ratio#3546)
    int nrow1 = tbl_JOIN_CROSS_TD_1182859_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _amc3544L = tbl_JOIN_CROSS_TD_1182859_output.getInt64(i, 0);
        int64_t _pmc3545L = tbl_JOIN_CROSS_TD_1182859_output.getInt64(i, 1);
        int64_t _am_pm_ratio3546 = (_amc3544L / _pmc3545L);
        tbl_Project_TD_0896501_output.setInt64(i, 0, _am_pm_ratio3546);
    }
    tbl_Project_TD_0896501_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0896501_output #Row: " << tbl_Project_TD_0896501_output.getNumRow() << std::endl;
}

