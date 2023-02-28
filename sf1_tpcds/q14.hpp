#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_23206298(Table &tbl_SerializeFromObject_TD_24298563_input, Table &tbl_Filter_TD_23206298_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24298563_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24298563_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24298563_input.getInt32(i, 0);
            tbl_Filter_TD_23206298_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24298563_input.getInt32(i, 1);
            tbl_Filter_TD_23206298_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24298563_input.getInt32(i, 2);
            tbl_Filter_TD_23206298_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24298563_input.getInt32(i, 3);
            tbl_Filter_TD_23206298_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23206298_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23206298_output #Row: " << tbl_Filter_TD_23206298_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23493817(Table &tbl_SerializeFromObject_TD_24369141_input, Table &tbl_Filter_TD_23493817_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24369141_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24369141_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24369141_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24369141_input.getInt32(i, 0);
            tbl_Filter_TD_23493817_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24369141_input.getInt32(i, 1);
            tbl_Filter_TD_23493817_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23493817_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23493817_output #Row: " << tbl_Filter_TD_23493817_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23694015(Table &tbl_SerializeFromObject_TD_24396995_input, Table &tbl_Filter_TD_23694015_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24396995_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24396995_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24396995_input.getInt32(i, 0);
            tbl_Filter_TD_23694015_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24396995_input.getInt32(i, 1);
            tbl_Filter_TD_23694015_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24396995_input.getInt32(i, 2);
            tbl_Filter_TD_23694015_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24396995_input.getInt32(i, 3);
            tbl_Filter_TD_23694015_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23694015_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23694015_output #Row: " << tbl_Filter_TD_23694015_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23680593(Table &tbl_SerializeFromObject_TD_24452642_input, Table &tbl_Filter_TD_23680593_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24452642_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24452642_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24452642_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24452642_input.getInt32(i, 0);
            tbl_Filter_TD_23680593_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24452642_input.getInt32(i, 1);
            tbl_Filter_TD_23680593_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23680593_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23680593_output #Row: " << tbl_Filter_TD_23680593_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23548252(Table &tbl_SerializeFromObject_TD_24617673_input, Table &tbl_Filter_TD_23548252_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24617673_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24617673_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24617673_input.getInt32(i, 0);
            tbl_Filter_TD_23548252_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24617673_input.getInt32(i, 1);
            tbl_Filter_TD_23548252_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24617673_input.getInt32(i, 2);
            tbl_Filter_TD_23548252_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24617673_input.getInt32(i, 3);
            tbl_Filter_TD_23548252_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23548252_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23548252_output #Row: " << tbl_Filter_TD_23548252_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23392793(Table &tbl_SerializeFromObject_TD_246066_input, Table &tbl_Filter_TD_23392793_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_246066_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_246066_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_246066_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_246066_input.getInt32(i, 0);
            tbl_Filter_TD_23392793_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_246066_input.getInt32(i, 1);
            tbl_Filter_TD_23392793_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23392793_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23392793_output #Row: " << tbl_Filter_TD_23392793_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23936083(Table &tbl_SerializeFromObject_TD_24790392_input, Table &tbl_Filter_TD_23936083_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24790392_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24790392_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24790392_input.getInt32(i, 0);
            tbl_Filter_TD_23936083_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24790392_input.getInt32(i, 1);
            tbl_Filter_TD_23936083_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24790392_input.getInt32(i, 2);
            tbl_Filter_TD_23936083_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24790392_input.getInt32(i, 3);
            tbl_Filter_TD_23936083_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23936083_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23936083_output #Row: " << tbl_Filter_TD_23936083_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23622423(Table &tbl_SerializeFromObject_TD_24768362_input, Table &tbl_Filter_TD_23622423_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24768362_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24768362_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24768362_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24768362_input.getInt32(i, 0);
            tbl_Filter_TD_23622423_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24768362_input.getInt32(i, 1);
            tbl_Filter_TD_23622423_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23622423_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23622423_output #Row: " << tbl_Filter_TD_23622423_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23266685(Table &tbl_SerializeFromObject_TD_2470259_input, Table &tbl_Filter_TD_23266685_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2470259_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_2470259_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_2470259_input.getInt32(i, 0);
            tbl_Filter_TD_23266685_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_2470259_input.getInt32(i, 1);
            tbl_Filter_TD_23266685_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_2470259_input.getInt32(i, 2);
            tbl_Filter_TD_23266685_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_2470259_input.getInt32(i, 3);
            tbl_Filter_TD_23266685_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23266685_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23266685_output #Row: " << tbl_Filter_TD_23266685_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23906683(Table &tbl_SerializeFromObject_TD_24975442_input, Table &tbl_Filter_TD_23906683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24975442_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24975442_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24975442_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24975442_input.getInt32(i, 0);
            tbl_Filter_TD_23906683_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24975442_input.getInt32(i, 1);
            tbl_Filter_TD_23906683_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23906683_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23906683_output #Row: " << tbl_Filter_TD_23906683_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23759060(Table &tbl_SerializeFromObject_TD_24559170_input, Table &tbl_Filter_TD_23759060_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24559170_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24559170_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24559170_input.getInt32(i, 0);
            tbl_Filter_TD_23759060_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24559170_input.getInt32(i, 1);
            tbl_Filter_TD_23759060_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24559170_input.getInt32(i, 2);
            tbl_Filter_TD_23759060_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24559170_input.getInt32(i, 3);
            tbl_Filter_TD_23759060_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23759060_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23759060_output #Row: " << tbl_Filter_TD_23759060_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23264470(Table &tbl_SerializeFromObject_TD_24317743_input, Table &tbl_Filter_TD_23264470_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24317743_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24317743_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24317743_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24317743_input.getInt32(i, 0);
            tbl_Filter_TD_23264470_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24317743_input.getInt32(i, 1);
            tbl_Filter_TD_23264470_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23264470_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23264470_output #Row: " << tbl_Filter_TD_23264470_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22192622(Table &tbl_SerializeFromObject_TD_2393921_input, Table &tbl_Filter_TD_22192622_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2393921_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_2393921_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_2393921_input.getInt32(i, 0);
        if (((_d_year3620!= 0) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_2393921_input.getInt32(i, 0);
            tbl_Filter_TD_22192622_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22192622_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22192622_output #Row: " << tbl_Filter_TD_22192622_output.getNumRow() << std::endl;
}


void SW_Filter_TD_2213833(Table &tbl_SerializeFromObject_TD_23579989_input, Table &tbl_Filter_TD_2213833_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23579989_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23579989_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23579989_input.getInt32(i, 0);
        if (((_d_year3620!= 0) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23579989_input.getInt32(i, 0);
            tbl_Filter_TD_2213833_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_2213833_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2213833_output #Row: " << tbl_Filter_TD_2213833_output.getNumRow() << std::endl;
}


void SW_Filter_TD_22784148(Table &tbl_SerializeFromObject_TD_23113378_input, Table &tbl_Filter_TD_22784148_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23113378_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23113378_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23113378_input.getInt32(i, 0);
        if (((_d_year3620!= 0) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23113378_input.getInt32(i, 0);
            tbl_Filter_TD_22784148_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22784148_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22784148_output #Row: " << tbl_Filter_TD_22784148_output.getNumRow() << std::endl;
}


void SW_Filter_TD_22719905(Table &tbl_SerializeFromObject_TD_2364280_input, Table &tbl_Filter_TD_22719905_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2364280_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_2364280_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_2364280_input.getInt32(i, 0);
        if (((_d_year3620!= 0) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_2364280_input.getInt32(i, 0);
            tbl_Filter_TD_22719905_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22719905_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22719905_output #Row: " << tbl_Filter_TD_22719905_output.getNumRow() << std::endl;
}


void SW_Filter_TD_22445073(Table &tbl_SerializeFromObject_TD_23712739_input, Table &tbl_Filter_TD_22445073_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23712739_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23712739_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23712739_input.getInt32(i, 0);
        if (((_d_year3620!= 0) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23712739_input.getInt32(i, 0);
            tbl_Filter_TD_22445073_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22445073_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22445073_output #Row: " << tbl_Filter_TD_22445073_output.getNumRow() << std::endl;
}


void SW_Filter_TD_22572391(Table &tbl_SerializeFromObject_TD_23261507_input, Table &tbl_Filter_TD_22572391_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23261507_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23261507_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23261507_input.getInt32(i, 0);
        if (((_d_year3620!= 0) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23261507_input.getInt32(i, 0);
            tbl_Filter_TD_22572391_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22572391_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22572391_output #Row: " << tbl_Filter_TD_22572391_output.getNumRow() << std::endl;
}



void SW_Filter_TD_21787414(Table &tbl_SerializeFromObject_TD_22572245_input, Table &tbl_Filter_TD_21787414_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22572245_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 3);
        if ((_i_item_sk3570!= 0) && (((_i_brand_id3577!= 0) && (_i_class_id3579!= 0)) && (_i_category_id3581!= 0))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 0);
            tbl_Filter_TD_21787414_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 1);
            tbl_Filter_TD_21787414_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 2);
            tbl_Filter_TD_21787414_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22572245_input.getInt32(i, 3);
            tbl_Filter_TD_21787414_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21787414_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21787414_output #Row: " << tbl_Filter_TD_21787414_output.getNumRow() << std::endl;
}


void SW_Filter_TD_21493199(Table &tbl_SerializeFromObject_TD_22363273_input, Table &tbl_Filter_TD_21493199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22363273_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 3);
        if ((_i_item_sk3570!= 0) && (((_i_brand_id3577!= 0) && (_i_class_id3579!= 0)) && (_i_category_id3581!= 0))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 0);
            tbl_Filter_TD_21493199_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 1);
            tbl_Filter_TD_21493199_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 2);
            tbl_Filter_TD_21493199_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22363273_input.getInt32(i, 3);
            tbl_Filter_TD_21493199_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21493199_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21493199_output #Row: " << tbl_Filter_TD_21493199_output.getNumRow() << std::endl;
}


void SW_Filter_TD_2153135(Table &tbl_SerializeFromObject_TD_22615748_input, Table &tbl_Filter_TD_2153135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22615748_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 3);
        if ((_i_item_sk3570!= 0) && (((_i_brand_id3577!= 0) && (_i_class_id3579!= 0)) && (_i_category_id3581!= 0))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 0);
            tbl_Filter_TD_2153135_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 1);
            tbl_Filter_TD_2153135_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 2);
            tbl_Filter_TD_2153135_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22615748_input.getInt32(i, 3);
            tbl_Filter_TD_2153135_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_2153135_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2153135_output #Row: " << tbl_Filter_TD_2153135_output.getNumRow() << std::endl;
}


void SW_Filter_TD_21623040(Table &tbl_SerializeFromObject_TD_22304732_input, Table &tbl_Filter_TD_21623040_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22304732_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 3);
        if ((_i_item_sk3570!= 0) && (((_i_brand_id3577!= 0) && (_i_class_id3579!= 0)) && (_i_category_id3581!= 0))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 0);
            tbl_Filter_TD_21623040_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 1);
            tbl_Filter_TD_21623040_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 2);
            tbl_Filter_TD_21623040_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22304732_input.getInt32(i, 3);
            tbl_Filter_TD_21623040_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21623040_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21623040_output #Row: " << tbl_Filter_TD_21623040_output.getNumRow() << std::endl;
}


void SW_Filter_TD_21694248(Table &tbl_SerializeFromObject_TD_2284804_input, Table &tbl_Filter_TD_21694248_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2284804_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 3);
        if ((_i_item_sk3570!= 0) && (((_i_brand_id3577!= 0) && (_i_class_id3579!= 0)) && (_i_category_id3581!= 0))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 0);
            tbl_Filter_TD_21694248_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 1);
            tbl_Filter_TD_21694248_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 2);
            tbl_Filter_TD_21694248_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_2284804_input.getInt32(i, 3);
            tbl_Filter_TD_21694248_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21694248_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21694248_output #Row: " << tbl_Filter_TD_21694248_output.getNumRow() << std::endl;
}


void SW_Filter_TD_21546222(Table &tbl_SerializeFromObject_TD_2219011_input, Table &tbl_Filter_TD_21546222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2219011_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 3);
        if ((_i_item_sk3570!= 0) && (((_i_brand_id3577!= 0) && (_i_class_id3579!= 0)) && (_i_category_id3581!= 0))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 0);
            tbl_Filter_TD_21546222_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 1);
            tbl_Filter_TD_21546222_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 2);
            tbl_Filter_TD_21546222_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_2219011_input.getInt32(i, 3);
            tbl_Filter_TD_21546222_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21546222_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21546222_output #Row: " << tbl_Filter_TD_21546222_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20159324_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20159324_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20159324_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20159324_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20159324_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20159324_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20159324(Table &tbl_Filter_TD_21787414_output, Table &tbl_JOIN_INNER_TD_21699375_output, Table &tbl_JOIN_LEFTSEMI_TD_20159324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21787414_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21699375_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20159324_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21699375_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21787414_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21699375_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21699375_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21699375_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21699375_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21699375_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21699375_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20159324_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21787414_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21787414_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21787414_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20159324_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21787414_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21787414_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21787414_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21787414_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20159324_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20159324_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20159324_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20159324_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20159324_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20159324_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20159324_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20375525(Table &tbl_SerializeFromObject_TD_2183362_input, Table &tbl_Filter_TD_20375525_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2183362_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_2183362_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_2183362_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_2183362_input.getInt32(i, 0);
            tbl_Filter_TD_20375525_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_2183362_input.getInt32(i, 1);
            tbl_Filter_TD_20375525_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20375525_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20375525_output #Row: " << tbl_Filter_TD_20375525_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20105031_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20105031_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20105031_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20105031_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20105031_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20105031_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20105031(Table &tbl_Filter_TD_21493199_output, Table &tbl_JOIN_INNER_TD_2186359_output, Table &tbl_JOIN_LEFTSEMI_TD_20105031_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21493199_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_2186359_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20105031_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2186359_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21493199_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_2186359_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_2186359_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_2186359_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_2186359_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_2186359_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_2186359_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20105031_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21493199_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21493199_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21493199_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20105031_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21493199_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21493199_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21493199_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21493199_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20105031_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20105031_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20105031_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20105031_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20105031_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20105031_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20105031_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20522733(Table &tbl_SerializeFromObject_TD_21286003_input, Table &tbl_Filter_TD_20522733_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21286003_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21286003_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21286003_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21286003_input.getInt32(i, 0);
            tbl_Filter_TD_20522733_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21286003_input.getInt32(i, 1);
            tbl_Filter_TD_20522733_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20522733_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20522733_output #Row: " << tbl_Filter_TD_20522733_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20340707_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20340707_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20340707_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20340707_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20340707_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20340707_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20340707(Table &tbl_Filter_TD_2153135_output, Table &tbl_JOIN_INNER_TD_21861016_output, Table &tbl_JOIN_LEFTSEMI_TD_20340707_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_2153135_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21861016_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20340707_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21861016_output.getNumRow();
        int nrow2 = tbl_Filter_TD_2153135_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21861016_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21861016_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21861016_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21861016_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21861016_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21861016_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20340707_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_2153135_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_2153135_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_2153135_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20340707_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_2153135_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_2153135_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_2153135_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_2153135_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20340707_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20340707_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20340707_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20340707_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20340707_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20340707_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20340707_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20845582(Table &tbl_SerializeFromObject_TD_21772577_input, Table &tbl_Filter_TD_20845582_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21772577_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21772577_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21772577_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21772577_input.getInt32(i, 0);
            tbl_Filter_TD_20845582_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21772577_input.getInt32(i, 1);
            tbl_Filter_TD_20845582_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20845582_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20845582_output #Row: " << tbl_Filter_TD_20845582_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20849559_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20849559_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20849559_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20849559_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20849559_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20849559_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20849559(Table &tbl_Filter_TD_21623040_output, Table &tbl_JOIN_INNER_TD_21846009_output, Table &tbl_JOIN_LEFTSEMI_TD_20849559_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21623040_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21846009_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20849559_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21846009_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21623040_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21846009_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21846009_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21846009_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21846009_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21846009_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21846009_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20849559_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21623040_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21623040_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21623040_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20849559_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21623040_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21623040_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21623040_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21623040_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20849559_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20849559_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20849559_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20849559_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20849559_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20849559_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20849559_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20580579(Table &tbl_SerializeFromObject_TD_21984075_input, Table &tbl_Filter_TD_20580579_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21984075_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21984075_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21984075_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21984075_input.getInt32(i, 0);
            tbl_Filter_TD_20580579_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21984075_input.getInt32(i, 1);
            tbl_Filter_TD_20580579_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20580579_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20580579_output #Row: " << tbl_Filter_TD_20580579_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20227067_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20227067_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20227067_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20227067_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20227067_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20227067_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20227067(Table &tbl_Filter_TD_21694248_output, Table &tbl_JOIN_INNER_TD_21433898_output, Table &tbl_JOIN_LEFTSEMI_TD_20227067_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21694248_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21433898_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20227067_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21433898_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21694248_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21433898_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21433898_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21433898_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21433898_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21433898_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21433898_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20227067_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21694248_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21694248_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21694248_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20227067_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21694248_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21694248_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21694248_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21694248_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20227067_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20227067_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20227067_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20227067_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20227067_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20227067_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20227067_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20827443(Table &tbl_SerializeFromObject_TD_21904708_input, Table &tbl_Filter_TD_20827443_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21904708_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21904708_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21904708_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21904708_input.getInt32(i, 0);
            tbl_Filter_TD_20827443_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21904708_input.getInt32(i, 1);
            tbl_Filter_TD_20827443_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20827443_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20827443_output #Row: " << tbl_Filter_TD_20827443_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20796086_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20796086_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20796086_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20796086_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20796086_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20796086_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20796086(Table &tbl_Filter_TD_21546222_output, Table &tbl_JOIN_INNER_TD_21570854_output, Table &tbl_JOIN_LEFTSEMI_TD_20796086_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21546222_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21570854_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20796086_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21570854_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21546222_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21570854_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21570854_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21570854_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21570854_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21570854_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21570854_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20796086_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21546222_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21546222_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21546222_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20796086_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21546222_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21546222_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21546222_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21546222_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20796086_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20796086_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20796086_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20796086_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20796086_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20796086_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20796086_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20932863(Table &tbl_SerializeFromObject_TD_21452484_input, Table &tbl_Filter_TD_20932863_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21452484_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21452484_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21452484_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21452484_input.getInt32(i, 0);
            tbl_Filter_TD_20932863_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21452484_input.getInt32(i, 1);
            tbl_Filter_TD_20932863_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20932863_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20932863_output #Row: " << tbl_Filter_TD_20932863_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19619049(Table &tbl_SerializeFromObject_TD_20694200_input, Table &tbl_Filter_TD_19619049_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20694200_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20694200_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20694200_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20694200_input.getInt32(i, 0);
            tbl_Filter_TD_19619049_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19619049_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19619049_output #Row: " << tbl_Filter_TD_19619049_output.getNumRow() << std::endl;
}


