#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_9183412(Table &tbl_SerializeFromObject_TD_10565563_input, Table &tbl_Filter_TD_9183412_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3620) AND isnotnull(d_moy#3622)) AND ((d_year#3620 = 1998) AND (d_moy#3622 = 5))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620, d_moy#3622)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10565563_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_10565563_input.getInt32(i, 1);
        int32_t _d_moy3622 = tbl_SerializeFromObject_TD_10565563_input.getInt32(i, 2);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_10565563_input.getInt32(i, 0);
        if ((((_d_year3620!= 0) && (_d_moy3622!= 0)) && ((_d_year3620 == 1998) && (_d_moy3622 == 5))) && (_d_date_sk3614!= 0)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_10565563_input.getInt32(i, 0);
            tbl_Filter_TD_9183412_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_9183412_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9183412_output #Row: " << tbl_Filter_TD_9183412_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9130594(Table &tbl_SerializeFromObject_TD_10997412_input, Table &tbl_Filter_TD_9130594_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND (isnotnull(ws_bill_addr_sk#736) AND isnotnull(ws_item_sk#732))))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_bill_addr_sk#736, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10997412_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10997412_input.getInt32(i, 0);
        int32_t _ws_bill_addr_sk736 = tbl_SerializeFromObject_TD_10997412_input.getInt32(i, 2);
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_10997412_input.getInt32(i, 1);
        if ((_ws_sold_date_sk729!= 0) && ((_ws_bill_addr_sk736!= 0) && (_ws_item_sk732!= 0))) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10997412_input.getInt32(i, 0);
            tbl_Filter_TD_9130594_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_10997412_input.getInt32(i, 1);
            tbl_Filter_TD_9130594_output.setInt32(r, 1, _ws_item_sk732_t);
            int32_t _ws_bill_addr_sk736_t = tbl_SerializeFromObject_TD_10997412_input.getInt32(i, 2);
            tbl_Filter_TD_9130594_output.setInt32(r, 2, _ws_bill_addr_sk736_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10997412_input.getInt64(i, 3);
            tbl_Filter_TD_9130594_output.setInt64(r, 3, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9130594_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9130594_output #Row: " << tbl_Filter_TD_9130594_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9240343(Table &tbl_SerializeFromObject_TD_10911781_input, Table &tbl_Filter_TD_9240343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3557) AND isnotnull(d_moy#3559)) AND ((d_year#3557 = 1998) AND (d_moy#3559 = 5))) AND isnotnull(d_date_sk#3551)))
    // Input: ListBuffer(d_date_sk#3551, d_year#3557, d_moy#3559)
    // Output: ListBuffer(d_date_sk#3551)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10911781_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3557 = tbl_SerializeFromObject_TD_10911781_input.getInt32(i, 1);
        int32_t _d_moy3559 = tbl_SerializeFromObject_TD_10911781_input.getInt32(i, 2);
        int32_t _d_date_sk3551 = tbl_SerializeFromObject_TD_10911781_input.getInt32(i, 0);
        if ((((_d_year3557!= 0) && (_d_moy3559!= 0)) && ((_d_year3557 == 1998) && (_d_moy3559 == 5))) && (_d_date_sk3551!= 0)) {
            int32_t _d_date_sk3551_t = tbl_SerializeFromObject_TD_10911781_input.getInt32(i, 0);
            tbl_Filter_TD_9240343_output.setInt32(r, 0, _d_date_sk3551_t);
            r++;
        }
    }
    tbl_Filter_TD_9240343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9240343_output #Row: " << tbl_Filter_TD_9240343_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9372891(Table &tbl_SerializeFromObject_TD_10497619_input, Table &tbl_Filter_TD_9372891_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND (isnotnull(cs_bill_addr_sk#1110) AND isnotnull(cs_item_sk#1119))))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_bill_addr_sk#1110, cs_item_sk#1119, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10497619_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10497619_input.getInt32(i, 0);
        int32_t _cs_bill_addr_sk1110 = tbl_SerializeFromObject_TD_10497619_input.getInt32(i, 1);
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_10497619_input.getInt32(i, 2);
        if ((_cs_sold_date_sk1104!= 0) && ((_cs_bill_addr_sk1110!= 0) && (_cs_item_sk1119!= 0))) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10497619_input.getInt32(i, 0);
            tbl_Filter_TD_9372891_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_bill_addr_sk1110_t = tbl_SerializeFromObject_TD_10497619_input.getInt32(i, 1);
            tbl_Filter_TD_9372891_output.setInt32(r, 1, _cs_bill_addr_sk1110_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_10497619_input.getInt32(i, 2);
            tbl_Filter_TD_9372891_output.setInt32(r, 2, _cs_item_sk1119_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10497619_input.getInt64(i, 3);
            tbl_Filter_TD_9372891_output.setInt64(r, 3, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9372891_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9372891_output #Row: " << tbl_Filter_TD_9372891_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9700540(Table &tbl_SerializeFromObject_TD_10577154_input, Table &tbl_Filter_TD_9700540_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#126) AND isnotnull(d_moy#128)) AND ((d_year#126 = 1998) AND (d_moy#128 = 5))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126, d_moy#128)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10577154_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_10577154_input.getInt32(i, 1);
        int32_t _d_moy128 = tbl_SerializeFromObject_TD_10577154_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10577154_input.getInt32(i, 0);
        if ((((_d_year126!= 0) && (_d_moy128!= 0)) && ((_d_year126 == 1998) && (_d_moy128 == 5))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10577154_input.getInt32(i, 0);
            tbl_Filter_TD_9700540_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9700540_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9700540_output #Row: " << tbl_Filter_TD_9700540_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9973823(Table &tbl_SerializeFromObject_TD_10268607_input, Table &tbl_Filter_TD_9973823_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND (isnotnull(ss_addr_sk#1212) AND isnotnull(ss_item_sk#1208))))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_addr_sk#1212, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10268607_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_10268607_input.getInt32(i, 0);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_10268607_input.getInt32(i, 2);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_10268607_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && ((_ss_addr_sk1212!= 0) && (_ss_item_sk1208!= 0))) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_10268607_input.getInt32(i, 0);
            tbl_Filter_TD_9973823_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_10268607_input.getInt32(i, 1);
            tbl_Filter_TD_9973823_output.setInt32(r, 1, _ss_item_sk1208_t);
            int32_t _ss_addr_sk1212_t = tbl_SerializeFromObject_TD_10268607_input.getInt32(i, 2);
            tbl_Filter_TD_9973823_output.setInt32(r, 2, _ss_addr_sk1212_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_10268607_input.getInt64(i, 3);
            tbl_Filter_TD_9973823_output.setInt64(r, 3, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_9973823_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9973823_output #Row: " << tbl_Filter_TD_9973823_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8374641(Table &tbl_SerializeFromObject_TD_9517456_input, Table &tbl_Filter_TD_8374641_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#3733) AND (i_category#3733 = Electronics)))
    // Input: ListBuffer(i_manufact_id#3734, i_category#3733)
    // Output: ListBuffer(i_manufact_id#3734)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9517456_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category3733 = tbl_SerializeFromObject_TD_9517456_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((std::string(_i_category3733.data()) != "NULL") && (std::string(_i_category3733.data()) == "Electronics")) {
            int32_t _i_manufact_id3734_t = tbl_SerializeFromObject_TD_9517456_input.getInt32(i, 0);
            tbl_Filter_TD_8374641_output.setInt32(r, 0, _i_manufact_id3734_t);
            r++;
        }
    }
    tbl_Filter_TD_8374641_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8374641_output #Row: " << tbl_Filter_TD_8374641_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8843891(Table &tbl_SerializeFromObject_TD_9495262_input, Table &tbl_Filter_TD_8843891_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3655))
    // Input: ListBuffer(i_item_sk#3655, i_manufact_id#3668)
    // Output: ListBuffer(i_item_sk#3655, i_manufact_id#3668)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9495262_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3655 = tbl_SerializeFromObject_TD_9495262_input.getInt32(i, 0);
        if (_i_item_sk3655!= 0) {
            int32_t _i_item_sk3655_t = tbl_SerializeFromObject_TD_9495262_input.getInt32(i, 0);
            tbl_Filter_TD_8843891_output.setInt32(r, 0, _i_item_sk3655_t);
            int32_t _i_manufact_id3668_t = tbl_SerializeFromObject_TD_9495262_input.getInt32(i, 1);
            tbl_Filter_TD_8843891_output.setInt32(r, 1, _i_manufact_id3668_t);
            r++;
        }
    }
    tbl_Filter_TD_8843891_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8843891_output #Row: " << tbl_Filter_TD_8843891_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8236046(Table &tbl_SerializeFromObject_TD_94482_input, Table &tbl_Filter_TD_8236046_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#3653) AND (ca_gmt_offset#3653 = -5.00)) AND isnotnull(ca_address_sk#3642)))
    // Input: ListBuffer(ca_address_sk#3642, ca_gmt_offset#3653)
    // Output: ListBuffer(ca_address_sk#3642)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_94482_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ca_gmt_offset3653 = tbl_SerializeFromObject_TD_94482_input.getInt64(i, 1);
        int32_t _ca_address_sk3642 = tbl_SerializeFromObject_TD_94482_input.getInt32(i, 0);
        if (((_ca_gmt_offset3653!= 0) && (_ca_gmt_offset3653 == -5.00)) && (_ca_address_sk3642!= 0)) {
            int32_t _ca_address_sk3642_t = tbl_SerializeFromObject_TD_94482_input.getInt32(i, 0);
            tbl_Filter_TD_8236046_output.setInt32(r, 0, _ca_address_sk3642_t);
            r++;
        }
    }
    tbl_Filter_TD_8236046_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8236046_output #Row: " << tbl_Filter_TD_8236046_output.getNumRow() << std::endl;
}


void SW_Filter_TD_898052(Table &tbl_SerializeFromObject_TD_9482178_input, Table &tbl_Filter_TD_898052_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#3711) AND (i_category#3711 = Electronics)))
    // Input: ListBuffer(i_manufact_id#3712, i_category#3711)
    // Output: ListBuffer(i_manufact_id#3712)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9482178_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category3711 = tbl_SerializeFromObject_TD_9482178_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((std::string(_i_category3711.data()) != "NULL") && (std::string(_i_category3711.data()) == "Electronics")) {
            int32_t _i_manufact_id3712_t = tbl_SerializeFromObject_TD_9482178_input.getInt32(i, 0);
            tbl_Filter_TD_898052_output.setInt32(r, 0, _i_manufact_id3712_t);
            r++;
        }
    }
    tbl_Filter_TD_898052_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_898052_output #Row: " << tbl_Filter_TD_898052_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8284973(Table &tbl_SerializeFromObject_TD_9508366_input, Table &tbl_Filter_TD_8284973_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_manufact_id#3605)
    // Output: ListBuffer(i_item_sk#3592, i_manufact_id#3605)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9508366_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_9508366_input.getInt32(i, 0);
        if (_i_item_sk3592!= 0) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_9508366_input.getInt32(i, 0);
            tbl_Filter_TD_8284973_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_manufact_id3605_t = tbl_SerializeFromObject_TD_9508366_input.getInt32(i, 1);
            tbl_Filter_TD_8284973_output.setInt32(r, 1, _i_manufact_id3605_t);
            r++;
        }
    }
    tbl_Filter_TD_8284973_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8284973_output #Row: " << tbl_Filter_TD_8284973_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8847181(Table &tbl_SerializeFromObject_TD_9924233_input, Table &tbl_Filter_TD_8847181_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#3590) AND (ca_gmt_offset#3590 = -5.00)) AND isnotnull(ca_address_sk#3579)))
    // Input: ListBuffer(ca_address_sk#3579, ca_gmt_offset#3590)
    // Output: ListBuffer(ca_address_sk#3579)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9924233_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ca_gmt_offset3590 = tbl_SerializeFromObject_TD_9924233_input.getInt64(i, 1);
        int32_t _ca_address_sk3579 = tbl_SerializeFromObject_TD_9924233_input.getInt32(i, 0);
        if (((_ca_gmt_offset3590!= 0) && (_ca_gmt_offset3590 == -5.00)) && (_ca_address_sk3579!= 0)) {
            int32_t _ca_address_sk3579_t = tbl_SerializeFromObject_TD_9924233_input.getInt32(i, 0);
            tbl_Filter_TD_8847181_output.setInt32(r, 0, _ca_address_sk3579_t);
            r++;
        }
    }
    tbl_Filter_TD_8847181_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8847181_output #Row: " << tbl_Filter_TD_8847181_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8794557(Table &tbl_SerializeFromObject_TD_9459724_input, Table &tbl_Filter_TD_8794557_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_category#3689) AND (i_category#3689 = Electronics)))
    // Input: ListBuffer(i_manufact_id#3690, i_category#3689)
    // Output: ListBuffer(i_manufact_id#3690)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9459724_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category3689 = tbl_SerializeFromObject_TD_9459724_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        if ((std::string(_i_category3689.data()) != "NULL") && (std::string(_i_category3689.data()) == "Electronics")) {
            int32_t _i_manufact_id3690_t = tbl_SerializeFromObject_TD_9459724_input.getInt32(i, 0);
            tbl_Filter_TD_8794557_output.setInt32(r, 0, _i_manufact_id3690_t);
            r++;
        }
    }
    tbl_Filter_TD_8794557_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8794557_output #Row: " << tbl_Filter_TD_8794557_output.getNumRow() << std::endl;
}

