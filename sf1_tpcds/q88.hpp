#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11590119(Table &tbl_SerializeFromObject_TD_12935560_input, Table &tbl_Filter_TD_11590119_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3578 = 4) AND (hd_vehicle_count#3579 <= 6)) OR ((hd_dep_count#3578 = 2) AND (hd_vehicle_count#3579 <= 4))) OR ((hd_dep_count#3578 = 0) AND (hd_vehicle_count#3579 <= 2))) AND isnotnull(hd_demo_sk#3575)))
    // Input: ListBuffer(hd_demo_sk#3575, hd_dep_count#3578, hd_vehicle_count#3579)
    // Output: ListBuffer(hd_demo_sk#3575)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12935560_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3578 = tbl_SerializeFromObject_TD_12935560_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3579 = tbl_SerializeFromObject_TD_12935560_input.getInt32(i, 2);
        int32_t _hd_demo_sk3575 = tbl_SerializeFromObject_TD_12935560_input.getInt32(i, 0);
        if (((((_hd_dep_count3578 == 4) && (_hd_vehicle_count3579 <= 6)) || ((_hd_dep_count3578 == 2) && (_hd_vehicle_count3579 <= 4))) || ((_hd_dep_count3578 == 0) && (_hd_vehicle_count3579 <= 2))) && (_hd_demo_sk3575!= 0)) {
            int32_t _hd_demo_sk3575_t = tbl_SerializeFromObject_TD_12935560_input.getInt32(i, 0);
            tbl_Filter_TD_11590119_output.setInt32(r, 0, _hd_demo_sk3575_t);
            r++;
        }
    }
    tbl_Filter_TD_11590119_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11590119_output #Row: " << tbl_Filter_TD_11590119_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11603312(Table &tbl_SerializeFromObject_TD_12790778_input, Table &tbl_Filter_TD_11603312_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3557) AND (isnotnull(ss_sold_time_sk#3553) AND isnotnull(ss_store_sk#3559))))
    // Input: ListBuffer(ss_sold_time_sk#3553, ss_hdemo_sk#3557, ss_store_sk#3559)
    // Output: ListBuffer(ss_sold_time_sk#3553, ss_hdemo_sk#3557, ss_store_sk#3559)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12790778_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3557 = tbl_SerializeFromObject_TD_12790778_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3553 = tbl_SerializeFromObject_TD_12790778_input.getInt32(i, 0);
        int32_t _ss_store_sk3559 = tbl_SerializeFromObject_TD_12790778_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3557!= 0) && ((_ss_sold_time_sk3553!= 0) && (_ss_store_sk3559!= 0))) {
            int32_t _ss_sold_time_sk3553_t = tbl_SerializeFromObject_TD_12790778_input.getInt32(i, 0);
            tbl_Filter_TD_11603312_output.setInt32(r, 0, _ss_sold_time_sk3553_t);
            int32_t _ss_hdemo_sk3557_t = tbl_SerializeFromObject_TD_12790778_input.getInt32(i, 1);
            tbl_Filter_TD_11603312_output.setInt32(r, 1, _ss_hdemo_sk3557_t);
            int32_t _ss_store_sk3559_t = tbl_SerializeFromObject_TD_12790778_input.getInt32(i, 2);
            tbl_Filter_TD_11603312_output.setInt32(r, 2, _ss_store_sk3559_t);
            r++;
        }
    }
    tbl_Filter_TD_11603312_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11603312_output #Row: " << tbl_Filter_TD_11603312_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11610447(Table &tbl_SerializeFromObject_TD_12144814_input, Table &tbl_Filter_TD_11610447_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#207 = 4) AND (hd_vehicle_count#208 <= 6)) OR ((hd_dep_count#207 = 2) AND (hd_vehicle_count#208 <= 4))) OR ((hd_dep_count#207 = 0) AND (hd_vehicle_count#208 <= 2))) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207, hd_vehicle_count#208)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12144814_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_12144814_input.getInt32(i, 1);
        int32_t _hd_vehicle_count208 = tbl_SerializeFromObject_TD_12144814_input.getInt32(i, 2);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_12144814_input.getInt32(i, 0);
        if (((((_hd_dep_count207 == 4) && (_hd_vehicle_count208 <= 6)) || ((_hd_dep_count207 == 2) && (_hd_vehicle_count208 <= 4))) || ((_hd_dep_count207 == 0) && (_hd_vehicle_count208 <= 2))) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_12144814_input.getInt32(i, 0);
            tbl_Filter_TD_11610447_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_11610447_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11610447_output #Row: " << tbl_Filter_TD_11610447_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11504804(Table &tbl_SerializeFromObject_TD_12712853_input, Table &tbl_Filter_TD_11504804_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#1211) AND (isnotnull(ss_sold_time_sk#1207) AND isnotnull(ss_store_sk#1213))))
    // Input: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    // Output: ListBuffer(ss_sold_time_sk#1207, ss_hdemo_sk#1211, ss_store_sk#1213)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12712853_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_12712853_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk1207 = tbl_SerializeFromObject_TD_12712853_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12712853_input.getInt32(i, 2);
        if ((_ss_hdemo_sk1211!= 0) && ((_ss_sold_time_sk1207!= 0) && (_ss_store_sk1213!= 0))) {
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_12712853_input.getInt32(i, 0);
            tbl_Filter_TD_11504804_output.setInt32(r, 0, _ss_sold_time_sk1207_t);
            int32_t _ss_hdemo_sk1211_t = tbl_SerializeFromObject_TD_12712853_input.getInt32(i, 1);
            tbl_Filter_TD_11504804_output.setInt32(r, 1, _ss_hdemo_sk1211_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12712853_input.getInt32(i, 2);
            tbl_Filter_TD_11504804_output.setInt32(r, 2, _ss_store_sk1213_t);
            r++;
        }
    }
    tbl_Filter_TD_11504804_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11504804_output #Row: " << tbl_Filter_TD_11504804_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10806884(Table &tbl_SerializeFromObject_TD_11807552_input, Table &tbl_Filter_TD_10806884_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3645 = 4) AND (hd_vehicle_count#3646 <= 6)) OR ((hd_dep_count#3645 = 2) AND (hd_vehicle_count#3646 <= 4))) OR ((hd_dep_count#3645 = 0) AND (hd_vehicle_count#3646 <= 2))) AND isnotnull(hd_demo_sk#3642)))
    // Input: ListBuffer(hd_demo_sk#3642, hd_dep_count#3645, hd_vehicle_count#3646)
    // Output: ListBuffer(hd_demo_sk#3642)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11807552_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3645 = tbl_SerializeFromObject_TD_11807552_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3646 = tbl_SerializeFromObject_TD_11807552_input.getInt32(i, 2);
        int32_t _hd_demo_sk3642 = tbl_SerializeFromObject_TD_11807552_input.getInt32(i, 0);
        if (((((_hd_dep_count3645 == 4) && (_hd_vehicle_count3646 <= 6)) || ((_hd_dep_count3645 == 2) && (_hd_vehicle_count3646 <= 4))) || ((_hd_dep_count3645 == 0) && (_hd_vehicle_count3646 <= 2))) && (_hd_demo_sk3642!= 0)) {
            int32_t _hd_demo_sk3642_t = tbl_SerializeFromObject_TD_11807552_input.getInt32(i, 0);
            tbl_Filter_TD_10806884_output.setInt32(r, 0, _hd_demo_sk3642_t);
            r++;
        }
    }
    tbl_Filter_TD_10806884_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10806884_output #Row: " << tbl_Filter_TD_10806884_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10566299(Table &tbl_SerializeFromObject_TD_11859636_input, Table &tbl_Filter_TD_10566299_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3624) AND (isnotnull(ss_sold_time_sk#3620) AND isnotnull(ss_store_sk#3626))))
    // Input: ListBuffer(ss_sold_time_sk#3620, ss_hdemo_sk#3624, ss_store_sk#3626)
    // Output: ListBuffer(ss_sold_time_sk#3620, ss_hdemo_sk#3624, ss_store_sk#3626)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11859636_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3624 = tbl_SerializeFromObject_TD_11859636_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3620 = tbl_SerializeFromObject_TD_11859636_input.getInt32(i, 0);
        int32_t _ss_store_sk3626 = tbl_SerializeFromObject_TD_11859636_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3624!= 0) && ((_ss_sold_time_sk3620!= 0) && (_ss_store_sk3626!= 0))) {
            int32_t _ss_sold_time_sk3620_t = tbl_SerializeFromObject_TD_11859636_input.getInt32(i, 0);
            tbl_Filter_TD_10566299_output.setInt32(r, 0, _ss_sold_time_sk3620_t);
            int32_t _ss_hdemo_sk3624_t = tbl_SerializeFromObject_TD_11859636_input.getInt32(i, 1);
            tbl_Filter_TD_10566299_output.setInt32(r, 1, _ss_hdemo_sk3624_t);
            int32_t _ss_store_sk3626_t = tbl_SerializeFromObject_TD_11859636_input.getInt32(i, 2);
            tbl_Filter_TD_10566299_output.setInt32(r, 2, _ss_store_sk3626_t);
            r++;
        }
    }
    tbl_Filter_TD_10566299_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10566299_output #Row: " << tbl_Filter_TD_10566299_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10984430(Table &tbl_SerializeFromObject_TD_11293133_input, Table &tbl_Filter_TD_10984430_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3583) AND isnotnull(t_minute#3584)) AND ((t_hour#3583 = 9) AND (t_minute#3584 < 30))) AND isnotnull(t_time_sk#3580)))
    // Input: ListBuffer(t_time_sk#3580, t_hour#3583, t_minute#3584)
    // Output: ListBuffer(t_time_sk#3580)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11293133_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3583 = tbl_SerializeFromObject_TD_11293133_input.getInt32(i, 1);
        int32_t _t_minute3584 = tbl_SerializeFromObject_TD_11293133_input.getInt32(i, 2);
        int32_t _t_time_sk3580 = tbl_SerializeFromObject_TD_11293133_input.getInt32(i, 0);
        if ((((_t_hour3583!= 0) && (_t_minute3584!= 0)) && ((_t_hour3583 == 9) && (_t_minute3584 < 30))) && (_t_time_sk3580!= 0)) {
            int32_t _t_time_sk3580_t = tbl_SerializeFromObject_TD_11293133_input.getInt32(i, 0);
            tbl_Filter_TD_10984430_output.setInt32(r, 0, _t_time_sk3580_t);
            r++;
        }
    }
    tbl_Filter_TD_10984430_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10984430_output #Row: " << tbl_Filter_TD_10984430_output.getNumRow() << std::endl;
}