void SW_Filter_TD_19141746(Table &tbl_SerializeFromObject_TD_20600565_input, Table &tbl_Filter_TD_19141746_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20600565_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20600565_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20600565_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20600565_input.getInt32(i, 0);
            tbl_Filter_TD_19141746_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19141746_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19141746_output #Row: " << tbl_Filter_TD_19141746_output.getNumRow() << std::endl;
}


void SW_Filter_TD_19957343(Table &tbl_SerializeFromObject_TD_20743393_input, Table &tbl_Filter_TD_19957343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20743393_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20743393_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20743393_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20743393_input.getInt32(i, 0);
            tbl_Filter_TD_19957343_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19957343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19957343_output #Row: " << tbl_Filter_TD_19957343_output.getNumRow() << std::endl;
}


void SW_Filter_TD_19109490(Table &tbl_SerializeFromObject_TD_20870413_input, Table &tbl_Filter_TD_19109490_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20870413_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20870413_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20870413_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20870413_input.getInt32(i, 0);
            tbl_Filter_TD_19109490_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19109490_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19109490_output #Row: " << tbl_Filter_TD_19109490_output.getNumRow() << std::endl;
}


void SW_Filter_TD_19358932(Table &tbl_SerializeFromObject_TD_2096326_input, Table &tbl_Filter_TD_19358932_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2096326_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_2096326_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_2096326_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_2096326_input.getInt32(i, 0);
            tbl_Filter_TD_19358932_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19358932_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19358932_output #Row: " << tbl_Filter_TD_19358932_output.getNumRow() << std::endl;
}


void SW_Filter_TD_19816230(Table &tbl_SerializeFromObject_TD_20157029_input, Table &tbl_Filter_TD_19816230_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20157029_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20157029_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20157029_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20157029_input.getInt32(i, 0);
            tbl_Filter_TD_19816230_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19816230_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19816230_output #Row: " << tbl_Filter_TD_19816230_output.getNumRow() << std::endl;
}


void SW_Filter_TD_18871570(Table &tbl_SerializeFromObject_TD_19195526_input, Table &tbl_Filter_TD_18871570_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19195526_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19195526_input.getInt32(i, 0);
        if (_i_item_sk3642!= 0) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19195526_input.getInt32(i, 0);
            tbl_Filter_TD_18871570_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19195526_input.getInt32(i, 1);
            tbl_Filter_TD_18871570_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19195526_input.getInt32(i, 2);
            tbl_Filter_TD_18871570_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19195526_input.getInt32(i, 3);
            tbl_Filter_TD_18871570_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18871570_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18871570_output #Row: " << tbl_Filter_TD_18871570_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18136302(Table &tbl_SerializeFromObject_TD_19346998_input, Table &tbl_Filter_TD_18136302_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19346998_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19346998_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19346998_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19346998_input.getInt32(i, 0);
            tbl_Filter_TD_18136302_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19346998_input.getInt32(i, 1);
            tbl_Filter_TD_18136302_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18136302_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18136302_output #Row: " << tbl_Filter_TD_18136302_output.getNumRow() << std::endl;
}


void SW_Filter_TD_18127081(Table &tbl_SerializeFromObject_TD_19830746_input, Table &tbl_Filter_TD_18127081_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19830746_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19830746_input.getInt32(i, 0);
        if (_i_item_sk3642!= 0) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19830746_input.getInt32(i, 0);
            tbl_Filter_TD_18127081_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19830746_input.getInt32(i, 1);
            tbl_Filter_TD_18127081_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19830746_input.getInt32(i, 2);
            tbl_Filter_TD_18127081_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19830746_input.getInt32(i, 3);
            tbl_Filter_TD_18127081_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18127081_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18127081_output #Row: " << tbl_Filter_TD_18127081_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18540846(Table &tbl_SerializeFromObject_TD_19686756_input, Table &tbl_Filter_TD_18540846_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19686756_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19686756_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19686756_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19686756_input.getInt32(i, 0);
            tbl_Filter_TD_18540846_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19686756_input.getInt32(i, 1);
            tbl_Filter_TD_18540846_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18540846_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18540846_output #Row: " << tbl_Filter_TD_18540846_output.getNumRow() << std::endl;
}


void SW_Filter_TD_18732397(Table &tbl_SerializeFromObject_TD_19806335_input, Table &tbl_Filter_TD_18732397_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19806335_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19806335_input.getInt32(i, 0);
        if (_i_item_sk3642!= 0) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19806335_input.getInt32(i, 0);
            tbl_Filter_TD_18732397_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19806335_input.getInt32(i, 1);
            tbl_Filter_TD_18732397_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19806335_input.getInt32(i, 2);
            tbl_Filter_TD_18732397_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19806335_input.getInt32(i, 3);
            tbl_Filter_TD_18732397_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18732397_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18732397_output #Row: " << tbl_Filter_TD_18732397_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18612300(Table &tbl_SerializeFromObject_TD_19843878_input, Table &tbl_Filter_TD_18612300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19843878_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19843878_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19843878_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19843878_input.getInt32(i, 0);
            tbl_Filter_TD_18612300_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19843878_input.getInt32(i, 1);
            tbl_Filter_TD_18612300_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18612300_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18612300_output #Row: " << tbl_Filter_TD_18612300_output.getNumRow() << std::endl;
}


void SW_Filter_TD_18552602(Table &tbl_SerializeFromObject_TD_19924215_input, Table &tbl_Filter_TD_18552602_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19924215_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19924215_input.getInt32(i, 0);
        if (_i_item_sk3642!= 0) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19924215_input.getInt32(i, 0);
            tbl_Filter_TD_18552602_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19924215_input.getInt32(i, 1);
            tbl_Filter_TD_18552602_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19924215_input.getInt32(i, 2);
            tbl_Filter_TD_18552602_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19924215_input.getInt32(i, 3);
            tbl_Filter_TD_18552602_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18552602_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18552602_output #Row: " << tbl_Filter_TD_18552602_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18207447(Table &tbl_SerializeFromObject_TD_19384320_input, Table &tbl_Filter_TD_18207447_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19384320_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19384320_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19384320_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19384320_input.getInt32(i, 0);
            tbl_Filter_TD_18207447_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19384320_input.getInt32(i, 1);
            tbl_Filter_TD_18207447_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18207447_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18207447_output #Row: " << tbl_Filter_TD_18207447_output.getNumRow() << std::endl;
}


void SW_Filter_TD_18200944(Table &tbl_SerializeFromObject_TD_19161360_input, Table &tbl_Filter_TD_18200944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19161360_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19161360_input.getInt32(i, 0);
        if (_i_item_sk3642!= 0) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19161360_input.getInt32(i, 0);
            tbl_Filter_TD_18200944_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19161360_input.getInt32(i, 1);
            tbl_Filter_TD_18200944_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19161360_input.getInt32(i, 2);
            tbl_Filter_TD_18200944_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19161360_input.getInt32(i, 3);
            tbl_Filter_TD_18200944_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18200944_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18200944_output #Row: " << tbl_Filter_TD_18200944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18700252(Table &tbl_SerializeFromObject_TD_19215082_input, Table &tbl_Filter_TD_18700252_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19215082_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19215082_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19215082_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19215082_input.getInt32(i, 0);
            tbl_Filter_TD_18700252_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19215082_input.getInt32(i, 1);
            tbl_Filter_TD_18700252_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18700252_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18700252_output #Row: " << tbl_Filter_TD_18700252_output.getNumRow() << std::endl;
}


void SW_Filter_TD_18594725(Table &tbl_SerializeFromObject_TD_19940532_input, Table &tbl_Filter_TD_18594725_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19940532_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19940532_input.getInt32(i, 0);
        if (_i_item_sk3642!= 0) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19940532_input.getInt32(i, 0);
            tbl_Filter_TD_18594725_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19940532_input.getInt32(i, 1);
            tbl_Filter_TD_18594725_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19940532_input.getInt32(i, 2);
            tbl_Filter_TD_18594725_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19940532_input.getInt32(i, 3);
            tbl_Filter_TD_18594725_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18594725_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18594725_output #Row: " << tbl_Filter_TD_18594725_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18472600(Table &tbl_SerializeFromObject_TD_19651121_input, Table &tbl_Filter_TD_18472600_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19651121_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19651121_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19651121_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19651121_input.getInt32(i, 0);
            tbl_Filter_TD_18472600_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19651121_input.getInt32(i, 1);
            tbl_Filter_TD_18472600_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18472600_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18472600_output #Row: " << tbl_Filter_TD_18472600_output.getNumRow() << std::endl;
}