void SW_Filter_TD_872699(Table &tbl_SerializeFromObject_TD_9305529_input, Table &tbl_Filter_TD_872699_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_manufact_id#241)
    // Output: ListBuffer(i_item_sk#228, i_manufact_id#241)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9305529_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_9305529_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_9305529_input.getInt32(i, 0);
            tbl_Filter_TD_872699_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_manufact_id241_t = tbl_SerializeFromObject_TD_9305529_input.getInt32(i, 1);
            tbl_Filter_TD_872699_output.setInt32(r, 1, _i_manufact_id241_t);
            r++;
        }
    }
    tbl_Filter_TD_872699_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_872699_output #Row: " << tbl_Filter_TD_872699_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8968724(Table &tbl_SerializeFromObject_TD_9635821_input, Table &tbl_Filter_TD_8968724_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ca_gmt_offset#65) AND (ca_gmt_offset#65 = -5.00)) AND isnotnull(ca_address_sk#54)))
    // Input: ListBuffer(ca_address_sk#54, ca_gmt_offset#65)
    // Output: ListBuffer(ca_address_sk#54)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9635821_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ca_gmt_offset65 = tbl_SerializeFromObject_TD_9635821_input.getInt64(i, 1);
        int32_t _ca_address_sk54 = tbl_SerializeFromObject_TD_9635821_input.getInt32(i, 0);
        if (((_ca_gmt_offset65!= 0) && (_ca_gmt_offset65 == -5.00)) && (_ca_address_sk54!= 0)) {
            int32_t _ca_address_sk54_t = tbl_SerializeFromObject_TD_9635821_input.getInt32(i, 0);
            tbl_Filter_TD_8968724_output.setInt32(r, 0, _ca_address_sk54_t);
            r++;
        }
    }
    tbl_Filter_TD_8968724_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8968724_output #Row: " << tbl_Filter_TD_8968724_output.getNumRow() << std::endl;
}