void SW_Filter_TD_10371729(Table &tbl_SerializeFromObject_TD_11206655_input, Table &tbl_Filter_TD_10371729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#468) AND isnotnull(t_minute#469)) AND ((t_hour#468 = 8) AND (t_minute#469 >= 30))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11206655_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour468 = tbl_SerializeFromObject_TD_11206655_input.getInt32(i, 1);
        int32_t _t_minute469 = tbl_SerializeFromObject_TD_11206655_input.getInt32(i, 2);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_11206655_input.getInt32(i, 0);
        if ((((_t_hour468!= 0) && (_t_minute469!= 0)) && ((_t_hour468 == 8) && (_t_minute469 >= 30))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_11206655_input.getInt32(i, 0);
            tbl_Filter_TD_10371729_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_10371729_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10371729_output #Row: " << tbl_Filter_TD_10371729_output.getNumRow() << std::endl;
}


void SW_Filter_TD_9421652(Table &tbl_SerializeFromObject_TD_10224953_input, Table &tbl_Filter_TD_9421652_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3712 = 4) AND (hd_vehicle_count#3713 <= 6)) OR ((hd_dep_count#3712 = 2) AND (hd_vehicle_count#3713 <= 4))) OR ((hd_dep_count#3712 = 0) AND (hd_vehicle_count#3713 <= 2))) AND isnotnull(hd_demo_sk#3709)))
    // Input: ListBuffer(hd_demo_sk#3709, hd_dep_count#3712, hd_vehicle_count#3713)
    // Output: ListBuffer(hd_demo_sk#3709)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10224953_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3712 = tbl_SerializeFromObject_TD_10224953_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3713 = tbl_SerializeFromObject_TD_10224953_input.getInt32(i, 2);
        int32_t _hd_demo_sk3709 = tbl_SerializeFromObject_TD_10224953_input.getInt32(i, 0);
        if (((((_hd_dep_count3712 == 4) && (_hd_vehicle_count3713 <= 6)) || ((_hd_dep_count3712 == 2) && (_hd_vehicle_count3713 <= 4))) || ((_hd_dep_count3712 == 0) && (_hd_vehicle_count3713 <= 2))) && (_hd_demo_sk3709!= 0)) {
            int32_t _hd_demo_sk3709_t = tbl_SerializeFromObject_TD_10224953_input.getInt32(i, 0);
            tbl_Filter_TD_9421652_output.setInt32(r, 0, _hd_demo_sk3709_t);
            r++;
        }
    }
    tbl_Filter_TD_9421652_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9421652_output #Row: " << tbl_Filter_TD_9421652_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9701390(Table &tbl_SerializeFromObject_TD_10589643_input, Table &tbl_Filter_TD_9701390_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3691) AND (isnotnull(ss_sold_time_sk#3687) AND isnotnull(ss_store_sk#3693))))
    // Input: ListBuffer(ss_sold_time_sk#3687, ss_hdemo_sk#3691, ss_store_sk#3693)
    // Output: ListBuffer(ss_sold_time_sk#3687, ss_hdemo_sk#3691, ss_store_sk#3693)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10589643_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3691 = tbl_SerializeFromObject_TD_10589643_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3687 = tbl_SerializeFromObject_TD_10589643_input.getInt32(i, 0);
        int32_t _ss_store_sk3693 = tbl_SerializeFromObject_TD_10589643_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3691!= 0) && ((_ss_sold_time_sk3687!= 0) && (_ss_store_sk3693!= 0))) {
            int32_t _ss_sold_time_sk3687_t = tbl_SerializeFromObject_TD_10589643_input.getInt32(i, 0);
            tbl_Filter_TD_9701390_output.setInt32(r, 0, _ss_sold_time_sk3687_t);
            int32_t _ss_hdemo_sk3691_t = tbl_SerializeFromObject_TD_10589643_input.getInt32(i, 1);
            tbl_Filter_TD_9701390_output.setInt32(r, 1, _ss_hdemo_sk3691_t);
            int32_t _ss_store_sk3693_t = tbl_SerializeFromObject_TD_10589643_input.getInt32(i, 2);
            tbl_Filter_TD_9701390_output.setInt32(r, 2, _ss_store_sk3693_t);
            r++;
        }
    }
    tbl_Filter_TD_9701390_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9701390_output #Row: " << tbl_Filter_TD_9701390_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9266303(Table &tbl_SerializeFromObject_TD_10993011_input, Table &tbl_Filter_TD_9266303_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3650) AND isnotnull(t_minute#3651)) AND ((t_hour#3650 = 9) AND (t_minute#3651 >= 30))) AND isnotnull(t_time_sk#3647)))
    // Input: ListBuffer(t_time_sk#3647, t_hour#3650, t_minute#3651)
    // Output: ListBuffer(t_time_sk#3647)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10993011_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3650 = tbl_SerializeFromObject_TD_10993011_input.getInt32(i, 1);
        int32_t _t_minute3651 = tbl_SerializeFromObject_TD_10993011_input.getInt32(i, 2);
        int32_t _t_time_sk3647 = tbl_SerializeFromObject_TD_10993011_input.getInt32(i, 0);
        if ((((_t_hour3650!= 0) && (_t_minute3651!= 0)) && ((_t_hour3650 == 9) && (_t_minute3651 >= 30))) && (_t_time_sk3647!= 0)) {
            int32_t _t_time_sk3647_t = tbl_SerializeFromObject_TD_10993011_input.getInt32(i, 0);
            tbl_Filter_TD_9266303_output.setInt32(r, 0, _t_time_sk3647_t);
            r++;
        }
    }
    tbl_Filter_TD_9266303_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9266303_output #Row: " << tbl_Filter_TD_9266303_output.getNumRow() << std::endl;
}