void SW_Filter_TD_17168885(Table &tbl_SerializeFromObject_TD_18267061_input, Table &tbl_Filter_TD_17168885_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18267061_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18267061_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18267061_input.getInt32(i, 0);
        if (((_d_year3670!= 0) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (_d_date_sk3664!= 0)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18267061_input.getInt32(i, 0);
            tbl_Filter_TD_17168885_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17168885_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17168885_output #Row: " << tbl_Filter_TD_17168885_output.getNumRow() << std::endl;
}


void SW_Project_TD_17358384(Table &tbl_JOIN_INNER_TD_18785118_output, Table &tbl_Project_TD_17358384_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18785118_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18785118_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18785118_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18785118_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17358384_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17358384_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17358384_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17358384_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17358384_output #Row: " << tbl_Project_TD_17358384_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17299456(Table &tbl_SerializeFromObject_TD_18355861_input, Table &tbl_Filter_TD_17299456_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18355861_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18355861_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18355861_input.getInt32(i, 0);
        if (((_d_year3670!= 0) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (_d_date_sk3664!= 0)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18355861_input.getInt32(i, 0);
            tbl_Filter_TD_17299456_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17299456_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17299456_output #Row: " << tbl_Filter_TD_17299456_output.getNumRow() << std::endl;
}


void SW_Project_TD_17624032(Table &tbl_JOIN_INNER_TD_18675385_output, Table &tbl_Project_TD_17624032_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18675385_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18675385_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18675385_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18675385_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17624032_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17624032_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17624032_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17624032_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17624032_output #Row: " << tbl_Project_TD_17624032_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17393489(Table &tbl_SerializeFromObject_TD_18684516_input, Table &tbl_Filter_TD_17393489_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18684516_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18684516_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18684516_input.getInt32(i, 0);
        if (((_d_year3670!= 0) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (_d_date_sk3664!= 0)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18684516_input.getInt32(i, 0);
            tbl_Filter_TD_17393489_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17393489_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17393489_output #Row: " << tbl_Filter_TD_17393489_output.getNumRow() << std::endl;
}


void SW_Project_TD_17826743(Table &tbl_JOIN_INNER_TD_18234941_output, Table &tbl_Project_TD_17826743_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18234941_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18234941_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18234941_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18234941_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17826743_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17826743_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17826743_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17826743_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17826743_output #Row: " << tbl_Project_TD_17826743_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17769293(Table &tbl_SerializeFromObject_TD_18752460_input, Table &tbl_Filter_TD_17769293_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18752460_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18752460_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18752460_input.getInt32(i, 0);
        if (((_d_year3670!= 0) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (_d_date_sk3664!= 0)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18752460_input.getInt32(i, 0);
            tbl_Filter_TD_17769293_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17769293_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17769293_output #Row: " << tbl_Filter_TD_17769293_output.getNumRow() << std::endl;
}


void SW_Project_TD_17174355(Table &tbl_JOIN_INNER_TD_1866825_output, Table &tbl_Project_TD_17174355_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_1866825_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_1866825_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_1866825_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_1866825_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17174355_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17174355_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17174355_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17174355_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17174355_output #Row: " << tbl_Project_TD_17174355_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17538078(Table &tbl_SerializeFromObject_TD_18911628_input, Table &tbl_Filter_TD_17538078_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18911628_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18911628_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18911628_input.getInt32(i, 0);
        if (((_d_year3670!= 0) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (_d_date_sk3664!= 0)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18911628_input.getInt32(i, 0);
            tbl_Filter_TD_17538078_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17538078_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17538078_output #Row: " << tbl_Filter_TD_17538078_output.getNumRow() << std::endl;
}


void SW_Project_TD_17854675(Table &tbl_JOIN_INNER_TD_18784037_output, Table &tbl_Project_TD_17854675_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18784037_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18784037_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18784037_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18784037_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17854675_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17854675_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17854675_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17854675_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17854675_output #Row: " << tbl_Project_TD_17854675_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17932324(Table &tbl_SerializeFromObject_TD_1837339_input, Table &tbl_Filter_TD_17932324_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1837339_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_1837339_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_1837339_input.getInt32(i, 0);
        if (((_d_year3670!= 0) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (_d_date_sk3664!= 0)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_1837339_input.getInt32(i, 0);
            tbl_Filter_TD_17932324_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17932324_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17932324_output #Row: " << tbl_Filter_TD_17932324_output.getNumRow() << std::endl;
}


void SW_Project_TD_1786510(Table &tbl_JOIN_INNER_TD_18955350_output, Table &tbl_Project_TD_1786510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18955350_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18955350_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18955350_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18955350_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_1786510_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_1786510_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_1786510_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_1786510_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1786510_output #Row: " << tbl_Project_TD_1786510_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_16426058_consolidate(Table &tbl_Aggregate_TD_16426058_output_preprocess, Table &tbl_Aggregate_TD_16426058_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_16426058_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_16426058_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_16426058_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_16426058_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_16426058_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_16426058_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_16426058_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_16426058_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_16426058_output #Row: " << tbl_Aggregate_TD_16426058_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_16761988_consolidate(Table &tbl_Aggregate_TD_16761988_output_preprocess, Table &tbl_Aggregate_TD_16761988_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_16761988_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_16761988_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_16761988_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_16761988_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_16761988_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_16761988_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_16761988_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_16761988_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_16761988_output #Row: " << tbl_Aggregate_TD_16761988_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_16688192_consolidate(Table &tbl_Aggregate_TD_16688192_output_preprocess, Table &tbl_Aggregate_TD_16688192_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_16688192_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_16688192_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_16688192_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_16688192_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_16688192_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_16688192_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_16688192_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_16688192_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_16688192_output #Row: " << tbl_Aggregate_TD_16688192_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_16702213_consolidate(Table &tbl_Aggregate_TD_16702213_output_preprocess, Table &tbl_Aggregate_TD_16702213_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_16702213_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_16702213_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_16702213_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_16702213_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_16702213_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_16702213_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_16702213_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_16702213_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_16702213_output #Row: " << tbl_Aggregate_TD_16702213_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_16729750_consolidate(Table &tbl_Aggregate_TD_16729750_output_preprocess, Table &tbl_Aggregate_TD_16729750_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_16729750_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_16729750_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_16729750_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_16729750_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_16729750_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_16729750_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_16729750_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_16729750_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_16729750_output #Row: " << tbl_Aggregate_TD_16729750_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_16918359_consolidate(Table &tbl_Aggregate_TD_16918359_output_preprocess, Table &tbl_Aggregate_TD_16918359_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_16918359_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_16918359_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_16918359_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_16918359_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_16918359_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_16918359_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_16918359_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_16918359_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_16918359_output #Row: " << tbl_Aggregate_TD_16918359_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1583657_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1583657_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1583657_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1583657_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1583657_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1583657_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_1583657(Table &tbl_Aggregate_TD_16426058_output, Table &tbl_JOIN_INNER_TD_16203290_output, Table &tbl_JOIN_LEFTSEMI_TD_1583657_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16426058_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16203290_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1583657_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16203290_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16426058_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16203290_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16203290_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16203290_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16203290_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16203290_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16203290_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1583657_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16426058_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16426058_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16426058_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1583657_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16426058_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16426058_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16426058_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1583657_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_1583657_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_1583657_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1583657_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1583657_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1583657_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15936955_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15936955_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15936955_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15936955_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15936955_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15936955_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15936955(Table &tbl_Aggregate_TD_16761988_output, Table &tbl_JOIN_INNER_TD_16616334_output, Table &tbl_JOIN_LEFTSEMI_TD_15936955_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16761988_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16616334_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15936955_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16616334_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16761988_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16616334_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16616334_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16616334_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16616334_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16616334_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16616334_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15936955_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16761988_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16761988_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16761988_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15936955_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16761988_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16761988_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16761988_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15936955_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15936955_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15936955_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15936955_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15936955_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15936955_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1587838_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1587838_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1587838_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1587838_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1587838_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1587838_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_1587838(Table &tbl_Aggregate_TD_16688192_output, Table &tbl_JOIN_INNER_TD_16566654_output, Table &tbl_JOIN_LEFTSEMI_TD_1587838_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16688192_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16566654_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1587838_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16566654_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16688192_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16566654_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16566654_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16566654_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16566654_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16566654_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16566654_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1587838_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16688192_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16688192_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16688192_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1587838_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16688192_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16688192_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16688192_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1587838_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_1587838_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_1587838_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1587838_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1587838_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1587838_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15771877_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15771877_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15771877_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15771877_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15771877_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15771877_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15771877(Table &tbl_Aggregate_TD_16702213_output, Table &tbl_JOIN_INNER_TD_1655029_output, Table &tbl_JOIN_LEFTSEMI_TD_15771877_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16702213_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_1655029_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15771877_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1655029_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16702213_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_1655029_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_1655029_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_1655029_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_1655029_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_1655029_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_1655029_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15771877_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16702213_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16702213_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16702213_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15771877_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16702213_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16702213_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16702213_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15771877_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15771877_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15771877_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15771877_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15771877_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15771877_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15544757_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15544757_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15544757_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15544757_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15544757_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15544757_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15544757(Table &tbl_Aggregate_TD_16729750_output, Table &tbl_JOIN_INNER_TD_1612243_output, Table &tbl_JOIN_LEFTSEMI_TD_15544757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16729750_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_1612243_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15544757_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1612243_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16729750_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_1612243_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_1612243_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_1612243_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_1612243_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_1612243_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_1612243_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15544757_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16729750_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16729750_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16729750_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15544757_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16729750_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16729750_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16729750_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15544757_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15544757_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15544757_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15544757_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15544757_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15544757_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15218555_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15218555_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15218555_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15218555_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15218555_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15218555_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15218555(Table &tbl_Aggregate_TD_16918359_output, Table &tbl_JOIN_INNER_TD_16423183_output, Table &tbl_JOIN_LEFTSEMI_TD_15218555_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16918359_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16423183_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15218555_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16423183_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16918359_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16423183_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16423183_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16423183_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16423183_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16423183_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16423183_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15218555_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16918359_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16918359_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16918359_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15218555_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16918359_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16918359_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16918359_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15218555_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15218555_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15218555_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15218555_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15218555_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15218555_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_14959621_consolidate(Table &tbl_Aggregate_TD_14959621_output_preprocess, Table &tbl_Aggregate_TD_14959621_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_14959621_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_14959621_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_14959621_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_14959621_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_14959621_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_14959621_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_14959621_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_14959621_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_14959621_output #Row: " << tbl_Aggregate_TD_14959621_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14234772(Table &tbl_SerializeFromObject_TD_15861941_input, Table &tbl_Filter_TD_14234772_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15861941_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 0);
            tbl_Filter_TD_14234772_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 1);
            tbl_Filter_TD_14234772_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 2);
            tbl_Filter_TD_14234772_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15861941_input.getInt32(i, 3);
            tbl_Filter_TD_14234772_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14234772_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14234772_output #Row: " << tbl_Filter_TD_14234772_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_14767181_consolidate(Table &tbl_Aggregate_TD_14767181_output_preprocess, Table &tbl_Aggregate_TD_14767181_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_14767181_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_14767181_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_14767181_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_14767181_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_14767181_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_14767181_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_14767181_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_14767181_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_14767181_output #Row: " << tbl_Aggregate_TD_14767181_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14415725(Table &tbl_SerializeFromObject_TD_15875492_input, Table &tbl_Filter_TD_14415725_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15875492_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 0);
            tbl_Filter_TD_14415725_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 1);
            tbl_Filter_TD_14415725_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 2);
            tbl_Filter_TD_14415725_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15875492_input.getInt32(i, 3);
            tbl_Filter_TD_14415725_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14415725_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14415725_output #Row: " << tbl_Filter_TD_14415725_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_14480120_consolidate(Table &tbl_Aggregate_TD_14480120_output_preprocess, Table &tbl_Aggregate_TD_14480120_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_14480120_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_14480120_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_14480120_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_14480120_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_14480120_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_14480120_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_14480120_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_14480120_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_14480120_output #Row: " << tbl_Aggregate_TD_14480120_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14883426(Table &tbl_SerializeFromObject_TD_15166321_input, Table &tbl_Filter_TD_14883426_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15166321_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 0);
            tbl_Filter_TD_14883426_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 1);
            tbl_Filter_TD_14883426_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 2);
            tbl_Filter_TD_14883426_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15166321_input.getInt32(i, 3);
            tbl_Filter_TD_14883426_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14883426_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14883426_output #Row: " << tbl_Filter_TD_14883426_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_1472773_consolidate(Table &tbl_Aggregate_TD_1472773_output_preprocess, Table &tbl_Aggregate_TD_1472773_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_1472773_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_1472773_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_1472773_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_1472773_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_1472773_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_1472773_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_1472773_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_1472773_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_1472773_output #Row: " << tbl_Aggregate_TD_1472773_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14445973(Table &tbl_SerializeFromObject_TD_15405982_input, Table &tbl_Filter_TD_14445973_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15405982_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 0);
            tbl_Filter_TD_14445973_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 1);
            tbl_Filter_TD_14445973_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 2);
            tbl_Filter_TD_14445973_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15405982_input.getInt32(i, 3);
            tbl_Filter_TD_14445973_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14445973_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14445973_output #Row: " << tbl_Filter_TD_14445973_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_14914755_consolidate(Table &tbl_Aggregate_TD_14914755_output_preprocess, Table &tbl_Aggregate_TD_14914755_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_14914755_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_14914755_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_14914755_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_14914755_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_14914755_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_14914755_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_14914755_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_14914755_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_14914755_output #Row: " << tbl_Aggregate_TD_14914755_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1435183(Table &tbl_SerializeFromObject_TD_1548084_input, Table &tbl_Filter_TD_1435183_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1548084_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 0);
            tbl_Filter_TD_1435183_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 1);
            tbl_Filter_TD_1435183_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 2);
            tbl_Filter_TD_1435183_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_1548084_input.getInt32(i, 3);
            tbl_Filter_TD_1435183_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_1435183_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1435183_output #Row: " << tbl_Filter_TD_1435183_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_14832212_consolidate(Table &tbl_Aggregate_TD_14832212_output_preprocess, Table &tbl_Aggregate_TD_14832212_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_14832212_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _brand_id3559 = tbl_Aggregate_TD_14832212_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_14832212_output.setInt32(r, 0, _brand_id3559);
        int32_t _class_id3560 = tbl_Aggregate_TD_14832212_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_14832212_output.setInt32(r, 1, _class_id3560);
        int32_t _category_id3561 = tbl_Aggregate_TD_14832212_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_14832212_output.setInt32(r, 2, _category_id3561);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_14832212_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_14832212_output #Row: " << tbl_Aggregate_TD_14832212_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14551750(Table &tbl_SerializeFromObject_TD_15864271_input, Table &tbl_Filter_TD_14551750_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15864271_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 0);
            tbl_Filter_TD_14551750_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 1);
            tbl_Filter_TD_14551750_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 2);
            tbl_Filter_TD_14551750_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15864271_input.getInt32(i, 3);
            tbl_Filter_TD_14551750_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14551750_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14551750_output #Row: " << tbl_Filter_TD_14551750_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13492222_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13492222_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13492222_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13492222_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13492222_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13492222_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13492222_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13492222_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13492222_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13492222_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13492222(Table &tbl_Filter_TD_14234772_output, Table &tbl_Aggregate_TD_14959621_output, Table &tbl_JOIN_INNER_TD_13492222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14234772_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14959621_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13492222_key_leftMajor, SW_JOIN_INNER_TD_13492222_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14234772_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14234772_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14234772_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14234772_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13492222_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14234772_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14234772_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14234772_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14234772_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13492222_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14959621_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14959621_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14959621_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14959621_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13492222_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14959621_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14959621_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14959621_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13492222_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13492222_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13492222_key_rightMajor, SW_JOIN_INNER_TD_13492222_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14959621_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14959621_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14959621_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14959621_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13492222_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14959621_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14959621_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14959621_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13492222_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14234772_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14234772_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14234772_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14234772_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13492222_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14234772_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14234772_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14234772_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14234772_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13492222_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13492222_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13492222_output #Row: " << tbl_JOIN_INNER_TD_13492222_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13677592_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13677592_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13677592_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13677592_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13677592_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13677592_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13677592_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13677592_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13677592_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13677592_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13677592(Table &tbl_Filter_TD_14415725_output, Table &tbl_Aggregate_TD_14767181_output, Table &tbl_JOIN_INNER_TD_13677592_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14415725_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14767181_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13677592_key_leftMajor, SW_JOIN_INNER_TD_13677592_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14415725_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14415725_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14415725_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14415725_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13677592_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14415725_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14415725_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14415725_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14415725_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13677592_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14767181_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14767181_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14767181_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14767181_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13677592_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14767181_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14767181_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14767181_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13677592_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13677592_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13677592_key_rightMajor, SW_JOIN_INNER_TD_13677592_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14767181_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14767181_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14767181_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14767181_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13677592_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14767181_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14767181_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14767181_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13677592_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14415725_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14415725_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14415725_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14415725_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13677592_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14415725_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14415725_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14415725_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14415725_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13677592_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13677592_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13677592_output #Row: " << tbl_JOIN_INNER_TD_13677592_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13469690_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13469690_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13469690_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13469690_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13469690_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13469690_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13469690_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13469690_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13469690_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13469690_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13469690(Table &tbl_Filter_TD_14883426_output, Table &tbl_Aggregate_TD_14480120_output, Table &tbl_JOIN_INNER_TD_13469690_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14883426_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14480120_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13469690_key_leftMajor, SW_JOIN_INNER_TD_13469690_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14883426_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14883426_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14883426_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14883426_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13469690_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14883426_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14883426_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14883426_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14883426_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13469690_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14480120_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14480120_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14480120_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14480120_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13469690_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14480120_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14480120_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14480120_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13469690_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13469690_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13469690_key_rightMajor, SW_JOIN_INNER_TD_13469690_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14480120_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14480120_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14480120_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14480120_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13469690_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14480120_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14480120_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14480120_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13469690_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14883426_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14883426_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14883426_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14883426_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13469690_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14883426_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14883426_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14883426_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14883426_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13469690_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13469690_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13469690_output #Row: " << tbl_JOIN_INNER_TD_13469690_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13324143_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13324143_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13324143_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13324143_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13324143_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13324143_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13324143_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13324143_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13324143_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13324143_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13324143(Table &tbl_Filter_TD_14445973_output, Table &tbl_Aggregate_TD_1472773_output, Table &tbl_JOIN_INNER_TD_13324143_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14445973_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_1472773_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13324143_key_leftMajor, SW_JOIN_INNER_TD_13324143_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14445973_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14445973_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14445973_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14445973_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13324143_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14445973_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14445973_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14445973_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14445973_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13324143_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_1472773_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_1472773_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_1472773_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_1472773_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13324143_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_1472773_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_1472773_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_1472773_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13324143_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13324143_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13324143_key_rightMajor, SW_JOIN_INNER_TD_13324143_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_1472773_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_1472773_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_1472773_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_1472773_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13324143_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_1472773_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_1472773_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_1472773_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13324143_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14445973_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14445973_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14445973_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14445973_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13324143_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14445973_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14445973_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14445973_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14445973_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13324143_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13324143_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13324143_output #Row: " << tbl_JOIN_INNER_TD_13324143_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13847919_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13847919_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13847919_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13847919_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13847919_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13847919_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13847919_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13847919_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13847919_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13847919_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13847919(Table &tbl_Filter_TD_1435183_output, Table &tbl_Aggregate_TD_14914755_output, Table &tbl_JOIN_INNER_TD_13847919_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_1435183_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14914755_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13847919_key_leftMajor, SW_JOIN_INNER_TD_13847919_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1435183_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_1435183_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_1435183_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_1435183_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13847919_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_1435183_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_1435183_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_1435183_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_1435183_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13847919_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14914755_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14914755_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14914755_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14914755_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13847919_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14914755_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14914755_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14914755_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13847919_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13847919_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13847919_key_rightMajor, SW_JOIN_INNER_TD_13847919_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14914755_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14914755_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14914755_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14914755_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13847919_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14914755_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14914755_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14914755_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13847919_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1435183_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_1435183_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_1435183_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_1435183_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13847919_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_1435183_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_1435183_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_1435183_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_1435183_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13847919_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13847919_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13847919_output #Row: " << tbl_JOIN_INNER_TD_13847919_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13648310_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13648310_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13648310_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13648310_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13648310_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13648310_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13648310_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13648310_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13648310_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13648310_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13648310(Table &tbl_Filter_TD_14551750_output, Table &tbl_Aggregate_TD_14832212_output, Table &tbl_JOIN_INNER_TD_13648310_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14551750_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14832212_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13648310_key_leftMajor, SW_JOIN_INNER_TD_13648310_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14551750_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14551750_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14551750_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14551750_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13648310_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14551750_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14551750_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14551750_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14551750_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13648310_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14832212_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14832212_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14832212_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14832212_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13648310_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14832212_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14832212_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14832212_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13648310_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13648310_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13648310_key_rightMajor, SW_JOIN_INNER_TD_13648310_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14832212_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14832212_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14832212_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14832212_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13648310_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14832212_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14832212_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14832212_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13648310_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14551750_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14551750_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14551750_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14551750_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13648310_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14551750_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14551750_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14551750_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14551750_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13648310_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13648310_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13648310_output #Row: " << tbl_JOIN_INNER_TD_13648310_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12239650(Table &tbl_SerializeFromObject_TD_13639313_input, Table &tbl_Filter_TD_12239650_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3845) AND ((d_year#3845 >= 1999) AND (d_year#3845 <= 2001))) AND isnotnull(d_date_sk#3839)))
    // Input: ListBuffer(d_date_sk#3839, d_year#3845)
    // Output: ListBuffer(d_date_sk#3839)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13639313_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3845 = tbl_SerializeFromObject_TD_13639313_input.getInt32(i, 1);
        int32_t _d_date_sk3839 = tbl_SerializeFromObject_TD_13639313_input.getInt32(i, 0);
        if (((_d_year3845!= 0) && ((_d_year3845 >= 1999) && (_d_year3845 <= 2001))) && (_d_date_sk3839!= 0)) {
            int32_t _d_date_sk3839_t = tbl_SerializeFromObject_TD_13639313_input.getInt32(i, 0);
            tbl_Filter_TD_12239650_output.setInt32(r, 0, _d_date_sk3839_t);
            r++;
        }
    }
    tbl_Filter_TD_12239650_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12239650_output #Row: " << tbl_Filter_TD_12239650_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12893879(Table &tbl_SerializeFromObject_TD_13666390_input, Table &tbl_Filter_TD_12893879_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#3805))
    // Input: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13666390_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk3805 = tbl_SerializeFromObject_TD_13666390_input.getInt32(i, 0);
        if (_ws_sold_date_sk3805!= 0) {
            int32_t _ws_sold_date_sk3805_t = tbl_SerializeFromObject_TD_13666390_input.getInt32(i, 0);
            tbl_Filter_TD_12893879_output.setInt32(r, 0, _ws_sold_date_sk3805_t);
            int32_t _ws_quantity3823_t = tbl_SerializeFromObject_TD_13666390_input.getInt32(i, 1);
            tbl_Filter_TD_12893879_output.setInt32(r, 1, _ws_quantity3823_t);
            int64_t _ws_list_price3825_t = tbl_SerializeFromObject_TD_13666390_input.getInt64(i, 2);
            tbl_Filter_TD_12893879_output.setInt64(r, 2, _ws_list_price3825_t);
            r++;
        }
    }
    tbl_Filter_TD_12893879_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12893879_output #Row: " << tbl_Filter_TD_12893879_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12372538(Table &tbl_SerializeFromObject_TD_13976334_input, Table &tbl_Filter_TD_12372538_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3783) AND ((d_year#3783 >= 1999) AND (d_year#3783 <= 2001))) AND isnotnull(d_date_sk#3777)))
    // Input: ListBuffer(d_date_sk#3777, d_year#3783)
    // Output: ListBuffer(d_date_sk#3777)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13976334_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3783 = tbl_SerializeFromObject_TD_13976334_input.getInt32(i, 1);
        int32_t _d_date_sk3777 = tbl_SerializeFromObject_TD_13976334_input.getInt32(i, 0);
        if (((_d_year3783!= 0) && ((_d_year3783 >= 1999) && (_d_year3783 <= 2001))) && (_d_date_sk3777!= 0)) {
            int32_t _d_date_sk3777_t = tbl_SerializeFromObject_TD_13976334_input.getInt32(i, 0);
            tbl_Filter_TD_12372538_output.setInt32(r, 0, _d_date_sk3777_t);
            r++;
        }
    }
    tbl_Filter_TD_12372538_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12372538_output #Row: " << tbl_Filter_TD_12372538_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1220028(Table &tbl_SerializeFromObject_TD_13258922_input, Table &tbl_Filter_TD_1220028_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#3743))
    // Input: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13258922_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3743 = tbl_SerializeFromObject_TD_13258922_input.getInt32(i, 0);
        if (_cs_sold_date_sk3743!= 0) {
            int32_t _cs_sold_date_sk3743_t = tbl_SerializeFromObject_TD_13258922_input.getInt32(i, 0);
            tbl_Filter_TD_1220028_output.setInt32(r, 0, _cs_sold_date_sk3743_t);
            int32_t _cs_quantity3761_t = tbl_SerializeFromObject_TD_13258922_input.getInt32(i, 1);
            tbl_Filter_TD_1220028_output.setInt32(r, 1, _cs_quantity3761_t);
            int64_t _cs_list_price3763_t = tbl_SerializeFromObject_TD_13258922_input.getInt64(i, 2);
            tbl_Filter_TD_1220028_output.setInt64(r, 2, _cs_list_price3763_t);
            r++;
        }
    }
    tbl_Filter_TD_1220028_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1220028_output #Row: " << tbl_Filter_TD_1220028_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12646483(Table &tbl_SerializeFromObject_TD_13357007_input, Table &tbl_Filter_TD_12646483_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3721) AND ((d_year#3721 >= 1999) AND (d_year#3721 <= 2001))) AND isnotnull(d_date_sk#3715)))
    // Input: ListBuffer(d_date_sk#3715, d_year#3721)
    // Output: ListBuffer(d_date_sk#3715)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13357007_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3721 = tbl_SerializeFromObject_TD_13357007_input.getInt32(i, 1);
        int32_t _d_date_sk3715 = tbl_SerializeFromObject_TD_13357007_input.getInt32(i, 0);
        if (((_d_year3721!= 0) && ((_d_year3721 >= 1999) && (_d_year3721 <= 2001))) && (_d_date_sk3715!= 0)) {
            int32_t _d_date_sk3715_t = tbl_SerializeFromObject_TD_13357007_input.getInt32(i, 0);
            tbl_Filter_TD_12646483_output.setInt32(r, 0, _d_date_sk3715_t);
            r++;
        }
    }
    tbl_Filter_TD_12646483_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12646483_output #Row: " << tbl_Filter_TD_12646483_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1272645(Table &tbl_SerializeFromObject_TD_13828939_input, Table &tbl_Filter_TD_1272645_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#3692))
    // Input: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13828939_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3692 = tbl_SerializeFromObject_TD_13828939_input.getInt32(i, 0);
        if (_ss_sold_date_sk3692!= 0) {
            int32_t _ss_sold_date_sk3692_t = tbl_SerializeFromObject_TD_13828939_input.getInt32(i, 0);
            tbl_Filter_TD_1272645_output.setInt32(r, 0, _ss_sold_date_sk3692_t);
            int32_t _ss_quantity3702_t = tbl_SerializeFromObject_TD_13828939_input.getInt32(i, 1);
            tbl_Filter_TD_1272645_output.setInt32(r, 1, _ss_quantity3702_t);
            int64_t _ss_list_price3704_t = tbl_SerializeFromObject_TD_13828939_input.getInt64(i, 2);
            tbl_Filter_TD_1272645_output.setInt64(r, 2, _ss_list_price3704_t);
            r++;
        }
    }
    tbl_Filter_TD_1272645_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1272645_output #Row: " << tbl_Filter_TD_1272645_output.getNumRow() << std::endl;
}