void SW_Aggregate_TD_5427655_consolidate(Table &tbl_Aggregate_TD_5427655_output_preprocess, Table &tbl_Aggregate_TD_5427655_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_5427655_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_manufact_id3668 = tbl_Aggregate_TD_5427655_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_5427655_output.setInt32(r, 0, _i_manufact_id3668);
        int64_t _total_sales3549 = tbl_Aggregate_TD_5427655_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_5427655_output.setInt64(r, 1, _total_sales3549);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_5427655_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_5427655_output #Row: " << tbl_Aggregate_TD_5427655_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5222086_consolidate(Table &tbl_Aggregate_TD_5222086_output_preprocess, Table &tbl_Aggregate_TD_5222086_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_5222086_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_manufact_id3605 = tbl_Aggregate_TD_5222086_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_5222086_output.setInt32(r, 0, _i_manufact_id3605);
        int64_t _total_sales3547 = tbl_Aggregate_TD_5222086_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_5222086_output.setInt64(r, 1, _total_sales3547);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_5222086_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_5222086_output #Row: " << tbl_Aggregate_TD_5222086_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_5498396_consolidate(Table &tbl_Aggregate_TD_5498396_output_preprocess, Table &tbl_Aggregate_TD_5498396_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_5498396_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_5498396_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_5498396_output.setInt32(r, 0, _i_manufact_id241);
        int64_t _total_sales3545 = tbl_Aggregate_TD_5498396_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_5498396_output.setInt64(r, 1, _total_sales3545);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_5498396_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_5498396_output #Row: " << tbl_Aggregate_TD_5498396_output.getNumRow() << std::endl;
}