void SW_Filter_TD_9275627(Table &tbl_SerializeFromObject_TD_10833322_input, Table &tbl_Filter_TD_9275627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3595) AND (s_store_name#3595 = ese)) AND isnotnull(s_store_sk#3590)))
    // Input: ListBuffer(s_store_sk#3590, s_store_name#3595)
    // Output: ListBuffer(s_store_sk#3590)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10833322_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3595 = tbl_SerializeFromObject_TD_10833322_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3590 = tbl_SerializeFromObject_TD_10833322_input.getInt32(i, 0);
        if (((std::string(_s_store_name3595.data()) != "NULL") && (std::string(_s_store_name3595.data()) == "ese")) && (_s_store_sk3590!= 0)) {
            int32_t _s_store_sk3590_t = tbl_SerializeFromObject_TD_10833322_input.getInt32(i, 0);
            tbl_Filter_TD_9275627_output.setInt32(r, 0, _s_store_sk3590_t);
            r++;
        }
    }
    tbl_Filter_TD_9275627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9275627_output #Row: " << tbl_Filter_TD_9275627_output.getNumRow() << std::endl;
}


void SW_Filter_TD_967606(Table &tbl_SerializeFromObject_TD_10441367_input, Table &tbl_Filter_TD_967606_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#383) AND (s_store_name#383 = ese)) AND isnotnull(s_store_sk#378)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383)
    // Output: ListBuffer(s_store_sk#378)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10441367_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_SerializeFromObject_TD_10441367_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_10441367_input.getInt32(i, 0);
        if (((std::string(_s_store_name383.data()) != "NULL") && (std::string(_s_store_name383.data()) == "ese")) && (_s_store_sk378!= 0)) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_10441367_input.getInt32(i, 0);
            tbl_Filter_TD_967606_output.setInt32(r, 0, _s_store_sk378_t);
            r++;
        }
    }
    tbl_Filter_TD_967606_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_967606_output #Row: " << tbl_Filter_TD_967606_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8198727(Table &tbl_SerializeFromObject_TD_9321461_input, Table &tbl_Filter_TD_8198727_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3779 = 4) AND (hd_vehicle_count#3780 <= 6)) OR ((hd_dep_count#3779 = 2) AND (hd_vehicle_count#3780 <= 4))) OR ((hd_dep_count#3779 = 0) AND (hd_vehicle_count#3780 <= 2))) AND isnotnull(hd_demo_sk#3776)))
    // Input: ListBuffer(hd_demo_sk#3776, hd_dep_count#3779, hd_vehicle_count#3780)
    // Output: ListBuffer(hd_demo_sk#3776)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9321461_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3779 = tbl_SerializeFromObject_TD_9321461_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3780 = tbl_SerializeFromObject_TD_9321461_input.getInt32(i, 2);
        int32_t _hd_demo_sk3776 = tbl_SerializeFromObject_TD_9321461_input.getInt32(i, 0);
        if (((((_hd_dep_count3779 == 4) && (_hd_vehicle_count3780 <= 6)) || ((_hd_dep_count3779 == 2) && (_hd_vehicle_count3780 <= 4))) || ((_hd_dep_count3779 == 0) && (_hd_vehicle_count3780 <= 2))) && (_hd_demo_sk3776!= 0)) {
            int32_t _hd_demo_sk3776_t = tbl_SerializeFromObject_TD_9321461_input.getInt32(i, 0);
            tbl_Filter_TD_8198727_output.setInt32(r, 0, _hd_demo_sk3776_t);
            r++;
        }
    }
    tbl_Filter_TD_8198727_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8198727_output #Row: " << tbl_Filter_TD_8198727_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8942777(Table &tbl_SerializeFromObject_TD_9990647_input, Table &tbl_Filter_TD_8942777_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3758) AND (isnotnull(ss_sold_time_sk#3754) AND isnotnull(ss_store_sk#3760))))
    // Input: ListBuffer(ss_sold_time_sk#3754, ss_hdemo_sk#3758, ss_store_sk#3760)
    // Output: ListBuffer(ss_sold_time_sk#3754, ss_hdemo_sk#3758, ss_store_sk#3760)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9990647_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3758 = tbl_SerializeFromObject_TD_9990647_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3754 = tbl_SerializeFromObject_TD_9990647_input.getInt32(i, 0);
        int32_t _ss_store_sk3760 = tbl_SerializeFromObject_TD_9990647_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3758!= 0) && ((_ss_sold_time_sk3754!= 0) && (_ss_store_sk3760!= 0))) {
            int32_t _ss_sold_time_sk3754_t = tbl_SerializeFromObject_TD_9990647_input.getInt32(i, 0);
            tbl_Filter_TD_8942777_output.setInt32(r, 0, _ss_sold_time_sk3754_t);
            int32_t _ss_hdemo_sk3758_t = tbl_SerializeFromObject_TD_9990647_input.getInt32(i, 1);
            tbl_Filter_TD_8942777_output.setInt32(r, 1, _ss_hdemo_sk3758_t);
            int32_t _ss_store_sk3760_t = tbl_SerializeFromObject_TD_9990647_input.getInt32(i, 2);
            tbl_Filter_TD_8942777_output.setInt32(r, 2, _ss_store_sk3760_t);
            r++;
        }
    }
    tbl_Filter_TD_8942777_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8942777_output #Row: " << tbl_Filter_TD_8942777_output.getNumRow() << std::endl;
}