void SW_Project_TD_12612038(Table &tbl_JOIN_INNER_TD_13492222_output, Table &tbl_Project_TD_12612038_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13492222_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13492222_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12612038_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12612038_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12612038_output #Row: " << tbl_Project_TD_12612038_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12519435(Table &tbl_SerializeFromObject_TD_13592522_input, Table &tbl_Filter_TD_12519435_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#4058))
    // Input: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Output: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13592522_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4058 = tbl_SerializeFromObject_TD_13592522_input.getInt32(i, 0);
        if (_i_item_sk4058!= 0) {
            int32_t _i_item_sk4058_t = tbl_SerializeFromObject_TD_13592522_input.getInt32(i, 0);
            tbl_Filter_TD_12519435_output.setInt32(r, 0, _i_item_sk4058_t);
            int32_t _i_brand_id4065_t = tbl_SerializeFromObject_TD_13592522_input.getInt32(i, 1);
            tbl_Filter_TD_12519435_output.setInt32(r, 1, _i_brand_id4065_t);
            int32_t _i_class_id4067_t = tbl_SerializeFromObject_TD_13592522_input.getInt32(i, 2);
            tbl_Filter_TD_12519435_output.setInt32(r, 2, _i_class_id4067_t);
            int32_t _i_category_id4069_t = tbl_SerializeFromObject_TD_13592522_input.getInt32(i, 3);
            tbl_Filter_TD_12519435_output.setInt32(r, 3, _i_category_id4069_t);
            r++;
        }
    }
    tbl_Filter_TD_12519435_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12519435_output #Row: " << tbl_Filter_TD_12519435_output.getNumRow() << std::endl;
}

void SW_Project_TD_12135912(Table &tbl_JOIN_INNER_TD_13677592_output, Table &tbl_Project_TD_12135912_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13677592_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13677592_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12135912_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12135912_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12135912_output #Row: " << tbl_Project_TD_12135912_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12788880(Table &tbl_SerializeFromObject_TD_13797334_input, Table &tbl_Filter_TD_12788880_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#4027) AND isnotnull(ws_sold_date_sk#4024)))
    // Input: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    // Output: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13797334_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk4027 = tbl_SerializeFromObject_TD_13797334_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk4024 = tbl_SerializeFromObject_TD_13797334_input.getInt32(i, 0);
        if ((_ws_item_sk4027!= 0) && (_ws_sold_date_sk4024!= 0)) {
            int32_t _ws_sold_date_sk4024_t = tbl_SerializeFromObject_TD_13797334_input.getInt32(i, 0);
            tbl_Filter_TD_12788880_output.setInt32(r, 0, _ws_sold_date_sk4024_t);
            int32_t _ws_item_sk4027_t = tbl_SerializeFromObject_TD_13797334_input.getInt32(i, 1);
            tbl_Filter_TD_12788880_output.setInt32(r, 1, _ws_item_sk4027_t);
            int32_t _ws_quantity4042_t = tbl_SerializeFromObject_TD_13797334_input.getInt32(i, 2);
            tbl_Filter_TD_12788880_output.setInt32(r, 2, _ws_quantity4042_t);
            int64_t _ws_list_price4044_t = tbl_SerializeFromObject_TD_13797334_input.getInt64(i, 3);
            tbl_Filter_TD_12788880_output.setInt64(r, 3, _ws_list_price4044_t);
            r++;
        }
    }
    tbl_Filter_TD_12788880_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12788880_output #Row: " << tbl_Filter_TD_12788880_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12375407(Table &tbl_SerializeFromObject_TD_13850498_input, Table &tbl_Filter_TD_12375407_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3845) AND ((d_year#3845 >= 1999) AND (d_year#3845 <= 2001))) AND isnotnull(d_date_sk#3839)))
    // Input: ListBuffer(d_date_sk#3839, d_year#3845)
    // Output: ListBuffer(d_date_sk#3839)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13850498_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3845 = tbl_SerializeFromObject_TD_13850498_input.getInt32(i, 1);
        int32_t _d_date_sk3839 = tbl_SerializeFromObject_TD_13850498_input.getInt32(i, 0);
        if (((_d_year3845!= 0) && ((_d_year3845 >= 1999) && (_d_year3845 <= 2001))) && (_d_date_sk3839!= 0)) {
            int32_t _d_date_sk3839_t = tbl_SerializeFromObject_TD_13850498_input.getInt32(i, 0);
            tbl_Filter_TD_12375407_output.setInt32(r, 0, _d_date_sk3839_t);
            r++;
        }
    }
    tbl_Filter_TD_12375407_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12375407_output #Row: " << tbl_Filter_TD_12375407_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12934829(Table &tbl_SerializeFromObject_TD_1332394_input, Table &tbl_Filter_TD_12934829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#3805))
    // Input: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1332394_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk3805 = tbl_SerializeFromObject_TD_1332394_input.getInt32(i, 0);
        if (_ws_sold_date_sk3805!= 0) {
            int32_t _ws_sold_date_sk3805_t = tbl_SerializeFromObject_TD_1332394_input.getInt32(i, 0);
            tbl_Filter_TD_12934829_output.setInt32(r, 0, _ws_sold_date_sk3805_t);
            int32_t _ws_quantity3823_t = tbl_SerializeFromObject_TD_1332394_input.getInt32(i, 1);
            tbl_Filter_TD_12934829_output.setInt32(r, 1, _ws_quantity3823_t);
            int64_t _ws_list_price3825_t = tbl_SerializeFromObject_TD_1332394_input.getInt64(i, 2);
            tbl_Filter_TD_12934829_output.setInt64(r, 2, _ws_list_price3825_t);
            r++;
        }
    }
    tbl_Filter_TD_12934829_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12934829_output #Row: " << tbl_Filter_TD_12934829_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12865838(Table &tbl_SerializeFromObject_TD_13451169_input, Table &tbl_Filter_TD_12865838_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3783) AND ((d_year#3783 >= 1999) AND (d_year#3783 <= 2001))) AND isnotnull(d_date_sk#3777)))
    // Input: ListBuffer(d_date_sk#3777, d_year#3783)
    // Output: ListBuffer(d_date_sk#3777)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13451169_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3783 = tbl_SerializeFromObject_TD_13451169_input.getInt32(i, 1);
        int32_t _d_date_sk3777 = tbl_SerializeFromObject_TD_13451169_input.getInt32(i, 0);
        if (((_d_year3783!= 0) && ((_d_year3783 >= 1999) && (_d_year3783 <= 2001))) && (_d_date_sk3777!= 0)) {
            int32_t _d_date_sk3777_t = tbl_SerializeFromObject_TD_13451169_input.getInt32(i, 0);
            tbl_Filter_TD_12865838_output.setInt32(r, 0, _d_date_sk3777_t);
            r++;
        }
    }
    tbl_Filter_TD_12865838_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12865838_output #Row: " << tbl_Filter_TD_12865838_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12800024(Table &tbl_SerializeFromObject_TD_1347310_input, Table &tbl_Filter_TD_12800024_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#3743))
    // Input: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1347310_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3743 = tbl_SerializeFromObject_TD_1347310_input.getInt32(i, 0);
        if (_cs_sold_date_sk3743!= 0) {
            int32_t _cs_sold_date_sk3743_t = tbl_SerializeFromObject_TD_1347310_input.getInt32(i, 0);
            tbl_Filter_TD_12800024_output.setInt32(r, 0, _cs_sold_date_sk3743_t);
            int32_t _cs_quantity3761_t = tbl_SerializeFromObject_TD_1347310_input.getInt32(i, 1);
            tbl_Filter_TD_12800024_output.setInt32(r, 1, _cs_quantity3761_t);
            int64_t _cs_list_price3763_t = tbl_SerializeFromObject_TD_1347310_input.getInt64(i, 2);
            tbl_Filter_TD_12800024_output.setInt64(r, 2, _cs_list_price3763_t);
            r++;
        }
    }
    tbl_Filter_TD_12800024_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12800024_output #Row: " << tbl_Filter_TD_12800024_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12846908(Table &tbl_SerializeFromObject_TD_13677669_input, Table &tbl_Filter_TD_12846908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3721) AND ((d_year#3721 >= 1999) AND (d_year#3721 <= 2001))) AND isnotnull(d_date_sk#3715)))
    // Input: ListBuffer(d_date_sk#3715, d_year#3721)
    // Output: ListBuffer(d_date_sk#3715)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13677669_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3721 = tbl_SerializeFromObject_TD_13677669_input.getInt32(i, 1);
        int32_t _d_date_sk3715 = tbl_SerializeFromObject_TD_13677669_input.getInt32(i, 0);
        if (((_d_year3721!= 0) && ((_d_year3721 >= 1999) && (_d_year3721 <= 2001))) && (_d_date_sk3715!= 0)) {
            int32_t _d_date_sk3715_t = tbl_SerializeFromObject_TD_13677669_input.getInt32(i, 0);
            tbl_Filter_TD_12846908_output.setInt32(r, 0, _d_date_sk3715_t);
            r++;
        }
    }
    tbl_Filter_TD_12846908_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12846908_output #Row: " << tbl_Filter_TD_12846908_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12153874(Table &tbl_SerializeFromObject_TD_13420705_input, Table &tbl_Filter_TD_12153874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#3692))
    // Input: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13420705_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3692 = tbl_SerializeFromObject_TD_13420705_input.getInt32(i, 0);
        if (_ss_sold_date_sk3692!= 0) {
            int32_t _ss_sold_date_sk3692_t = tbl_SerializeFromObject_TD_13420705_input.getInt32(i, 0);
            tbl_Filter_TD_12153874_output.setInt32(r, 0, _ss_sold_date_sk3692_t);
            int32_t _ss_quantity3702_t = tbl_SerializeFromObject_TD_13420705_input.getInt32(i, 1);
            tbl_Filter_TD_12153874_output.setInt32(r, 1, _ss_quantity3702_t);
            int64_t _ss_list_price3704_t = tbl_SerializeFromObject_TD_13420705_input.getInt64(i, 2);
            tbl_Filter_TD_12153874_output.setInt64(r, 2, _ss_list_price3704_t);
            r++;
        }
    }
    tbl_Filter_TD_12153874_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12153874_output #Row: " << tbl_Filter_TD_12153874_output.getNumRow() << std::endl;
}

