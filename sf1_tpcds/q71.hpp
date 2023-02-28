#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_7180290(Table &tbl_SerializeFromObject_TD_8559777_input, Table &tbl_Filter_TD_7180290_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#3595) AND isnotnull(d_year#3593)) AND ((d_moy#3595 = 11) AND (d_year#3593 = 1999))) AND isnotnull(d_date_sk#3587)))
    // Input: ListBuffer(d_date_sk#3587, d_moy#3595, d_year#3593)
    // Output: ListBuffer(d_date_sk#3587)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8559777_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy3595 = tbl_SerializeFromObject_TD_8559777_input.getInt32(i, 1);
        int32_t _d_year3593 = tbl_SerializeFromObject_TD_8559777_input.getInt32(i, 2);
        int32_t _d_date_sk3587 = tbl_SerializeFromObject_TD_8559777_input.getInt32(i, 0);
        if ((((_d_moy3595!= 0) && (_d_year3593!= 0)) && ((_d_moy3595 == 11) && (_d_year3593 == 1999))) && (_d_date_sk3587!= 0)) {
            int32_t _d_date_sk3587_t = tbl_SerializeFromObject_TD_8559777_input.getInt32(i, 0);
            tbl_Filter_TD_7180290_output.setInt32(r, 0, _d_date_sk3587_t);
            r++;
        }
    }
    tbl_Filter_TD_7180290_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7180290_output #Row: " << tbl_Filter_TD_7180290_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7718772(Table &tbl_SerializeFromObject_TD_8834351_input, Table &tbl_Filter_TD_7718772_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_time_sk#1207))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8834351_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_8834351_input.getInt32(i, 0);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_8834351_input.getInt32(i, 2);
        int32_t _ss_sold_time_sk1207 = tbl_SerializeFromObject_TD_8834351_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_item_sk1208!= 0) && (_ss_sold_time_sk1207!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_8834351_input.getInt32(i, 0);
            tbl_Filter_TD_7718772_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_sold_time_sk1207_t = tbl_SerializeFromObject_TD_8834351_input.getInt32(i, 1);
            tbl_Filter_TD_7718772_output.setInt32(r, 1, _ss_sold_time_sk1207_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_8834351_input.getInt32(i, 2);
            tbl_Filter_TD_7718772_output.setInt32(r, 2, _ss_item_sk1208_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_8834351_input.getInt64(i, 3);
            tbl_Filter_TD_7718772_output.setInt64(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_7718772_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7718772_output #Row: " << tbl_Filter_TD_7718772_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7628179(Table &tbl_SerializeFromObject_TD_8433798_input, Table &tbl_Filter_TD_7628179_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#3567) AND isnotnull(d_year#3565)) AND ((d_moy#3567 = 11) AND (d_year#3565 = 1999))) AND isnotnull(d_date_sk#3559)))
    // Input: ListBuffer(d_date_sk#3559, d_moy#3567, d_year#3565)
    // Output: ListBuffer(d_date_sk#3559)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8433798_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy3567 = tbl_SerializeFromObject_TD_8433798_input.getInt32(i, 1);
        int32_t _d_year3565 = tbl_SerializeFromObject_TD_8433798_input.getInt32(i, 2);
        int32_t _d_date_sk3559 = tbl_SerializeFromObject_TD_8433798_input.getInt32(i, 0);
        if ((((_d_moy3567!= 0) && (_d_year3565!= 0)) && ((_d_moy3567 == 11) && (_d_year3565 == 1999))) && (_d_date_sk3559!= 0)) {
            int32_t _d_date_sk3559_t = tbl_SerializeFromObject_TD_8433798_input.getInt32(i, 0);
            tbl_Filter_TD_7628179_output.setInt32(r, 0, _d_date_sk3559_t);
            r++;
        }
    }
    tbl_Filter_TD_7628179_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7628179_output #Row: " << tbl_Filter_TD_7628179_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7183819(Table &tbl_SerializeFromObject_TD_83874_input, Table &tbl_Filter_TD_7183819_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND (isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_time_sk#1105))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_sold_time_sk#1105, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_83874_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_83874_input.getInt32(i, 0);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_83874_input.getInt32(i, 2);
        int32_t _cs_sold_time_sk1105 = tbl_SerializeFromObject_TD_83874_input.getInt32(i, 1);
        if ((_cs_sold_date_sk1104!= 0) && ((_cs_item_sk1119!= 0) && (_cs_sold_time_sk1105!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_83874_input.getInt32(i, 0);
            tbl_Filter_TD_7183819_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_sold_time_sk1105_t = tbl_SerializeFromObject_TD_83874_input.getInt32(i, 1);
            tbl_Filter_TD_7183819_output.setInt32(r, 1, _cs_sold_time_sk1105_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_83874_input.getInt32(i, 2);
            tbl_Filter_TD_7183819_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_83874_input.getInt64(i, 3);
            tbl_Filter_TD_7183819_output.setInt64(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_7183819_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7183819_output #Row: " << tbl_Filter_TD_7183819_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7613180(Table &tbl_SerializeFromObject_TD_8368299_input, Table &tbl_Filter_TD_7613180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_moy#128) AND isnotnull(d_year#126)) AND ((d_moy#128 = 11) AND (d_year#126 = 1999))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_moy#128, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8368299_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_8368299_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8368299_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8368299_input.getInt32(i, 0);
        if ((((_d_moy128!= 0) && (_d_year126!= 0)) && ((_d_moy128 == 11) && (_d_year126 == 1999))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8368299_input.getInt32(i, 0);
            tbl_Filter_TD_7613180_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7613180_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7613180_output #Row: " << tbl_Filter_TD_7613180_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7473994(Table &tbl_SerializeFromObject_TD_8862066_input, Table &tbl_Filter_TD_7473994_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND (isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_time_sk#730))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_item_sk#732, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_sold_time_sk#730, ws_item_sk#732, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8862066_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_8862066_input.getInt32(i, 0);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_8862066_input.getInt32(i, 2);
        int32_t _ws_sold_time_sk730 = tbl_SerializeFromObject_TD_8862066_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && ((_ws_item_sk732!= 0) && (_ws_sold_time_sk730!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_8862066_input.getInt32(i, 0);
            tbl_Filter_TD_7473994_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_sold_time_sk730_t = tbl_SerializeFromObject_TD_8862066_input.getInt32(i, 1);
            tbl_Filter_TD_7473994_output.setInt32(r, 1, _ws_sold_time_sk730_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_8862066_input.getInt32(i, 2);
            tbl_Filter_TD_7473994_output.setInt32(r, 2, _ws_item_sk732_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_8862066_input.getInt64(i, 3);
            tbl_Filter_TD_7473994_output.setInt64(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_7473994_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7473994_output #Row: " << tbl_Filter_TD_7473994_output.getNumRow() << std::endl;
}




void SW_Project_TD_5237201(Table &tbl_JOIN_INNER_TD_6963972_output, Table &tbl_Project_TD_5237201_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_ext_sales_price#1221 AS ext_price#3552, ss_item_sk#1208 AS sold_item_sk#3554, ss_sold_time_sk#1207 AS time_sk#3555)
    // Input: ListBuffer(ss_ext_sales_price#1221, ss_item_sk#1208, ss_sold_time_sk#1207)
    // Output: ListBuffer(ext_price#3552, sold_item_sk#3554, time_sk#3555)
    int nrow1 = tbl_JOIN_INNER_TD_6963972_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_6963972_output.getInt64(i, 0);
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_6963972_output.getInt32(i, 1);
        int32_t _ss_sold_time_sk1207 = tbl_JOIN_INNER_TD_6963972_output.getInt32(i, 2);
        int64_t _ext_price3552 = _ss_ext_sales_price1221;
        tbl_Project_TD_5237201_output.setInt64(i, 0, _ext_price3552);
        int32_t _sold_item_sk3554 = _ss_item_sk1208;
        tbl_Project_TD_5237201_output.setInt32(i, 1, _sold_item_sk3554);
        int32_t _time_sk3555 = _ss_sold_time_sk1207;
        tbl_Project_TD_5237201_output.setInt32(i, 2, _time_sk3555);
    }
    tbl_Project_TD_5237201_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5237201_output #Row: " << tbl_Project_TD_5237201_output.getNumRow() << std::endl;
}

void SW_Project_TD_5909207(Table &tbl_JOIN_INNER_TD_6131820_output, Table &tbl_Project_TD_5909207_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_ext_sales_price#1127 AS ext_price#3548, cs_item_sk#1119 AS sold_item_sk#3550, cs_sold_time_sk#1105 AS time_sk#3551)
    // Input: ListBuffer(cs_ext_sales_price#1127, cs_item_sk#1119, cs_sold_time_sk#1105)
    // Output: ListBuffer(ext_price#3548, sold_item_sk#3550, time_sk#3551)
    int nrow1 = tbl_JOIN_INNER_TD_6131820_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_6131820_output.getInt64(i, 0);
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_6131820_output.getInt32(i, 1);
        int32_t _cs_sold_time_sk1105 = tbl_JOIN_INNER_TD_6131820_output.getInt32(i, 2);
        int64_t _ext_price3548 = _cs_ext_sales_price1127;
        tbl_Project_TD_5909207_output.setInt64(i, 0, _ext_price3548);
        int32_t _sold_item_sk3550 = _cs_item_sk1119;
        tbl_Project_TD_5909207_output.setInt32(i, 1, _sold_item_sk3550);
        int32_t _time_sk3551 = _cs_sold_time_sk1105;
        tbl_Project_TD_5909207_output.setInt32(i, 2, _time_sk3551);
    }
    tbl_Project_TD_5909207_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5909207_output #Row: " << tbl_Project_TD_5909207_output.getNumRow() << std::endl;
}

void SW_Project_TD_5105416(Table &tbl_JOIN_INNER_TD_6489857_output, Table &tbl_Project_TD_5105416_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_ext_sales_price#752 AS ext_price#3544, ws_item_sk#732 AS sold_item_sk#3546, ws_sold_time_sk#730 AS time_sk#3547)
    // Input: ListBuffer(ws_ext_sales_price#752, ws_item_sk#732, ws_sold_time_sk#730)
    // Output: ListBuffer(ext_price#3544, sold_item_sk#3546, time_sk#3547)
    int nrow1 = tbl_JOIN_INNER_TD_6489857_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_6489857_output.getInt64(i, 0);
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_6489857_output.getInt32(i, 1);
        int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_6489857_output.getInt32(i, 2);
        int64_t _ext_price3544 = _ws_ext_sales_price752;
        tbl_Project_TD_5105416_output.setInt64(i, 0, _ext_price3544);
        int32_t _sold_item_sk3546 = _ws_item_sk732;
        tbl_Project_TD_5105416_output.setInt32(i, 1, _sold_item_sk3546);
        int32_t _time_sk3547 = _ws_sold_time_sk730;
        tbl_Project_TD_5105416_output.setInt32(i, 2, _time_sk3547);
    }
    tbl_Project_TD_5105416_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_5105416_output #Row: " << tbl_Project_TD_5105416_output.getNumRow() << std::endl;
}

void SW_Union_TD_4217488(Table &tbl_Project_TD_5105416_output, Table &tbl_Project_TD_5909207_output, Table &tbl_Project_TD_5237201_output, Table &tbl_Union_TD_4217488_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(ext_price#3544, sold_item_sk#3546, time_sk#3547)
    int r = 0;
    int row0 = tbl_Project_TD_5105416_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_4217488_output.setInt32(r, 0, tbl_Project_TD_5105416_output.getInt64(i, 0));
        tbl_Union_TD_4217488_output.setInt32(r, 1, tbl_Project_TD_5105416_output.getInt32(i, 1));
        tbl_Union_TD_4217488_output.setInt32(r, 2, tbl_Project_TD_5105416_output.getInt32(i, 2));
        ++r;
    }
    int row1 = tbl_Project_TD_5909207_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_4217488_output.setInt32(r, 0, tbl_Project_TD_5909207_output.getInt64(i, 0));
        tbl_Union_TD_4217488_output.setInt32(r, 1, tbl_Project_TD_5909207_output.getInt32(i, 1));
        tbl_Union_TD_4217488_output.setInt32(r, 2, tbl_Project_TD_5909207_output.getInt32(i, 2));
        ++r;
    }
    int row2 = tbl_Project_TD_5237201_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_4217488_output.setInt32(r, 0, tbl_Project_TD_5237201_output.getInt64(i, 0));
        tbl_Union_TD_4217488_output.setInt32(r, 1, tbl_Project_TD_5237201_output.getInt32(i, 1));
        tbl_Union_TD_4217488_output.setInt32(r, 2, tbl_Project_TD_5237201_output.getInt32(i, 2));
        ++r;
    }
    tbl_Union_TD_4217488_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4217488_output #Row: " << tbl_Union_TD_4217488_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4542583(Table &tbl_SerializeFromObject_TD_5371507_input, Table &tbl_Filter_TD_4542583_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manager_id#248) AND (i_manager_id#248 = 1)) AND isnotnull(i_item_sk#228)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236, i_manager_id#248)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5371507_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manager_id248 = tbl_SerializeFromObject_TD_5371507_input.getInt32(i, 3);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_5371507_input.getInt32(i, 0);
        if (((_i_manager_id248!= 0) && (_i_manager_id248 == 1)) && (_i_item_sk228!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_5371507_input.getInt32(i, 0);
            tbl_Filter_TD_4542583_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_5371507_input.getInt32(i, 1);
            tbl_Filter_TD_4542583_output.setInt32(r, 1, _i_brand_id235_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_t = tbl_SerializeFromObject_TD_5371507_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_4542583_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_brand236_t);
            r++;
        }
    }
    tbl_Filter_TD_4542583_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4542583_output #Row: " << tbl_Filter_TD_4542583_output.getNumRow() << std::endl;
}

void SW_Filter_TD_3461581(Table &tbl_SerializeFromObject_TD_4488424_input, Table &tbl_Filter_TD_3461581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((t_meal_time#474 = breakfast) OR (t_meal_time#474 = dinner)) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469, t_meal_time#474)
    // Output: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_4488424_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _t_meal_time474 = tbl_SerializeFromObject_TD_4488424_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_4488424_input.getInt32(i, 0);
        if (((std::string(_t_meal_time474.data()) == "breakfast") || (std::string(_t_meal_time474.data()) == "dinner")) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_4488424_input.getInt32(i, 0);
            tbl_Filter_TD_3461581_output.setInt32(r, 0, _t_time_sk465_t);
            int32_t _t_hour468_t = tbl_SerializeFromObject_TD_4488424_input.getInt32(i, 1);
            tbl_Filter_TD_3461581_output.setInt32(r, 1, _t_hour468_t);
            int32_t _t_minute469_t = tbl_SerializeFromObject_TD_4488424_input.getInt32(i, 2);
            tbl_Filter_TD_3461581_output.setInt32(r, 2, _t_minute469_t);
            r++;
        }
    }
    tbl_Filter_TD_3461581_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_3461581_output #Row: " << tbl_Filter_TD_3461581_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_361671_key_leftMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_361671_key_leftMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_361671_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_361671_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_361671_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    std::string _i_brand236;
};
struct SW_JOIN_INNER_TD_361671_key_rightMajor {
    int32_t _sold_item_sk3546;
    bool operator==(const SW_JOIN_INNER_TD_361671_key_rightMajor& other) const {
        return ((_sold_item_sk3546 == other._sold_item_sk3546));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_361671_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_361671_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_item_sk3546));
    }
};
}
struct SW_JOIN_INNER_TD_361671_payload_rightMajor {
    int64_t _ext_price3544;
    int32_t _sold_item_sk3546;
    int32_t _time_sk3547;
};
void SW_JOIN_INNER_TD_361671(Table &tbl_Filter_TD_4542583_output, Table &tbl_Union_TD_4217488_output, Table &tbl_JOIN_INNER_TD_361671_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((sold_item_sk#3546 = i_item_sk#228))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_brand#236)
    // Right Table: ListBuffer(ext_price#3544, sold_item_sk#3546, time_sk#3547)
    // Output Table: ListBuffer(i_brand_id#235, i_brand#236, ext_price#3544, time_sk#3547)
    int left_nrow = tbl_Filter_TD_4542583_output.getNumRow();
    int right_nrow = tbl_Union_TD_4217488_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_361671_key_leftMajor, SW_JOIN_INNER_TD_361671_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_4542583_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4542583_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_361671_key_leftMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_4542583_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_4542583_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_4542583_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            SW_JOIN_INNER_TD_361671_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_brand236};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_4217488_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_item_sk3546_k = tbl_Union_TD_4217488_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_361671_key_leftMajor{_sold_item_sk3546_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int64_t _ext_price3544 = tbl_Union_TD_4217488_output.getInt64(i, 0);
                int32_t _sold_item_sk3546 = tbl_Union_TD_4217488_output.getInt32(i, 1);
                int32_t _time_sk3547 = tbl_Union_TD_4217488_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_361671_output.setInt32(r, 0, _i_brand_id235);
                tbl_JOIN_INNER_TD_361671_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                tbl_JOIN_INNER_TD_361671_output.setInt64(r, 2, _ext_price3544);
                tbl_JOIN_INNER_TD_361671_output.setInt32(r, 3, _time_sk3547);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_361671_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_361671_key_rightMajor, SW_JOIN_INNER_TD_361671_payload_rightMajor> ht1;
        int nrow1 = tbl_Union_TD_4217488_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_item_sk3546_k = tbl_Union_TD_4217488_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_361671_key_rightMajor keyA{_sold_item_sk3546_k};
            int64_t _ext_price3544 = tbl_Union_TD_4217488_output.getInt64(i, 0);
            int32_t _sold_item_sk3546 = tbl_Union_TD_4217488_output.getInt32(i, 1);
            int32_t _time_sk3547 = tbl_Union_TD_4217488_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_361671_payload_rightMajor payloadA{_ext_price3544, _sold_item_sk3546, _time_sk3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4542583_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_4542583_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_361671_key_rightMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ext_price3544 = (it->second)._ext_price3544;
                int32_t _sold_item_sk3546 = (it->second)._sold_item_sk3546;
                int32_t _time_sk3547 = (it->second)._time_sk3547;
                int32_t _i_item_sk228 = tbl_Filter_TD_4542583_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_4542583_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_Filter_TD_4542583_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                tbl_JOIN_INNER_TD_361671_output.setInt64(r, 2, _ext_price3544);
                tbl_JOIN_INNER_TD_361671_output.setInt32(r, 3, _time_sk3547);
                tbl_JOIN_INNER_TD_361671_output.setInt32(r, 0, _i_brand_id235);
                tbl_JOIN_INNER_TD_361671_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_361671_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_361671_output #Row: " << tbl_JOIN_INNER_TD_361671_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_294675_key_leftMajor {
    int32_t _time_sk3547;
    bool operator==(const SW_JOIN_INNER_TD_294675_key_leftMajor& other) const {
        return ((_time_sk3547 == other._time_sk3547));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_294675_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_294675_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._time_sk3547));
    }
};
}
struct SW_JOIN_INNER_TD_294675_payload_leftMajor {
    int32_t _i_brand_id235;
    std::string _i_brand236;
    int64_t _ext_price3544;
    int32_t _time_sk3547;
};
struct SW_JOIN_INNER_TD_294675_key_rightMajor {
    int32_t _t_time_sk465;
    bool operator==(const SW_JOIN_INNER_TD_294675_key_rightMajor& other) const {
        return ((_t_time_sk465 == other._t_time_sk465));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_294675_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_294675_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk465));
    }
};
}
struct SW_JOIN_INNER_TD_294675_payload_rightMajor {
    int32_t _t_time_sk465;
    int32_t _t_hour468;
    int32_t _t_minute469;
};
void SW_JOIN_INNER_TD_294675(Table &tbl_JOIN_INNER_TD_361671_output, Table &tbl_Filter_TD_3461581_output, Table &tbl_JOIN_INNER_TD_294675_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((time_sk#3547 = t_time_sk#465))
    // Left Table: ListBuffer(i_brand_id#235, i_brand#236, ext_price#3544, time_sk#3547)
    // Right Table: ListBuffer(t_time_sk#465, t_hour#468, t_minute#469)
    // Output Table: ListBuffer(i_brand_id#235, i_brand#236, ext_price#3544, t_hour#468, t_minute#469)
    int left_nrow = tbl_JOIN_INNER_TD_361671_output.getNumRow();
    int right_nrow = tbl_Filter_TD_3461581_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_294675_key_leftMajor, SW_JOIN_INNER_TD_294675_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_361671_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _time_sk3547_k = tbl_JOIN_INNER_TD_361671_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_294675_key_leftMajor keyA{_time_sk3547_k};
            int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_361671_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_361671_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_brand236 = std::string(_i_brand236_n.data());
            int64_t _ext_price3544 = tbl_JOIN_INNER_TD_361671_output.getInt64(i, 2);
            int32_t _time_sk3547 = tbl_JOIN_INNER_TD_361671_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_294675_payload_leftMajor payloadA{_i_brand_id235, _i_brand236, _ext_price3544, _time_sk3547};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_3461581_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_3461581_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_294675_key_leftMajor{_t_time_sk465_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                std::string _i_brand236 = (it->second)._i_brand236;
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n{};
                memcpy(_i_brand236_n.data(), (_i_brand236).data(), (_i_brand236).length());
                int64_t _ext_price3544 = (it->second)._ext_price3544;
                int32_t _time_sk3547 = (it->second)._time_sk3547;
                int32_t _t_time_sk465 = tbl_Filter_TD_3461581_output.getInt32(i, 0);
                int32_t _t_hour468 = tbl_Filter_TD_3461581_output.getInt32(i, 1);
                int32_t _t_minute469 = tbl_Filter_TD_3461581_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_294675_output.setInt32(r, 0, _i_brand_id235);
                tbl_JOIN_INNER_TD_294675_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                tbl_JOIN_INNER_TD_294675_output.setInt64(r, 2, _ext_price3544);
                tbl_JOIN_INNER_TD_294675_output.setInt32(r, 3, _t_hour468);
                tbl_JOIN_INNER_TD_294675_output.setInt32(r, 4, _t_minute469);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_294675_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_294675_key_rightMajor, SW_JOIN_INNER_TD_294675_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_3461581_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_3461581_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_294675_key_rightMajor keyA{_t_time_sk465_k};
            int32_t _t_time_sk465 = tbl_Filter_TD_3461581_output.getInt32(i, 0);
            int32_t _t_hour468 = tbl_Filter_TD_3461581_output.getInt32(i, 1);
            int32_t _t_minute469 = tbl_Filter_TD_3461581_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_294675_payload_rightMajor payloadA{_t_time_sk465, _t_hour468, _t_minute469};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_361671_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _time_sk3547_k = tbl_JOIN_INNER_TD_361671_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_294675_key_rightMajor{_time_sk3547_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk465 = (it->second)._t_time_sk465;
                int32_t _t_hour468 = (it->second)._t_hour468;
                int32_t _t_minute469 = (it->second)._t_minute469;
                int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_361671_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_brand236_n = tbl_JOIN_INNER_TD_361671_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_brand236 = std::string(_i_brand236_n.data());
                int64_t _ext_price3544 = tbl_JOIN_INNER_TD_361671_output.getInt64(i, 2);
                int32_t _time_sk3547 = tbl_JOIN_INNER_TD_361671_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_294675_output.setInt32(r, 3, _t_hour468);
                tbl_JOIN_INNER_TD_294675_output.setInt32(r, 4, _t_minute469);
                tbl_JOIN_INNER_TD_294675_output.setInt32(r, 0, _i_brand_id235);
                tbl_JOIN_INNER_TD_294675_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_brand236_n);
                tbl_JOIN_INNER_TD_294675_output.setInt64(r, 2, _ext_price3544);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_294675_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_294675_output #Row: " << tbl_JOIN_INNER_TD_294675_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1474180_key {
    std::string _i_brand236;
    int32_t _i_brand_id235;
    int32_t _t_hour468;
    int32_t _t_minute469;
    bool operator==(const SW_Aggregate_TD_1474180_key& other) const { return (_i_brand236 == other._i_brand236) && (_i_brand_id235 == other._i_brand_id235) && (_t_hour468 == other._t_hour468) && (_t_minute469 == other._t_minute469); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1474180_key> {
    std::size_t operator() (const SW_Aggregate_TD_1474180_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_brand236)) + (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._t_hour468)) + (hash<int32_t>()(k._t_minute469));
    }
};
}
struct SW_Aggregate_TD_1474180_payload {
    int32_t _brand_id3556;
    std::string _brand3557;
    int64_t _ext_price3558_sum_0;
};
void SW_Aggregate_TD_1474180(Table &tbl_JOIN_INNER_TD_294675_output, Table &tbl_Aggregate_TD_1474180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand#236, i_brand_id#235, t_hour#468, t_minute#469, i_brand_id#235 AS brand_id#3556, i_brand#236 AS brand#3557, MakeDecimal(sum(UnscaledValue(ext_price#3544)),17,2) AS ext_price#3558)
    // Input: ListBuffer(i_brand_id#235, i_brand#236, ext_price#3544, t_hour#468, t_minute#469)
    // Output: ListBuffer(brand_id#3556, brand#3557, t_hour#468, t_minute#469, ext_price#3558)
    std::unordered_map<SW_Aggregate_TD_1474180_key, SW_Aggregate_TD_1474180_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_294675_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_294675_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_brand236 = tbl_JOIN_INNER_TD_294675_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int64_t _ext_price3544 = tbl_JOIN_INNER_TD_294675_output.getInt64(i, 2);
        int32_t _t_hour468 = tbl_JOIN_INNER_TD_294675_output.getInt32(i, 3);
        int32_t _t_minute469 = tbl_JOIN_INNER_TD_294675_output.getInt32(i, 4);
        SW_Aggregate_TD_1474180_key k{std::string(_i_brand236.data()), _i_brand_id235, _t_hour468, _t_minute469};
        int32_t _brand_id3556 = _i_brand_id235;
        std::array<char, TPCDS_READ_MAX + 1> _brand3557 = _i_brand236;
        int64_t _ext_price3558_sum_0 = _ext_price3544;
        SW_Aggregate_TD_1474180_payload p{_brand_id3556, std::string(_brand3557.data()), _ext_price3558_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._ext_price3558_sum_0 + _ext_price3558_sum_0;
            p._ext_price3558_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _i_brand236 not required in the output table
        // _i_brand_id235 not required in the output table
        tbl_Aggregate_TD_1474180_output.setInt32(r, 2, (it.first)._t_hour468);
        tbl_Aggregate_TD_1474180_output.setInt32(r, 3, (it.first)._t_minute469);
        tbl_Aggregate_TD_1474180_output.setInt32(r, 0, (it.second)._brand_id3556);
        std::array<char, TPCDS_READ_MAX + 1> _brand3557_n{};
        memcpy(_brand3557_n.data(), (it.second)._brand3557.data(), (it.second)._brand3557.length());
        tbl_Aggregate_TD_1474180_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _brand3557_n);
        int64_t _ext_price3558 = (it.second)._ext_price3558_sum_0;
        tbl_Aggregate_TD_1474180_output.setInt64(r, 4, _ext_price3558);
        ++r;
    }
    tbl_Aggregate_TD_1474180_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1474180_output #Row: " << tbl_Aggregate_TD_1474180_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0607550(Table &tbl_Aggregate_TD_1474180_output, Table &tbl_Sort_TD_0607550_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(ext_price#3558 DESC NULLS LAST, brand_id#3556 ASC NULLS FIRST)
    // Input: ListBuffer(brand_id#3556, brand#3557, t_hour#468, t_minute#469, ext_price#3558)
    // Output: ListBuffer(brand_id#3556, brand#3557, t_hour#468, t_minute#469, ext_price#3558)
    struct SW_Sort_TD_0607550Row {
        int32_t _brand_id3556;
        std::string _brand3557;
        int32_t _t_hour468;
        int32_t _t_minute469;
        int64_t _ext_price3558;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0607550Row& a, const SW_Sort_TD_0607550Row& b) const { return 
 (a._ext_price3558 > b._ext_price3558) || 
 ((a._ext_price3558 == b._ext_price3558) && (a._brand_id3556 < b._brand_id3556)); 
}
    }SW_Sort_TD_0607550_order; 

    int nrow1 = tbl_Aggregate_TD_1474180_output.getNumRow();
    std::vector<SW_Sort_TD_0607550Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3556 = tbl_Aggregate_TD_1474180_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _brand3557 = tbl_Aggregate_TD_1474180_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int32_t _t_hour468 = tbl_Aggregate_TD_1474180_output.getInt32(i, 2);
        int32_t _t_minute469 = tbl_Aggregate_TD_1474180_output.getInt32(i, 3);
        int64_t _ext_price3558 = tbl_Aggregate_TD_1474180_output.getInt64(i, 4);
        SW_Sort_TD_0607550Row t = {_brand_id3556,std::string(_brand3557.data()),_t_hour468,_t_minute469,_ext_price3558};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0607550_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0607550_output.setInt32(r, 0, it._brand_id3556);
        std::array<char, TPCDS_READ_MAX + 1> _brand3557{};
        memcpy(_brand3557.data(), (it._brand3557).data(), (it._brand3557).length());
        tbl_Sort_TD_0607550_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _brand3557);
        tbl_Sort_TD_0607550_output.setInt32(r, 2, it._t_hour468);
        tbl_Sort_TD_0607550_output.setInt32(r, 3, it._t_minute469);
        tbl_Sort_TD_0607550_output.setInt64(r, 4, it._ext_price3558);
        if (r < 10) {
            std::cout << it._brand_id3556 << " " << (it._brand3557).data() << " " << it._t_hour468 << " " << it._t_minute469 << " " << it._ext_price3558 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0607550_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0607550_output #Row: " << tbl_Sort_TD_0607550_output.getNumRow() << std::endl;
}