void SW_Filter_TD_840596(Table &tbl_SerializeFromObject_TD_9750472_input, Table &tbl_Filter_TD_840596_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3717) AND isnotnull(t_minute#3718)) AND ((t_hour#3717 = 10) AND (t_minute#3718 < 30))) AND isnotnull(t_time_sk#3714)))
    // Input: ListBuffer(t_time_sk#3714, t_hour#3717, t_minute#3718)
    // Output: ListBuffer(t_time_sk#3714)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9750472_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3717 = tbl_SerializeFromObject_TD_9750472_input.getInt32(i, 1);
        int32_t _t_minute3718 = tbl_SerializeFromObject_TD_9750472_input.getInt32(i, 2);
        int32_t _t_time_sk3714 = tbl_SerializeFromObject_TD_9750472_input.getInt32(i, 0);
        if ((((_t_hour3717!= 0) && (_t_minute3718!= 0)) && ((_t_hour3717 == 10) && (_t_minute3718 < 30))) && (_t_time_sk3714!= 0)) {
            int32_t _t_time_sk3714_t = tbl_SerializeFromObject_TD_9750472_input.getInt32(i, 0);
            tbl_Filter_TD_840596_output.setInt32(r, 0, _t_time_sk3714_t);
            r++;
        }
    }
    tbl_Filter_TD_840596_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_840596_output #Row: " << tbl_Filter_TD_840596_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8553917(Table &tbl_SerializeFromObject_TD_9791265_input, Table &tbl_Filter_TD_8553917_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3662) AND (s_store_name#3662 = ese)) AND isnotnull(s_store_sk#3657)))
    // Input: ListBuffer(s_store_sk#3657, s_store_name#3662)
    // Output: ListBuffer(s_store_sk#3657)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9791265_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3662 = tbl_SerializeFromObject_TD_9791265_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3657 = tbl_SerializeFromObject_TD_9791265_input.getInt32(i, 0);
        if (((std::string(_s_store_name3662.data()) != "NULL") && (std::string(_s_store_name3662.data()) == "ese")) && (_s_store_sk3657!= 0)) {
            int32_t _s_store_sk3657_t = tbl_SerializeFromObject_TD_9791265_input.getInt32(i, 0);
            tbl_Filter_TD_8553917_output.setInt32(r, 0, _s_store_sk3657_t);
            r++;
        }
    }
    tbl_Filter_TD_8553917_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8553917_output #Row: " << tbl_Filter_TD_8553917_output.getNumRow() << std::endl;
}




void SW_Filter_TD_7672300(Table &tbl_SerializeFromObject_TD_8752314_input, Table &tbl_Filter_TD_7672300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3846 = 4) AND (hd_vehicle_count#3847 <= 6)) OR ((hd_dep_count#3846 = 2) AND (hd_vehicle_count#3847 <= 4))) OR ((hd_dep_count#3846 = 0) AND (hd_vehicle_count#3847 <= 2))) AND isnotnull(hd_demo_sk#3843)))
    // Input: ListBuffer(hd_demo_sk#3843, hd_dep_count#3846, hd_vehicle_count#3847)
    // Output: ListBuffer(hd_demo_sk#3843)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8752314_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3846 = tbl_SerializeFromObject_TD_8752314_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3847 = tbl_SerializeFromObject_TD_8752314_input.getInt32(i, 2);
        int32_t _hd_demo_sk3843 = tbl_SerializeFromObject_TD_8752314_input.getInt32(i, 0);
        if (((((_hd_dep_count3846 == 4) && (_hd_vehicle_count3847 <= 6)) || ((_hd_dep_count3846 == 2) && (_hd_vehicle_count3847 <= 4))) || ((_hd_dep_count3846 == 0) && (_hd_vehicle_count3847 <= 2))) && (_hd_demo_sk3843!= 0)) {
            int32_t _hd_demo_sk3843_t = tbl_SerializeFromObject_TD_8752314_input.getInt32(i, 0);
            tbl_Filter_TD_7672300_output.setInt32(r, 0, _hd_demo_sk3843_t);
            r++;
        }
    }
    tbl_Filter_TD_7672300_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7672300_output #Row: " << tbl_Filter_TD_7672300_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7689348(Table &tbl_SerializeFromObject_TD_861981_input, Table &tbl_Filter_TD_7689348_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3825) AND (isnotnull(ss_sold_time_sk#3821) AND isnotnull(ss_store_sk#3827))))
    // Input: ListBuffer(ss_sold_time_sk#3821, ss_hdemo_sk#3825, ss_store_sk#3827)
    // Output: ListBuffer(ss_sold_time_sk#3821, ss_hdemo_sk#3825, ss_store_sk#3827)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_861981_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3825 = tbl_SerializeFromObject_TD_861981_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3821 = tbl_SerializeFromObject_TD_861981_input.getInt32(i, 0);
        int32_t _ss_store_sk3827 = tbl_SerializeFromObject_TD_861981_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3825!= 0) && ((_ss_sold_time_sk3821!= 0) && (_ss_store_sk3827!= 0))) {
            int32_t _ss_sold_time_sk3821_t = tbl_SerializeFromObject_TD_861981_input.getInt32(i, 0);
            tbl_Filter_TD_7689348_output.setInt32(r, 0, _ss_sold_time_sk3821_t);
            int32_t _ss_hdemo_sk3825_t = tbl_SerializeFromObject_TD_861981_input.getInt32(i, 1);
            tbl_Filter_TD_7689348_output.setInt32(r, 1, _ss_hdemo_sk3825_t);
            int32_t _ss_store_sk3827_t = tbl_SerializeFromObject_TD_861981_input.getInt32(i, 2);
            tbl_Filter_TD_7689348_output.setInt32(r, 2, _ss_store_sk3827_t);
            r++;
        }
    }
    tbl_Filter_TD_7689348_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7689348_output #Row: " << tbl_Filter_TD_7689348_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7773277(Table &tbl_SerializeFromObject_TD_8642610_input, Table &tbl_Filter_TD_7773277_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3784) AND isnotnull(t_minute#3785)) AND ((t_hour#3784 = 10) AND (t_minute#3785 >= 30))) AND isnotnull(t_time_sk#3781)))
    // Input: ListBuffer(t_time_sk#3781, t_hour#3784, t_minute#3785)
    // Output: ListBuffer(t_time_sk#3781)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8642610_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3784 = tbl_SerializeFromObject_TD_8642610_input.getInt32(i, 1);
        int32_t _t_minute3785 = tbl_SerializeFromObject_TD_8642610_input.getInt32(i, 2);
        int32_t _t_time_sk3781 = tbl_SerializeFromObject_TD_8642610_input.getInt32(i, 0);
        if ((((_t_hour3784!= 0) && (_t_minute3785!= 0)) && ((_t_hour3784 == 10) && (_t_minute3785 >= 30))) && (_t_time_sk3781!= 0)) {
            int32_t _t_time_sk3781_t = tbl_SerializeFromObject_TD_8642610_input.getInt32(i, 0);
            tbl_Filter_TD_7773277_output.setInt32(r, 0, _t_time_sk3781_t);
            r++;
        }
    }
    tbl_Filter_TD_7773277_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7773277_output #Row: " << tbl_Filter_TD_7773277_output.getNumRow() << std::endl;
}