void SW_Project_TD_12711157(Table &tbl_JOIN_INNER_TD_13469690_output, Table &tbl_Project_TD_12711157_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13469690_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13469690_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12711157_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12711157_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12711157_output #Row: " << tbl_Project_TD_12711157_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12399253(Table &tbl_SerializeFromObject_TD_13127085_input, Table &tbl_Filter_TD_12399253_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3974))
    // Input: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Output: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13127085_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3974 = tbl_SerializeFromObject_TD_13127085_input.getInt32(i, 0);
        if (_i_item_sk3974!= 0) {
            int32_t _i_item_sk3974_t = tbl_SerializeFromObject_TD_13127085_input.getInt32(i, 0);
            tbl_Filter_TD_12399253_output.setInt32(r, 0, _i_item_sk3974_t);
            int32_t _i_brand_id3981_t = tbl_SerializeFromObject_TD_13127085_input.getInt32(i, 1);
            tbl_Filter_TD_12399253_output.setInt32(r, 1, _i_brand_id3981_t);
            int32_t _i_class_id3983_t = tbl_SerializeFromObject_TD_13127085_input.getInt32(i, 2);
            tbl_Filter_TD_12399253_output.setInt32(r, 2, _i_class_id3983_t);
            int32_t _i_category_id3985_t = tbl_SerializeFromObject_TD_13127085_input.getInt32(i, 3);
            tbl_Filter_TD_12399253_output.setInt32(r, 3, _i_category_id3985_t);
            r++;
        }
    }
    tbl_Filter_TD_12399253_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12399253_output #Row: " << tbl_Filter_TD_12399253_output.getNumRow() << std::endl;
}

void SW_Project_TD_12182924(Table &tbl_JOIN_INNER_TD_13324143_output, Table &tbl_Project_TD_12182924_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13324143_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13324143_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12182924_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12182924_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12182924_output #Row: " << tbl_Project_TD_12182924_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12768433(Table &tbl_SerializeFromObject_TD_13231447_input, Table &tbl_Filter_TD_12768433_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#3955) AND isnotnull(cs_sold_date_sk#3940)))
    // Input: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    // Output: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13231447_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk3955 = tbl_SerializeFromObject_TD_13231447_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk3940 = tbl_SerializeFromObject_TD_13231447_input.getInt32(i, 0);
        if ((_cs_item_sk3955!= 0) && (_cs_sold_date_sk3940!= 0)) {
            int32_t _cs_sold_date_sk3940_t = tbl_SerializeFromObject_TD_13231447_input.getInt32(i, 0);
            tbl_Filter_TD_12768433_output.setInt32(r, 0, _cs_sold_date_sk3940_t);
            int32_t _cs_item_sk3955_t = tbl_SerializeFromObject_TD_13231447_input.getInt32(i, 1);
            tbl_Filter_TD_12768433_output.setInt32(r, 1, _cs_item_sk3955_t);
            int32_t _cs_quantity3958_t = tbl_SerializeFromObject_TD_13231447_input.getInt32(i, 2);
            tbl_Filter_TD_12768433_output.setInt32(r, 2, _cs_quantity3958_t);
            int64_t _cs_list_price3960_t = tbl_SerializeFromObject_TD_13231447_input.getInt64(i, 3);
            tbl_Filter_TD_12768433_output.setInt64(r, 3, _cs_list_price3960_t);
            r++;
        }
    }
    tbl_Filter_TD_12768433_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12768433_output #Row: " << tbl_Filter_TD_12768433_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12611252(Table &tbl_SerializeFromObject_TD_13981447_input, Table &tbl_Filter_TD_12611252_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3845) AND ((d_year#3845 >= 1999) AND (d_year#3845 <= 2001))) AND isnotnull(d_date_sk#3839)))
    // Input: ListBuffer(d_date_sk#3839, d_year#3845)
    // Output: ListBuffer(d_date_sk#3839)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13981447_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3845 = tbl_SerializeFromObject_TD_13981447_input.getInt32(i, 1);
        int32_t _d_date_sk3839 = tbl_SerializeFromObject_TD_13981447_input.getInt32(i, 0);
        if (((_d_year3845!= 0) && ((_d_year3845 >= 1999) && (_d_year3845 <= 2001))) && (_d_date_sk3839!= 0)) {
            int32_t _d_date_sk3839_t = tbl_SerializeFromObject_TD_13981447_input.getInt32(i, 0);
            tbl_Filter_TD_12611252_output.setInt32(r, 0, _d_date_sk3839_t);
            r++;
        }
    }
    tbl_Filter_TD_12611252_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12611252_output #Row: " << tbl_Filter_TD_12611252_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12493774(Table &tbl_SerializeFromObject_TD_13230807_input, Table &tbl_Filter_TD_12493774_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#3805))
    // Input: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13230807_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk3805 = tbl_SerializeFromObject_TD_13230807_input.getInt32(i, 0);
        if (_ws_sold_date_sk3805!= 0) {
            int32_t _ws_sold_date_sk3805_t = tbl_SerializeFromObject_TD_13230807_input.getInt32(i, 0);
            tbl_Filter_TD_12493774_output.setInt32(r, 0, _ws_sold_date_sk3805_t);
            int32_t _ws_quantity3823_t = tbl_SerializeFromObject_TD_13230807_input.getInt32(i, 1);
            tbl_Filter_TD_12493774_output.setInt32(r, 1, _ws_quantity3823_t);
            int64_t _ws_list_price3825_t = tbl_SerializeFromObject_TD_13230807_input.getInt64(i, 2);
            tbl_Filter_TD_12493774_output.setInt64(r, 2, _ws_list_price3825_t);
            r++;
        }
    }
    tbl_Filter_TD_12493774_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12493774_output #Row: " << tbl_Filter_TD_12493774_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12233512(Table &tbl_SerializeFromObject_TD_13202535_input, Table &tbl_Filter_TD_12233512_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3783) AND ((d_year#3783 >= 1999) AND (d_year#3783 <= 2001))) AND isnotnull(d_date_sk#3777)))
    // Input: ListBuffer(d_date_sk#3777, d_year#3783)
    // Output: ListBuffer(d_date_sk#3777)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13202535_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3783 = tbl_SerializeFromObject_TD_13202535_input.getInt32(i, 1);
        int32_t _d_date_sk3777 = tbl_SerializeFromObject_TD_13202535_input.getInt32(i, 0);
        if (((_d_year3783!= 0) && ((_d_year3783 >= 1999) && (_d_year3783 <= 2001))) && (_d_date_sk3777!= 0)) {
            int32_t _d_date_sk3777_t = tbl_SerializeFromObject_TD_13202535_input.getInt32(i, 0);
            tbl_Filter_TD_12233512_output.setInt32(r, 0, _d_date_sk3777_t);
            r++;
        }
    }
    tbl_Filter_TD_12233512_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12233512_output #Row: " << tbl_Filter_TD_12233512_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12342897(Table &tbl_SerializeFromObject_TD_13929027_input, Table &tbl_Filter_TD_12342897_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#3743))
    // Input: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13929027_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3743 = tbl_SerializeFromObject_TD_13929027_input.getInt32(i, 0);
        if (_cs_sold_date_sk3743!= 0) {
            int32_t _cs_sold_date_sk3743_t = tbl_SerializeFromObject_TD_13929027_input.getInt32(i, 0);
            tbl_Filter_TD_12342897_output.setInt32(r, 0, _cs_sold_date_sk3743_t);
            int32_t _cs_quantity3761_t = tbl_SerializeFromObject_TD_13929027_input.getInt32(i, 1);
            tbl_Filter_TD_12342897_output.setInt32(r, 1, _cs_quantity3761_t);
            int64_t _cs_list_price3763_t = tbl_SerializeFromObject_TD_13929027_input.getInt64(i, 2);
            tbl_Filter_TD_12342897_output.setInt64(r, 2, _cs_list_price3763_t);
            r++;
        }
    }
    tbl_Filter_TD_12342897_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12342897_output #Row: " << tbl_Filter_TD_12342897_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12224970(Table &tbl_SerializeFromObject_TD_13173145_input, Table &tbl_Filter_TD_12224970_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3721) AND ((d_year#3721 >= 1999) AND (d_year#3721 <= 2001))) AND isnotnull(d_date_sk#3715)))
    // Input: ListBuffer(d_date_sk#3715, d_year#3721)
    // Output: ListBuffer(d_date_sk#3715)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13173145_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3721 = tbl_SerializeFromObject_TD_13173145_input.getInt32(i, 1);
        int32_t _d_date_sk3715 = tbl_SerializeFromObject_TD_13173145_input.getInt32(i, 0);
        if (((_d_year3721!= 0) && ((_d_year3721 >= 1999) && (_d_year3721 <= 2001))) && (_d_date_sk3715!= 0)) {
            int32_t _d_date_sk3715_t = tbl_SerializeFromObject_TD_13173145_input.getInt32(i, 0);
            tbl_Filter_TD_12224970_output.setInt32(r, 0, _d_date_sk3715_t);
            r++;
        }
    }
    tbl_Filter_TD_12224970_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12224970_output #Row: " << tbl_Filter_TD_12224970_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12166981(Table &tbl_SerializeFromObject_TD_13896715_input, Table &tbl_Filter_TD_12166981_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#3692))
    // Input: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13896715_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3692 = tbl_SerializeFromObject_TD_13896715_input.getInt32(i, 0);
        if (_ss_sold_date_sk3692!= 0) {
            int32_t _ss_sold_date_sk3692_t = tbl_SerializeFromObject_TD_13896715_input.getInt32(i, 0);
            tbl_Filter_TD_12166981_output.setInt32(r, 0, _ss_sold_date_sk3692_t);
            int32_t _ss_quantity3702_t = tbl_SerializeFromObject_TD_13896715_input.getInt32(i, 1);
            tbl_Filter_TD_12166981_output.setInt32(r, 1, _ss_quantity3702_t);
            int64_t _ss_list_price3704_t = tbl_SerializeFromObject_TD_13896715_input.getInt64(i, 2);
            tbl_Filter_TD_12166981_output.setInt64(r, 2, _ss_list_price3704_t);
            r++;
        }
    }
    tbl_Filter_TD_12166981_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12166981_output #Row: " << tbl_Filter_TD_12166981_output.getNumRow() << std::endl;
}

void SW_Project_TD_12392542(Table &tbl_JOIN_INNER_TD_13847919_output, Table &tbl_Project_TD_12392542_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13847919_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13847919_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12392542_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12392542_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12392542_output #Row: " << tbl_Project_TD_12392542_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12343291(Table &tbl_SerializeFromObject_TD_1348719_input, Table &tbl_Filter_TD_12343291_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3890))
    // Input: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1348719_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3890 = tbl_SerializeFromObject_TD_1348719_input.getInt32(i, 0);
        if (_i_item_sk3890!= 0) {
            int32_t _i_item_sk3890_t = tbl_SerializeFromObject_TD_1348719_input.getInt32(i, 0);
            tbl_Filter_TD_12343291_output.setInt32(r, 0, _i_item_sk3890_t);
            int32_t _i_brand_id3897_t = tbl_SerializeFromObject_TD_1348719_input.getInt32(i, 1);
            tbl_Filter_TD_12343291_output.setInt32(r, 1, _i_brand_id3897_t);
            int32_t _i_class_id3899_t = tbl_SerializeFromObject_TD_1348719_input.getInt32(i, 2);
            tbl_Filter_TD_12343291_output.setInt32(r, 2, _i_class_id3899_t);
            int32_t _i_category_id3901_t = tbl_SerializeFromObject_TD_1348719_input.getInt32(i, 3);
            tbl_Filter_TD_12343291_output.setInt32(r, 3, _i_category_id3901_t);
            r++;
        }
    }
    tbl_Filter_TD_12343291_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12343291_output #Row: " << tbl_Filter_TD_12343291_output.getNumRow() << std::endl;
}