void SW_Union_TD_4778146(Table &tbl_Aggregate_TD_5498396_output, Table &tbl_Aggregate_TD_5222086_output, Table &tbl_Aggregate_TD_5427655_output, Table &tbl_Union_TD_4778146_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(i_manufact_id#241, total_sales#3545)
    int r = 0;
    int row0 = tbl_Aggregate_TD_5498396_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_4778146_output.setInt32(r, 0, tbl_Aggregate_TD_5498396_output.getInt32(i, 0));
        tbl_Union_TD_4778146_output.setInt32(r, 1, tbl_Aggregate_TD_5498396_output.getInt64(i, 1));
        ++r;
    }
    int row1 = tbl_Aggregate_TD_5222086_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_4778146_output.setInt32(r, 0, tbl_Aggregate_TD_5222086_output.getInt32(i, 0));
        tbl_Union_TD_4778146_output.setInt32(r, 1, tbl_Aggregate_TD_5222086_output.getInt64(i, 1));
        ++r;
    }
    int row2 = tbl_Aggregate_TD_5427655_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_4778146_output.setInt32(r, 0, tbl_Aggregate_TD_5427655_output.getInt32(i, 0));
        tbl_Union_TD_4778146_output.setInt32(r, 1, tbl_Aggregate_TD_5427655_output.getInt64(i, 1));
        ++r;
    }
    tbl_Union_TD_4778146_output.setNumRow(r);
    std::cout << "tbl_Union_TD_4778146_output #Row: " << tbl_Union_TD_4778146_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_3434102_consolidate(Table &tbl_Aggregate_TD_3434102_output_preprocess, Table &tbl_Aggregate_TD_3434102_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_3434102_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_3434102_output_preprocess.getInt32(r, 7);
        tbl_Aggregate_TD_3434102_output.setInt32(r, 0, _i_manufact_id241);
        int64_t _total_sales3544 = tbl_Aggregate_TD_3434102_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_3434102_output.setInt64(r, 1, _total_sales3544);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_3434102_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_3434102_output #Row: " << tbl_Aggregate_TD_3434102_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2467056(Table &tbl_Aggregate_TD_3434102_output, Table &tbl_Sort_TD_2467056_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(total_sales#3544 ASC NULLS FIRST)
    // Input: ListBuffer(i_manufact_id#241, total_sales#3544)
    // Output: ListBuffer(i_manufact_id#241, total_sales#3544)
    struct SW_Sort_TD_2467056Row {
        int32_t _i_manufact_id241;
        int64_t _total_sales3544;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2467056Row& a, const SW_Sort_TD_2467056Row& b) const { return 
 (a._total_sales3544 < b._total_sales3544); 
}
    }SW_Sort_TD_2467056_order; 

    int nrow1 = tbl_Aggregate_TD_3434102_output.getNumRow();
    std::vector<SW_Sort_TD_2467056Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_3434102_output.getInt32(i, 0);
        int64_t _total_sales3544 = tbl_Aggregate_TD_3434102_output.getInt64(i, 1);
        SW_Sort_TD_2467056Row t = {_i_manufact_id241,_total_sales3544};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2467056_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2467056_output.setInt32(r, 0, it._i_manufact_id241);
        tbl_Sort_TD_2467056_output.setInt64(r, 1, it._total_sales3544);
        ++r;
    }
    tbl_Sort_TD_2467056_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2467056_output #Row: " << tbl_Sort_TD_2467056_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1371196(Table &tbl_Sort_TD_2467056_output, Table &tbl_LocalLimit_TD_1371196_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_manufact_id#241, total_sales#3544)
    // Output: ListBuffer(i_manufact_id#241, total_sales#3544)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1371196_output.setInt32(r, 0, tbl_Sort_TD_2467056_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1371196_output.setInt64(r, 1, tbl_Sort_TD_2467056_output.getInt64(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_1371196_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1371196_output #Row: " << tbl_LocalLimit_TD_1371196_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0247631(Table &tbl_LocalLimit_TD_1371196_output, Table &tbl_GlobalLimit_TD_0247631_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_manufact_id#241, total_sales#3544)
    // Output: ListBuffer(i_manufact_id#241, total_sales#3544)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0247631_output.setInt32(r, 0, tbl_LocalLimit_TD_1371196_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0247631_output.setInt64(r, 1, tbl_LocalLimit_TD_1371196_output.getInt64(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_0247631_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0247631_output #Row: " << tbl_GlobalLimit_TD_0247631_output.getNumRow() << std::endl;
}