void SW_Filter_TD_7965975(Table &tbl_SerializeFromObject_TD_8828266_input, Table &tbl_Filter_TD_7965975_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3729) AND (s_store_name#3729 = ese)) AND isnotnull(s_store_sk#3724)))
    // Input: ListBuffer(s_store_sk#3724, s_store_name#3729)
    // Output: ListBuffer(s_store_sk#3724)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8828266_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3729 = tbl_SerializeFromObject_TD_8828266_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3724 = tbl_SerializeFromObject_TD_8828266_input.getInt32(i, 0);
        if (((std::string(_s_store_name3729.data()) != "NULL") && (std::string(_s_store_name3729.data()) == "ese")) && (_s_store_sk3724!= 0)) {
            int32_t _s_store_sk3724_t = tbl_SerializeFromObject_TD_8828266_input.getInt32(i, 0);
            tbl_Filter_TD_7965975_output.setInt32(r, 0, _s_store_sk3724_t);
            r++;
        }
    }
    tbl_Filter_TD_7965975_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7965975_output #Row: " << tbl_Filter_TD_7965975_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_7605546(Table &tbl_JOIN_INNER_TD_8224750_output, Table &tbl_Aggregate_TD_7605546_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h9_to_9_30#3545L)
    // Input: ListBuffer(ss_store_sk#3559, s_store_sk#3590)
    // Output: ListBuffer(h9_to_9_30#3545L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_8224750_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3559 = tbl_JOIN_INNER_TD_8224750_output.getInt32(i, 0);
        int32_t _s_store_sk3590 = tbl_JOIN_INNER_TD_8224750_output.getInt32(i, 1);
        int64_t _h9_to_9_303545L_count_0 = 1;
        count_0 += _h9_to_9_303545L_count_0;
    }
    int r = 0;
    int64_t _h9_to_9_303545L = count_0;
    tbl_Aggregate_TD_7605546_output.setInt64(r++, 0, _h9_to_9_303545L);
    tbl_Aggregate_TD_7605546_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7605546_output #Row: " << tbl_Aggregate_TD_7605546_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_7743755(Table &tbl_JOIN_INNER_TD_8130572_output, Table &tbl_Aggregate_TD_7743755_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h8_30_to_9#3544L)
    // Input: ListBuffer(ss_store_sk#1213, s_store_sk#378)
    // Output: ListBuffer(h8_30_to_9#3544L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_8130572_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_8130572_output.getInt32(i, 0);
        int32_t _s_store_sk378 = tbl_JOIN_INNER_TD_8130572_output.getInt32(i, 1);
        int64_t _h8_30_to_93544L_count_0 = 1;
        count_0 += _h8_30_to_93544L_count_0;
    }
    int r = 0;
    int64_t _h8_30_to_93544L = count_0;
    tbl_Aggregate_TD_7743755_output.setInt64(r++, 0, _h8_30_to_93544L);
    tbl_Aggregate_TD_7743755_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_7743755_output #Row: " << tbl_Aggregate_TD_7743755_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6187400(Table &tbl_SerializeFromObject_TD_7554865_input, Table &tbl_Filter_TD_6187400_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3913 = 4) AND (hd_vehicle_count#3914 <= 6)) OR ((hd_dep_count#3913 = 2) AND (hd_vehicle_count#3914 <= 4))) OR ((hd_dep_count#3913 = 0) AND (hd_vehicle_count#3914 <= 2))) AND isnotnull(hd_demo_sk#3910)))
    // Input: ListBuffer(hd_demo_sk#3910, hd_dep_count#3913, hd_vehicle_count#3914)
    // Output: ListBuffer(hd_demo_sk#3910)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7554865_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3913 = tbl_SerializeFromObject_TD_7554865_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3914 = tbl_SerializeFromObject_TD_7554865_input.getInt32(i, 2);
        int32_t _hd_demo_sk3910 = tbl_SerializeFromObject_TD_7554865_input.getInt32(i, 0);
        if (((((_hd_dep_count3913 == 4) && (_hd_vehicle_count3914 <= 6)) || ((_hd_dep_count3913 == 2) && (_hd_vehicle_count3914 <= 4))) || ((_hd_dep_count3913 == 0) && (_hd_vehicle_count3914 <= 2))) && (_hd_demo_sk3910!= 0)) {
            int32_t _hd_demo_sk3910_t = tbl_SerializeFromObject_TD_7554865_input.getInt32(i, 0);
            tbl_Filter_TD_6187400_output.setInt32(r, 0, _hd_demo_sk3910_t);
            r++;
        }
    }
    tbl_Filter_TD_6187400_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6187400_output #Row: " << tbl_Filter_TD_6187400_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6790029(Table &tbl_SerializeFromObject_TD_7263634_input, Table &tbl_Filter_TD_6790029_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3892) AND (isnotnull(ss_sold_time_sk#3888) AND isnotnull(ss_store_sk#3894))))
    // Input: ListBuffer(ss_sold_time_sk#3888, ss_hdemo_sk#3892, ss_store_sk#3894)
    // Output: ListBuffer(ss_sold_time_sk#3888, ss_hdemo_sk#3892, ss_store_sk#3894)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7263634_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3892 = tbl_SerializeFromObject_TD_7263634_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3888 = tbl_SerializeFromObject_TD_7263634_input.getInt32(i, 0);
        int32_t _ss_store_sk3894 = tbl_SerializeFromObject_TD_7263634_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3892!= 0) && ((_ss_sold_time_sk3888!= 0) && (_ss_store_sk3894!= 0))) {
            int32_t _ss_sold_time_sk3888_t = tbl_SerializeFromObject_TD_7263634_input.getInt32(i, 0);
            tbl_Filter_TD_6790029_output.setInt32(r, 0, _ss_sold_time_sk3888_t);
            int32_t _ss_hdemo_sk3892_t = tbl_SerializeFromObject_TD_7263634_input.getInt32(i, 1);
            tbl_Filter_TD_6790029_output.setInt32(r, 1, _ss_hdemo_sk3892_t);
            int32_t _ss_store_sk3894_t = tbl_SerializeFromObject_TD_7263634_input.getInt32(i, 2);
            tbl_Filter_TD_6790029_output.setInt32(r, 2, _ss_store_sk3894_t);
            r++;
        }
    }
    tbl_Filter_TD_6790029_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6790029_output #Row: " << tbl_Filter_TD_6790029_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6871324(Table &tbl_SerializeFromObject_TD_7319985_input, Table &tbl_Filter_TD_6871324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3851) AND isnotnull(t_minute#3852)) AND ((t_hour#3851 = 11) AND (t_minute#3852 < 30))) AND isnotnull(t_time_sk#3848)))
    // Input: ListBuffer(t_time_sk#3848, t_hour#3851, t_minute#3852)
    // Output: ListBuffer(t_time_sk#3848)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7319985_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3851 = tbl_SerializeFromObject_TD_7319985_input.getInt32(i, 1);
        int32_t _t_minute3852 = tbl_SerializeFromObject_TD_7319985_input.getInt32(i, 2);
        int32_t _t_time_sk3848 = tbl_SerializeFromObject_TD_7319985_input.getInt32(i, 0);
        if ((((_t_hour3851!= 0) && (_t_minute3852!= 0)) && ((_t_hour3851 == 11) && (_t_minute3852 < 30))) && (_t_time_sk3848!= 0)) {
            int32_t _t_time_sk3848_t = tbl_SerializeFromObject_TD_7319985_input.getInt32(i, 0);
            tbl_Filter_TD_6871324_output.setInt32(r, 0, _t_time_sk3848_t);
            r++;
        }
    }
    tbl_Filter_TD_6871324_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6871324_output #Row: " << tbl_Filter_TD_6871324_output.getNumRow() << std::endl;
}