void SW_Project_TD_12423129(Table &tbl_JOIN_INNER_TD_13648310_output, Table &tbl_Project_TD_12423129_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13648310_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13648310_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12423129_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12423129_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12423129_output #Row: " << tbl_Project_TD_12423129_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1286881(Table &tbl_SerializeFromObject_TD_13482526_input, Table &tbl_Filter_TD_1286881_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#3869) AND isnotnull(ss_sold_date_sk#3867)))
    // Input: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    // Output: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13482526_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk3869 = tbl_SerializeFromObject_TD_13482526_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk3867 = tbl_SerializeFromObject_TD_13482526_input.getInt32(i, 0);
        if ((_ss_item_sk3869!= 0) && (_ss_sold_date_sk3867!= 0)) {
            int32_t _ss_sold_date_sk3867_t = tbl_SerializeFromObject_TD_13482526_input.getInt32(i, 0);
            tbl_Filter_TD_1286881_output.setInt32(r, 0, _ss_sold_date_sk3867_t);
            int32_t _ss_item_sk3869_t = tbl_SerializeFromObject_TD_13482526_input.getInt32(i, 1);
            tbl_Filter_TD_1286881_output.setInt32(r, 1, _ss_item_sk3869_t);
            int32_t _ss_quantity3877_t = tbl_SerializeFromObject_TD_13482526_input.getInt32(i, 2);
            tbl_Filter_TD_1286881_output.setInt32(r, 2, _ss_quantity3877_t);
            int64_t _ss_list_price3879_t = tbl_SerializeFromObject_TD_13482526_input.getInt64(i, 3);
            tbl_Filter_TD_1286881_output.setInt64(r, 3, _ss_list_price3879_t);
            r++;
        }
    }
    tbl_Filter_TD_1286881_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1286881_output #Row: " << tbl_Filter_TD_1286881_output.getNumRow() << std::endl;
}
















void SW_Project_TD_10572105(Table &tbl_JOIN_INNER_TD_1129196_output, Table &tbl_Project_TD_10572105_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#3823 AS quantity#3567, ws_list_price#3825 AS list_price#3568)
    // Input: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(quantity#3567, list_price#3568)
    int nrow1 = tbl_JOIN_INNER_TD_1129196_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity3823 = tbl_JOIN_INNER_TD_1129196_output.getInt32(i, 0);
        int64_t _ws_list_price3825 = tbl_JOIN_INNER_TD_1129196_output.getInt64(i, 1);
        int32_t _quantity3567 = _ws_quantity3823;
        tbl_Project_TD_10572105_output.setInt32(i, 0, _quantity3567);
        int64_t _list_price3568 = _ws_list_price3825;
        tbl_Project_TD_10572105_output.setInt64(i, 1, _list_price3568);
    }
    tbl_Project_TD_10572105_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10572105_output #Row: " << tbl_Project_TD_10572105_output.getNumRow() << std::endl;
}

void SW_Project_TD_10816520(Table &tbl_JOIN_INNER_TD_11331648_output, Table &tbl_Project_TD_10816520_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#3761 AS quantity#3565, cs_list_price#3763 AS list_price#3566)
    // Input: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(quantity#3565, list_price#3566)
    int nrow1 = tbl_JOIN_INNER_TD_11331648_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3761 = tbl_JOIN_INNER_TD_11331648_output.getInt32(i, 0);
        int64_t _cs_list_price3763 = tbl_JOIN_INNER_TD_11331648_output.getInt64(i, 1);
        int32_t _quantity3565 = _cs_quantity3761;
        tbl_Project_TD_10816520_output.setInt32(i, 0, _quantity3565);
        int64_t _list_price3566 = _cs_list_price3763;
        tbl_Project_TD_10816520_output.setInt64(i, 1, _list_price3566);
    }
    tbl_Project_TD_10816520_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10816520_output #Row: " << tbl_Project_TD_10816520_output.getNumRow() << std::endl;
}

void SW_Project_TD_10526046(Table &tbl_JOIN_INNER_TD_11587390_output, Table &tbl_Project_TD_10526046_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#3702 AS quantity#3563, ss_list_price#3704 AS list_price#3564)
    // Input: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(quantity#3563, list_price#3564)
    int nrow1 = tbl_JOIN_INNER_TD_11587390_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3702 = tbl_JOIN_INNER_TD_11587390_output.getInt32(i, 0);
        int64_t _ss_list_price3704 = tbl_JOIN_INNER_TD_11587390_output.getInt64(i, 1);
        int32_t _quantity3563 = _ss_quantity3702;
        tbl_Project_TD_10526046_output.setInt32(i, 0, _quantity3563);
        int64_t _list_price3564 = _ss_list_price3704;
        tbl_Project_TD_10526046_output.setInt64(i, 1, _list_price3564);
    }
    tbl_Project_TD_10526046_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10526046_output #Row: " << tbl_Project_TD_10526046_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10864810(Table &tbl_SerializeFromObject_TD_11541654_input, Table &tbl_Filter_TD_10864810_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4086) AND isnotnull(d_moy#4088)) AND ((d_year#4086 = 2001) AND (d_moy#4088 = 11))) AND isnotnull(d_date_sk#4080)))
    // Input: ListBuffer(d_date_sk#4080, d_year#4086, d_moy#4088)
    // Output: ListBuffer(d_date_sk#4080)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11541654_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4086 = tbl_SerializeFromObject_TD_11541654_input.getInt32(i, 1);
        int32_t _d_moy4088 = tbl_SerializeFromObject_TD_11541654_input.getInt32(i, 2);
        int32_t _d_date_sk4080 = tbl_SerializeFromObject_TD_11541654_input.getInt32(i, 0);
        if ((((_d_year4086!= 0) && (_d_moy4088!= 0)) && ((_d_year4086 == 2001) && (_d_moy4088 == 11))) && (_d_date_sk4080!= 0)) {
            int32_t _d_date_sk4080_t = tbl_SerializeFromObject_TD_11541654_input.getInt32(i, 0);
            tbl_Filter_TD_10864810_output.setInt32(r, 0, _d_date_sk4080_t);
            r++;
        }
    }
    tbl_Filter_TD_10864810_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10864810_output #Row: " << tbl_Filter_TD_10864810_output.getNumRow() << std::endl;
}


void SW_Project_TD_10624136(Table &tbl_JOIN_INNER_TD_11791489_output, Table &tbl_Project_TD_10624136_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#3823 AS quantity#3567, ws_list_price#3825 AS list_price#3568)
    // Input: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(quantity#3567, list_price#3568)
    int nrow1 = tbl_JOIN_INNER_TD_11791489_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity3823 = tbl_JOIN_INNER_TD_11791489_output.getInt32(i, 0);
        int64_t _ws_list_price3825 = tbl_JOIN_INNER_TD_11791489_output.getInt64(i, 1);
        int32_t _quantity3567 = _ws_quantity3823;
        tbl_Project_TD_10624136_output.setInt32(i, 0, _quantity3567);
        int64_t _list_price3568 = _ws_list_price3825;
        tbl_Project_TD_10624136_output.setInt64(i, 1, _list_price3568);
    }
    tbl_Project_TD_10624136_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10624136_output #Row: " << tbl_Project_TD_10624136_output.getNumRow() << std::endl;
}

void SW_Project_TD_10362783(Table &tbl_JOIN_INNER_TD_11695585_output, Table &tbl_Project_TD_10362783_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#3761 AS quantity#3565, cs_list_price#3763 AS list_price#3566)
    // Input: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(quantity#3565, list_price#3566)
    int nrow1 = tbl_JOIN_INNER_TD_11695585_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3761 = tbl_JOIN_INNER_TD_11695585_output.getInt32(i, 0);
        int64_t _cs_list_price3763 = tbl_JOIN_INNER_TD_11695585_output.getInt64(i, 1);
        int32_t _quantity3565 = _cs_quantity3761;
        tbl_Project_TD_10362783_output.setInt32(i, 0, _quantity3565);
        int64_t _list_price3566 = _cs_list_price3763;
        tbl_Project_TD_10362783_output.setInt64(i, 1, _list_price3566);
    }
    tbl_Project_TD_10362783_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10362783_output #Row: " << tbl_Project_TD_10362783_output.getNumRow() << std::endl;
}

void SW_Project_TD_10839425(Table &tbl_JOIN_INNER_TD_11930565_output, Table &tbl_Project_TD_10839425_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#3702 AS quantity#3563, ss_list_price#3704 AS list_price#3564)
    // Input: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(quantity#3563, list_price#3564)
    int nrow1 = tbl_JOIN_INNER_TD_11930565_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3702 = tbl_JOIN_INNER_TD_11930565_output.getInt32(i, 0);
        int64_t _ss_list_price3704 = tbl_JOIN_INNER_TD_11930565_output.getInt64(i, 1);
        int32_t _quantity3563 = _ss_quantity3702;
        tbl_Project_TD_10839425_output.setInt32(i, 0, _quantity3563);
        int64_t _list_price3564 = _ss_list_price3704;
        tbl_Project_TD_10839425_output.setInt64(i, 1, _list_price3564);
    }
    tbl_Project_TD_10839425_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10839425_output #Row: " << tbl_Project_TD_10839425_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10226485(Table &tbl_SerializeFromObject_TD_11930669_input, Table &tbl_Filter_TD_10226485_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4002) AND isnotnull(d_moy#4004)) AND ((d_year#4002 = 2001) AND (d_moy#4004 = 11))) AND isnotnull(d_date_sk#3996)))
    // Input: ListBuffer(d_date_sk#3996, d_year#4002, d_moy#4004)
    // Output: ListBuffer(d_date_sk#3996)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11930669_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4002 = tbl_SerializeFromObject_TD_11930669_input.getInt32(i, 1);
        int32_t _d_moy4004 = tbl_SerializeFromObject_TD_11930669_input.getInt32(i, 2);
        int32_t _d_date_sk3996 = tbl_SerializeFromObject_TD_11930669_input.getInt32(i, 0);
        if ((((_d_year4002!= 0) && (_d_moy4004!= 0)) && ((_d_year4002 == 2001) && (_d_moy4004 == 11))) && (_d_date_sk3996!= 0)) {
            int32_t _d_date_sk3996_t = tbl_SerializeFromObject_TD_11930669_input.getInt32(i, 0);
            tbl_Filter_TD_10226485_output.setInt32(r, 0, _d_date_sk3996_t);
            r++;
        }
    }
    tbl_Filter_TD_10226485_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10226485_output #Row: " << tbl_Filter_TD_10226485_output.getNumRow() << std::endl;
}


void SW_Project_TD_10860945(Table &tbl_JOIN_INNER_TD_11927286_output, Table &tbl_Project_TD_10860945_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#3823 AS quantity#3567, ws_list_price#3825 AS list_price#3568)
    // Input: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(quantity#3567, list_price#3568)
    int nrow1 = tbl_JOIN_INNER_TD_11927286_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity3823 = tbl_JOIN_INNER_TD_11927286_output.getInt32(i, 0);
        int64_t _ws_list_price3825 = tbl_JOIN_INNER_TD_11927286_output.getInt64(i, 1);
        int32_t _quantity3567 = _ws_quantity3823;
        tbl_Project_TD_10860945_output.setInt32(i, 0, _quantity3567);
        int64_t _list_price3568 = _ws_list_price3825;
        tbl_Project_TD_10860945_output.setInt64(i, 1, _list_price3568);
    }
    tbl_Project_TD_10860945_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10860945_output #Row: " << tbl_Project_TD_10860945_output.getNumRow() << std::endl;
}

void SW_Project_TD_10221554(Table &tbl_JOIN_INNER_TD_1127429_output, Table &tbl_Project_TD_10221554_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#3761 AS quantity#3565, cs_list_price#3763 AS list_price#3566)
    // Input: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(quantity#3565, list_price#3566)
    int nrow1 = tbl_JOIN_INNER_TD_1127429_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3761 = tbl_JOIN_INNER_TD_1127429_output.getInt32(i, 0);
        int64_t _cs_list_price3763 = tbl_JOIN_INNER_TD_1127429_output.getInt64(i, 1);
        int32_t _quantity3565 = _cs_quantity3761;
        tbl_Project_TD_10221554_output.setInt32(i, 0, _quantity3565);
        int64_t _list_price3566 = _cs_list_price3763;
        tbl_Project_TD_10221554_output.setInt64(i, 1, _list_price3566);
    }
    tbl_Project_TD_10221554_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10221554_output #Row: " << tbl_Project_TD_10221554_output.getNumRow() << std::endl;
}

void SW_Project_TD_10453254(Table &tbl_JOIN_INNER_TD_11478870_output, Table &tbl_Project_TD_10453254_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#3702 AS quantity#3563, ss_list_price#3704 AS list_price#3564)
    // Input: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(quantity#3563, list_price#3564)
    int nrow1 = tbl_JOIN_INNER_TD_11478870_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3702 = tbl_JOIN_INNER_TD_11478870_output.getInt32(i, 0);
        int64_t _ss_list_price3704 = tbl_JOIN_INNER_TD_11478870_output.getInt64(i, 1);
        int32_t _quantity3563 = _ss_quantity3702;
        tbl_Project_TD_10453254_output.setInt32(i, 0, _quantity3563);
        int64_t _list_price3564 = _ss_list_price3704;
        tbl_Project_TD_10453254_output.setInt64(i, 1, _list_price3564);
    }
    tbl_Project_TD_10453254_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10453254_output #Row: " << tbl_Project_TD_10453254_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1084850(Table &tbl_SerializeFromObject_TD_11330740_input, Table &tbl_Filter_TD_1084850_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3918) AND isnotnull(d_moy#3920)) AND ((d_year#3918 = 2001) AND (d_moy#3920 = 11))) AND isnotnull(d_date_sk#3912)))
    // Input: ListBuffer(d_date_sk#3912, d_year#3918, d_moy#3920)
    // Output: ListBuffer(d_date_sk#3912)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11330740_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3918 = tbl_SerializeFromObject_TD_11330740_input.getInt32(i, 1);
        int32_t _d_moy3920 = tbl_SerializeFromObject_TD_11330740_input.getInt32(i, 2);
        int32_t _d_date_sk3912 = tbl_SerializeFromObject_TD_11330740_input.getInt32(i, 0);
        if ((((_d_year3918!= 0) && (_d_moy3920!= 0)) && ((_d_year3918 == 2001) && (_d_moy3920 == 11))) && (_d_date_sk3912!= 0)) {
            int32_t _d_date_sk3912_t = tbl_SerializeFromObject_TD_11330740_input.getInt32(i, 0);
            tbl_Filter_TD_1084850_output.setInt32(r, 0, _d_date_sk3912_t);
            r++;
        }
    }
    tbl_Filter_TD_1084850_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1084850_output #Row: " << tbl_Filter_TD_1084850_output.getNumRow() << std::endl;
}


void SW_Union_TD_9571637(Table &tbl_Project_TD_10526046_output, Table &tbl_Project_TD_10816520_output, Table &tbl_Project_TD_10572105_output, Table &tbl_Union_TD_9571637_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#3563, list_price#3564)
    int r = 0;
    int row0 = tbl_Project_TD_10526046_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9571637_output.setInt32(r, 0, tbl_Project_TD_10526046_output.getInt32(i, 0));
        tbl_Union_TD_9571637_output.setInt32(r, 1, tbl_Project_TD_10526046_output.getInt64(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10816520_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9571637_output.setInt32(r, 0, tbl_Project_TD_10816520_output.getInt32(i, 0));
        tbl_Union_TD_9571637_output.setInt32(r, 1, tbl_Project_TD_10816520_output.getInt64(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10572105_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9571637_output.setInt32(r, 0, tbl_Project_TD_10572105_output.getInt32(i, 0));
        tbl_Union_TD_9571637_output.setInt32(r, 1, tbl_Project_TD_10572105_output.getInt64(i, 1));
        ++r;
    }
    tbl_Union_TD_9571637_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9571637_output #Row: " << tbl_Union_TD_9571637_output.getNumRow() << std::endl;
}


void SW_Union_TD_9650467(Table &tbl_Project_TD_10839425_output, Table &tbl_Project_TD_10362783_output, Table &tbl_Project_TD_10624136_output, Table &tbl_Union_TD_9650467_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#3563, list_price#3564)
    int r = 0;
    int row0 = tbl_Project_TD_10839425_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9650467_output.setInt32(r, 0, tbl_Project_TD_10839425_output.getInt32(i, 0));
        tbl_Union_TD_9650467_output.setInt32(r, 1, tbl_Project_TD_10839425_output.getInt64(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10362783_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9650467_output.setInt32(r, 0, tbl_Project_TD_10362783_output.getInt32(i, 0));
        tbl_Union_TD_9650467_output.setInt32(r, 1, tbl_Project_TD_10362783_output.getInt64(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10624136_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9650467_output.setInt32(r, 0, tbl_Project_TD_10624136_output.getInt32(i, 0));
        tbl_Union_TD_9650467_output.setInt32(r, 1, tbl_Project_TD_10624136_output.getInt64(i, 1));
        ++r;
    }
    tbl_Union_TD_9650467_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9650467_output #Row: " << tbl_Union_TD_9650467_output.getNumRow() << std::endl;
}


void SW_Union_TD_9696396(Table &tbl_Project_TD_10453254_output, Table &tbl_Project_TD_10221554_output, Table &tbl_Project_TD_10860945_output, Table &tbl_Union_TD_9696396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#3563, list_price#3564)
    int r = 0;
    int row0 = tbl_Project_TD_10453254_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9696396_output.setInt32(r, 0, tbl_Project_TD_10453254_output.getInt32(i, 0));
        tbl_Union_TD_9696396_output.setInt32(r, 1, tbl_Project_TD_10453254_output.getInt64(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10221554_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9696396_output.setInt32(r, 0, tbl_Project_TD_10221554_output.getInt32(i, 0));
        tbl_Union_TD_9696396_output.setInt32(r, 1, tbl_Project_TD_10221554_output.getInt64(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10860945_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9696396_output.setInt32(r, 0, tbl_Project_TD_10860945_output.getInt32(i, 0));
        tbl_Union_TD_9696396_output.setInt32(r, 1, tbl_Project_TD_10860945_output.getInt64(i, 1));
        ++r;
    }
    tbl_Union_TD_9696396_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9696396_output #Row: " << tbl_Union_TD_9696396_output.getNumRow() << std::endl;
}


void SW_Aggregate_TD_8921282(Table &tbl_Union_TD_9571637_output, Table &tbl_Aggregate_TD_8921282_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#3563 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#3564 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#3569)
    // Input: ListBuffer(quantity#3563, list_price#3564)
    // Output: ListBuffer(average_sales#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9571637_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity3563 = tbl_Union_TD_9571637_output.getInt32(i, 0);
        int64_t _list_price3564 = tbl_Union_TD_9571637_output.getInt64(i, 1);
        int64_t _average_sales3569_avg_0 = (_quantity3563 * _list_price3564);
        avg_0 = (avg_0 + _average_sales3569_avg_0);
    }
    int r = 0;
    int64_t _average_sales3569 = avg_0 / nrow1;
    tbl_Aggregate_TD_8921282_output.setInt64(r++, 0, _average_sales3569);
    tbl_Aggregate_TD_8921282_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8921282_output #Row: " << tbl_Aggregate_TD_8921282_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8119461_consolidate(Table &tbl_Aggregate_TD_8119461_output_preprocess, Table &tbl_Aggregate_TD_8119461_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_8119461_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_brand_id4065 = tbl_Aggregate_TD_8119461_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_8119461_output.setInt32(r, 0, _i_brand_id4065);
        int32_t _i_class_id4067 = tbl_Aggregate_TD_8119461_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_8119461_output.setInt32(r, 1, _i_class_id4067);
        int32_t _i_category_id4069 = tbl_Aggregate_TD_8119461_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_8119461_output.setInt32(r, 2, _i_category_id4069);
        int64_t _sales3555 = tbl_Aggregate_TD_8119461_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_8119461_output.setInt64(r, 3, _sales3555);
        int32_t _number_sales3556L = tbl_Aggregate_TD_8119461_output_preprocess.getInt32(r, 1);
        tbl_Aggregate_TD_8119461_output.setInt32(r, 4, _number_sales3556L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_8119461_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_8119461_output #Row: " << tbl_Aggregate_TD_8119461_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8208406(Table &tbl_Union_TD_9650467_output, Table &tbl_Aggregate_TD_8208406_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#3563 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#3564 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#3569)
    // Input: ListBuffer(quantity#3563, list_price#3564)
    // Output: ListBuffer(average_sales#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9650467_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity3563 = tbl_Union_TD_9650467_output.getInt32(i, 0);
        int64_t _list_price3564 = tbl_Union_TD_9650467_output.getInt64(i, 1);
        int64_t _average_sales3569_avg_0 = (_quantity3563 * _list_price3564);
        avg_0 = (avg_0 + _average_sales3569_avg_0);
    }
    int r = 0;
    int64_t _average_sales3569 = avg_0 / nrow1;
    tbl_Aggregate_TD_8208406_output.setInt64(r++, 0, _average_sales3569);
    tbl_Aggregate_TD_8208406_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8208406_output #Row: " << tbl_Aggregate_TD_8208406_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8437431_consolidate(Table &tbl_Aggregate_TD_8437431_output_preprocess, Table &tbl_Aggregate_TD_8437431_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_8437431_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_brand_id3981 = tbl_Aggregate_TD_8437431_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_8437431_output.setInt32(r, 0, _i_brand_id3981);
        int32_t _i_class_id3983 = tbl_Aggregate_TD_8437431_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_8437431_output.setInt32(r, 1, _i_class_id3983);
        int32_t _i_category_id3985 = tbl_Aggregate_TD_8437431_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_8437431_output.setInt32(r, 2, _i_category_id3985);
        int64_t _sales3550 = tbl_Aggregate_TD_8437431_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_8437431_output.setInt64(r, 3, _sales3550);
        int32_t _number_sales3551L = tbl_Aggregate_TD_8437431_output_preprocess.getInt32(r, 1);
        tbl_Aggregate_TD_8437431_output.setInt32(r, 4, _number_sales3551L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_8437431_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_8437431_output #Row: " << tbl_Aggregate_TD_8437431_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8713752(Table &tbl_Union_TD_9696396_output, Table &tbl_Aggregate_TD_8713752_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#3563 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#3564 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#3569)
    // Input: ListBuffer(quantity#3563, list_price#3564)
    // Output: ListBuffer(average_sales#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9696396_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity3563 = tbl_Union_TD_9696396_output.getInt32(i, 0);
        int64_t _list_price3564 = tbl_Union_TD_9696396_output.getInt64(i, 1);
        int64_t _average_sales3569_avg_0 = (_quantity3563 * _list_price3564);
        avg_0 = (avg_0 + _average_sales3569_avg_0);
    }
    int r = 0;
    int64_t _average_sales3569 = avg_0 / nrow1;
    tbl_Aggregate_TD_8713752_output.setInt64(r++, 0, _average_sales3569);
    tbl_Aggregate_TD_8713752_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8713752_output #Row: " << tbl_Aggregate_TD_8713752_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8516788_consolidate(Table &tbl_Aggregate_TD_8516788_output_preprocess, Table &tbl_Aggregate_TD_8516788_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_8516788_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_brand_id3897 = tbl_Aggregate_TD_8516788_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_8516788_output.setInt32(r, 0, _i_brand_id3897);
        int32_t _i_class_id3899 = tbl_Aggregate_TD_8516788_output_preprocess.getInt32(r, 6);
        tbl_Aggregate_TD_8516788_output.setInt32(r, 1, _i_class_id3899);
        int32_t _i_category_id3901 = tbl_Aggregate_TD_8516788_output_preprocess.getInt32(r, 5);
        tbl_Aggregate_TD_8516788_output.setInt32(r, 2, _i_category_id3901);
        int64_t _sales3545 = tbl_Aggregate_TD_8516788_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_8516788_output.setInt64(r, 3, _sales3545);
        int32_t _number_sales3546L = tbl_Aggregate_TD_8516788_output_preprocess.getInt32(r, 1);
        tbl_Aggregate_TD_8516788_output.setInt32(r, 4, _number_sales3546L);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_8516788_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_8516788_output #Row: " << tbl_Aggregate_TD_8516788_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7859914(Table &tbl_Aggregate_TD_8119461_output, Table &tbl_Aggregate_TD_8921282_output, Table &tbl_Filter_TD_7859914_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#3555) AND (cast(sales#3555 as decimal(32,6)) > cast(scalar-subquery#3558 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#4065, i_class_id#4067, i_category_id#4069, sales#3555, number_sales#3556L)
    // Output: ListBuffer(sales#3555, number_sales#3556L, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8119461_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3555 = tbl_Aggregate_TD_8119461_output.getInt64(i, 3);
        if ((_sales3555!= 0) && (_sales3555 > tbl_Aggregate_TD_8921282_output.getInt64(0, 0))) {
            int64_t _sales3555_t = tbl_Aggregate_TD_8119461_output.getInt64(i, 3);
            tbl_Filter_TD_7859914_output.setInt64(r, 0, _sales3555_t);
            int64_t _number_sales3556L_t = tbl_Aggregate_TD_8119461_output.getInt64(i, 4);
            tbl_Filter_TD_7859914_output.setInt64(r, 1, _number_sales3556L_t);
            int32_t _i_brand_id4065_t = tbl_Aggregate_TD_8119461_output.getInt32(i, 0);
            tbl_Filter_TD_7859914_output.setInt32(r, 2, _i_brand_id4065_t);
            int32_t _i_class_id4067_t = tbl_Aggregate_TD_8119461_output.getInt32(i, 1);
            tbl_Filter_TD_7859914_output.setInt32(r, 3, _i_class_id4067_t);
            int32_t _i_category_id4069_t = tbl_Aggregate_TD_8119461_output.getInt32(i, 2);
            tbl_Filter_TD_7859914_output.setInt32(r, 4, _i_category_id4069_t);
            r++;
        }
    }
    tbl_Filter_TD_7859914_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7859914_output #Row: " << tbl_Filter_TD_7859914_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7361450(Table &tbl_Aggregate_TD_8437431_output, Table &tbl_Aggregate_TD_8208406_output, Table &tbl_Filter_TD_7361450_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#3550) AND (cast(sales#3550 as decimal(32,6)) > cast(scalar-subquery#3553 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#3981, i_class_id#3983, i_category_id#3985, sales#3550, number_sales#3551L)
    // Output: ListBuffer(sales#3550, number_sales#3551L, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8437431_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3550 = tbl_Aggregate_TD_8437431_output.getInt64(i, 3);
        if ((_sales3550!= 0) && (_sales3550 > tbl_Aggregate_TD_8208406_output.getInt64(0, 0))) {
            int64_t _sales3550_t = tbl_Aggregate_TD_8437431_output.getInt64(i, 3);
            tbl_Filter_TD_7361450_output.setInt64(r, 0, _sales3550_t);
            int64_t _number_sales3551L_t = tbl_Aggregate_TD_8437431_output.getInt64(i, 4);
            tbl_Filter_TD_7361450_output.setInt64(r, 1, _number_sales3551L_t);
            int32_t _i_brand_id3981_t = tbl_Aggregate_TD_8437431_output.getInt32(i, 0);
            tbl_Filter_TD_7361450_output.setInt32(r, 2, _i_brand_id3981_t);
            int32_t _i_class_id3983_t = tbl_Aggregate_TD_8437431_output.getInt32(i, 1);
            tbl_Filter_TD_7361450_output.setInt32(r, 3, _i_class_id3983_t);
            int32_t _i_category_id3985_t = tbl_Aggregate_TD_8437431_output.getInt32(i, 2);
            tbl_Filter_TD_7361450_output.setInt32(r, 4, _i_category_id3985_t);
            r++;
        }
    }
    tbl_Filter_TD_7361450_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7361450_output #Row: " << tbl_Filter_TD_7361450_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7290908(Table &tbl_Aggregate_TD_8516788_output, Table &tbl_Aggregate_TD_8713752_output, Table &tbl_Filter_TD_7290908_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#3545) AND (cast(sales#3545 as decimal(32,6)) > cast(scalar-subquery#3548 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#3897, i_class_id#3899, i_category_id#3901, sales#3545, number_sales#3546L)
    // Output: ListBuffer(sales#3545, number_sales#3546L, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8516788_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3545 = tbl_Aggregate_TD_8516788_output.getInt64(i, 3);
        if ((_sales3545!= 0) && (_sales3545 > tbl_Aggregate_TD_8713752_output.getInt64(0, 0))) {
            int64_t _sales3545_t = tbl_Aggregate_TD_8516788_output.getInt64(i, 3);
            tbl_Filter_TD_7290908_output.setInt64(r, 0, _sales3545_t);
            int64_t _number_sales3546L_t = tbl_Aggregate_TD_8516788_output.getInt64(i, 4);
            tbl_Filter_TD_7290908_output.setInt64(r, 1, _number_sales3546L_t);
            int32_t _i_brand_id3897_t = tbl_Aggregate_TD_8516788_output.getInt32(i, 0);
            tbl_Filter_TD_7290908_output.setInt32(r, 2, _i_brand_id3897_t);
            int32_t _i_class_id3899_t = tbl_Aggregate_TD_8516788_output.getInt32(i, 1);
            tbl_Filter_TD_7290908_output.setInt32(r, 3, _i_class_id3899_t);
            int32_t _i_category_id3901_t = tbl_Aggregate_TD_8516788_output.getInt32(i, 2);
            tbl_Filter_TD_7290908_output.setInt32(r, 4, _i_category_id3901_t);
            r++;
        }
    }
    tbl_Filter_TD_7290908_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7290908_output #Row: " << tbl_Filter_TD_7290908_output.getNumRow() << std::endl;
}

void SW_Project_TD_6793806(Table &tbl_Filter_TD_7859914_output, Table &tbl_Project_TD_6793806_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#4540)
    // Input: ListBuffer(sales#3555, number_sales#3556L, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Output: ListBuffer(sales#3555, number_sales#3556L, channel#4540, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int nrow1 = tbl_Filter_TD_7859914_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3555 = tbl_Filter_TD_7859914_output.getInt64(i, 0);
        int64_t _number_sales3556L = tbl_Filter_TD_7859914_output.getInt64(i, 1);
        int32_t _i_brand_id4065 = tbl_Filter_TD_7859914_output.getInt32(i, 2);
        int32_t _i_class_id4067 = tbl_Filter_TD_7859914_output.getInt32(i, 3);
        int32_t _i_category_id4069 = tbl_Filter_TD_7859914_output.getInt32(i, 4);
        std::string _channel4540_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel4540{};
        memcpy(_channel4540.data(), _channel4540_str.data(), (_channel4540_str).length());
        tbl_Project_TD_6793806_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel4540);
        tbl_Project_TD_6793806_output.setInt64(i, 0, _sales3555);
        tbl_Project_TD_6793806_output.setInt64(i, 1, _number_sales3556L);
        tbl_Project_TD_6793806_output.setInt32(i, 3, _i_brand_id4065);
        tbl_Project_TD_6793806_output.setInt32(i, 4, _i_class_id4067);
        tbl_Project_TD_6793806_output.setInt32(i, 5, _i_category_id4069);
    }
    tbl_Project_TD_6793806_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6793806_output #Row: " << tbl_Project_TD_6793806_output.getNumRow() << std::endl;
}

void SW_Project_TD_6517751(Table &tbl_Filter_TD_7361450_output, Table &tbl_Project_TD_6517751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#4536)
    // Input: ListBuffer(sales#3550, number_sales#3551L, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Output: ListBuffer(sales#3550, number_sales#3551L, channel#4536, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int nrow1 = tbl_Filter_TD_7361450_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3550 = tbl_Filter_TD_7361450_output.getInt64(i, 0);
        int64_t _number_sales3551L = tbl_Filter_TD_7361450_output.getInt64(i, 1);
        int32_t _i_brand_id3981 = tbl_Filter_TD_7361450_output.getInt32(i, 2);
        int32_t _i_class_id3983 = tbl_Filter_TD_7361450_output.getInt32(i, 3);
        int32_t _i_category_id3985 = tbl_Filter_TD_7361450_output.getInt32(i, 4);
        std::string _channel4536_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel4536{};
        memcpy(_channel4536.data(), _channel4536_str.data(), (_channel4536_str).length());
        tbl_Project_TD_6517751_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel4536);
        tbl_Project_TD_6517751_output.setInt64(i, 0, _sales3550);
        tbl_Project_TD_6517751_output.setInt64(i, 1, _number_sales3551L);
        tbl_Project_TD_6517751_output.setInt32(i, 3, _i_brand_id3981);
        tbl_Project_TD_6517751_output.setInt32(i, 4, _i_class_id3983);
        tbl_Project_TD_6517751_output.setInt32(i, 5, _i_category_id3985);
    }
    tbl_Project_TD_6517751_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6517751_output #Row: " << tbl_Project_TD_6517751_output.getNumRow() << std::endl;
}

void SW_Project_TD_6325553(Table &tbl_Filter_TD_7290908_output, Table &tbl_Project_TD_6325553_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#4134)
    // Input: ListBuffer(sales#3545, number_sales#3546L, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output: ListBuffer(sales#3545, number_sales#3546L, channel#4134, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int nrow1 = tbl_Filter_TD_7290908_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3545 = tbl_Filter_TD_7290908_output.getInt64(i, 0);
        int64_t _number_sales3546L = tbl_Filter_TD_7290908_output.getInt64(i, 1);
        int32_t _i_brand_id3897 = tbl_Filter_TD_7290908_output.getInt32(i, 2);
        int32_t _i_class_id3899 = tbl_Filter_TD_7290908_output.getInt32(i, 3);
        int32_t _i_category_id3901 = tbl_Filter_TD_7290908_output.getInt32(i, 4);
        std::string _channel4134_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel4134{};
        memcpy(_channel4134.data(), _channel4134_str.data(), (_channel4134_str).length());
        tbl_Project_TD_6325553_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel4134);
        tbl_Project_TD_6325553_output.setInt64(i, 0, _sales3545);
        tbl_Project_TD_6325553_output.setInt64(i, 1, _number_sales3546L);
        tbl_Project_TD_6325553_output.setInt32(i, 3, _i_brand_id3897);
        tbl_Project_TD_6325553_output.setInt32(i, 4, _i_class_id3899);
        tbl_Project_TD_6325553_output.setInt32(i, 5, _i_category_id3901);
    }
    tbl_Project_TD_6325553_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6325553_output #Row: " << tbl_Project_TD_6325553_output.getNumRow() << std::endl;
}