void SW_Filter_TD_6223171(Table &tbl_SerializeFromObject_TD_7227696_input, Table &tbl_Filter_TD_6223171_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3796) AND (s_store_name#3796 = ese)) AND isnotnull(s_store_sk#3791)))
    // Input: ListBuffer(s_store_sk#3791, s_store_name#3796)
    // Output: ListBuffer(s_store_sk#3791)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7227696_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3796 = tbl_SerializeFromObject_TD_7227696_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3791 = tbl_SerializeFromObject_TD_7227696_input.getInt32(i, 0);
        if (((std::string(_s_store_name3796.data()) != "NULL") && (std::string(_s_store_name3796.data()) == "ese")) && (_s_store_sk3791!= 0)) {
            int32_t _s_store_sk3791_t = tbl_SerializeFromObject_TD_7227696_input.getInt32(i, 0);
            tbl_Filter_TD_6223171_output.setInt32(r, 0, _s_store_sk3791_t);
            r++;
        }
    }
    tbl_Filter_TD_6223171_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6223171_output #Row: " << tbl_Filter_TD_6223171_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_6738131(Table &tbl_JOIN_INNER_TD_7368483_output, Table &tbl_Aggregate_TD_6738131_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h9_30_to_10#3546L)
    // Input: ListBuffer(ss_store_sk#3626, s_store_sk#3657)
    // Output: ListBuffer(h9_30_to_10#3546L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_7368483_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3626 = tbl_JOIN_INNER_TD_7368483_output.getInt32(i, 0);
        int32_t _s_store_sk3657 = tbl_JOIN_INNER_TD_7368483_output.getInt32(i, 1);
        int64_t _h9_30_to_103546L_count_0 = 1;
        count_0 += _h9_30_to_103546L_count_0;
    }
    int r = 0;
    int64_t _h9_30_to_103546L = count_0;
    tbl_Aggregate_TD_6738131_output.setInt64(r++, 0, _h9_30_to_103546L);
    tbl_Aggregate_TD_6738131_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6738131_output #Row: " << tbl_Aggregate_TD_6738131_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_6904405(Table &tbl_Aggregate_TD_7743755_output, Table &tbl_Aggregate_TD_7605546_output, Table &tbl_JOIN_CROSS_TD_6904405_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L)
    // Right Table: ListBuffer(h9_to_9_30#3545L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L)
    int left_nrow = tbl_Aggregate_TD_7743755_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_7605546_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_6904405_output.setInt64(r, 0, tbl_Aggregate_TD_7743755_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_6904405_output.setInt64(r, 1, tbl_Aggregate_TD_7605546_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_6904405_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_6904405_output #Row: " << tbl_JOIN_CROSS_TD_6904405_output.getNumRow() << std::endl;
}

void SW_Filter_TD_537235(Table &tbl_SerializeFromObject_TD_6642400_input, Table &tbl_Filter_TD_537235_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((hd_dep_count#3980 = 4) AND (hd_vehicle_count#3981 <= 6)) OR ((hd_dep_count#3980 = 2) AND (hd_vehicle_count#3981 <= 4))) OR ((hd_dep_count#3980 = 0) AND (hd_vehicle_count#3981 <= 2))) AND isnotnull(hd_demo_sk#3977)))
    // Input: ListBuffer(hd_demo_sk#3977, hd_dep_count#3980, hd_vehicle_count#3981)
    // Output: ListBuffer(hd_demo_sk#3977)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6642400_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count3980 = tbl_SerializeFromObject_TD_6642400_input.getInt32(i, 1);
        int32_t _hd_vehicle_count3981 = tbl_SerializeFromObject_TD_6642400_input.getInt32(i, 2);
        int32_t _hd_demo_sk3977 = tbl_SerializeFromObject_TD_6642400_input.getInt32(i, 0);
        if (((((_hd_dep_count3980 == 4) && (_hd_vehicle_count3981 <= 6)) || ((_hd_dep_count3980 == 2) && (_hd_vehicle_count3981 <= 4))) || ((_hd_dep_count3980 == 0) && (_hd_vehicle_count3981 <= 2))) && (_hd_demo_sk3977!= 0)) {
            int32_t _hd_demo_sk3977_t = tbl_SerializeFromObject_TD_6642400_input.getInt32(i, 0);
            tbl_Filter_TD_537235_output.setInt32(r, 0, _hd_demo_sk3977_t);
            r++;
        }
    }
    tbl_Filter_TD_537235_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_537235_output #Row: " << tbl_Filter_TD_537235_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5101797(Table &tbl_SerializeFromObject_TD_6817913_input, Table &tbl_Filter_TD_5101797_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_hdemo_sk#3959) AND (isnotnull(ss_sold_time_sk#3955) AND isnotnull(ss_store_sk#3961))))
    // Input: ListBuffer(ss_sold_time_sk#3955, ss_hdemo_sk#3959, ss_store_sk#3961)
    // Output: ListBuffer(ss_sold_time_sk#3955, ss_hdemo_sk#3959, ss_store_sk#3961)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6817913_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_hdemo_sk3959 = tbl_SerializeFromObject_TD_6817913_input.getInt32(i, 1);
        int32_t _ss_sold_time_sk3955 = tbl_SerializeFromObject_TD_6817913_input.getInt32(i, 0);
        int32_t _ss_store_sk3961 = tbl_SerializeFromObject_TD_6817913_input.getInt32(i, 2);
        if ((_ss_hdemo_sk3959!= 0) && ((_ss_sold_time_sk3955!= 0) && (_ss_store_sk3961!= 0))) {
            int32_t _ss_sold_time_sk3955_t = tbl_SerializeFromObject_TD_6817913_input.getInt32(i, 0);
            tbl_Filter_TD_5101797_output.setInt32(r, 0, _ss_sold_time_sk3955_t);
            int32_t _ss_hdemo_sk3959_t = tbl_SerializeFromObject_TD_6817913_input.getInt32(i, 1);
            tbl_Filter_TD_5101797_output.setInt32(r, 1, _ss_hdemo_sk3959_t);
            int32_t _ss_store_sk3961_t = tbl_SerializeFromObject_TD_6817913_input.getInt32(i, 2);
            tbl_Filter_TD_5101797_output.setInt32(r, 2, _ss_store_sk3961_t);
            r++;
        }
    }
    tbl_Filter_TD_5101797_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5101797_output #Row: " << tbl_Filter_TD_5101797_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5997564(Table &tbl_SerializeFromObject_TD_6232882_input, Table &tbl_Filter_TD_5997564_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3918) AND isnotnull(t_minute#3919)) AND ((t_hour#3918 = 11) AND (t_minute#3919 >= 30))) AND isnotnull(t_time_sk#3915)))
    // Input: ListBuffer(t_time_sk#3915, t_hour#3918, t_minute#3919)
    // Output: ListBuffer(t_time_sk#3915)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6232882_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3918 = tbl_SerializeFromObject_TD_6232882_input.getInt32(i, 1);
        int32_t _t_minute3919 = tbl_SerializeFromObject_TD_6232882_input.getInt32(i, 2);
        int32_t _t_time_sk3915 = tbl_SerializeFromObject_TD_6232882_input.getInt32(i, 0);
        if ((((_t_hour3918!= 0) && (_t_minute3919!= 0)) && ((_t_hour3918 == 11) && (_t_minute3919 >= 30))) && (_t_time_sk3915!= 0)) {
            int32_t _t_time_sk3915_t = tbl_SerializeFromObject_TD_6232882_input.getInt32(i, 0);
            tbl_Filter_TD_5997564_output.setInt32(r, 0, _t_time_sk3915_t);
            r++;
        }
    }
    tbl_Filter_TD_5997564_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5997564_output #Row: " << tbl_Filter_TD_5997564_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5565333(Table &tbl_SerializeFromObject_TD_6741266_input, Table &tbl_Filter_TD_5565333_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3863) AND (s_store_name#3863 = ese)) AND isnotnull(s_store_sk#3858)))
    // Input: ListBuffer(s_store_sk#3858, s_store_name#3863)
    // Output: ListBuffer(s_store_sk#3858)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6741266_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3863 = tbl_SerializeFromObject_TD_6741266_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3858 = tbl_SerializeFromObject_TD_6741266_input.getInt32(i, 0);
        if (((std::string(_s_store_name3863.data()) != "NULL") && (std::string(_s_store_name3863.data()) == "ese")) && (_s_store_sk3858!= 0)) {
            int32_t _s_store_sk3858_t = tbl_SerializeFromObject_TD_6741266_input.getInt32(i, 0);
            tbl_Filter_TD_5565333_output.setInt32(r, 0, _s_store_sk3858_t);
            r++;
        }
    }
    tbl_Filter_TD_5565333_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5565333_output #Row: " << tbl_Filter_TD_5565333_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_5917431(Table &tbl_JOIN_INNER_TD_63565_output, Table &tbl_Aggregate_TD_5917431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h10_to_10_30#3547L)
    // Input: ListBuffer(ss_store_sk#3693, s_store_sk#3724)
    // Output: ListBuffer(h10_to_10_30#3547L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_63565_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3693 = tbl_JOIN_INNER_TD_63565_output.getInt32(i, 0);
        int32_t _s_store_sk3724 = tbl_JOIN_INNER_TD_63565_output.getInt32(i, 1);
        int64_t _h10_to_10_303547L_count_0 = 1;
        count_0 += _h10_to_10_303547L_count_0;
    }
    int r = 0;
    int64_t _h10_to_10_303547L = count_0;
    tbl_Aggregate_TD_5917431_output.setInt64(r++, 0, _h10_to_10_303547L);
    tbl_Aggregate_TD_5917431_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5917431_output #Row: " << tbl_Aggregate_TD_5917431_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_5166568(Table &tbl_JOIN_CROSS_TD_6904405_output, Table &tbl_Aggregate_TD_6738131_output, Table &tbl_JOIN_CROSS_TD_5166568_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L)
    // Right Table: ListBuffer(h9_30_to_10#3546L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L)
    int left_nrow = tbl_JOIN_CROSS_TD_6904405_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_6738131_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_5166568_output.setInt64(r, 0, tbl_JOIN_CROSS_TD_6904405_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_5166568_output.setInt64(r, 1, tbl_JOIN_CROSS_TD_6904405_output.getInt64(i, 1));
            tbl_JOIN_CROSS_TD_5166568_output.setInt64(r, 2, tbl_Aggregate_TD_6738131_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_5166568_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_5166568_output #Row: " << tbl_JOIN_CROSS_TD_5166568_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4249902(Table &tbl_SerializeFromObject_TD_5149881_input, Table &tbl_Filter_TD_4249902_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(t_hour#3985) AND isnotnull(t_minute#3986)) AND ((t_hour#3985 = 12) AND (t_minute#3986 < 30))) AND isnotnull(t_time_sk#3982)))
    // Input: ListBuffer(t_time_sk#3982, t_hour#3985, t_minute#3986)
    // Output: ListBuffer(t_time_sk#3982)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5149881_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour3985 = tbl_SerializeFromObject_TD_5149881_input.getInt32(i, 1);
        int32_t _t_minute3986 = tbl_SerializeFromObject_TD_5149881_input.getInt32(i, 2);
        int32_t _t_time_sk3982 = tbl_SerializeFromObject_TD_5149881_input.getInt32(i, 0);
        if ((((_t_hour3985!= 0) && (_t_minute3986!= 0)) && ((_t_hour3985 == 12) && (_t_minute3986 < 30))) && (_t_time_sk3982!= 0)) {
            int32_t _t_time_sk3982_t = tbl_SerializeFromObject_TD_5149881_input.getInt32(i, 0);
            tbl_Filter_TD_4249902_output.setInt32(r, 0, _t_time_sk3982_t);
            r++;
        }
    }
    tbl_Filter_TD_4249902_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4249902_output #Row: " << tbl_Filter_TD_4249902_output.getNumRow() << std::endl;
}


void SW_Filter_TD_448681(Table &tbl_SerializeFromObject_TD_5419162_input, Table &tbl_Filter_TD_448681_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3930) AND (s_store_name#3930 = ese)) AND isnotnull(s_store_sk#3925)))
    // Input: ListBuffer(s_store_sk#3925, s_store_name#3930)
    // Output: ListBuffer(s_store_sk#3925)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5419162_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3930 = tbl_SerializeFromObject_TD_5419162_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3925 = tbl_SerializeFromObject_TD_5419162_input.getInt32(i, 0);
        if (((std::string(_s_store_name3930.data()) != "NULL") && (std::string(_s_store_name3930.data()) == "ese")) && (_s_store_sk3925!= 0)) {
            int32_t _s_store_sk3925_t = tbl_SerializeFromObject_TD_5419162_input.getInt32(i, 0);
            tbl_Filter_TD_448681_output.setInt32(r, 0, _s_store_sk3925_t);
            r++;
        }
    }
    tbl_Filter_TD_448681_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_448681_output #Row: " << tbl_Filter_TD_448681_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_4827417(Table &tbl_JOIN_INNER_TD_5669785_output, Table &tbl_Aggregate_TD_4827417_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h10_30_to_11#3548L)
    // Input: ListBuffer(ss_store_sk#3760, s_store_sk#3791)
    // Output: ListBuffer(h10_30_to_11#3548L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_5669785_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3760 = tbl_JOIN_INNER_TD_5669785_output.getInt32(i, 0);
        int32_t _s_store_sk3791 = tbl_JOIN_INNER_TD_5669785_output.getInt32(i, 1);
        int64_t _h10_30_to_113548L_count_0 = 1;
        count_0 += _h10_30_to_113548L_count_0;
    }
    int r = 0;
    int64_t _h10_30_to_113548L = count_0;
    tbl_Aggregate_TD_4827417_output.setInt64(r++, 0, _h10_30_to_113548L);
    tbl_Aggregate_TD_4827417_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_4827417_output #Row: " << tbl_Aggregate_TD_4827417_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_4793839(Table &tbl_JOIN_CROSS_TD_5166568_output, Table &tbl_Aggregate_TD_5917431_output, Table &tbl_JOIN_CROSS_TD_4793839_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L)
    // Right Table: ListBuffer(h10_to_10_30#3547L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L)
    int left_nrow = tbl_JOIN_CROSS_TD_5166568_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5917431_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_4793839_output.setInt64(r, 0, tbl_JOIN_CROSS_TD_5166568_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_4793839_output.setInt64(r, 1, tbl_JOIN_CROSS_TD_5166568_output.getInt64(i, 1));
            tbl_JOIN_CROSS_TD_4793839_output.setInt64(r, 2, tbl_JOIN_CROSS_TD_5166568_output.getInt64(i, 2));
            tbl_JOIN_CROSS_TD_4793839_output.setInt64(r, 3, tbl_Aggregate_TD_5917431_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_4793839_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_4793839_output #Row: " << tbl_JOIN_CROSS_TD_4793839_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3451200(Table &tbl_SerializeFromObject_TD_4381387_input, Table &tbl_Filter_TD_3451200_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(s_store_name#3997) AND (s_store_name#3997 = ese)) AND isnotnull(s_store_sk#3992)))
    // Input: ListBuffer(s_store_sk#3992, s_store_name#3997)
    // Output: ListBuffer(s_store_sk#3992)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4381387_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name3997 = tbl_SerializeFromObject_TD_4381387_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _s_store_sk3992 = tbl_SerializeFromObject_TD_4381387_input.getInt32(i, 0);
        if (((std::string(_s_store_name3997.data()) != "NULL") && (std::string(_s_store_name3997.data()) == "ese")) && (_s_store_sk3992!= 0)) {
            int32_t _s_store_sk3992_t = tbl_SerializeFromObject_TD_4381387_input.getInt32(i, 0);
            tbl_Filter_TD_3451200_output.setInt32(r, 0, _s_store_sk3992_t);
            r++;
        }
    }
    tbl_Filter_TD_3451200_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3451200_output #Row: " << tbl_Filter_TD_3451200_output.getNumRow() << std::endl;
}