void SW_Union_TD_5142580(Table &tbl_Project_TD_6325553_output, Table &tbl_Project_TD_6517751_output, Table &tbl_Project_TD_6793806_output, Table &tbl_Union_TD_5142580_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#3545, number_sales#3546L, channel#4134, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int r = 0;
    int row0 = tbl_Project_TD_6325553_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5142580_output.setInt32(r, 0, tbl_Project_TD_6325553_output.getInt64(i, 0));
        tbl_Union_TD_5142580_output.setInt32(r, 1, tbl_Project_TD_6325553_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel4134_n = tbl_Union_TD_5142580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5142580_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel4134_n);
        tbl_Union_TD_5142580_output.setInt32(r, 3, tbl_Project_TD_6325553_output.getInt32(i, 3));
        tbl_Union_TD_5142580_output.setInt32(r, 4, tbl_Project_TD_6325553_output.getInt32(i, 4));
        tbl_Union_TD_5142580_output.setInt32(r, 5, tbl_Project_TD_6325553_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_6517751_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5142580_output.setInt32(r, 0, tbl_Project_TD_6517751_output.getInt64(i, 0));
        tbl_Union_TD_5142580_output.setInt32(r, 1, tbl_Project_TD_6517751_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel4536_n = tbl_Union_TD_5142580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5142580_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel4536_n);
        tbl_Union_TD_5142580_output.setInt32(r, 3, tbl_Project_TD_6517751_output.getInt32(i, 3));
        tbl_Union_TD_5142580_output.setInt32(r, 4, tbl_Project_TD_6517751_output.getInt32(i, 4));
        tbl_Union_TD_5142580_output.setInt32(r, 5, tbl_Project_TD_6517751_output.getInt32(i, 5));
        ++r;
    }
    int row2 = tbl_Project_TD_6793806_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5142580_output.setInt32(r, 0, tbl_Project_TD_6793806_output.getInt64(i, 0));
        tbl_Union_TD_5142580_output.setInt32(r, 1, tbl_Project_TD_6793806_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel4540_n = tbl_Union_TD_5142580_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5142580_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel4540_n);
        tbl_Union_TD_5142580_output.setInt32(r, 3, tbl_Project_TD_6793806_output.getInt32(i, 3));
        tbl_Union_TD_5142580_output.setInt32(r, 4, tbl_Project_TD_6793806_output.getInt32(i, 4));
        tbl_Union_TD_5142580_output.setInt32(r, 5, tbl_Project_TD_6793806_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_5142580_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5142580_output #Row: " << tbl_Union_TD_5142580_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4782296(Table &tbl_Union_TD_5142580_output, Table &tbl_Expand_TD_4782296_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#3545, number_sales#3546L, channel#4134, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output: ListBuffer(sales#3545, number_sales#3546L, channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, spark_grouping_id#4138L)
    std::cout << "tbl_Expand_TD_4782296_output #Row: " << tbl_Expand_TD_4782296_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3440297_key {
    std::string _channel4139;
    int32_t _i_brand_id4140;
    int32_t _i_class_id4141;
    int32_t _i_category_id4142;
    int64_t _spark_grouping_id4138L;
    bool operator==(const SW_Aggregate_TD_3440297_key& other) const { return (_channel4139 == other._channel4139) && (_i_brand_id4140 == other._i_brand_id4140) && (_i_class_id4141 == other._i_class_id4141) && (_i_category_id4142 == other._i_category_id4142) && (_spark_grouping_id4138L == other._spark_grouping_id4138L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3440297_key> {
    std::size_t operator() (const SW_Aggregate_TD_3440297_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel4139)) + (hash<int32_t>()(k._i_brand_id4140)) + (hash<int32_t>()(k._i_class_id4141)) + (hash<int32_t>()(k._i_category_id4142)) + (hash<int64_t>()(k._spark_grouping_id4138L));
    }
};
}
struct SW_Aggregate_TD_3440297_payload {
    int64_t _sumsales4129_sum_0;
    int64_t _sumnumber_sales4130L_sum_1;
};
void SW_Aggregate_TD_3440297(Table &tbl_Expand_TD_4782296_output, Table &tbl_Aggregate_TD_3440297_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, spark_grouping_id#4138L, sum(sales#3545) AS sum(sales)#4129, sum(number_sales#3546L) AS sum(number_sales)#4130L)
    // Input: ListBuffer(sales#3545, number_sales#3546L, channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, spark_grouping_id#4138L)
    // Output: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    std::unordered_map<SW_Aggregate_TD_3440297_key, SW_Aggregate_TD_3440297_payload> ht1;
    int nrow1 = tbl_Expand_TD_4782296_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales3545 = tbl_Expand_TD_4782296_output.getInt64(i, 0);
        int64_t _number_sales3546L = tbl_Expand_TD_4782296_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _channel4139 = tbl_Expand_TD_4782296_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_brand_id4140 = tbl_Expand_TD_4782296_output.getInt32(i, 3);
        int32_t _i_class_id4141 = tbl_Expand_TD_4782296_output.getInt32(i, 4);
        int32_t _i_category_id4142 = tbl_Expand_TD_4782296_output.getInt32(i, 5);
        int64_t _spark_grouping_id4138L = tbl_Expand_TD_4782296_output.getInt64(i, 6);
        SW_Aggregate_TD_3440297_key k{std::string(_channel4139.data()), _i_brand_id4140, _i_class_id4141, _i_category_id4142, _spark_grouping_id4138L};
        int64_t _sumsales4129_sum_0 = _sales3545;
        int64_t _sumnumber_sales4130L_sum_1 = _number_sales3546L;
        SW_Aggregate_TD_3440297_payload p{_sumsales4129_sum_0, _sumnumber_sales4130L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sumsales4129_sum_0 + _sumsales4129_sum_0;
            p._sumsales4129_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._sumnumber_sales4130L_sum_1 + _sumnumber_sales4130L_sum_1;
            p._sumnumber_sales4130L_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139{};
        memcpy(_channel4139.data(), ((it.first)._channel4139).data(), ((it.first)._channel4139).length());
        tbl_Aggregate_TD_3440297_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel4139);
        tbl_Aggregate_TD_3440297_output.setInt32(r, 1, (it.first)._i_brand_id4140);
        tbl_Aggregate_TD_3440297_output.setInt32(r, 2, (it.first)._i_class_id4141);
        tbl_Aggregate_TD_3440297_output.setInt32(r, 3, (it.first)._i_category_id4142);
        // _spark_grouping_id4138L not required in the output table
        int64_t _sumsales4129 = (it.second)._sumsales4129_sum_0;
        tbl_Aggregate_TD_3440297_output.setInt64(r, 4, _sumsales4129);
        int64_t _sumnumber_sales4130L = (it.second)._sumnumber_sales4130L_sum_1;
        tbl_Aggregate_TD_3440297_output.setInt64(r, 5, _sumnumber_sales4130L);
        ++r;
    }
    tbl_Aggregate_TD_3440297_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3440297_output #Row: " << tbl_Aggregate_TD_3440297_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2441359(Table &tbl_Aggregate_TD_3440297_output, Table &tbl_Sort_TD_2441359_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#4139 ASC NULLS FIRST, i_brand_id#4140 ASC NULLS FIRST, i_class_id#4141 ASC NULLS FIRST, i_category_id#4142 ASC NULLS FIRST)
    // Input: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    // Output: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    struct SW_Sort_TD_2441359Row {
        std::string _channel4139;
        int32_t _i_brand_id4140;
        int32_t _i_class_id4141;
        int32_t _i_category_id4142;
        int64_t _sumsales4129;
        int64_t _sumnumber_sales4130L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2441359Row& a, const SW_Sort_TD_2441359Row& b) const { return 
 (a._channel4139 < b._channel4139) || 
 ((a._channel4139 == b._channel4139) && (a._i_brand_id4140 < b._i_brand_id4140)) || 
 ((a._channel4139 == b._channel4139) && (a._i_brand_id4140 == b._i_brand_id4140) && (a._i_class_id4141 < b._i_class_id4141)) || 
 ((a._channel4139 == b._channel4139) && (a._i_brand_id4140 == b._i_brand_id4140) && (a._i_class_id4141 == b._i_class_id4141) && (a._i_category_id4142 < b._i_category_id4142)); 
}
    }SW_Sort_TD_2441359_order; 

    int nrow1 = tbl_Aggregate_TD_3440297_output.getNumRow();
    std::vector<SW_Sort_TD_2441359Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139 = tbl_Aggregate_TD_3440297_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _i_brand_id4140 = tbl_Aggregate_TD_3440297_output.getInt32(i, 1);
        int32_t _i_class_id4141 = tbl_Aggregate_TD_3440297_output.getInt32(i, 2);
        int32_t _i_category_id4142 = tbl_Aggregate_TD_3440297_output.getInt32(i, 3);
        int64_t _sumsales4129 = tbl_Aggregate_TD_3440297_output.getInt64(i, 4);
        int64_t _sumnumber_sales4130L = tbl_Aggregate_TD_3440297_output.getInt64(i, 5);
        SW_Sort_TD_2441359Row t = {std::string(_channel4139.data()),_i_brand_id4140,_i_class_id4141,_i_category_id4142,_sumsales4129,_sumnumber_sales4130L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2441359_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139{};
        memcpy(_channel4139.data(), (it._channel4139).data(), (it._channel4139).length());
        tbl_Sort_TD_2441359_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel4139);
        tbl_Sort_TD_2441359_output.setInt32(r, 1, it._i_brand_id4140);
        tbl_Sort_TD_2441359_output.setInt32(r, 2, it._i_class_id4141);
        tbl_Sort_TD_2441359_output.setInt32(r, 3, it._i_category_id4142);
        tbl_Sort_TD_2441359_output.setInt64(r, 4, it._sumsales4129);
        tbl_Sort_TD_2441359_output.setInt64(r, 5, it._sumnumber_sales4130L);
        ++r;
    }
    tbl_Sort_TD_2441359_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2441359_output #Row: " << tbl_Sort_TD_2441359_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1314484(Table &tbl_Sort_TD_2441359_output, Table &tbl_LocalLimit_TD_1314484_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    // Output: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139_n = tbl_Sort_TD_2441359_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1314484_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel4139_n);
        tbl_LocalLimit_TD_1314484_output.setInt32(r, 1, tbl_Sort_TD_2441359_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1314484_output.setInt32(r, 2, tbl_Sort_TD_2441359_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1314484_output.setInt32(r, 3, tbl_Sort_TD_2441359_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1314484_output.setInt64(r, 4, tbl_Sort_TD_2441359_output.getInt64(i, 4));
        tbl_LocalLimit_TD_1314484_output.setInt64(r, 5, tbl_Sort_TD_2441359_output.getInt64(i, 5));
        r++;
    }
    tbl_LocalLimit_TD_1314484_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1314484_output #Row: " << tbl_LocalLimit_TD_1314484_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_041874(Table &tbl_LocalLimit_TD_1314484_output, Table &tbl_GlobalLimit_TD_041874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    // Output: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139_n = tbl_LocalLimit_TD_1314484_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_041874_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel4139_n);
        tbl_GlobalLimit_TD_041874_output.setInt32(r, 1, tbl_LocalLimit_TD_1314484_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_041874_output.setInt32(r, 2, tbl_LocalLimit_TD_1314484_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_041874_output.setInt32(r, 3, tbl_LocalLimit_TD_1314484_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_041874_output.setInt64(r, 4, tbl_LocalLimit_TD_1314484_output.getInt64(i, 4));
        tbl_GlobalLimit_TD_041874_output.setInt64(r, 5, tbl_LocalLimit_TD_1314484_output.getInt64(i, 5));
        r++;
    }
    tbl_GlobalLimit_TD_041874_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_041874_output #Row: " << tbl_GlobalLimit_TD_041874_output.getNumRow() << std::endl;
}