void SW_Aggregate_TD_398017(Table &tbl_JOIN_INNER_TD_4574010_output, Table &tbl_Aggregate_TD_398017_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h11_to_11_30#3549L)
    // Input: ListBuffer(ss_store_sk#3827, s_store_sk#3858)
    // Output: ListBuffer(h11_to_11_30#3549L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_4574010_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3827 = tbl_JOIN_INNER_TD_4574010_output.getInt32(i, 0);
        int32_t _s_store_sk3858 = tbl_JOIN_INNER_TD_4574010_output.getInt32(i, 1);
        int64_t _h11_to_11_303549L_count_0 = 1;
        count_0 += _h11_to_11_303549L_count_0;
    }
    int r = 0;
    int64_t _h11_to_11_303549L = count_0;
    tbl_Aggregate_TD_398017_output.setInt64(r++, 0, _h11_to_11_303549L);
    tbl_Aggregate_TD_398017_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_398017_output #Row: " << tbl_Aggregate_TD_398017_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_3727074(Table &tbl_JOIN_CROSS_TD_4793839_output, Table &tbl_Aggregate_TD_4827417_output, Table &tbl_JOIN_CROSS_TD_3727074_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L)
    // Right Table: ListBuffer(h10_30_to_11#3548L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L)
    int left_nrow = tbl_JOIN_CROSS_TD_4793839_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_4827417_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_3727074_output.setInt64(r, 0, tbl_JOIN_CROSS_TD_4793839_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_3727074_output.setInt64(r, 1, tbl_JOIN_CROSS_TD_4793839_output.getInt64(i, 1));
            tbl_JOIN_CROSS_TD_3727074_output.setInt64(r, 2, tbl_JOIN_CROSS_TD_4793839_output.getInt64(i, 2));
            tbl_JOIN_CROSS_TD_3727074_output.setInt64(r, 3, tbl_JOIN_CROSS_TD_4793839_output.getInt64(i, 3));
            tbl_JOIN_CROSS_TD_3727074_output.setInt64(r, 4, tbl_Aggregate_TD_4827417_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_3727074_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_3727074_output #Row: " << tbl_JOIN_CROSS_TD_3727074_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_2142152(Table &tbl_JOIN_INNER_TD_3193411_output, Table &tbl_Aggregate_TD_2142152_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h11_30_to_12#3550L)
    // Input: ListBuffer(ss_store_sk#3894, s_store_sk#3925)
    // Output: ListBuffer(h11_30_to_12#3550L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3193411_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3894 = tbl_JOIN_INNER_TD_3193411_output.getInt32(i, 0);
        int32_t _s_store_sk3925 = tbl_JOIN_INNER_TD_3193411_output.getInt32(i, 1);
        int64_t _h11_30_to_123550L_count_0 = 1;
        count_0 += _h11_30_to_123550L_count_0;
    }
    int r = 0;
    int64_t _h11_30_to_123550L = count_0;
    tbl_Aggregate_TD_2142152_output.setInt64(r++, 0, _h11_30_to_123550L);
    tbl_Aggregate_TD_2142152_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2142152_output #Row: " << tbl_Aggregate_TD_2142152_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_2343626(Table &tbl_JOIN_CROSS_TD_3727074_output, Table &tbl_Aggregate_TD_398017_output, Table &tbl_JOIN_CROSS_TD_2343626_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L)
    // Right Table: ListBuffer(h11_to_11_30#3549L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L, h11_to_11_30#3549L)
    int left_nrow = tbl_JOIN_CROSS_TD_3727074_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_398017_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_2343626_output.setInt64(r, 0, tbl_JOIN_CROSS_TD_3727074_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_2343626_output.setInt64(r, 1, tbl_JOIN_CROSS_TD_3727074_output.getInt64(i, 1));
            tbl_JOIN_CROSS_TD_2343626_output.setInt64(r, 2, tbl_JOIN_CROSS_TD_3727074_output.getInt64(i, 2));
            tbl_JOIN_CROSS_TD_2343626_output.setInt64(r, 3, tbl_JOIN_CROSS_TD_3727074_output.getInt64(i, 3));
            tbl_JOIN_CROSS_TD_2343626_output.setInt64(r, 4, tbl_JOIN_CROSS_TD_3727074_output.getInt64(i, 4));
            tbl_JOIN_CROSS_TD_2343626_output.setInt64(r, 5, tbl_Aggregate_TD_398017_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_2343626_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_2343626_output #Row: " << tbl_JOIN_CROSS_TD_2343626_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1846351(Table &tbl_JOIN_INNER_TD_2330074_output, Table &tbl_Aggregate_TD_1846351_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS h12_to_12_30#3551L)
    // Input: ListBuffer(ss_store_sk#3961, s_store_sk#3992)
    // Output: ListBuffer(h12_to_12_30#3551L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_2330074_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3961 = tbl_JOIN_INNER_TD_2330074_output.getInt32(i, 0);
        int32_t _s_store_sk3992 = tbl_JOIN_INNER_TD_2330074_output.getInt32(i, 1);
        int64_t _h12_to_12_303551L_count_0 = 1;
        count_0 += _h12_to_12_303551L_count_0;
    }
    int r = 0;
    int64_t _h12_to_12_303551L = count_0;
    tbl_Aggregate_TD_1846351_output.setInt64(r++, 0, _h12_to_12_303551L);
    tbl_Aggregate_TD_1846351_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1846351_output #Row: " << tbl_Aggregate_TD_1846351_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1823139(Table &tbl_JOIN_CROSS_TD_2343626_output, Table &tbl_Aggregate_TD_2142152_output, Table &tbl_JOIN_CROSS_TD_1823139_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L, h11_to_11_30#3549L)
    // Right Table: ListBuffer(h11_30_to_12#3550L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L, h11_to_11_30#3549L, h11_30_to_12#3550L)
    int left_nrow = tbl_JOIN_CROSS_TD_2343626_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_2142152_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 0, tbl_JOIN_CROSS_TD_2343626_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 1, tbl_JOIN_CROSS_TD_2343626_output.getInt64(i, 1));
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 2, tbl_JOIN_CROSS_TD_2343626_output.getInt64(i, 2));
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 3, tbl_JOIN_CROSS_TD_2343626_output.getInt64(i, 3));
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 4, tbl_JOIN_CROSS_TD_2343626_output.getInt64(i, 4));
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 5, tbl_JOIN_CROSS_TD_2343626_output.getInt64(i, 5));
            tbl_JOIN_CROSS_TD_1823139_output.setInt64(r, 6, tbl_Aggregate_TD_2142152_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_1823139_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1823139_output #Row: " << tbl_JOIN_CROSS_TD_1823139_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_0739177(Table &tbl_JOIN_CROSS_TD_1823139_output, Table &tbl_Aggregate_TD_1846351_output, Table &tbl_JOIN_CROSS_TD_0739177_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L, h11_to_11_30#3549L, h11_30_to_12#3550L)
    // Right Table: ListBuffer(h12_to_12_30#3551L)
    // Output Table: ListBuffer(h8_30_to_9#3544L, h9_to_9_30#3545L, h9_30_to_10#3546L, h10_to_10_30#3547L, h10_30_to_11#3548L, h11_to_11_30#3549L, h11_30_to_12#3550L, h12_to_12_30#3551L)
    int left_nrow = tbl_JOIN_CROSS_TD_1823139_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_1846351_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 0, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 0));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 1, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 1));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 2, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 2));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 3, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 3));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 4, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 4));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 5, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 5));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 6, tbl_JOIN_CROSS_TD_1823139_output.getInt64(i, 6));
            tbl_JOIN_CROSS_TD_0739177_output.setInt64(r, 7, tbl_Aggregate_TD_1846351_output.getInt64(j, 0));
            ++r;
        }
    }
    tbl_JOIN_CROSS_TD_0739177_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_0739177_output #Row: " << tbl_JOIN_CROSS_TD_0739177_output.getNumRow() << std::endl;
}

