#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_12907(Table &tbl_SerializeFromObject_TD_13876_input, Table &tbl_Filter_TD_12907_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#6612) AND (i_category#6612 = Books)) AND isnotnull(i_item_sk#6600)) AND (((isnotnull(i_brand_id#6607) AND isnotnull(i_class_id#6609)) AND isnotnull(i_category_id#6611)) AND isnotnull(i_manufact_id#6613))))
    // Input: ListBuffer(i_item_sk#6600, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613, i_category#6612)
    // Output: ListBuffer(i_item_sk#6600, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13876_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6612 = tbl_SerializeFromObject_TD_13876_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk6600 = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 0);
        int32_t _i_brand_id6607 = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 1);
        int32_t _i_class_id6609 = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 2);
        int32_t _i_category_id6611 = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 3);
        int32_t _i_manufact_id6613 = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 4);
        if (((（std::string(_isnotnulli_category6612.data()) != "NULL") && (std::string(_i_category6612.data()) == "Books")) && (_i_item_sk6600!= 0)) && ((((_i_brand_id6607!= 0) && (_i_class_id6609!= 0)) && (_i_category_id6611!= 0)) && (_i_manufact_id6613!= 0))) {
            int32_t _i_item_sk6600_t = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 0);
            tbl_Filter_TD_12907_output.setInt32(r, 0, _i_item_sk6600_t);
            int32_t _i_brand_id6607_t = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 1);
            tbl_Filter_TD_12907_output.setInt32(r, 1, _i_brand_id6607_t);
            int32_t _i_class_id6609_t = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 2);
            tbl_Filter_TD_12907_output.setInt32(r, 2, _i_class_id6609_t);
            int32_t _i_category_id6611_t = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 3);
            tbl_Filter_TD_12907_output.setInt32(r, 3, _i_category_id6611_t);
            int32_t _i_manufact_id6613_t = tbl_SerializeFromObject_TD_13876_input.getInt32(i, 4);
            tbl_Filter_TD_12907_output.setInt32(r, 4, _i_manufact_id6613_t);
            r++;
        }
    }
    tbl_Filter_TD_12907_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12907_output #Row: " << tbl_Filter_TD_12907_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12140(Table &tbl_SerializeFromObject_TD_1393_input, Table &tbl_Filter_TD_12140_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#6569) AND isnotnull(ws_sold_date_sk#6566)))
    // Input: ListBuffer(ws_sold_date_sk#6566, ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589)
    // Output: ListBuffer(ws_sold_date_sk#6566, ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1393_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk6569 = tbl_SerializeFromObject_TD_1393_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk6566 = tbl_SerializeFromObject_TD_1393_input.getInt32(i, 0);
        if ((_ws_item_sk6569!= 0) && (_ws_sold_date_sk6566!= 0)) {
            int32_t _ws_sold_date_sk6566_t = tbl_SerializeFromObject_TD_1393_input.getInt32(i, 0);
            tbl_Filter_TD_12140_output.setInt32(r, 0, _ws_sold_date_sk6566_t);
            int32_t _ws_item_sk6569_t = tbl_SerializeFromObject_TD_1393_input.getInt32(i, 1);
            tbl_Filter_TD_12140_output.setInt32(r, 1, _ws_item_sk6569_t);
            int64_t _ws_order_number6583L_t = tbl_SerializeFromObject_TD_1393_input.getInt64(i, 2);
            tbl_Filter_TD_12140_output.setInt64(r, 2, _ws_order_number6583L_t);
            int32_t _ws_quantity6584_t = tbl_SerializeFromObject_TD_1393_input.getInt32(i, 3);
            tbl_Filter_TD_12140_output.setInt32(r, 3, _ws_quantity6584_t);
            int32_t _ws_ext_sales_price6589_t = tbl_SerializeFromObject_TD_1393_input.getInt32(i, 4);
            tbl_Filter_TD_12140_output.setInt32(r, 4, _ws_ext_sales_price6589_t);
            r++;
        }
    }
    tbl_Filter_TD_12140_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12140_output #Row: " << tbl_Filter_TD_12140_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12292(Table &tbl_SerializeFromObject_TD_13146_input, Table &tbl_Filter_TD_12292_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#6508) AND (i_category#6508 = Books)) AND isnotnull(i_item_sk#6496)) AND (((isnotnull(i_brand_id#6503) AND isnotnull(i_class_id#6505)) AND isnotnull(i_category_id#6507)) AND isnotnull(i_manufact_id#6509))))
    // Input: ListBuffer(i_item_sk#6496, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509, i_category#6508)
    // Output: ListBuffer(i_item_sk#6496, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13146_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6508 = tbl_SerializeFromObject_TD_13146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk6496 = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 0);
        int32_t _i_brand_id6503 = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 1);
        int32_t _i_class_id6505 = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 2);
        int32_t _i_category_id6507 = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 3);
        int32_t _i_manufact_id6509 = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 4);
        if (((（std::string(_isnotnulli_category6508.data()) != "NULL") && (std::string(_i_category6508.data()) == "Books")) && (_i_item_sk6496!= 0)) && ((((_i_brand_id6503!= 0) && (_i_class_id6505!= 0)) && (_i_category_id6507!= 0)) && (_i_manufact_id6509!= 0))) {
            int32_t _i_item_sk6496_t = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 0);
            tbl_Filter_TD_12292_output.setInt32(r, 0, _i_item_sk6496_t);
            int32_t _i_brand_id6503_t = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 1);
            tbl_Filter_TD_12292_output.setInt32(r, 1, _i_brand_id6503_t);
            int32_t _i_class_id6505_t = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 2);
            tbl_Filter_TD_12292_output.setInt32(r, 2, _i_class_id6505_t);
            int32_t _i_category_id6507_t = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 3);
            tbl_Filter_TD_12292_output.setInt32(r, 3, _i_category_id6507_t);
            int32_t _i_manufact_id6509_t = tbl_SerializeFromObject_TD_13146_input.getInt32(i, 4);
            tbl_Filter_TD_12292_output.setInt32(r, 4, _i_manufact_id6509_t);
            r++;
        }
    }
    tbl_Filter_TD_12292_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12292_output #Row: " << tbl_Filter_TD_12292_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12474(Table &tbl_SerializeFromObject_TD_13863_input, Table &tbl_Filter_TD_12474_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#6475) AND isnotnull(ss_sold_date_sk#6473)))
    // Input: ListBuffer(ss_sold_date_sk#6473, ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488)
    // Output: ListBuffer(ss_sold_date_sk#6473, ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13863_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk6475 = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk6473 = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 0);
        if ((_ss_item_sk6475!= 0) && (_ss_sold_date_sk6473!= 0)) {
            int32_t _ss_sold_date_sk6473_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 0);
            tbl_Filter_TD_12474_output.setInt32(r, 0, _ss_sold_date_sk6473_t);
            int32_t _ss_item_sk6475_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 1);
            tbl_Filter_TD_12474_output.setInt32(r, 1, _ss_item_sk6475_t);
            int64_t _ss_ticket_number6482L_t = tbl_SerializeFromObject_TD_13863_input.getInt64(i, 2);
            tbl_Filter_TD_12474_output.setInt64(r, 2, _ss_ticket_number6482L_t);
            int32_t _ss_quantity6483_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 3);
            tbl_Filter_TD_12474_output.setInt32(r, 3, _ss_quantity6483_t);
            int32_t _ss_ext_sales_price6488_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 4);
            tbl_Filter_TD_12474_output.setInt32(r, 4, _ss_ext_sales_price6488_t);
            r++;
        }
    }
    tbl_Filter_TD_12474_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12474_output #Row: " << tbl_Filter_TD_12474_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12473(Table &tbl_SerializeFromObject_TD_13613_input, Table &tbl_Filter_TD_12473_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#6408) AND (i_category#6408 = Books)) AND isnotnull(i_item_sk#6396)) AND (((isnotnull(i_brand_id#6403) AND isnotnull(i_class_id#6405)) AND isnotnull(i_category_id#6407)) AND isnotnull(i_manufact_id#6409))))
    // Input: ListBuffer(i_item_sk#6396, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, i_category#6408)
    // Output: ListBuffer(i_item_sk#6396, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13613_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category6408 = tbl_SerializeFromObject_TD_13613_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk6396 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 0);
        int32_t _i_brand_id6403 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 1);
        int32_t _i_class_id6405 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 2);
        int32_t _i_category_id6407 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 3);
        int32_t _i_manufact_id6409 = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 4);
        if (((（std::string(_isnotnulli_category6408.data()) != "NULL") && (std::string(_i_category6408.data()) == "Books")) && (_i_item_sk6396!= 0)) && ((((_i_brand_id6403!= 0) && (_i_class_id6405!= 0)) && (_i_category_id6407!= 0)) && (_i_manufact_id6409!= 0))) {
            int32_t _i_item_sk6396_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 0);
            tbl_Filter_TD_12473_output.setInt32(r, 0, _i_item_sk6396_t);
            int32_t _i_brand_id6403_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 1);
            tbl_Filter_TD_12473_output.setInt32(r, 1, _i_brand_id6403_t);
            int32_t _i_class_id6405_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 2);
            tbl_Filter_TD_12473_output.setInt32(r, 2, _i_class_id6405_t);
            int32_t _i_category_id6407_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 3);
            tbl_Filter_TD_12473_output.setInt32(r, 3, _i_category_id6407_t);
            int32_t _i_manufact_id6409_t = tbl_SerializeFromObject_TD_13613_input.getInt32(i, 4);
            tbl_Filter_TD_12473_output.setInt32(r, 4, _i_manufact_id6409_t);
            r++;
        }
    }
    tbl_Filter_TD_12473_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12473_output #Row: " << tbl_Filter_TD_12473_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12636(Table &tbl_SerializeFromObject_TD_13682_input, Table &tbl_Filter_TD_12636_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#6377) AND isnotnull(cs_sold_date_sk#6362)))
    // Input: ListBuffer(cs_sold_date_sk#6362, cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385)
    // Output: ListBuffer(cs_sold_date_sk#6362, cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13682_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk6377 = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk6362 = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 0);
        if ((_cs_item_sk6377!= 0) && (_cs_sold_date_sk6362!= 0)) {
            int32_t _cs_sold_date_sk6362_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 0);
            tbl_Filter_TD_12636_output.setInt32(r, 0, _cs_sold_date_sk6362_t);
            int32_t _cs_item_sk6377_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 1);
            tbl_Filter_TD_12636_output.setInt32(r, 1, _cs_item_sk6377_t);
            int64_t _cs_order_number6379L_t = tbl_SerializeFromObject_TD_13682_input.getInt64(i, 2);
            tbl_Filter_TD_12636_output.setInt64(r, 2, _cs_order_number6379L_t);
            int32_t _cs_quantity6380_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 3);
            tbl_Filter_TD_12636_output.setInt32(r, 3, _cs_quantity6380_t);
            int32_t _cs_ext_sales_price6385_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 4);
            tbl_Filter_TD_12636_output.setInt32(r, 4, _cs_ext_sales_price6385_t);
            r++;
        }
    }
    tbl_Filter_TD_12636_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12636_output #Row: " << tbl_Filter_TD_12636_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12894(Table &tbl_SerializeFromObject_TD_13761_input, Table &tbl_Filter_TD_12894_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#5560) AND (i_category#5560 = Books)) AND isnotnull(i_item_sk#5548)) AND (((isnotnull(i_brand_id#5555) AND isnotnull(i_class_id#5557)) AND isnotnull(i_category_id#5559)) AND isnotnull(i_manufact_id#5561))))
    // Input: ListBuffer(i_item_sk#5548, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561, i_category#5560)
    // Output: ListBuffer(i_item_sk#5548, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13761_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category5560 = tbl_SerializeFromObject_TD_13761_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk5548 = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 0);
        int32_t _i_brand_id5555 = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 1);
        int32_t _i_class_id5557 = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 2);
        int32_t _i_category_id5559 = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 3);
        int32_t _i_manufact_id5561 = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 4);
        if (((（std::string(_isnotnulli_category5560.data()) != "NULL") && (std::string(_i_category5560.data()) == "Books")) && (_i_item_sk5548!= 0)) && ((((_i_brand_id5555!= 0) && (_i_class_id5557!= 0)) && (_i_category_id5559!= 0)) && (_i_manufact_id5561!= 0))) {
            int32_t _i_item_sk5548_t = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 0);
            tbl_Filter_TD_12894_output.setInt32(r, 0, _i_item_sk5548_t);
            int32_t _i_brand_id5555_t = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 1);
            tbl_Filter_TD_12894_output.setInt32(r, 1, _i_brand_id5555_t);
            int32_t _i_class_id5557_t = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 2);
            tbl_Filter_TD_12894_output.setInt32(r, 2, _i_class_id5557_t);
            int32_t _i_category_id5559_t = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 3);
            tbl_Filter_TD_12894_output.setInt32(r, 3, _i_category_id5559_t);
            int32_t _i_manufact_id5561_t = tbl_SerializeFromObject_TD_13761_input.getInt32(i, 4);
            tbl_Filter_TD_12894_output.setInt32(r, 4, _i_manufact_id5561_t);
            r++;
        }
    }
    tbl_Filter_TD_12894_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12894_output #Row: " << tbl_Filter_TD_12894_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12627(Table &tbl_SerializeFromObject_TD_131_input, Table &tbl_Filter_TD_12627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_131_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_131_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_131_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_131_input.getInt32(i, 0);
            tbl_Filter_TD_12627_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_131_input.getInt32(i, 1);
            tbl_Filter_TD_12627_output.setInt32(r, 1, _ws_item_sk732_t);
            int64_t _ws_order_number746L_t = tbl_SerializeFromObject_TD_131_input.getInt64(i, 2);
            tbl_Filter_TD_12627_output.setInt64(r, 2, _ws_order_number746L_t);
            int32_t _ws_quantity747_t = tbl_SerializeFromObject_TD_131_input.getInt32(i, 3);
            tbl_Filter_TD_12627_output.setInt32(r, 3, _ws_quantity747_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_131_input.getInt32(i, 4);
            tbl_Filter_TD_12627_output.setInt32(r, 4, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_12627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12627_output #Row: " << tbl_Filter_TD_12627_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12389(Table &tbl_SerializeFromObject_TD_13637_input, Table &tbl_Filter_TD_12389_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#5510) AND (i_category#5510 = Books)) AND isnotnull(i_item_sk#5498)) AND (((isnotnull(i_brand_id#5505) AND isnotnull(i_class_id#5507)) AND isnotnull(i_category_id#5509)) AND isnotnull(i_manufact_id#5511))))
    // Input: ListBuffer(i_item_sk#5498, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511, i_category#5510)
    // Output: ListBuffer(i_item_sk#5498, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13637_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category5510 = tbl_SerializeFromObject_TD_13637_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk5498 = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 0);
        int32_t _i_brand_id5505 = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 1);
        int32_t _i_class_id5507 = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 2);
        int32_t _i_category_id5509 = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 3);
        int32_t _i_manufact_id5511 = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 4);
        if (((（std::string(_isnotnulli_category5510.data()) != "NULL") && (std::string(_i_category5510.data()) == "Books")) && (_i_item_sk5498!= 0)) && ((((_i_brand_id5505!= 0) && (_i_class_id5507!= 0)) && (_i_category_id5509!= 0)) && (_i_manufact_id5511!= 0))) {
            int32_t _i_item_sk5498_t = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 0);
            tbl_Filter_TD_12389_output.setInt32(r, 0, _i_item_sk5498_t);
            int32_t _i_brand_id5505_t = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 1);
            tbl_Filter_TD_12389_output.setInt32(r, 1, _i_brand_id5505_t);
            int32_t _i_class_id5507_t = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 2);
            tbl_Filter_TD_12389_output.setInt32(r, 2, _i_class_id5507_t);
            int32_t _i_category_id5509_t = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 3);
            tbl_Filter_TD_12389_output.setInt32(r, 3, _i_category_id5509_t);
            int32_t _i_manufact_id5511_t = tbl_SerializeFromObject_TD_13637_input.getInt32(i, 4);
            tbl_Filter_TD_12389_output.setInt32(r, 4, _i_manufact_id5511_t);
            r++;
        }
    }
    tbl_Filter_TD_12389_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12389_output #Row: " << tbl_Filter_TD_12389_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12175(Table &tbl_SerializeFromObject_TD_13691_input, Table &tbl_Filter_TD_12175_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13691_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 0);
            tbl_Filter_TD_12175_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 1);
            tbl_Filter_TD_12175_output.setInt32(r, 1, _ss_item_sk1208_t);
            int64_t _ss_ticket_number1215L_t = tbl_SerializeFromObject_TD_13691_input.getInt64(i, 2);
            tbl_Filter_TD_12175_output.setInt64(r, 2, _ss_ticket_number1215L_t);
            int32_t _ss_quantity1216_t = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 3);
            tbl_Filter_TD_12175_output.setInt32(r, 3, _ss_quantity1216_t);
            int32_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 4);
            tbl_Filter_TD_12175_output.setInt32(r, 4, _ss_ext_sales_price1221_t);
            r++;
        }
    }
    tbl_Filter_TD_12175_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12175_output #Row: " << tbl_Filter_TD_12175_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12692(Table &tbl_SerializeFromObject_TD_13269_input, Table &tbl_Filter_TD_12692_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(i_category#240) AND (i_category#240 = Books)) AND isnotnull(i_item_sk#228)) AND (((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)) AND isnotnull(i_manufact_id#241))))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, i_category#240)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13269_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category240 = tbl_SerializeFromObject_TD_13269_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 5);
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 0);
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 3);
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 4);
        if (((（std::string(_isnotnulli_category240.data()) != "NULL") && (std::string(_i_category240.data()) == "Books")) && (_i_item_sk228!= 0)) && ((((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) && (_i_manufact_id241!= 0))) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 0);
            tbl_Filter_TD_12692_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 1);
            tbl_Filter_TD_12692_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 2);
            tbl_Filter_TD_12692_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 3);
            tbl_Filter_TD_12692_output.setInt32(r, 3, _i_category_id239_t);
            int32_t _i_manufact_id241_t = tbl_SerializeFromObject_TD_13269_input.getInt32(i, 4);
            tbl_Filter_TD_12692_output.setInt32(r, 4, _i_manufact_id241_t);
            r++;
        }
    }
    tbl_Filter_TD_12692_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12692_output #Row: " << tbl_Filter_TD_12692_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12653(Table &tbl_SerializeFromObject_TD_13863_input, Table &tbl_Filter_TD_12653_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13863_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 0);
            tbl_Filter_TD_12653_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 1);
            tbl_Filter_TD_12653_output.setInt32(r, 1, _cs_item_sk1119_t);
            int64_t _cs_order_number1121L_t = tbl_SerializeFromObject_TD_13863_input.getInt64(i, 2);
            tbl_Filter_TD_12653_output.setInt64(r, 2, _cs_order_number1121L_t);
            int32_t _cs_quantity1122_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 3);
            tbl_Filter_TD_12653_output.setInt32(r, 3, _cs_quantity1122_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_13863_input.getInt32(i, 4);
            tbl_Filter_TD_12653_output.setInt32(r, 4, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_12653_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12653_output #Row: " << tbl_Filter_TD_12653_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11610(Table &tbl_SerializeFromObject_TD_12248_input, Table &tbl_Filter_TD_11610_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#6628) AND (d_year#6628 = 2001)) AND isnotnull(d_date_sk#6622)))
    // Input: ListBuffer(d_date_sk#6622, d_year#6628)
    // Output: ListBuffer(d_date_sk#6622, d_year#6628)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12248_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6628 = tbl_SerializeFromObject_TD_12248_input.getInt32(i, 1);
        int32_t _d_date_sk6622 = tbl_SerializeFromObject_TD_12248_input.getInt32(i, 0);
        if (((_d_year6628!= 0) && (_d_year6628 == 2001)) && (_d_date_sk6622!= 0)) {
            int32_t _d_date_sk6622_t = tbl_SerializeFromObject_TD_12248_input.getInt32(i, 0);
            tbl_Filter_TD_11610_output.setInt32(r, 0, _d_date_sk6622_t);
            int32_t _d_year6628_t = tbl_SerializeFromObject_TD_12248_input.getInt32(i, 1);
            tbl_Filter_TD_11610_output.setInt32(r, 1, _d_year6628_t);
            r++;
        }
    }
    tbl_Filter_TD_11610_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11610_output #Row: " << tbl_Filter_TD_11610_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11993_key_leftMajor {
    int32_t _ws_item_sk6569;
    bool operator==(const SW_JOIN_INNER_TD_11993_key_leftMajor& other) const {
        return ((_ws_item_sk6569 == other._ws_item_sk6569));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11993_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11993_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk6569));
    }
};
}
struct SW_JOIN_INNER_TD_11993_payload_leftMajor {
    int32_t _ws_sold_date_sk6566;
    int32_t _ws_item_sk6569;
    int64_t _ws_order_number6583L;
    int32_t _ws_quantity6584;
    int32_t _ws_ext_sales_price6589;
};
struct SW_JOIN_INNER_TD_11993_key_rightMajor {
    int32_t _i_item_sk6600;
    bool operator==(const SW_JOIN_INNER_TD_11993_key_rightMajor& other) const {
        return ((_i_item_sk6600 == other._i_item_sk6600));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11993_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11993_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6600));
    }
};
}
struct SW_JOIN_INNER_TD_11993_payload_rightMajor {
    int32_t _i_item_sk6600;
    int32_t _i_brand_id6607;
    int32_t _i_class_id6609;
    int32_t _i_category_id6611;
    int32_t _i_manufact_id6613;
};
void SW_JOIN_INNER_TD_11993(Table &tbl_Filter_TD_12140_output, Table &tbl_Filter_TD_12907_output, Table &tbl_JOIN_INNER_TD_11993_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#6600 = ws_item_sk#6569))
    // Left Table: ListBuffer(ws_sold_date_sk#6566, ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589)
    // Right Table: ListBuffer(i_item_sk#6600, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613)
    // Output Table: ListBuffer(ws_sold_date_sk#6566, ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613)
    int left_nrow = tbl_Filter_TD_12140_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12907_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11993_key_leftMajor, SW_JOIN_INNER_TD_11993_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12140_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk6569_k = tbl_Filter_TD_12140_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11993_key_leftMajor keyA{_ws_item_sk6569_k};
            int32_t _ws_sold_date_sk6566 = tbl_Filter_TD_12140_output.getInt32(i, 0);
            int32_t _ws_item_sk6569 = tbl_Filter_TD_12140_output.getInt32(i, 1);
            int64_t _ws_order_number6583L = tbl_Filter_TD_12140_output.getInt64(i, 2);
            int32_t _ws_quantity6584 = tbl_Filter_TD_12140_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price6589 = tbl_Filter_TD_12140_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11993_payload_leftMajor payloadA{_ws_sold_date_sk6566, _ws_item_sk6569, _ws_order_number6583L, _ws_quantity6584, _ws_ext_sales_price6589};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12907_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6600_k = tbl_Filter_TD_12907_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11993_key_leftMajor{_i_item_sk6600_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk6566 = (it->second)._ws_sold_date_sk6566;
                int32_t _ws_item_sk6569 = (it->second)._ws_item_sk6569;
                int64_t _ws_order_number6583L = (it->second)._ws_order_number6583L;
                int32_t _ws_quantity6584 = (it->second)._ws_quantity6584;
                int32_t _ws_ext_sales_price6589 = (it->second)._ws_ext_sales_price6589;
                int32_t _i_item_sk6600 = tbl_Filter_TD_12907_output.getInt32(i, 0);
                int32_t _i_brand_id6607 = tbl_Filter_TD_12907_output.getInt32(i, 1);
                int32_t _i_class_id6609 = tbl_Filter_TD_12907_output.getInt32(i, 2);
                int32_t _i_category_id6611 = tbl_Filter_TD_12907_output.getInt32(i, 3);
                int32_t _i_manufact_id6613 = tbl_Filter_TD_12907_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 0, _ws_sold_date_sk6566);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 1, _ws_item_sk6569);
                tbl_JOIN_INNER_TD_11993_output.setInt64(r, 2, _ws_order_number6583L);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 3, _ws_quantity6584);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 4, _ws_ext_sales_price6589);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 5, _i_brand_id6607);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 6, _i_class_id6609);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 7, _i_category_id6611);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 8, _i_manufact_id6613);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11993_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11993_key_rightMajor, SW_JOIN_INNER_TD_11993_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12907_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6600_k = tbl_Filter_TD_12907_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11993_key_rightMajor keyA{_i_item_sk6600_k};
            int32_t _i_item_sk6600 = tbl_Filter_TD_12907_output.getInt32(i, 0);
            int32_t _i_brand_id6607 = tbl_Filter_TD_12907_output.getInt32(i, 1);
            int32_t _i_class_id6609 = tbl_Filter_TD_12907_output.getInt32(i, 2);
            int32_t _i_category_id6611 = tbl_Filter_TD_12907_output.getInt32(i, 3);
            int32_t _i_manufact_id6613 = tbl_Filter_TD_12907_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11993_payload_rightMajor payloadA{_i_item_sk6600, _i_brand_id6607, _i_class_id6609, _i_category_id6611, _i_manufact_id6613};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12140_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk6569_k = tbl_Filter_TD_12140_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11993_key_rightMajor{_ws_item_sk6569_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6600 = (it->second)._i_item_sk6600;
                int32_t _i_brand_id6607 = (it->second)._i_brand_id6607;
                int32_t _i_class_id6609 = (it->second)._i_class_id6609;
                int32_t _i_category_id6611 = (it->second)._i_category_id6611;
                int32_t _i_manufact_id6613 = (it->second)._i_manufact_id6613;
                int32_t _ws_sold_date_sk6566 = tbl_Filter_TD_12140_output.getInt32(i, 0);
                int32_t _ws_item_sk6569 = tbl_Filter_TD_12140_output.getInt32(i, 1);
                int64_t _ws_order_number6583L = tbl_Filter_TD_12140_output.getInt64(i, 2);
                int32_t _ws_quantity6584 = tbl_Filter_TD_12140_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price6589 = tbl_Filter_TD_12140_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 5, _i_brand_id6607);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 6, _i_class_id6609);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 7, _i_category_id6611);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 8, _i_manufact_id6613);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 0, _ws_sold_date_sk6566);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 1, _ws_item_sk6569);
                tbl_JOIN_INNER_TD_11993_output.setInt64(r, 2, _ws_order_number6583L);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 3, _ws_quantity6584);
                tbl_JOIN_INNER_TD_11993_output.setInt32(r, 4, _ws_ext_sales_price6589);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11993_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11993_output #Row: " << tbl_JOIN_INNER_TD_11993_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11517(Table &tbl_SerializeFromObject_TD_12509_input, Table &tbl_Filter_TD_11517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#6524) AND (d_year#6524 = 2001)) AND isnotnull(d_date_sk#6518)))
    // Input: ListBuffer(d_date_sk#6518, d_year#6524)
    // Output: ListBuffer(d_date_sk#6518, d_year#6524)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12509_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6524 = tbl_SerializeFromObject_TD_12509_input.getInt32(i, 1);
        int32_t _d_date_sk6518 = tbl_SerializeFromObject_TD_12509_input.getInt32(i, 0);
        if (((_d_year6524!= 0) && (_d_year6524 == 2001)) && (_d_date_sk6518!= 0)) {
            int32_t _d_date_sk6518_t = tbl_SerializeFromObject_TD_12509_input.getInt32(i, 0);
            tbl_Filter_TD_11517_output.setInt32(r, 0, _d_date_sk6518_t);
            int32_t _d_year6524_t = tbl_SerializeFromObject_TD_12509_input.getInt32(i, 1);
            tbl_Filter_TD_11517_output.setInt32(r, 1, _d_year6524_t);
            r++;
        }
    }
    tbl_Filter_TD_11517_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11517_output #Row: " << tbl_Filter_TD_11517_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11821_key_leftMajor {
    int32_t _ss_item_sk6475;
    bool operator==(const SW_JOIN_INNER_TD_11821_key_leftMajor& other) const {
        return ((_ss_item_sk6475 == other._ss_item_sk6475));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11821_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11821_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk6475));
    }
};
}
struct SW_JOIN_INNER_TD_11821_payload_leftMajor {
    int32_t _ss_sold_date_sk6473;
    int32_t _ss_item_sk6475;
    int64_t _ss_ticket_number6482L;
    int32_t _ss_quantity6483;
    int32_t _ss_ext_sales_price6488;
};
struct SW_JOIN_INNER_TD_11821_key_rightMajor {
    int32_t _i_item_sk6496;
    bool operator==(const SW_JOIN_INNER_TD_11821_key_rightMajor& other) const {
        return ((_i_item_sk6496 == other._i_item_sk6496));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11821_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11821_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6496));
    }
};
}
struct SW_JOIN_INNER_TD_11821_payload_rightMajor {
    int32_t _i_item_sk6496;
    int32_t _i_brand_id6503;
    int32_t _i_class_id6505;
    int32_t _i_category_id6507;
    int32_t _i_manufact_id6509;
};
void SW_JOIN_INNER_TD_11821(Table &tbl_Filter_TD_12474_output, Table &tbl_Filter_TD_12292_output, Table &tbl_JOIN_INNER_TD_11821_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#6496 = ss_item_sk#6475))
    // Left Table: ListBuffer(ss_sold_date_sk#6473, ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488)
    // Right Table: ListBuffer(i_item_sk#6496, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509)
    // Output Table: ListBuffer(ss_sold_date_sk#6473, ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509)
    int left_nrow = tbl_Filter_TD_12474_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12292_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11821_key_leftMajor, SW_JOIN_INNER_TD_11821_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12474_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk6475_k = tbl_Filter_TD_12474_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11821_key_leftMajor keyA{_ss_item_sk6475_k};
            int32_t _ss_sold_date_sk6473 = tbl_Filter_TD_12474_output.getInt32(i, 0);
            int32_t _ss_item_sk6475 = tbl_Filter_TD_12474_output.getInt32(i, 1);
            int64_t _ss_ticket_number6482L = tbl_Filter_TD_12474_output.getInt64(i, 2);
            int32_t _ss_quantity6483 = tbl_Filter_TD_12474_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price6488 = tbl_Filter_TD_12474_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11821_payload_leftMajor payloadA{_ss_sold_date_sk6473, _ss_item_sk6475, _ss_ticket_number6482L, _ss_quantity6483, _ss_ext_sales_price6488};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12292_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6496_k = tbl_Filter_TD_12292_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11821_key_leftMajor{_i_item_sk6496_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk6473 = (it->second)._ss_sold_date_sk6473;
                int32_t _ss_item_sk6475 = (it->second)._ss_item_sk6475;
                int64_t _ss_ticket_number6482L = (it->second)._ss_ticket_number6482L;
                int32_t _ss_quantity6483 = (it->second)._ss_quantity6483;
                int32_t _ss_ext_sales_price6488 = (it->second)._ss_ext_sales_price6488;
                int32_t _i_item_sk6496 = tbl_Filter_TD_12292_output.getInt32(i, 0);
                int32_t _i_brand_id6503 = tbl_Filter_TD_12292_output.getInt32(i, 1);
                int32_t _i_class_id6505 = tbl_Filter_TD_12292_output.getInt32(i, 2);
                int32_t _i_category_id6507 = tbl_Filter_TD_12292_output.getInt32(i, 3);
                int32_t _i_manufact_id6509 = tbl_Filter_TD_12292_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 0, _ss_sold_date_sk6473);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 1, _ss_item_sk6475);
                tbl_JOIN_INNER_TD_11821_output.setInt64(r, 2, _ss_ticket_number6482L);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 3, _ss_quantity6483);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 4, _ss_ext_sales_price6488);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 5, _i_brand_id6503);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 6, _i_class_id6505);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 7, _i_category_id6507);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 8, _i_manufact_id6509);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11821_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11821_key_rightMajor, SW_JOIN_INNER_TD_11821_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12292_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6496_k = tbl_Filter_TD_12292_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11821_key_rightMajor keyA{_i_item_sk6496_k};
            int32_t _i_item_sk6496 = tbl_Filter_TD_12292_output.getInt32(i, 0);
            int32_t _i_brand_id6503 = tbl_Filter_TD_12292_output.getInt32(i, 1);
            int32_t _i_class_id6505 = tbl_Filter_TD_12292_output.getInt32(i, 2);
            int32_t _i_category_id6507 = tbl_Filter_TD_12292_output.getInt32(i, 3);
            int32_t _i_manufact_id6509 = tbl_Filter_TD_12292_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11821_payload_rightMajor payloadA{_i_item_sk6496, _i_brand_id6503, _i_class_id6505, _i_category_id6507, _i_manufact_id6509};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12474_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk6475_k = tbl_Filter_TD_12474_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11821_key_rightMajor{_ss_item_sk6475_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6496 = (it->second)._i_item_sk6496;
                int32_t _i_brand_id6503 = (it->second)._i_brand_id6503;
                int32_t _i_class_id6505 = (it->second)._i_class_id6505;
                int32_t _i_category_id6507 = (it->second)._i_category_id6507;
                int32_t _i_manufact_id6509 = (it->second)._i_manufact_id6509;
                int32_t _ss_sold_date_sk6473 = tbl_Filter_TD_12474_output.getInt32(i, 0);
                int32_t _ss_item_sk6475 = tbl_Filter_TD_12474_output.getInt32(i, 1);
                int64_t _ss_ticket_number6482L = tbl_Filter_TD_12474_output.getInt64(i, 2);
                int32_t _ss_quantity6483 = tbl_Filter_TD_12474_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price6488 = tbl_Filter_TD_12474_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 5, _i_brand_id6503);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 6, _i_class_id6505);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 7, _i_category_id6507);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 8, _i_manufact_id6509);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 0, _ss_sold_date_sk6473);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 1, _ss_item_sk6475);
                tbl_JOIN_INNER_TD_11821_output.setInt64(r, 2, _ss_ticket_number6482L);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 3, _ss_quantity6483);
                tbl_JOIN_INNER_TD_11821_output.setInt32(r, 4, _ss_ext_sales_price6488);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11821_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11821_output #Row: " << tbl_JOIN_INNER_TD_11821_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11361(Table &tbl_SerializeFromObject_TD_12371_input, Table &tbl_Filter_TD_11361_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#6424) AND (d_year#6424 = 2001)) AND isnotnull(d_date_sk#6418)))
    // Input: ListBuffer(d_date_sk#6418, d_year#6424)
    // Output: ListBuffer(d_date_sk#6418, d_year#6424)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12371_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6424 = tbl_SerializeFromObject_TD_12371_input.getInt32(i, 1);
        int32_t _d_date_sk6418 = tbl_SerializeFromObject_TD_12371_input.getInt32(i, 0);
        if (((_d_year6424!= 0) && (_d_year6424 == 2001)) && (_d_date_sk6418!= 0)) {
            int32_t _d_date_sk6418_t = tbl_SerializeFromObject_TD_12371_input.getInt32(i, 0);
            tbl_Filter_TD_11361_output.setInt32(r, 0, _d_date_sk6418_t);
            int32_t _d_year6424_t = tbl_SerializeFromObject_TD_12371_input.getInt32(i, 1);
            tbl_Filter_TD_11361_output.setInt32(r, 1, _d_year6424_t);
            r++;
        }
    }
    tbl_Filter_TD_11361_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11361_output #Row: " << tbl_Filter_TD_11361_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11561_key_leftMajor {
    int32_t _cs_item_sk6377;
    bool operator==(const SW_JOIN_INNER_TD_11561_key_leftMajor& other) const {
        return ((_cs_item_sk6377 == other._cs_item_sk6377));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11561_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11561_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk6377));
    }
};
}
struct SW_JOIN_INNER_TD_11561_payload_leftMajor {
    int32_t _cs_sold_date_sk6362;
    int32_t _cs_item_sk6377;
    int64_t _cs_order_number6379L;
    int32_t _cs_quantity6380;
    int32_t _cs_ext_sales_price6385;
};
struct SW_JOIN_INNER_TD_11561_key_rightMajor {
    int32_t _i_item_sk6396;
    bool operator==(const SW_JOIN_INNER_TD_11561_key_rightMajor& other) const {
        return ((_i_item_sk6396 == other._i_item_sk6396));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11561_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11561_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk6396));
    }
};
}
struct SW_JOIN_INNER_TD_11561_payload_rightMajor {
    int32_t _i_item_sk6396;
    int32_t _i_brand_id6403;
    int32_t _i_class_id6405;
    int32_t _i_category_id6407;
    int32_t _i_manufact_id6409;
};
void SW_JOIN_INNER_TD_11561(Table &tbl_Filter_TD_12636_output, Table &tbl_Filter_TD_12473_output, Table &tbl_JOIN_INNER_TD_11561_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#6396 = cs_item_sk#6377))
    // Left Table: ListBuffer(cs_sold_date_sk#6362, cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385)
    // Right Table: ListBuffer(i_item_sk#6396, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409)
    // Output Table: ListBuffer(cs_sold_date_sk#6362, cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409)
    int left_nrow = tbl_Filter_TD_12636_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12473_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11561_key_leftMajor, SW_JOIN_INNER_TD_11561_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12636_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk6377_k = tbl_Filter_TD_12636_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11561_key_leftMajor keyA{_cs_item_sk6377_k};
            int32_t _cs_sold_date_sk6362 = tbl_Filter_TD_12636_output.getInt32(i, 0);
            int32_t _cs_item_sk6377 = tbl_Filter_TD_12636_output.getInt32(i, 1);
            int64_t _cs_order_number6379L = tbl_Filter_TD_12636_output.getInt64(i, 2);
            int32_t _cs_quantity6380 = tbl_Filter_TD_12636_output.getInt32(i, 3);
            int32_t _cs_ext_sales_price6385 = tbl_Filter_TD_12636_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11561_payload_leftMajor payloadA{_cs_sold_date_sk6362, _cs_item_sk6377, _cs_order_number6379L, _cs_quantity6380, _cs_ext_sales_price6385};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12473_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk6396_k = tbl_Filter_TD_12473_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11561_key_leftMajor{_i_item_sk6396_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk6362 = (it->second)._cs_sold_date_sk6362;
                int32_t _cs_item_sk6377 = (it->second)._cs_item_sk6377;
                int64_t _cs_order_number6379L = (it->second)._cs_order_number6379L;
                int32_t _cs_quantity6380 = (it->second)._cs_quantity6380;
                int32_t _cs_ext_sales_price6385 = (it->second)._cs_ext_sales_price6385;
                int32_t _i_item_sk6396 = tbl_Filter_TD_12473_output.getInt32(i, 0);
                int32_t _i_brand_id6403 = tbl_Filter_TD_12473_output.getInt32(i, 1);
                int32_t _i_class_id6405 = tbl_Filter_TD_12473_output.getInt32(i, 2);
                int32_t _i_category_id6407 = tbl_Filter_TD_12473_output.getInt32(i, 3);
                int32_t _i_manufact_id6409 = tbl_Filter_TD_12473_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 0, _cs_sold_date_sk6362);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 1, _cs_item_sk6377);
                tbl_JOIN_INNER_TD_11561_output.setInt64(r, 2, _cs_order_number6379L);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 3, _cs_quantity6380);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 4, _cs_ext_sales_price6385);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 5, _i_brand_id6403);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 6, _i_class_id6405);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 7, _i_category_id6407);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 8, _i_manufact_id6409);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11561_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11561_key_rightMajor, SW_JOIN_INNER_TD_11561_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12473_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk6396_k = tbl_Filter_TD_12473_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11561_key_rightMajor keyA{_i_item_sk6396_k};
            int32_t _i_item_sk6396 = tbl_Filter_TD_12473_output.getInt32(i, 0);
            int32_t _i_brand_id6403 = tbl_Filter_TD_12473_output.getInt32(i, 1);
            int32_t _i_class_id6405 = tbl_Filter_TD_12473_output.getInt32(i, 2);
            int32_t _i_category_id6407 = tbl_Filter_TD_12473_output.getInt32(i, 3);
            int32_t _i_manufact_id6409 = tbl_Filter_TD_12473_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11561_payload_rightMajor payloadA{_i_item_sk6396, _i_brand_id6403, _i_class_id6405, _i_category_id6407, _i_manufact_id6409};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12636_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk6377_k = tbl_Filter_TD_12636_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11561_key_rightMajor{_cs_item_sk6377_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk6396 = (it->second)._i_item_sk6396;
                int32_t _i_brand_id6403 = (it->second)._i_brand_id6403;
                int32_t _i_class_id6405 = (it->second)._i_class_id6405;
                int32_t _i_category_id6407 = (it->second)._i_category_id6407;
                int32_t _i_manufact_id6409 = (it->second)._i_manufact_id6409;
                int32_t _cs_sold_date_sk6362 = tbl_Filter_TD_12636_output.getInt32(i, 0);
                int32_t _cs_item_sk6377 = tbl_Filter_TD_12636_output.getInt32(i, 1);
                int64_t _cs_order_number6379L = tbl_Filter_TD_12636_output.getInt64(i, 2);
                int32_t _cs_quantity6380 = tbl_Filter_TD_12636_output.getInt32(i, 3);
                int32_t _cs_ext_sales_price6385 = tbl_Filter_TD_12636_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 5, _i_brand_id6403);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 6, _i_class_id6405);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 7, _i_category_id6407);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 8, _i_manufact_id6409);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 0, _cs_sold_date_sk6362);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 1, _cs_item_sk6377);
                tbl_JOIN_INNER_TD_11561_output.setInt64(r, 2, _cs_order_number6379L);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 3, _cs_quantity6380);
                tbl_JOIN_INNER_TD_11561_output.setInt32(r, 4, _cs_ext_sales_price6385);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11561_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11561_output #Row: " << tbl_JOIN_INNER_TD_11561_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11365(Table &tbl_SerializeFromObject_TD_12227_input, Table &tbl_Filter_TD_11365_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#5576) AND (d_year#5576 = 2002)) AND isnotnull(d_date_sk#5570)))
    // Input: ListBuffer(d_date_sk#5570, d_year#5576)
    // Output: ListBuffer(d_date_sk#5570, d_year#5576)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12227_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5576 = tbl_SerializeFromObject_TD_12227_input.getInt32(i, 1);
        int32_t _d_date_sk5570 = tbl_SerializeFromObject_TD_12227_input.getInt32(i, 0);
        if (((_d_year5576!= 0) && (_d_year5576 == 2002)) && (_d_date_sk5570!= 0)) {
            int32_t _d_date_sk5570_t = tbl_SerializeFromObject_TD_12227_input.getInt32(i, 0);
            tbl_Filter_TD_11365_output.setInt32(r, 0, _d_date_sk5570_t);
            int32_t _d_year5576_t = tbl_SerializeFromObject_TD_12227_input.getInt32(i, 1);
            tbl_Filter_TD_11365_output.setInt32(r, 1, _d_year5576_t);
            r++;
        }
    }
    tbl_Filter_TD_11365_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11365_output #Row: " << tbl_Filter_TD_11365_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11872_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_11872_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11872_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11872_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_11872_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int64_t _ws_order_number746L;
    int32_t _ws_quantity747;
    int32_t _ws_ext_sales_price752;
};
struct SW_JOIN_INNER_TD_11872_key_rightMajor {
    int32_t _i_item_sk5548;
    bool operator==(const SW_JOIN_INNER_TD_11872_key_rightMajor& other) const {
        return ((_i_item_sk5548 == other._i_item_sk5548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11872_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11872_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk5548));
    }
};
}
struct SW_JOIN_INNER_TD_11872_payload_rightMajor {
    int32_t _i_item_sk5548;
    int32_t _i_brand_id5555;
    int32_t _i_class_id5557;
    int32_t _i_category_id5559;
    int32_t _i_manufact_id5561;
};
void SW_JOIN_INNER_TD_11872(Table &tbl_Filter_TD_12627_output, Table &tbl_Filter_TD_12894_output, Table &tbl_JOIN_INNER_TD_11872_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#5548 = ws_item_sk#732))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752)
    // Right Table: ListBuffer(i_item_sk#5548, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561)
    // Output Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561)
    int left_nrow = tbl_Filter_TD_12627_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12894_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11872_key_leftMajor, SW_JOIN_INNER_TD_11872_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12627_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_12627_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11872_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_12627_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_12627_output.getInt32(i, 1);
            int64_t _ws_order_number746L = tbl_Filter_TD_12627_output.getInt64(i, 2);
            int32_t _ws_quantity747 = tbl_Filter_TD_12627_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price752 = tbl_Filter_TD_12627_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11872_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_order_number746L, _ws_quantity747, _ws_ext_sales_price752};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12894_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk5548_k = tbl_Filter_TD_12894_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11872_key_leftMajor{_i_item_sk5548_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_item_sk5548 = tbl_Filter_TD_12894_output.getInt32(i, 0);
                int32_t _i_brand_id5555 = tbl_Filter_TD_12894_output.getInt32(i, 1);
                int32_t _i_class_id5557 = tbl_Filter_TD_12894_output.getInt32(i, 2);
                int32_t _i_category_id5559 = tbl_Filter_TD_12894_output.getInt32(i, 3);
                int32_t _i_manufact_id5561 = tbl_Filter_TD_12894_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_11872_output.setInt64(r, 2, _ws_order_number746L);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 3, _ws_quantity747);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 4, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 5, _i_brand_id5555);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 6, _i_class_id5557);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 7, _i_category_id5559);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 8, _i_manufact_id5561);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11872_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11872_key_rightMajor, SW_JOIN_INNER_TD_11872_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12894_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk5548_k = tbl_Filter_TD_12894_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11872_key_rightMajor keyA{_i_item_sk5548_k};
            int32_t _i_item_sk5548 = tbl_Filter_TD_12894_output.getInt32(i, 0);
            int32_t _i_brand_id5555 = tbl_Filter_TD_12894_output.getInt32(i, 1);
            int32_t _i_class_id5557 = tbl_Filter_TD_12894_output.getInt32(i, 2);
            int32_t _i_category_id5559 = tbl_Filter_TD_12894_output.getInt32(i, 3);
            int32_t _i_manufact_id5561 = tbl_Filter_TD_12894_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11872_payload_rightMajor payloadA{_i_item_sk5548, _i_brand_id5555, _i_class_id5557, _i_category_id5559, _i_manufact_id5561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12627_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_12627_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11872_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk5548 = (it->second)._i_item_sk5548;
                int32_t _i_brand_id5555 = (it->second)._i_brand_id5555;
                int32_t _i_class_id5557 = (it->second)._i_class_id5557;
                int32_t _i_category_id5559 = (it->second)._i_category_id5559;
                int32_t _i_manufact_id5561 = (it->second)._i_manufact_id5561;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_12627_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_12627_output.getInt32(i, 1);
                int64_t _ws_order_number746L = tbl_Filter_TD_12627_output.getInt64(i, 2);
                int32_t _ws_quantity747 = tbl_Filter_TD_12627_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price752 = tbl_Filter_TD_12627_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 5, _i_brand_id5555);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 6, _i_class_id5557);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 7, _i_category_id5559);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 8, _i_manufact_id5561);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 1, _ws_item_sk732);
                tbl_JOIN_INNER_TD_11872_output.setInt64(r, 2, _ws_order_number746L);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 3, _ws_quantity747);
                tbl_JOIN_INNER_TD_11872_output.setInt32(r, 4, _ws_ext_sales_price752);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11872_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11872_output #Row: " << tbl_JOIN_INNER_TD_11872_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11967(Table &tbl_SerializeFromObject_TD_12200_input, Table &tbl_Filter_TD_11967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#5526) AND (d_year#5526 = 2002)) AND isnotnull(d_date_sk#5520)))
    // Input: ListBuffer(d_date_sk#5520, d_year#5526)
    // Output: ListBuffer(d_date_sk#5520, d_year#5526)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12200_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5526 = tbl_SerializeFromObject_TD_12200_input.getInt32(i, 1);
        int32_t _d_date_sk5520 = tbl_SerializeFromObject_TD_12200_input.getInt32(i, 0);
        if (((_d_year5526!= 0) && (_d_year5526 == 2002)) && (_d_date_sk5520!= 0)) {
            int32_t _d_date_sk5520_t = tbl_SerializeFromObject_TD_12200_input.getInt32(i, 0);
            tbl_Filter_TD_11967_output.setInt32(r, 0, _d_date_sk5520_t);
            int32_t _d_year5526_t = tbl_SerializeFromObject_TD_12200_input.getInt32(i, 1);
            tbl_Filter_TD_11967_output.setInt32(r, 1, _d_year5526_t);
            r++;
        }
    }
    tbl_Filter_TD_11967_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11967_output #Row: " << tbl_Filter_TD_11967_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11452_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_11452_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11452_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11452_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_11452_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_quantity1216;
    int32_t _ss_ext_sales_price1221;
};
struct SW_JOIN_INNER_TD_11452_key_rightMajor {
    int32_t _i_item_sk5498;
    bool operator==(const SW_JOIN_INNER_TD_11452_key_rightMajor& other) const {
        return ((_i_item_sk5498 == other._i_item_sk5498));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11452_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11452_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk5498));
    }
};
}
struct SW_JOIN_INNER_TD_11452_payload_rightMajor {
    int32_t _i_item_sk5498;
    int32_t _i_brand_id5505;
    int32_t _i_class_id5507;
    int32_t _i_category_id5509;
    int32_t _i_manufact_id5511;
};
void SW_JOIN_INNER_TD_11452(Table &tbl_Filter_TD_12175_output, Table &tbl_Filter_TD_12389_output, Table &tbl_JOIN_INNER_TD_11452_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#5498 = ss_item_sk#1208))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221)
    // Right Table: ListBuffer(i_item_sk#5498, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511)
    int left_nrow = tbl_Filter_TD_12175_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12389_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11452_key_leftMajor, SW_JOIN_INNER_TD_11452_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12175_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_12175_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11452_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12175_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_12175_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_Filter_TD_12175_output.getInt64(i, 2);
            int32_t _ss_quantity1216 = tbl_Filter_TD_12175_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12175_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11452_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ticket_number1215L, _ss_quantity1216, _ss_ext_sales_price1221};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12389_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk5498_k = tbl_Filter_TD_12389_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11452_key_leftMajor{_i_item_sk5498_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_item_sk5498 = tbl_Filter_TD_12389_output.getInt32(i, 0);
                int32_t _i_brand_id5505 = tbl_Filter_TD_12389_output.getInt32(i, 1);
                int32_t _i_class_id5507 = tbl_Filter_TD_12389_output.getInt32(i, 2);
                int32_t _i_category_id5509 = tbl_Filter_TD_12389_output.getInt32(i, 3);
                int32_t _i_manufact_id5511 = tbl_Filter_TD_12389_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11452_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 4, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 5, _i_brand_id5505);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 6, _i_class_id5507);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 7, _i_category_id5509);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 8, _i_manufact_id5511);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11452_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11452_key_rightMajor, SW_JOIN_INNER_TD_11452_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12389_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk5498_k = tbl_Filter_TD_12389_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11452_key_rightMajor keyA{_i_item_sk5498_k};
            int32_t _i_item_sk5498 = tbl_Filter_TD_12389_output.getInt32(i, 0);
            int32_t _i_brand_id5505 = tbl_Filter_TD_12389_output.getInt32(i, 1);
            int32_t _i_class_id5507 = tbl_Filter_TD_12389_output.getInt32(i, 2);
            int32_t _i_category_id5509 = tbl_Filter_TD_12389_output.getInt32(i, 3);
            int32_t _i_manufact_id5511 = tbl_Filter_TD_12389_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11452_payload_rightMajor payloadA{_i_item_sk5498, _i_brand_id5505, _i_class_id5507, _i_category_id5509, _i_manufact_id5511};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12175_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_12175_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11452_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk5498 = (it->second)._i_item_sk5498;
                int32_t _i_brand_id5505 = (it->second)._i_brand_id5505;
                int32_t _i_class_id5507 = (it->second)._i_class_id5507;
                int32_t _i_category_id5509 = (it->second)._i_category_id5509;
                int32_t _i_manufact_id5511 = (it->second)._i_manufact_id5511;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_12175_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_12175_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_Filter_TD_12175_output.getInt64(i, 2);
                int32_t _ss_quantity1216 = tbl_Filter_TD_12175_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_Filter_TD_12175_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 5, _i_brand_id5505);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 6, _i_class_id5507);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 7, _i_category_id5509);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 8, _i_manufact_id5511);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 1, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_11452_output.setInt64(r, 2, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 3, _ss_quantity1216);
                tbl_JOIN_INNER_TD_11452_output.setInt32(r, 4, _ss_ext_sales_price1221);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11452_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11452_output #Row: " << tbl_JOIN_INNER_TD_11452_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1132(Table &tbl_SerializeFromObject_TD_12447_input, Table &tbl_Filter_TD_1132_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND (d_year#126 = 2002)) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120, d_year#126)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12447_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_12447_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_12447_input.getInt32(i, 0);
        if (((_d_year126!= 0) && (_d_year126 == 2002)) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_12447_input.getInt32(i, 0);
            tbl_Filter_TD_1132_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_year126_t = tbl_SerializeFromObject_TD_12447_input.getInt32(i, 1);
            tbl_Filter_TD_1132_output.setInt32(r, 1, _d_year126_t);
            r++;
        }
    }
    tbl_Filter_TD_1132_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1132_output #Row: " << tbl_Filter_TD_1132_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11247_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_11247_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11247_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11247_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_11247_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int64_t _cs_order_number1121L;
    int32_t _cs_quantity1122;
    int32_t _cs_ext_sales_price1127;
};
struct SW_JOIN_INNER_TD_11247_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_11247_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11247_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11247_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_11247_payload_rightMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    int32_t _i_manufact_id241;
};
void SW_JOIN_INNER_TD_11247(Table &tbl_Filter_TD_12653_output, Table &tbl_Filter_TD_12692_output, Table &tbl_JOIN_INNER_TD_11247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = cs_item_sk#1119))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127)
    // Right Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241)
    int left_nrow = tbl_Filter_TD_12653_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12692_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11247_key_leftMajor, SW_JOIN_INNER_TD_11247_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12653_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_12653_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_11247_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_12653_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_12653_output.getInt32(i, 1);
            int64_t _cs_order_number1121L = tbl_Filter_TD_12653_output.getInt64(i, 2);
            int32_t _cs_quantity1122 = tbl_Filter_TD_12653_output.getInt32(i, 3);
            int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_12653_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11247_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_order_number1121L, _cs_quantity1122, _cs_ext_sales_price1127};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12692_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_12692_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11247_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_item_sk228 = tbl_Filter_TD_12692_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_12692_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_12692_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_12692_output.getInt32(i, 3);
                int32_t _i_manufact_id241 = tbl_Filter_TD_12692_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_11247_output.setInt64(r, 2, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 4, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 5, _i_brand_id235);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 6, _i_class_id237);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 7, _i_category_id239);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 8, _i_manufact_id241);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11247_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11247_key_rightMajor, SW_JOIN_INNER_TD_11247_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12692_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_12692_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11247_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_12692_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_12692_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_12692_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_12692_output.getInt32(i, 3);
            int32_t _i_manufact_id241 = tbl_Filter_TD_12692_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_11247_payload_rightMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239, _i_manufact_id241};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12653_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_12653_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11247_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_12653_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_12653_output.getInt32(i, 1);
                int64_t _cs_order_number1121L = tbl_Filter_TD_12653_output.getInt64(i, 2);
                int32_t _cs_quantity1122 = tbl_Filter_TD_12653_output.getInt32(i, 3);
                int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_12653_output.getInt32(i, 4);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 5, _i_brand_id235);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 6, _i_class_id237);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 7, _i_category_id239);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 8, _i_manufact_id241);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 1, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_11247_output.setInt64(r, 2, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 3, _cs_quantity1122);
                tbl_JOIN_INNER_TD_11247_output.setInt32(r, 4, _cs_ext_sales_price1127);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11247_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11247_output #Row: " << tbl_JOIN_INNER_TD_11247_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10227(Table &tbl_SerializeFromObject_TD_11898_input, Table &tbl_Filter_TD_10227_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_order_number#6663L) AND isnotnull(wr_item_sk#6652)))
    // Input: ListBuffer(wr_item_sk#6652, wr_order_number#6663L, wr_return_quantity#6664, wr_return_amt#6665)
    // Output: ListBuffer(wr_item_sk#6652, wr_order_number#6663L, wr_return_quantity#6664, wr_return_amt#6665)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11898_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number6663L = tbl_SerializeFromObject_TD_11898_input.getInt64(i, 1);
        int32_t _wr_item_sk6652 = tbl_SerializeFromObject_TD_11898_input.getInt32(i, 0);
        if ((_wr_order_number6663L!= 0) && (_wr_item_sk6652!= 0)) {
            int32_t _wr_item_sk6652_t = tbl_SerializeFromObject_TD_11898_input.getInt32(i, 0);
            tbl_Filter_TD_10227_output.setInt32(r, 0, _wr_item_sk6652_t);
            int64_t _wr_order_number6663L_t = tbl_SerializeFromObject_TD_11898_input.getInt64(i, 1);
            tbl_Filter_TD_10227_output.setInt64(r, 1, _wr_order_number6663L_t);
            int32_t _wr_return_quantity6664_t = tbl_SerializeFromObject_TD_11898_input.getInt32(i, 2);
            tbl_Filter_TD_10227_output.setInt32(r, 2, _wr_return_quantity6664_t);
            int32_t _wr_return_amt6665_t = tbl_SerializeFromObject_TD_11898_input.getInt32(i, 3);
            tbl_Filter_TD_10227_output.setInt32(r, 3, _wr_return_amt6665_t);
            r++;
        }
    }
    tbl_Filter_TD_10227_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10227_output #Row: " << tbl_Filter_TD_10227_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10409_key_leftMajor {
    int32_t _ws_sold_date_sk6566;
    bool operator==(const SW_JOIN_INNER_TD_10409_key_leftMajor& other) const {
        return ((_ws_sold_date_sk6566 == other._ws_sold_date_sk6566));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10409_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10409_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk6566));
    }
};
}
struct SW_JOIN_INNER_TD_10409_payload_leftMajor {
    int32_t _ws_sold_date_sk6566;
    int32_t _ws_item_sk6569;
    int64_t _ws_order_number6583L;
    int32_t _ws_quantity6584;
    int32_t _ws_ext_sales_price6589;
    int32_t _i_brand_id6607;
    int32_t _i_class_id6609;
    int32_t _i_category_id6611;
    int32_t _i_manufact_id6613;
};
struct SW_JOIN_INNER_TD_10409_key_rightMajor {
    int32_t _d_date_sk6622;
    bool operator==(const SW_JOIN_INNER_TD_10409_key_rightMajor& other) const {
        return ((_d_date_sk6622 == other._d_date_sk6622));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10409_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10409_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6622));
    }
};
}
struct SW_JOIN_INNER_TD_10409_payload_rightMajor {
    int32_t _d_date_sk6622;
    int32_t _d_year6628;
};
void SW_JOIN_INNER_TD_10409(Table &tbl_JOIN_INNER_TD_11993_output, Table &tbl_Filter_TD_11610_output, Table &tbl_JOIN_INNER_TD_10409_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#6622 = ws_sold_date_sk#6566))
    // Left Table: ListBuffer(ws_sold_date_sk#6566, ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613)
    // Right Table: ListBuffer(d_date_sk#6622, d_year#6628)
    // Output Table: ListBuffer(ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613, d_year#6628)
    int left_nrow = tbl_JOIN_INNER_TD_11993_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11610_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10409_key_leftMajor, SW_JOIN_INNER_TD_10409_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11993_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk6566_k = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10409_key_leftMajor keyA{_ws_sold_date_sk6566_k};
            int32_t _ws_sold_date_sk6566 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 0);
            int32_t _ws_item_sk6569 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 1);
            int64_t _ws_order_number6583L = tbl_JOIN_INNER_TD_11993_output.getInt64(i, 2);
            int32_t _ws_quantity6584 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price6589 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 4);
            int32_t _i_brand_id6607 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 5);
            int32_t _i_class_id6609 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 6);
            int32_t _i_category_id6611 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 7);
            int32_t _i_manufact_id6613 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_10409_payload_leftMajor payloadA{_ws_sold_date_sk6566, _ws_item_sk6569, _ws_order_number6583L, _ws_quantity6584, _ws_ext_sales_price6589, _i_brand_id6607, _i_class_id6609, _i_category_id6611, _i_manufact_id6613};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11610_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6622_k = tbl_Filter_TD_11610_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10409_key_leftMajor{_d_date_sk6622_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk6566 = (it->second)._ws_sold_date_sk6566;
                int32_t _ws_item_sk6569 = (it->second)._ws_item_sk6569;
                int64_t _ws_order_number6583L = (it->second)._ws_order_number6583L;
                int32_t _ws_quantity6584 = (it->second)._ws_quantity6584;
                int32_t _ws_ext_sales_price6589 = (it->second)._ws_ext_sales_price6589;
                int32_t _i_brand_id6607 = (it->second)._i_brand_id6607;
                int32_t _i_class_id6609 = (it->second)._i_class_id6609;
                int32_t _i_category_id6611 = (it->second)._i_category_id6611;
                int32_t _i_manufact_id6613 = (it->second)._i_manufact_id6613;
                int32_t _d_date_sk6622 = tbl_Filter_TD_11610_output.getInt32(i, 0);
                int32_t _d_year6628 = tbl_Filter_TD_11610_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 0, _ws_item_sk6569);
                tbl_JOIN_INNER_TD_10409_output.setInt64(r, 1, _ws_order_number6583L);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 2, _ws_quantity6584);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 3, _ws_ext_sales_price6589);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 4, _i_brand_id6607);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 5, _i_class_id6609);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 6, _i_category_id6611);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 7, _i_manufact_id6613);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 8, _d_year6628);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10409_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10409_key_rightMajor, SW_JOIN_INNER_TD_10409_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11610_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6622_k = tbl_Filter_TD_11610_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10409_key_rightMajor keyA{_d_date_sk6622_k};
            int32_t _d_date_sk6622 = tbl_Filter_TD_11610_output.getInt32(i, 0);
            int32_t _d_year6628 = tbl_Filter_TD_11610_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10409_payload_rightMajor payloadA{_d_date_sk6622, _d_year6628};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11993_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk6566_k = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10409_key_rightMajor{_ws_sold_date_sk6566_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6622 = (it->second)._d_date_sk6622;
                int32_t _d_year6628 = (it->second)._d_year6628;
                int32_t _ws_sold_date_sk6566 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 0);
                int32_t _ws_item_sk6569 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 1);
                int64_t _ws_order_number6583L = tbl_JOIN_INNER_TD_11993_output.getInt64(i, 2);
                int32_t _ws_quantity6584 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price6589 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 4);
                int32_t _i_brand_id6607 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 5);
                int32_t _i_class_id6609 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 6);
                int32_t _i_category_id6611 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 7);
                int32_t _i_manufact_id6613 = tbl_JOIN_INNER_TD_11993_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 8, _d_year6628);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 0, _ws_item_sk6569);
                tbl_JOIN_INNER_TD_10409_output.setInt64(r, 1, _ws_order_number6583L);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 2, _ws_quantity6584);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 3, _ws_ext_sales_price6589);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 4, _i_brand_id6607);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 5, _i_class_id6609);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 6, _i_category_id6611);
                tbl_JOIN_INNER_TD_10409_output.setInt32(r, 7, _i_manufact_id6613);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10409_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10409_output #Row: " << tbl_JOIN_INNER_TD_10409_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10856(Table &tbl_SerializeFromObject_TD_11311_input, Table &tbl_Filter_TD_10856_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_ticket_number#6555L) AND isnotnull(sr_item_sk#6548)))
    // Input: ListBuffer(sr_item_sk#6548, sr_ticket_number#6555L, sr_return_quantity#6556, sr_return_amt#6557)
    // Output: ListBuffer(sr_item_sk#6548, sr_ticket_number#6555L, sr_return_quantity#6556, sr_return_amt#6557)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11311_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number6555L = tbl_SerializeFromObject_TD_11311_input.getInt64(i, 1);
        int32_t _sr_item_sk6548 = tbl_SerializeFromObject_TD_11311_input.getInt32(i, 0);
        if ((_sr_ticket_number6555L!= 0) && (_sr_item_sk6548!= 0)) {
            int32_t _sr_item_sk6548_t = tbl_SerializeFromObject_TD_11311_input.getInt32(i, 0);
            tbl_Filter_TD_10856_output.setInt32(r, 0, _sr_item_sk6548_t);
            int64_t _sr_ticket_number6555L_t = tbl_SerializeFromObject_TD_11311_input.getInt64(i, 1);
            tbl_Filter_TD_10856_output.setInt64(r, 1, _sr_ticket_number6555L_t);
            int32_t _sr_return_quantity6556_t = tbl_SerializeFromObject_TD_11311_input.getInt32(i, 2);
            tbl_Filter_TD_10856_output.setInt32(r, 2, _sr_return_quantity6556_t);
            int32_t _sr_return_amt6557_t = tbl_SerializeFromObject_TD_11311_input.getInt32(i, 3);
            tbl_Filter_TD_10856_output.setInt32(r, 3, _sr_return_amt6557_t);
            r++;
        }
    }
    tbl_Filter_TD_10856_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10856_output #Row: " << tbl_Filter_TD_10856_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10227_key_leftMajor {
    int32_t _ss_sold_date_sk6473;
    bool operator==(const SW_JOIN_INNER_TD_10227_key_leftMajor& other) const {
        return ((_ss_sold_date_sk6473 == other._ss_sold_date_sk6473));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10227_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10227_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk6473));
    }
};
}
struct SW_JOIN_INNER_TD_10227_payload_leftMajor {
    int32_t _ss_sold_date_sk6473;
    int32_t _ss_item_sk6475;
    int64_t _ss_ticket_number6482L;
    int32_t _ss_quantity6483;
    int32_t _ss_ext_sales_price6488;
    int32_t _i_brand_id6503;
    int32_t _i_class_id6505;
    int32_t _i_category_id6507;
    int32_t _i_manufact_id6509;
};
struct SW_JOIN_INNER_TD_10227_key_rightMajor {
    int32_t _d_date_sk6518;
    bool operator==(const SW_JOIN_INNER_TD_10227_key_rightMajor& other) const {
        return ((_d_date_sk6518 == other._d_date_sk6518));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10227_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10227_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6518));
    }
};
}
struct SW_JOIN_INNER_TD_10227_payload_rightMajor {
    int32_t _d_date_sk6518;
    int32_t _d_year6524;
};
void SW_JOIN_INNER_TD_10227(Table &tbl_JOIN_INNER_TD_11821_output, Table &tbl_Filter_TD_11517_output, Table &tbl_JOIN_INNER_TD_10227_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#6518 = ss_sold_date_sk#6473))
    // Left Table: ListBuffer(ss_sold_date_sk#6473, ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509)
    // Right Table: ListBuffer(d_date_sk#6518, d_year#6524)
    // Output Table: ListBuffer(ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509, d_year#6524)
    int left_nrow = tbl_JOIN_INNER_TD_11821_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11517_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10227_key_leftMajor, SW_JOIN_INNER_TD_10227_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11821_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk6473_k = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10227_key_leftMajor keyA{_ss_sold_date_sk6473_k};
            int32_t _ss_sold_date_sk6473 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 0);
            int32_t _ss_item_sk6475 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 1);
            int64_t _ss_ticket_number6482L = tbl_JOIN_INNER_TD_11821_output.getInt64(i, 2);
            int32_t _ss_quantity6483 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price6488 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 4);
            int32_t _i_brand_id6503 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 5);
            int32_t _i_class_id6505 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 6);
            int32_t _i_category_id6507 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 7);
            int32_t _i_manufact_id6509 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_10227_payload_leftMajor payloadA{_ss_sold_date_sk6473, _ss_item_sk6475, _ss_ticket_number6482L, _ss_quantity6483, _ss_ext_sales_price6488, _i_brand_id6503, _i_class_id6505, _i_category_id6507, _i_manufact_id6509};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11517_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6518_k = tbl_Filter_TD_11517_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10227_key_leftMajor{_d_date_sk6518_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk6473 = (it->second)._ss_sold_date_sk6473;
                int32_t _ss_item_sk6475 = (it->second)._ss_item_sk6475;
                int64_t _ss_ticket_number6482L = (it->second)._ss_ticket_number6482L;
                int32_t _ss_quantity6483 = (it->second)._ss_quantity6483;
                int32_t _ss_ext_sales_price6488 = (it->second)._ss_ext_sales_price6488;
                int32_t _i_brand_id6503 = (it->second)._i_brand_id6503;
                int32_t _i_class_id6505 = (it->second)._i_class_id6505;
                int32_t _i_category_id6507 = (it->second)._i_category_id6507;
                int32_t _i_manufact_id6509 = (it->second)._i_manufact_id6509;
                int32_t _d_date_sk6518 = tbl_Filter_TD_11517_output.getInt32(i, 0);
                int32_t _d_year6524 = tbl_Filter_TD_11517_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 0, _ss_item_sk6475);
                tbl_JOIN_INNER_TD_10227_output.setInt64(r, 1, _ss_ticket_number6482L);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 2, _ss_quantity6483);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 3, _ss_ext_sales_price6488);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 4, _i_brand_id6503);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 5, _i_class_id6505);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 6, _i_category_id6507);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 7, _i_manufact_id6509);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 8, _d_year6524);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10227_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10227_key_rightMajor, SW_JOIN_INNER_TD_10227_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11517_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6518_k = tbl_Filter_TD_11517_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10227_key_rightMajor keyA{_d_date_sk6518_k};
            int32_t _d_date_sk6518 = tbl_Filter_TD_11517_output.getInt32(i, 0);
            int32_t _d_year6524 = tbl_Filter_TD_11517_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10227_payload_rightMajor payloadA{_d_date_sk6518, _d_year6524};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11821_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk6473_k = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10227_key_rightMajor{_ss_sold_date_sk6473_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6518 = (it->second)._d_date_sk6518;
                int32_t _d_year6524 = (it->second)._d_year6524;
                int32_t _ss_sold_date_sk6473 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 0);
                int32_t _ss_item_sk6475 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 1);
                int64_t _ss_ticket_number6482L = tbl_JOIN_INNER_TD_11821_output.getInt64(i, 2);
                int32_t _ss_quantity6483 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price6488 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 4);
                int32_t _i_brand_id6503 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 5);
                int32_t _i_class_id6505 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 6);
                int32_t _i_category_id6507 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 7);
                int32_t _i_manufact_id6509 = tbl_JOIN_INNER_TD_11821_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 8, _d_year6524);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 0, _ss_item_sk6475);
                tbl_JOIN_INNER_TD_10227_output.setInt64(r, 1, _ss_ticket_number6482L);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 2, _ss_quantity6483);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 3, _ss_ext_sales_price6488);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 4, _i_brand_id6503);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 5, _i_class_id6505);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 6, _i_category_id6507);
                tbl_JOIN_INNER_TD_10227_output.setInt32(r, 7, _i_manufact_id6509);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10227_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10227_output #Row: " << tbl_JOIN_INNER_TD_10227_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10332(Table &tbl_SerializeFromObject_TD_11906_input, Table &tbl_Filter_TD_10332_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_order_number#6462L) AND isnotnull(cr_item_sk#6448)))
    // Input: ListBuffer(cr_item_sk#6448, cr_order_number#6462L, cr_return_quantity#6463, cr_return_amount#6464)
    // Output: ListBuffer(cr_item_sk#6448, cr_order_number#6462L, cr_return_quantity#6463, cr_return_amount#6464)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11906_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number6462L = tbl_SerializeFromObject_TD_11906_input.getInt64(i, 1);
        int32_t _cr_item_sk6448 = tbl_SerializeFromObject_TD_11906_input.getInt32(i, 0);
        if ((_cr_order_number6462L!= 0) && (_cr_item_sk6448!= 0)) {
            int32_t _cr_item_sk6448_t = tbl_SerializeFromObject_TD_11906_input.getInt32(i, 0);
            tbl_Filter_TD_10332_output.setInt32(r, 0, _cr_item_sk6448_t);
            int64_t _cr_order_number6462L_t = tbl_SerializeFromObject_TD_11906_input.getInt64(i, 1);
            tbl_Filter_TD_10332_output.setInt64(r, 1, _cr_order_number6462L_t);
            int32_t _cr_return_quantity6463_t = tbl_SerializeFromObject_TD_11906_input.getInt32(i, 2);
            tbl_Filter_TD_10332_output.setInt32(r, 2, _cr_return_quantity6463_t);
            int32_t _cr_return_amount6464_t = tbl_SerializeFromObject_TD_11906_input.getInt32(i, 3);
            tbl_Filter_TD_10332_output.setInt32(r, 3, _cr_return_amount6464_t);
            r++;
        }
    }
    tbl_Filter_TD_10332_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10332_output #Row: " << tbl_Filter_TD_10332_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10611_key_leftMajor {
    int32_t _cs_sold_date_sk6362;
    bool operator==(const SW_JOIN_INNER_TD_10611_key_leftMajor& other) const {
        return ((_cs_sold_date_sk6362 == other._cs_sold_date_sk6362));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10611_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10611_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk6362));
    }
};
}
struct SW_JOIN_INNER_TD_10611_payload_leftMajor {
    int32_t _cs_sold_date_sk6362;
    int32_t _cs_item_sk6377;
    int64_t _cs_order_number6379L;
    int32_t _cs_quantity6380;
    int32_t _cs_ext_sales_price6385;
    int32_t _i_brand_id6403;
    int32_t _i_class_id6405;
    int32_t _i_category_id6407;
    int32_t _i_manufact_id6409;
};
struct SW_JOIN_INNER_TD_10611_key_rightMajor {
    int32_t _d_date_sk6418;
    bool operator==(const SW_JOIN_INNER_TD_10611_key_rightMajor& other) const {
        return ((_d_date_sk6418 == other._d_date_sk6418));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10611_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10611_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk6418));
    }
};
}
struct SW_JOIN_INNER_TD_10611_payload_rightMajor {
    int32_t _d_date_sk6418;
    int32_t _d_year6424;
};
void SW_JOIN_INNER_TD_10611(Table &tbl_JOIN_INNER_TD_11561_output, Table &tbl_Filter_TD_11361_output, Table &tbl_JOIN_INNER_TD_10611_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#6418 = cs_sold_date_sk#6362))
    // Left Table: ListBuffer(cs_sold_date_sk#6362, cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409)
    // Right Table: ListBuffer(d_date_sk#6418, d_year#6424)
    // Output Table: ListBuffer(cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, d_year#6424)
    int left_nrow = tbl_JOIN_INNER_TD_11561_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11361_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10611_key_leftMajor, SW_JOIN_INNER_TD_10611_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11561_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk6362_k = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10611_key_leftMajor keyA{_cs_sold_date_sk6362_k};
            int32_t _cs_sold_date_sk6362 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 0);
            int32_t _cs_item_sk6377 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 1);
            int64_t _cs_order_number6379L = tbl_JOIN_INNER_TD_11561_output.getInt64(i, 2);
            int32_t _cs_quantity6380 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 3);
            int32_t _cs_ext_sales_price6385 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 4);
            int32_t _i_brand_id6403 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 5);
            int32_t _i_class_id6405 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 6);
            int32_t _i_category_id6407 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 7);
            int32_t _i_manufact_id6409 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_10611_payload_leftMajor payloadA{_cs_sold_date_sk6362, _cs_item_sk6377, _cs_order_number6379L, _cs_quantity6380, _cs_ext_sales_price6385, _i_brand_id6403, _i_class_id6405, _i_category_id6407, _i_manufact_id6409};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11361_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk6418_k = tbl_Filter_TD_11361_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10611_key_leftMajor{_d_date_sk6418_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk6362 = (it->second)._cs_sold_date_sk6362;
                int32_t _cs_item_sk6377 = (it->second)._cs_item_sk6377;
                int64_t _cs_order_number6379L = (it->second)._cs_order_number6379L;
                int32_t _cs_quantity6380 = (it->second)._cs_quantity6380;
                int32_t _cs_ext_sales_price6385 = (it->second)._cs_ext_sales_price6385;
                int32_t _i_brand_id6403 = (it->second)._i_brand_id6403;
                int32_t _i_class_id6405 = (it->second)._i_class_id6405;
                int32_t _i_category_id6407 = (it->second)._i_category_id6407;
                int32_t _i_manufact_id6409 = (it->second)._i_manufact_id6409;
                int32_t _d_date_sk6418 = tbl_Filter_TD_11361_output.getInt32(i, 0);
                int32_t _d_year6424 = tbl_Filter_TD_11361_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 0, _cs_item_sk6377);
                tbl_JOIN_INNER_TD_10611_output.setInt64(r, 1, _cs_order_number6379L);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 2, _cs_quantity6380);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 3, _cs_ext_sales_price6385);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 4, _i_brand_id6403);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 5, _i_class_id6405);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 6, _i_category_id6407);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 7, _i_manufact_id6409);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 8, _d_year6424);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10611_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10611_key_rightMajor, SW_JOIN_INNER_TD_10611_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11361_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk6418_k = tbl_Filter_TD_11361_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10611_key_rightMajor keyA{_d_date_sk6418_k};
            int32_t _d_date_sk6418 = tbl_Filter_TD_11361_output.getInt32(i, 0);
            int32_t _d_year6424 = tbl_Filter_TD_11361_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10611_payload_rightMajor payloadA{_d_date_sk6418, _d_year6424};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11561_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk6362_k = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10611_key_rightMajor{_cs_sold_date_sk6362_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk6418 = (it->second)._d_date_sk6418;
                int32_t _d_year6424 = (it->second)._d_year6424;
                int32_t _cs_sold_date_sk6362 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 0);
                int32_t _cs_item_sk6377 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 1);
                int64_t _cs_order_number6379L = tbl_JOIN_INNER_TD_11561_output.getInt64(i, 2);
                int32_t _cs_quantity6380 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 3);
                int32_t _cs_ext_sales_price6385 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 4);
                int32_t _i_brand_id6403 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 5);
                int32_t _i_class_id6405 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 6);
                int32_t _i_category_id6407 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 7);
                int32_t _i_manufact_id6409 = tbl_JOIN_INNER_TD_11561_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 8, _d_year6424);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 0, _cs_item_sk6377);
                tbl_JOIN_INNER_TD_10611_output.setInt64(r, 1, _cs_order_number6379L);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 2, _cs_quantity6380);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 3, _cs_ext_sales_price6385);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 4, _i_brand_id6403);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 5, _i_class_id6405);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 6, _i_category_id6407);
                tbl_JOIN_INNER_TD_10611_output.setInt32(r, 7, _i_manufact_id6409);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10611_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10611_output #Row: " << tbl_JOIN_INNER_TD_10611_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10602(Table &tbl_SerializeFromObject_TD_11758_input, Table &tbl_Filter_TD_10602_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(wr_order_number#844L) AND isnotnull(wr_item_sk#833)))
    // Input: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11758_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L = tbl_SerializeFromObject_TD_11758_input.getInt64(i, 1);
        int32_t _wr_item_sk833 = tbl_SerializeFromObject_TD_11758_input.getInt32(i, 0);
        if ((_wr_order_number844L!= 0) && (_wr_item_sk833!= 0)) {
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_11758_input.getInt32(i, 0);
            tbl_Filter_TD_10602_output.setInt32(r, 0, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_11758_input.getInt64(i, 1);
            tbl_Filter_TD_10602_output.setInt64(r, 1, _wr_order_number844L_t);
            int32_t _wr_return_quantity845_t = tbl_SerializeFromObject_TD_11758_input.getInt32(i, 2);
            tbl_Filter_TD_10602_output.setInt32(r, 2, _wr_return_quantity845_t);
            int32_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_11758_input.getInt32(i, 3);
            tbl_Filter_TD_10602_output.setInt32(r, 3, _wr_return_amt846_t);
            r++;
        }
    }
    tbl_Filter_TD_10602_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10602_output #Row: " << tbl_Filter_TD_10602_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10415_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_10415_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10415_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10415_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_10415_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
    int64_t _ws_order_number746L;
    int32_t _ws_quantity747;
    int32_t _ws_ext_sales_price752;
    int32_t _i_brand_id5555;
    int32_t _i_class_id5557;
    int32_t _i_category_id5559;
    int32_t _i_manufact_id5561;
};
struct SW_JOIN_INNER_TD_10415_key_rightMajor {
    int32_t _d_date_sk5570;
    bool operator==(const SW_JOIN_INNER_TD_10415_key_rightMajor& other) const {
        return ((_d_date_sk5570 == other._d_date_sk5570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10415_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10415_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5570));
    }
};
}
struct SW_JOIN_INNER_TD_10415_payload_rightMajor {
    int32_t _d_date_sk5570;
    int32_t _d_year5576;
};
void SW_JOIN_INNER_TD_10415(Table &tbl_JOIN_INNER_TD_11872_output, Table &tbl_Filter_TD_11365_output, Table &tbl_JOIN_INNER_TD_10415_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#5570 = ws_sold_date_sk#729))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561)
    // Right Table: ListBuffer(d_date_sk#5570, d_year#5576)
    // Output Table: ListBuffer(ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561, d_year#5576)
    int left_nrow = tbl_JOIN_INNER_TD_11872_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11365_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10415_key_leftMajor, SW_JOIN_INNER_TD_10415_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11872_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10415_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 1);
            int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_11872_output.getInt64(i, 2);
            int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 3);
            int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 4);
            int32_t _i_brand_id5555 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 5);
            int32_t _i_class_id5557 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 6);
            int32_t _i_category_id5559 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 7);
            int32_t _i_manufact_id5561 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_10415_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732, _ws_order_number746L, _ws_quantity747, _ws_ext_sales_price752, _i_brand_id5555, _i_class_id5557, _i_category_id5559, _i_manufact_id5561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11365_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5570_k = tbl_Filter_TD_11365_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10415_key_leftMajor{_d_date_sk5570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int64_t _ws_order_number746L = (it->second)._ws_order_number746L;
                int32_t _ws_quantity747 = (it->second)._ws_quantity747;
                int32_t _ws_ext_sales_price752 = (it->second)._ws_ext_sales_price752;
                int32_t _i_brand_id5555 = (it->second)._i_brand_id5555;
                int32_t _i_class_id5557 = (it->second)._i_class_id5557;
                int32_t _i_category_id5559 = (it->second)._i_category_id5559;
                int32_t _i_manufact_id5561 = (it->second)._i_manufact_id5561;
                int32_t _d_date_sk5570 = tbl_Filter_TD_11365_output.getInt32(i, 0);
                int32_t _d_year5576 = tbl_Filter_TD_11365_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10415_output.setInt64(r, 1, _ws_order_number746L);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 4, _i_brand_id5555);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 5, _i_class_id5557);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 6, _i_category_id5559);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 7, _i_manufact_id5561);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 8, _d_year5576);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10415_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10415_key_rightMajor, SW_JOIN_INNER_TD_10415_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11365_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5570_k = tbl_Filter_TD_11365_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10415_key_rightMajor keyA{_d_date_sk5570_k};
            int32_t _d_date_sk5570 = tbl_Filter_TD_11365_output.getInt32(i, 0);
            int32_t _d_year5576 = tbl_Filter_TD_11365_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10415_payload_rightMajor payloadA{_d_date_sk5570, _d_year5576};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11872_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10415_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5570 = (it->second)._d_date_sk5570;
                int32_t _d_year5576 = (it->second)._d_year5576;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 1);
                int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_11872_output.getInt64(i, 2);
                int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 3);
                int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 4);
                int32_t _i_brand_id5555 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 5);
                int32_t _i_class_id5557 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 6);
                int32_t _i_category_id5559 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 7);
                int32_t _i_manufact_id5561 = tbl_JOIN_INNER_TD_11872_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 8, _d_year5576);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 0, _ws_item_sk732);
                tbl_JOIN_INNER_TD_10415_output.setInt64(r, 1, _ws_order_number746L);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 2, _ws_quantity747);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 3, _ws_ext_sales_price752);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 4, _i_brand_id5555);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 5, _i_class_id5557);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 6, _i_category_id5559);
                tbl_JOIN_INNER_TD_10415_output.setInt32(r, 7, _i_manufact_id5561);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10415_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10415_output #Row: " << tbl_JOIN_INNER_TD_10415_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10297(Table &tbl_SerializeFromObject_TD_11120_input, Table &tbl_Filter_TD_10297_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_ticket_number#678L) AND isnotnull(sr_item_sk#671)))
    // Input: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11120_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L = tbl_SerializeFromObject_TD_11120_input.getInt64(i, 1);
        int32_t _sr_item_sk671 = tbl_SerializeFromObject_TD_11120_input.getInt32(i, 0);
        if ((_sr_ticket_number678L!= 0) && (_sr_item_sk671!= 0)) {
            int32_t _sr_item_sk671_t = tbl_SerializeFromObject_TD_11120_input.getInt32(i, 0);
            tbl_Filter_TD_10297_output.setInt32(r, 0, _sr_item_sk671_t);
            int64_t _sr_ticket_number678L_t = tbl_SerializeFromObject_TD_11120_input.getInt64(i, 1);
            tbl_Filter_TD_10297_output.setInt64(r, 1, _sr_ticket_number678L_t);
            int32_t _sr_return_quantity679_t = tbl_SerializeFromObject_TD_11120_input.getInt32(i, 2);
            tbl_Filter_TD_10297_output.setInt32(r, 2, _sr_return_quantity679_t);
            int32_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_11120_input.getInt32(i, 3);
            tbl_Filter_TD_10297_output.setInt32(r, 3, _sr_return_amt680_t);
            r++;
        }
    }
    tbl_Filter_TD_10297_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10297_output #Row: " << tbl_Filter_TD_10297_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10377_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_10377_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10377_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10377_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_10377_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
    int64_t _ss_ticket_number1215L;
    int32_t _ss_quantity1216;
    int32_t _ss_ext_sales_price1221;
    int32_t _i_brand_id5505;
    int32_t _i_class_id5507;
    int32_t _i_category_id5509;
    int32_t _i_manufact_id5511;
};
struct SW_JOIN_INNER_TD_10377_key_rightMajor {
    int32_t _d_date_sk5520;
    bool operator==(const SW_JOIN_INNER_TD_10377_key_rightMajor& other) const {
        return ((_d_date_sk5520 == other._d_date_sk5520));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10377_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10377_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk5520));
    }
};
}
struct SW_JOIN_INNER_TD_10377_payload_rightMajor {
    int32_t _d_date_sk5520;
    int32_t _d_year5526;
};
void SW_JOIN_INNER_TD_10377(Table &tbl_JOIN_INNER_TD_11452_output, Table &tbl_Filter_TD_11967_output, Table &tbl_JOIN_INNER_TD_10377_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#5520 = ss_sold_date_sk#1206))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511)
    // Right Table: ListBuffer(d_date_sk#5520, d_year#5526)
    // Output Table: ListBuffer(ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511, d_year#5526)
    int left_nrow = tbl_JOIN_INNER_TD_11452_output.getNumRow();
    int right_nrow = tbl_Filter_TD_11967_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10377_key_leftMajor, SW_JOIN_INNER_TD_10377_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11452_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10377_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 1);
            int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_11452_output.getInt64(i, 2);
            int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 3);
            int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 4);
            int32_t _i_brand_id5505 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 5);
            int32_t _i_class_id5507 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 6);
            int32_t _i_category_id5509 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 7);
            int32_t _i_manufact_id5511 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_10377_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208, _ss_ticket_number1215L, _ss_quantity1216, _ss_ext_sales_price1221, _i_brand_id5505, _i_class_id5507, _i_category_id5509, _i_manufact_id5511};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11967_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk5520_k = tbl_Filter_TD_11967_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10377_key_leftMajor{_d_date_sk5520_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int64_t _ss_ticket_number1215L = (it->second)._ss_ticket_number1215L;
                int32_t _ss_quantity1216 = (it->second)._ss_quantity1216;
                int32_t _ss_ext_sales_price1221 = (it->second)._ss_ext_sales_price1221;
                int32_t _i_brand_id5505 = (it->second)._i_brand_id5505;
                int32_t _i_class_id5507 = (it->second)._i_class_id5507;
                int32_t _i_category_id5509 = (it->second)._i_category_id5509;
                int32_t _i_manufact_id5511 = (it->second)._i_manufact_id5511;
                int32_t _d_date_sk5520 = tbl_Filter_TD_11967_output.getInt32(i, 0);
                int32_t _d_year5526 = tbl_Filter_TD_11967_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10377_output.setInt64(r, 1, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 4, _i_brand_id5505);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 5, _i_class_id5507);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 6, _i_category_id5509);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 7, _i_manufact_id5511);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 8, _d_year5526);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10377_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10377_key_rightMajor, SW_JOIN_INNER_TD_10377_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_11967_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk5520_k = tbl_Filter_TD_11967_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10377_key_rightMajor keyA{_d_date_sk5520_k};
            int32_t _d_date_sk5520 = tbl_Filter_TD_11967_output.getInt32(i, 0);
            int32_t _d_year5526 = tbl_Filter_TD_11967_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10377_payload_rightMajor payloadA{_d_date_sk5520, _d_year5526};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11452_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10377_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk5520 = (it->second)._d_date_sk5520;
                int32_t _d_year5526 = (it->second)._d_year5526;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 1);
                int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_11452_output.getInt64(i, 2);
                int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 3);
                int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 4);
                int32_t _i_brand_id5505 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 5);
                int32_t _i_class_id5507 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 6);
                int32_t _i_category_id5509 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 7);
                int32_t _i_manufact_id5511 = tbl_JOIN_INNER_TD_11452_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 8, _d_year5526);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 0, _ss_item_sk1208);
                tbl_JOIN_INNER_TD_10377_output.setInt64(r, 1, _ss_ticket_number1215L);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 2, _ss_quantity1216);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 3, _ss_ext_sales_price1221);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 4, _i_brand_id5505);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 5, _i_class_id5507);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 6, _i_category_id5509);
                tbl_JOIN_INNER_TD_10377_output.setInt32(r, 7, _i_manufact_id5511);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10377_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10377_output #Row: " << tbl_JOIN_INNER_TD_10377_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10579(Table &tbl_SerializeFromObject_TD_11440_input, Table &tbl_Filter_TD_10579_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_order_number#1039L) AND isnotnull(cr_item_sk#1025)))
    // Input: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11440_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L = tbl_SerializeFromObject_TD_11440_input.getInt64(i, 1);
        int32_t _cr_item_sk1025 = tbl_SerializeFromObject_TD_11440_input.getInt32(i, 0);
        if ((_cr_order_number1039L!= 0) && (_cr_item_sk1025!= 0)) {
            int32_t _cr_item_sk1025_t = tbl_SerializeFromObject_TD_11440_input.getInt32(i, 0);
            tbl_Filter_TD_10579_output.setInt32(r, 0, _cr_item_sk1025_t);
            int64_t _cr_order_number1039L_t = tbl_SerializeFromObject_TD_11440_input.getInt64(i, 1);
            tbl_Filter_TD_10579_output.setInt64(r, 1, _cr_order_number1039L_t);
            int32_t _cr_return_quantity1040_t = tbl_SerializeFromObject_TD_11440_input.getInt32(i, 2);
            tbl_Filter_TD_10579_output.setInt32(r, 2, _cr_return_quantity1040_t);
            int32_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_11440_input.getInt32(i, 3);
            tbl_Filter_TD_10579_output.setInt32(r, 3, _cr_return_amount1041_t);
            r++;
        }
    }
    tbl_Filter_TD_10579_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10579_output #Row: " << tbl_Filter_TD_10579_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10587_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_10587_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10587_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10587_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_10587_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
    int64_t _cs_order_number1121L;
    int32_t _cs_quantity1122;
    int32_t _cs_ext_sales_price1127;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    int32_t _i_manufact_id241;
};
struct SW_JOIN_INNER_TD_10587_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_10587_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10587_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10587_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_10587_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_year126;
};
void SW_JOIN_INNER_TD_10587(Table &tbl_JOIN_INNER_TD_11247_output, Table &tbl_Filter_TD_1132_output, Table &tbl_JOIN_INNER_TD_10587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = cs_sold_date_sk#1104))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241)
    // Right Table: ListBuffer(d_date_sk#120, d_year#126)
    // Output Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, d_year#126)
    int left_nrow = tbl_JOIN_INNER_TD_11247_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1132_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10587_key_leftMajor, SW_JOIN_INNER_TD_10587_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_11247_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10587_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 1);
            int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_11247_output.getInt64(i, 2);
            int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 3);
            int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 4);
            int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 5);
            int32_t _i_class_id237 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 6);
            int32_t _i_category_id239 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 7);
            int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 8);
            SW_JOIN_INNER_TD_10587_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119, _cs_order_number1121L, _cs_quantity1122, _cs_ext_sales_price1127, _i_brand_id235, _i_class_id237, _i_category_id239, _i_manufact_id241};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1132_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1132_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10587_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int64_t _cs_order_number1121L = (it->second)._cs_order_number1121L;
                int32_t _cs_quantity1122 = (it->second)._cs_quantity1122;
                int32_t _cs_ext_sales_price1127 = (it->second)._cs_ext_sales_price1127;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int32_t _d_date_sk120 = tbl_Filter_TD_1132_output.getInt32(i, 0);
                int32_t _d_year126 = tbl_Filter_TD_1132_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10587_output.setInt64(r, 1, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 3, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 4, _i_brand_id235);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 5, _i_class_id237);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 6, _i_category_id239);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 7, _i_manufact_id241);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 8, _d_year126);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10587_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10587_key_rightMajor, SW_JOIN_INNER_TD_10587_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1132_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_1132_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10587_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_1132_output.getInt32(i, 0);
            int32_t _d_year126 = tbl_Filter_TD_1132_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10587_payload_rightMajor payloadA{_d_date_sk120, _d_year126};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_11247_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10587_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 1);
                int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_11247_output.getInt64(i, 2);
                int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 3);
                int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 4);
                int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 5);
                int32_t _i_class_id237 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 6);
                int32_t _i_category_id239 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 7);
                int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_11247_output.getInt32(i, 8);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 8, _d_year126);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 0, _cs_item_sk1119);
                tbl_JOIN_INNER_TD_10587_output.setInt64(r, 1, _cs_order_number1121L);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 2, _cs_quantity1122);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 3, _cs_ext_sales_price1127);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 4, _i_brand_id235);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 5, _i_class_id237);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 6, _i_category_id239);
                tbl_JOIN_INNER_TD_10587_output.setInt32(r, 7, _i_manufact_id241);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10587_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10587_output #Row: " << tbl_JOIN_INNER_TD_10587_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_946_key {
    int64_t _wr_order_number6663L;
    int32_t _wr_item_sk6652;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_946_key& other) const {
        return ((_wr_order_number6663L == other._wr_order_number6663L) && (_wr_item_sk6652 == other._wr_item_sk6652));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_946_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_946_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number6663L)) + (hash<int32_t>()(k._wr_item_sk6652));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_946_payload {
    int32_t _wr_item_sk6652;
    int64_t _wr_order_number6663L;
    int32_t _wr_return_quantity6664;
    int32_t _wr_return_amt6665;
};
void SW_JOIN_LEFTOUTER_TD_946(Table &tbl_JOIN_INNER_TD_10409_output, Table &tbl_Filter_TD_10227_output, Table &tbl_JOIN_LEFTOUTER_TD_946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ws_order_number#6583L = wr_order_number#6663L) AND (ws_item_sk#6569 = wr_item_sk#6652)))
    // Left Table: ListBuffer(ws_item_sk#6569, ws_order_number#6583L, ws_quantity#6584, ws_ext_sales_price#6589, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613, d_year#6628)
    // Right Table: ListBuffer(wr_item_sk#6652, wr_order_number#6663L, wr_return_quantity#6664, wr_return_amt#6665)
    // Output Table: ListBuffer(d_year#6628, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613, ws_quantity#6584, wr_return_quantity#6664, ws_ext_sales_price#6589, wr_return_amt#6665)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_946_key, SW_JOIN_LEFTOUTER_TD_946_payload> ht1;
    int nrow1 = tbl_Filter_TD_10227_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_10409_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number6663L_k = tbl_Filter_TD_10227_output.getInt64(i, 1);
        int32_t _wr_item_sk6652_k = tbl_Filter_TD_10227_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_946_key keyA{_wr_order_number6663L_k, _wr_item_sk6652_k};
        int32_t _wr_item_sk6652 = tbl_Filter_TD_10227_output.getInt32(i, 0);
        int64_t _wr_order_number6663L = tbl_Filter_TD_10227_output.getInt64(i, 1);
        int32_t _wr_return_quantity6664 = tbl_Filter_TD_10227_output.getInt32(i, 2);
        int32_t _wr_return_amt6665 = tbl_Filter_TD_10227_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_946_payload payloadA{_wr_item_sk6652, _wr_order_number6663L, _wr_return_quantity6664, _wr_return_amt6665};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ws_order_number6583L_k = tbl_JOIN_INNER_TD_10409_output.getInt64(i, 1);
        int32_t _ws_item_sk6569_k = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_946_key{_ws_order_number6583L_k, _ws_item_sk6569_k});
        int32_t _ws_item_sk6569 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 0);
        int64_t _ws_order_number6583L = tbl_JOIN_INNER_TD_10409_output.getInt64(i, 1);
        int32_t _ws_quantity6584 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 2);
        int32_t _ws_ext_sales_price6589 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 3);
        int32_t _i_brand_id6607 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 4);
        int32_t _i_class_id6609 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 5);
        int32_t _i_category_id6611 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 6);
        int32_t _i_manufact_id6613 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 7);
        int32_t _d_year6628 = tbl_JOIN_INNER_TD_10409_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_946_key{_ws_order_number6583L_k, _ws_item_sk6569_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wr_item_sk6652 = (it_it->second)._wr_item_sk6652;
                int64_t _wr_order_number6663L = (it_it->second)._wr_order_number6663L;
                int32_t _wr_return_quantity6664 = (it_it->second)._wr_return_quantity6664;
                int32_t _wr_return_amt6665 = (it_it->second)._wr_return_amt6665;
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 6, _wr_return_quantity6664);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 8, _wr_return_amt6665);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 5, _ws_quantity6584);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 7, _ws_ext_sales_price6589);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 1, _i_brand_id6607);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 2, _i_class_id6609);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 3, _i_category_id6611);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 4, _i_manufact_id6613);
                tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 0, _d_year6628);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 5, _ws_quantity6584);
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 7, _ws_ext_sales_price6589);
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 1, _i_brand_id6607);
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 2, _i_class_id6609);
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 3, _i_category_id6611);
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 4, _i_manufact_id6613);
            tbl_JOIN_LEFTOUTER_TD_946_output.setInt32(r, 0, _d_year6628);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_946_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_946_output #Row: " << tbl_JOIN_LEFTOUTER_TD_946_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_9485_key {
    int64_t _sr_ticket_number6555L;
    int32_t _sr_item_sk6548;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_9485_key& other) const {
        return ((_sr_ticket_number6555L == other._sr_ticket_number6555L) && (_sr_item_sk6548 == other._sr_item_sk6548));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_9485_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_9485_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number6555L)) + (hash<int32_t>()(k._sr_item_sk6548));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_9485_payload {
    int32_t _sr_item_sk6548;
    int64_t _sr_ticket_number6555L;
    int32_t _sr_return_quantity6556;
    int32_t _sr_return_amt6557;
};
void SW_JOIN_LEFTOUTER_TD_9485(Table &tbl_JOIN_INNER_TD_10227_output, Table &tbl_Filter_TD_10856_output, Table &tbl_JOIN_LEFTOUTER_TD_9485_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ss_ticket_number#6482L = sr_ticket_number#6555L) AND (ss_item_sk#6475 = sr_item_sk#6548)))
    // Left Table: ListBuffer(ss_item_sk#6475, ss_ticket_number#6482L, ss_quantity#6483, ss_ext_sales_price#6488, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509, d_year#6524)
    // Right Table: ListBuffer(sr_item_sk#6548, sr_ticket_number#6555L, sr_return_quantity#6556, sr_return_amt#6557)
    // Output Table: ListBuffer(d_year#6524, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509, ss_quantity#6483, sr_return_quantity#6556, ss_ext_sales_price#6488, sr_return_amt#6557)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_9485_key, SW_JOIN_LEFTOUTER_TD_9485_payload> ht1;
    int nrow1 = tbl_Filter_TD_10856_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_10227_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number6555L_k = tbl_Filter_TD_10856_output.getInt64(i, 1);
        int32_t _sr_item_sk6548_k = tbl_Filter_TD_10856_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_9485_key keyA{_sr_ticket_number6555L_k, _sr_item_sk6548_k};
        int32_t _sr_item_sk6548 = tbl_Filter_TD_10856_output.getInt32(i, 0);
        int64_t _sr_ticket_number6555L = tbl_Filter_TD_10856_output.getInt64(i, 1);
        int32_t _sr_return_quantity6556 = tbl_Filter_TD_10856_output.getInt32(i, 2);
        int32_t _sr_return_amt6557 = tbl_Filter_TD_10856_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_9485_payload payloadA{_sr_item_sk6548, _sr_ticket_number6555L, _sr_return_quantity6556, _sr_return_amt6557};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ss_ticket_number6482L_k = tbl_JOIN_INNER_TD_10227_output.getInt64(i, 1);
        int32_t _ss_item_sk6475_k = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_9485_key{_ss_ticket_number6482L_k, _ss_item_sk6475_k});
        int32_t _ss_item_sk6475 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 0);
        int64_t _ss_ticket_number6482L = tbl_JOIN_INNER_TD_10227_output.getInt64(i, 1);
        int32_t _ss_quantity6483 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 2);
        int32_t _ss_ext_sales_price6488 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 3);
        int32_t _i_brand_id6503 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 4);
        int32_t _i_class_id6505 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 5);
        int32_t _i_category_id6507 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 6);
        int32_t _i_manufact_id6509 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 7);
        int32_t _d_year6524 = tbl_JOIN_INNER_TD_10227_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_9485_key{_ss_ticket_number6482L_k, _ss_item_sk6475_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _sr_item_sk6548 = (it_it->second)._sr_item_sk6548;
                int64_t _sr_ticket_number6555L = (it_it->second)._sr_ticket_number6555L;
                int32_t _sr_return_quantity6556 = (it_it->second)._sr_return_quantity6556;
                int32_t _sr_return_amt6557 = (it_it->second)._sr_return_amt6557;
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 6, _sr_return_quantity6556);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 8, _sr_return_amt6557);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 5, _ss_quantity6483);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 7, _ss_ext_sales_price6488);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 1, _i_brand_id6503);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 2, _i_class_id6505);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 3, _i_category_id6507);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 4, _i_manufact_id6509);
                tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 0, _d_year6524);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 5, _ss_quantity6483);
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 7, _ss_ext_sales_price6488);
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 1, _i_brand_id6503);
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 2, _i_class_id6505);
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 3, _i_category_id6507);
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 4, _i_manufact_id6509);
            tbl_JOIN_LEFTOUTER_TD_9485_output.setInt32(r, 0, _d_year6524);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_9485_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_9485_output #Row: " << tbl_JOIN_LEFTOUTER_TD_9485_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_97_key {
    int64_t _cr_order_number6462L;
    int32_t _cr_item_sk6448;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_97_key& other) const {
        return ((_cr_order_number6462L == other._cr_order_number6462L) && (_cr_item_sk6448 == other._cr_item_sk6448));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_97_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_97_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number6462L)) + (hash<int32_t>()(k._cr_item_sk6448));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_97_payload {
    int32_t _cr_item_sk6448;
    int64_t _cr_order_number6462L;
    int32_t _cr_return_quantity6463;
    int32_t _cr_return_amount6464;
};
void SW_JOIN_LEFTOUTER_TD_97(Table &tbl_JOIN_INNER_TD_10611_output, Table &tbl_Filter_TD_10332_output, Table &tbl_JOIN_LEFTOUTER_TD_97_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cs_order_number#6379L = cr_order_number#6462L) AND (cs_item_sk#6377 = cr_item_sk#6448)))
    // Left Table: ListBuffer(cs_item_sk#6377, cs_order_number#6379L, cs_quantity#6380, cs_ext_sales_price#6385, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, d_year#6424)
    // Right Table: ListBuffer(cr_item_sk#6448, cr_order_number#6462L, cr_return_quantity#6463, cr_return_amount#6464)
    // Output Table: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, cs_quantity#6380, cr_return_quantity#6463, cs_ext_sales_price#6385, cr_return_amount#6464)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_97_key, SW_JOIN_LEFTOUTER_TD_97_payload> ht1;
    int nrow1 = tbl_Filter_TD_10332_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_10611_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number6462L_k = tbl_Filter_TD_10332_output.getInt64(i, 1);
        int32_t _cr_item_sk6448_k = tbl_Filter_TD_10332_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_97_key keyA{_cr_order_number6462L_k, _cr_item_sk6448_k};
        int32_t _cr_item_sk6448 = tbl_Filter_TD_10332_output.getInt32(i, 0);
        int64_t _cr_order_number6462L = tbl_Filter_TD_10332_output.getInt64(i, 1);
        int32_t _cr_return_quantity6463 = tbl_Filter_TD_10332_output.getInt32(i, 2);
        int32_t _cr_return_amount6464 = tbl_Filter_TD_10332_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_97_payload payloadA{_cr_item_sk6448, _cr_order_number6462L, _cr_return_quantity6463, _cr_return_amount6464};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _cs_order_number6379L_k = tbl_JOIN_INNER_TD_10611_output.getInt64(i, 1);
        int32_t _cs_item_sk6377_k = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_97_key{_cs_order_number6379L_k, _cs_item_sk6377_k});
        int32_t _cs_item_sk6377 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 0);
        int64_t _cs_order_number6379L = tbl_JOIN_INNER_TD_10611_output.getInt64(i, 1);
        int32_t _cs_quantity6380 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 2);
        int32_t _cs_ext_sales_price6385 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 3);
        int32_t _i_brand_id6403 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 4);
        int32_t _i_class_id6405 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 5);
        int32_t _i_category_id6407 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 6);
        int32_t _i_manufact_id6409 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 7);
        int32_t _d_year6424 = tbl_JOIN_INNER_TD_10611_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_97_key{_cs_order_number6379L_k, _cs_item_sk6377_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk6448 = (it_it->second)._cr_item_sk6448;
                int64_t _cr_order_number6462L = (it_it->second)._cr_order_number6462L;
                int32_t _cr_return_quantity6463 = (it_it->second)._cr_return_quantity6463;
                int32_t _cr_return_amount6464 = (it_it->second)._cr_return_amount6464;
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 6, _cr_return_quantity6463);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 8, _cr_return_amount6464);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 5, _cs_quantity6380);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 7, _cs_ext_sales_price6385);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 1, _i_brand_id6403);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 2, _i_class_id6405);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 3, _i_category_id6407);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 4, _i_manufact_id6409);
                tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 0, _d_year6424);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 5, _cs_quantity6380);
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 7, _cs_ext_sales_price6385);
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 1, _i_brand_id6403);
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 2, _i_class_id6405);
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 3, _i_category_id6407);
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 4, _i_manufact_id6409);
            tbl_JOIN_LEFTOUTER_TD_97_output.setInt32(r, 0, _d_year6424);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_97_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_97_output #Row: " << tbl_JOIN_LEFTOUTER_TD_97_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_951_key {
    int64_t _wr_order_number844L;
    int32_t _wr_item_sk833;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_951_key& other) const {
        return ((_wr_order_number844L == other._wr_order_number844L) && (_wr_item_sk833 == other._wr_item_sk833));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_951_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_951_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._wr_order_number844L)) + (hash<int32_t>()(k._wr_item_sk833));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_951_payload {
    int32_t _wr_item_sk833;
    int64_t _wr_order_number844L;
    int32_t _wr_return_quantity845;
    int32_t _wr_return_amt846;
};
void SW_JOIN_LEFTOUTER_TD_951(Table &tbl_JOIN_INNER_TD_10415_output, Table &tbl_Filter_TD_10602_output, Table &tbl_JOIN_LEFTOUTER_TD_951_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ws_order_number#746L = wr_order_number#844L) AND (ws_item_sk#732 = wr_item_sk#833)))
    // Left Table: ListBuffer(ws_item_sk#732, ws_order_number#746L, ws_quantity#747, ws_ext_sales_price#752, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561, d_year#5576)
    // Right Table: ListBuffer(wr_item_sk#833, wr_order_number#844L, wr_return_quantity#845, wr_return_amt#846)
    // Output Table: ListBuffer(d_year#5576, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561, ws_quantity#747, wr_return_quantity#845, ws_ext_sales_price#752, wr_return_amt#846)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_951_key, SW_JOIN_LEFTOUTER_TD_951_payload> ht1;
    int nrow1 = tbl_Filter_TD_10602_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_10415_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _wr_order_number844L_k = tbl_Filter_TD_10602_output.getInt64(i, 1);
        int32_t _wr_item_sk833_k = tbl_Filter_TD_10602_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_951_key keyA{_wr_order_number844L_k, _wr_item_sk833_k};
        int32_t _wr_item_sk833 = tbl_Filter_TD_10602_output.getInt32(i, 0);
        int64_t _wr_order_number844L = tbl_Filter_TD_10602_output.getInt64(i, 1);
        int32_t _wr_return_quantity845 = tbl_Filter_TD_10602_output.getInt32(i, 2);
        int32_t _wr_return_amt846 = tbl_Filter_TD_10602_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_951_payload payloadA{_wr_item_sk833, _wr_order_number844L, _wr_return_quantity845, _wr_return_amt846};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ws_order_number746L_k = tbl_JOIN_INNER_TD_10415_output.getInt64(i, 1);
        int32_t _ws_item_sk732_k = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_951_key{_ws_order_number746L_k, _ws_item_sk732_k});
        int32_t _ws_item_sk732 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 0);
        int64_t _ws_order_number746L = tbl_JOIN_INNER_TD_10415_output.getInt64(i, 1);
        int32_t _ws_quantity747 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 2);
        int32_t _ws_ext_sales_price752 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 3);
        int32_t _i_brand_id5555 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 4);
        int32_t _i_class_id5557 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 5);
        int32_t _i_category_id5559 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 6);
        int32_t _i_manufact_id5561 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 7);
        int32_t _d_year5576 = tbl_JOIN_INNER_TD_10415_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_951_key{_ws_order_number746L_k, _ws_item_sk732_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _wr_item_sk833 = (it_it->second)._wr_item_sk833;
                int64_t _wr_order_number844L = (it_it->second)._wr_order_number844L;
                int32_t _wr_return_quantity845 = (it_it->second)._wr_return_quantity845;
                int32_t _wr_return_amt846 = (it_it->second)._wr_return_amt846;
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 6, _wr_return_quantity845);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 8, _wr_return_amt846);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 5, _ws_quantity747);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 7, _ws_ext_sales_price752);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 1, _i_brand_id5555);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 2, _i_class_id5557);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 3, _i_category_id5559);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 4, _i_manufact_id5561);
                tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 0, _d_year5576);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 5, _ws_quantity747);
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 7, _ws_ext_sales_price752);
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 1, _i_brand_id5555);
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 2, _i_class_id5557);
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 3, _i_category_id5559);
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 4, _i_manufact_id5561);
            tbl_JOIN_LEFTOUTER_TD_951_output.setInt32(r, 0, _d_year5576);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_951_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_951_output #Row: " << tbl_JOIN_LEFTOUTER_TD_951_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_9362_key {
    int64_t _sr_ticket_number678L;
    int32_t _sr_item_sk671;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_9362_key& other) const {
        return ((_sr_ticket_number678L == other._sr_ticket_number678L) && (_sr_item_sk671 == other._sr_item_sk671));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_9362_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_9362_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._sr_ticket_number678L)) + (hash<int32_t>()(k._sr_item_sk671));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_9362_payload {
    int32_t _sr_item_sk671;
    int64_t _sr_ticket_number678L;
    int32_t _sr_return_quantity679;
    int32_t _sr_return_amt680;
};
void SW_JOIN_LEFTOUTER_TD_9362(Table &tbl_JOIN_INNER_TD_10377_output, Table &tbl_Filter_TD_10297_output, Table &tbl_JOIN_LEFTOUTER_TD_9362_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((ss_ticket_number#1215L = sr_ticket_number#678L) AND (ss_item_sk#1208 = sr_item_sk#671)))
    // Left Table: ListBuffer(ss_item_sk#1208, ss_ticket_number#1215L, ss_quantity#1216, ss_ext_sales_price#1221, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511, d_year#5526)
    // Right Table: ListBuffer(sr_item_sk#671, sr_ticket_number#678L, sr_return_quantity#679, sr_return_amt#680)
    // Output Table: ListBuffer(d_year#5526, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511, ss_quantity#1216, sr_return_quantity#679, ss_ext_sales_price#1221, sr_return_amt#680)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_9362_key, SW_JOIN_LEFTOUTER_TD_9362_payload> ht1;
    int nrow1 = tbl_Filter_TD_10297_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_10377_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sr_ticket_number678L_k = tbl_Filter_TD_10297_output.getInt64(i, 1);
        int32_t _sr_item_sk671_k = tbl_Filter_TD_10297_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_9362_key keyA{_sr_ticket_number678L_k, _sr_item_sk671_k};
        int32_t _sr_item_sk671 = tbl_Filter_TD_10297_output.getInt32(i, 0);
        int64_t _sr_ticket_number678L = tbl_Filter_TD_10297_output.getInt64(i, 1);
        int32_t _sr_return_quantity679 = tbl_Filter_TD_10297_output.getInt32(i, 2);
        int32_t _sr_return_amt680 = tbl_Filter_TD_10297_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_9362_payload payloadA{_sr_item_sk671, _sr_ticket_number678L, _sr_return_quantity679, _sr_return_amt680};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _ss_ticket_number1215L_k = tbl_JOIN_INNER_TD_10377_output.getInt64(i, 1);
        int32_t _ss_item_sk1208_k = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_9362_key{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
        int32_t _ss_item_sk1208 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 0);
        int64_t _ss_ticket_number1215L = tbl_JOIN_INNER_TD_10377_output.getInt64(i, 1);
        int32_t _ss_quantity1216 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 2);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 3);
        int32_t _i_brand_id5505 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 4);
        int32_t _i_class_id5507 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 5);
        int32_t _i_category_id5509 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 6);
        int32_t _i_manufact_id5511 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 7);
        int32_t _d_year5526 = tbl_JOIN_INNER_TD_10377_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_9362_key{_ss_ticket_number1215L_k, _ss_item_sk1208_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _sr_item_sk671 = (it_it->second)._sr_item_sk671;
                int64_t _sr_ticket_number678L = (it_it->second)._sr_ticket_number678L;
                int32_t _sr_return_quantity679 = (it_it->second)._sr_return_quantity679;
                int32_t _sr_return_amt680 = (it_it->second)._sr_return_amt680;
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 6, _sr_return_quantity679);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 8, _sr_return_amt680);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 5, _ss_quantity1216);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 7, _ss_ext_sales_price1221);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 1, _i_brand_id5505);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 2, _i_class_id5507);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 3, _i_category_id5509);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 4, _i_manufact_id5511);
                tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 0, _d_year5526);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 5, _ss_quantity1216);
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 7, _ss_ext_sales_price1221);
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 1, _i_brand_id5505);
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 2, _i_class_id5507);
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 3, _i_category_id5509);
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 4, _i_manufact_id5511);
            tbl_JOIN_LEFTOUTER_TD_9362_output.setInt32(r, 0, _d_year5526);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_9362_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_9362_output #Row: " << tbl_JOIN_LEFTOUTER_TD_9362_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTOUTER_TD_9192_key {
    int64_t _cr_order_number1039L;
    int32_t _cr_item_sk1025;
    bool operator==(const SW_JOIN_LEFTOUTER_TD_9192_key& other) const {
        return ((_cr_order_number1039L == other._cr_order_number1039L) && (_cr_item_sk1025 == other._cr_item_sk1025));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTOUTER_TD_9192_key> {
    std::size_t operator() (const SW_JOIN_LEFTOUTER_TD_9192_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int64_t>()(k._cr_order_number1039L)) + (hash<int32_t>()(k._cr_item_sk1025));
    }
};
}
struct SW_JOIN_LEFTOUTER_TD_9192_payload {
    int32_t _cr_item_sk1025;
    int64_t _cr_order_number1039L;
    int32_t _cr_return_quantity1040;
    int32_t _cr_return_amount1041;
};
void SW_JOIN_LEFTOUTER_TD_9192(Table &tbl_JOIN_INNER_TD_10587_output, Table &tbl_Filter_TD_10579_output, Table &tbl_JOIN_LEFTOUTER_TD_9192_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTOUTER
    // Operation: ListBuffer(((cs_order_number#1121L = cr_order_number#1039L) AND (cs_item_sk#1119 = cr_item_sk#1025)))
    // Left Table: ListBuffer(cs_item_sk#1119, cs_order_number#1121L, cs_quantity#1122, cs_ext_sales_price#1127, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, d_year#126)
    // Right Table: ListBuffer(cr_item_sk#1025, cr_order_number#1039L, cr_return_quantity#1040, cr_return_amount#1041)
    // Output Table: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, cs_quantity#1122, cr_return_quantity#1040, cs_ext_sales_price#1127, cr_return_amount#1041)
    std::unordered_multimap<SW_JOIN_LEFTOUTER_TD_9192_key, SW_JOIN_LEFTOUTER_TD_9192_payload> ht1;
    int nrow1 = tbl_Filter_TD_10579_output.getNumRow();
    int nrow2 = tbl_JOIN_INNER_TD_10587_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cr_order_number1039L_k = tbl_Filter_TD_10579_output.getInt64(i, 1);
        int32_t _cr_item_sk1025_k = tbl_Filter_TD_10579_output.getInt32(i, 0);
        SW_JOIN_LEFTOUTER_TD_9192_key keyA{_cr_order_number1039L_k, _cr_item_sk1025_k};
        int32_t _cr_item_sk1025 = tbl_Filter_TD_10579_output.getInt32(i, 0);
        int64_t _cr_order_number1039L = tbl_Filter_TD_10579_output.getInt64(i, 1);
        int32_t _cr_return_quantity1040 = tbl_Filter_TD_10579_output.getInt32(i, 2);
        int32_t _cr_return_amount1041 = tbl_Filter_TD_10579_output.getInt32(i, 3);
        SW_JOIN_LEFTOUTER_TD_9192_payload payloadA{_cr_item_sk1025, _cr_order_number1039L, _cr_return_quantity1040, _cr_return_amount1041};
        ht1.insert(std::make_pair(keyA, payloadA));
    }
    int r = 0;
    for (int i = 0; i < nrow2; i++) {
        int64_t _cs_order_number1121L_k = tbl_JOIN_INNER_TD_10587_output.getInt64(i, 1);
        int32_t _cs_item_sk1119_k = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 0);
        auto it = ht1.find(SW_JOIN_LEFTOUTER_TD_9192_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
        int32_t _cs_item_sk1119 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 0);
        int64_t _cs_order_number1121L = tbl_JOIN_INNER_TD_10587_output.getInt64(i, 1);
        int32_t _cs_quantity1122 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 2);
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 3);
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 4);
        int32_t _i_class_id237 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 5);
        int32_t _i_category_id239 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 6);
        int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 7);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_10587_output.getInt32(i, 8);
        if (it != ht1.end()) {
            auto its = ht1.equal_range(SW_JOIN_LEFTOUTER_TD_9192_key{_cs_order_number1121L_k, _cs_item_sk1119_k});
            auto it_it = its.first;
            while (it_it != its.second) {
                int32_t _cr_item_sk1025 = (it_it->second)._cr_item_sk1025;
                int64_t _cr_order_number1039L = (it_it->second)._cr_order_number1039L;
                int32_t _cr_return_quantity1040 = (it_it->second)._cr_return_quantity1040;
                int32_t _cr_return_amount1041 = (it_it->second)._cr_return_amount1041;
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 6, _cr_return_quantity1040);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 8, _cr_return_amount1041);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 5, _cs_quantity1122);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 7, _cs_ext_sales_price1127);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 1, _i_brand_id235);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 2, _i_class_id237);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 3, _i_category_id239);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 4, _i_manufact_id241);
                tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 0, _d_year126);
                it_it++;
                r++;
            }
        } else {
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 5, _cs_quantity1122);
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 7, _cs_ext_sales_price1127);
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 1, _i_brand_id235);
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 2, _i_class_id237);
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 3, _i_category_id239);
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 4, _i_manufact_id241);
            tbl_JOIN_LEFTOUTER_TD_9192_output.setInt32(r, 0, _d_year126);
            r++;
        }
    }
    tbl_JOIN_LEFTOUTER_TD_9192_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTOUTER_TD_9192_output #Row: " << tbl_JOIN_LEFTOUTER_TD_9192_output.getNumRow() << std::endl;
}

void SW_Project_TD_8978(Table &tbl_JOIN_LEFTOUTER_TD_946_output, Table &tbl_Project_TD_8978_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((ws_quantity#6584 - coalesce(wr_return_quantity#6664, 0)) AS sales_cnt#5494, CheckOverflow((promote_precision(cast(ws_ext_sales_price#6589 as decimal(8,2))) - promote_precision(cast(coalesce(wr_return_amt#6665, 0.00) as decimal(8,2)))), DecimalType(8,2), true) AS sales_amt#5495)
    // Input: ListBuffer(d_year#6628, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613, ws_quantity#6584, wr_return_quantity#6664, ws_ext_sales_price#6589, wr_return_amt#6665)
    // Output: ListBuffer(d_year#6628, i_brand_id#6607, i_class_id#6609, i_category_id#6611, i_manufact_id#6613, sales_cnt#5494, sales_amt#5495)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_946_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6628 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 0);
        int32_t _i_brand_id6607 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 1);
        int32_t _i_class_id6609 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 2);
        int32_t _i_category_id6611 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 3);
        int32_t _i_manufact_id6613 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 4);
        int32_t _ws_quantity6584 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 5);
        int32_t _wr_return_quantity6664 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 6);
        int32_t _ws_ext_sales_price6589 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 7);
        int32_t _wr_return_amt6665 = tbl_JOIN_LEFTOUTER_TD_946_output.getInt32(i, 8);
        int32_t _sales_cnt5494 = (_ws_quantity6584 - _wr_return_quantity6664);
        tbl_Project_TD_8978_output.setInt32(i, 5, _sales_cnt5494);
        int32_t _sales_amt5495 = (_ws_ext_sales_price6589 - _wr_return_amt6665);
        tbl_Project_TD_8978_output.setInt32(i, 6, _sales_amt5495);
        tbl_Project_TD_8978_output.setInt32(i, 0, _d_year6628);
        tbl_Project_TD_8978_output.setInt32(i, 1, _i_brand_id6607);
        tbl_Project_TD_8978_output.setInt32(i, 2, _i_class_id6609);
        tbl_Project_TD_8978_output.setInt32(i, 3, _i_category_id6611);
        tbl_Project_TD_8978_output.setInt32(i, 4, _i_manufact_id6613);
    }
    tbl_Project_TD_8978_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8978_output #Row: " << tbl_Project_TD_8978_output.getNumRow() << std::endl;
}

void SW_Project_TD_8456(Table &tbl_JOIN_LEFTOUTER_TD_9485_output, Table &tbl_Project_TD_8456_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((ss_quantity#6483 - coalesce(sr_return_quantity#6556, 0)) AS sales_cnt#5492, CheckOverflow((promote_precision(cast(ss_ext_sales_price#6488 as decimal(8,2))) - promote_precision(cast(coalesce(sr_return_amt#6557, 0.00) as decimal(8,2)))), DecimalType(8,2), true) AS sales_amt#5493)
    // Input: ListBuffer(d_year#6524, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509, ss_quantity#6483, sr_return_quantity#6556, ss_ext_sales_price#6488, sr_return_amt#6557)
    // Output: ListBuffer(d_year#6524, i_brand_id#6503, i_class_id#6505, i_category_id#6507, i_manufact_id#6509, sales_cnt#5492, sales_amt#5493)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_9485_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6524 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 0);
        int32_t _i_brand_id6503 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 1);
        int32_t _i_class_id6505 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 2);
        int32_t _i_category_id6507 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 3);
        int32_t _i_manufact_id6509 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 4);
        int32_t _ss_quantity6483 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 5);
        int32_t _sr_return_quantity6556 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 6);
        int32_t _ss_ext_sales_price6488 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 7);
        int32_t _sr_return_amt6557 = tbl_JOIN_LEFTOUTER_TD_9485_output.getInt32(i, 8);
        int32_t _sales_cnt5492 = (_ss_quantity6483 - _sr_return_quantity6556);
        tbl_Project_TD_8456_output.setInt32(i, 5, _sales_cnt5492);
        int32_t _sales_amt5493 = (_ss_ext_sales_price6488 - _sr_return_amt6557);
        tbl_Project_TD_8456_output.setInt32(i, 6, _sales_amt5493);
        tbl_Project_TD_8456_output.setInt32(i, 0, _d_year6524);
        tbl_Project_TD_8456_output.setInt32(i, 1, _i_brand_id6503);
        tbl_Project_TD_8456_output.setInt32(i, 2, _i_class_id6505);
        tbl_Project_TD_8456_output.setInt32(i, 3, _i_category_id6507);
        tbl_Project_TD_8456_output.setInt32(i, 4, _i_manufact_id6509);
    }
    tbl_Project_TD_8456_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8456_output #Row: " << tbl_Project_TD_8456_output.getNumRow() << std::endl;
}

void SW_Project_TD_8867(Table &tbl_JOIN_LEFTOUTER_TD_97_output, Table &tbl_Project_TD_8867_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((cs_quantity#6380 - coalesce(cr_return_quantity#6463, 0)) AS sales_cnt#5490, CheckOverflow((promote_precision(cast(cs_ext_sales_price#6385 as decimal(8,2))) - promote_precision(cast(coalesce(cr_return_amount#6464, 0.00) as decimal(8,2)))), DecimalType(8,2), true) AS sales_amt#5491)
    // Input: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, cs_quantity#6380, cr_return_quantity#6463, cs_ext_sales_price#6385, cr_return_amount#6464)
    // Output: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5490, sales_amt#5491)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_97_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6424 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 0);
        int32_t _i_brand_id6403 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 1);
        int32_t _i_class_id6405 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 2);
        int32_t _i_category_id6407 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 3);
        int32_t _i_manufact_id6409 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 4);
        int32_t _cs_quantity6380 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 5);
        int32_t _cr_return_quantity6463 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 6);
        int32_t _cs_ext_sales_price6385 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 7);
        int32_t _cr_return_amount6464 = tbl_JOIN_LEFTOUTER_TD_97_output.getInt32(i, 8);
        int32_t _sales_cnt5490 = (_cs_quantity6380 - _cr_return_quantity6463);
        tbl_Project_TD_8867_output.setInt32(i, 5, _sales_cnt5490);
        int32_t _sales_amt5491 = (_cs_ext_sales_price6385 - _cr_return_amount6464);
        tbl_Project_TD_8867_output.setInt32(i, 6, _sales_amt5491);
        tbl_Project_TD_8867_output.setInt32(i, 0, _d_year6424);
        tbl_Project_TD_8867_output.setInt32(i, 1, _i_brand_id6403);
        tbl_Project_TD_8867_output.setInt32(i, 2, _i_class_id6405);
        tbl_Project_TD_8867_output.setInt32(i, 3, _i_category_id6407);
        tbl_Project_TD_8867_output.setInt32(i, 4, _i_manufact_id6409);
    }
    tbl_Project_TD_8867_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8867_output #Row: " << tbl_Project_TD_8867_output.getNumRow() << std::endl;
}

void SW_Project_TD_8196(Table &tbl_JOIN_LEFTOUTER_TD_951_output, Table &tbl_Project_TD_8196_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((ws_quantity#747 - coalesce(wr_return_quantity#845, 0)) AS sales_cnt#5494, CheckOverflow((promote_precision(cast(ws_ext_sales_price#752 as decimal(8,2))) - promote_precision(cast(coalesce(wr_return_amt#846, 0.00) as decimal(8,2)))), DecimalType(8,2), true) AS sales_amt#5495)
    // Input: ListBuffer(d_year#5576, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561, ws_quantity#747, wr_return_quantity#845, ws_ext_sales_price#752, wr_return_amt#846)
    // Output: ListBuffer(d_year#5576, i_brand_id#5555, i_class_id#5557, i_category_id#5559, i_manufact_id#5561, sales_cnt#5494, sales_amt#5495)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_951_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5576 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 0);
        int32_t _i_brand_id5555 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 1);
        int32_t _i_class_id5557 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 2);
        int32_t _i_category_id5559 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 3);
        int32_t _i_manufact_id5561 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 4);
        int32_t _ws_quantity747 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 5);
        int32_t _wr_return_quantity845 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 6);
        int32_t _ws_ext_sales_price752 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 7);
        int32_t _wr_return_amt846 = tbl_JOIN_LEFTOUTER_TD_951_output.getInt32(i, 8);
        int32_t _sales_cnt5494 = (_ws_quantity747 - _wr_return_quantity845);
        tbl_Project_TD_8196_output.setInt32(i, 5, _sales_cnt5494);
        int32_t _sales_amt5495 = (_ws_ext_sales_price752 - _wr_return_amt846);
        tbl_Project_TD_8196_output.setInt32(i, 6, _sales_amt5495);
        tbl_Project_TD_8196_output.setInt32(i, 0, _d_year5576);
        tbl_Project_TD_8196_output.setInt32(i, 1, _i_brand_id5555);
        tbl_Project_TD_8196_output.setInt32(i, 2, _i_class_id5557);
        tbl_Project_TD_8196_output.setInt32(i, 3, _i_category_id5559);
        tbl_Project_TD_8196_output.setInt32(i, 4, _i_manufact_id5561);
    }
    tbl_Project_TD_8196_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8196_output #Row: " << tbl_Project_TD_8196_output.getNumRow() << std::endl;
}

void SW_Project_TD_8574(Table &tbl_JOIN_LEFTOUTER_TD_9362_output, Table &tbl_Project_TD_8574_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((ss_quantity#1216 - coalesce(sr_return_quantity#679, 0)) AS sales_cnt#5492, CheckOverflow((promote_precision(cast(ss_ext_sales_price#1221 as decimal(8,2))) - promote_precision(cast(coalesce(sr_return_amt#680, 0.00) as decimal(8,2)))), DecimalType(8,2), true) AS sales_amt#5493)
    // Input: ListBuffer(d_year#5526, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511, ss_quantity#1216, sr_return_quantity#679, ss_ext_sales_price#1221, sr_return_amt#680)
    // Output: ListBuffer(d_year#5526, i_brand_id#5505, i_class_id#5507, i_category_id#5509, i_manufact_id#5511, sales_cnt#5492, sales_amt#5493)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_9362_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year5526 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 0);
        int32_t _i_brand_id5505 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 1);
        int32_t _i_class_id5507 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 2);
        int32_t _i_category_id5509 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 3);
        int32_t _i_manufact_id5511 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 4);
        int32_t _ss_quantity1216 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 5);
        int32_t _sr_return_quantity679 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 6);
        int32_t _ss_ext_sales_price1221 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 7);
        int32_t _sr_return_amt680 = tbl_JOIN_LEFTOUTER_TD_9362_output.getInt32(i, 8);
        int32_t _sales_cnt5492 = (_ss_quantity1216 - _sr_return_quantity679);
        tbl_Project_TD_8574_output.setInt32(i, 5, _sales_cnt5492);
        int32_t _sales_amt5493 = (_ss_ext_sales_price1221 - _sr_return_amt680);
        tbl_Project_TD_8574_output.setInt32(i, 6, _sales_amt5493);
        tbl_Project_TD_8574_output.setInt32(i, 0, _d_year5526);
        tbl_Project_TD_8574_output.setInt32(i, 1, _i_brand_id5505);
        tbl_Project_TD_8574_output.setInt32(i, 2, _i_class_id5507);
        tbl_Project_TD_8574_output.setInt32(i, 3, _i_category_id5509);
        tbl_Project_TD_8574_output.setInt32(i, 4, _i_manufact_id5511);
    }
    tbl_Project_TD_8574_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8574_output #Row: " << tbl_Project_TD_8574_output.getNumRow() << std::endl;
}

void SW_Project_TD_854(Table &tbl_JOIN_LEFTOUTER_TD_9192_output, Table &tbl_Project_TD_854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer((cs_quantity#1122 - coalesce(cr_return_quantity#1040, 0)) AS sales_cnt#5490, CheckOverflow((promote_precision(cast(cs_ext_sales_price#1127 as decimal(8,2))) - promote_precision(cast(coalesce(cr_return_amount#1041, 0.00) as decimal(8,2)))), DecimalType(8,2), true) AS sales_amt#5491)
    // Input: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, cs_quantity#1122, cr_return_quantity#1040, cs_ext_sales_price#1127, cr_return_amount#1041)
    // Output: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5490, sales_amt#5491)
    int nrow1 = tbl_JOIN_LEFTOUTER_TD_9192_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 0);
        int32_t _i_brand_id235 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 3);
        int32_t _i_manufact_id241 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 4);
        int32_t _cs_quantity1122 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 5);
        int32_t _cr_return_quantity1040 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 6);
        int32_t _cs_ext_sales_price1127 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 7);
        int32_t _cr_return_amount1041 = tbl_JOIN_LEFTOUTER_TD_9192_output.getInt32(i, 8);
        int32_t _sales_cnt5490 = (_cs_quantity1122 - _cr_return_quantity1040);
        tbl_Project_TD_854_output.setInt32(i, 5, _sales_cnt5490);
        int32_t _sales_amt5491 = (_cs_ext_sales_price1127 - _cr_return_amount1041);
        tbl_Project_TD_854_output.setInt32(i, 6, _sales_amt5491);
        tbl_Project_TD_854_output.setInt32(i, 0, _d_year126);
        tbl_Project_TD_854_output.setInt32(i, 1, _i_brand_id235);
        tbl_Project_TD_854_output.setInt32(i, 2, _i_class_id237);
        tbl_Project_TD_854_output.setInt32(i, 3, _i_category_id239);
        tbl_Project_TD_854_output.setInt32(i, 4, _i_manufact_id241);
    }
    tbl_Project_TD_854_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_854_output #Row: " << tbl_Project_TD_854_output.getNumRow() << std::endl;
}

void SW_Union_TD_7865(Table &tbl_Project_TD_8867_output, Table &tbl_Project_TD_8456_output, Table &tbl_Project_TD_8978_output, Table &tbl_Union_TD_7865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5490, sales_amt#5491)
    int r = 0;
    int row0 = tbl_Project_TD_8867_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_7865_output.setInt32(r, 0, tbl_Project_TD_8867_output.getInt32(i, 0));
        tbl_Union_TD_7865_output.setInt32(r, 1, tbl_Project_TD_8867_output.getInt32(i, 1));
        tbl_Union_TD_7865_output.setInt32(r, 2, tbl_Project_TD_8867_output.getInt32(i, 2));
        tbl_Union_TD_7865_output.setInt32(r, 3, tbl_Project_TD_8867_output.getInt32(i, 3));
        tbl_Union_TD_7865_output.setInt32(r, 4, tbl_Project_TD_8867_output.getInt32(i, 4));
        tbl_Union_TD_7865_output.setInt32(r, 5, tbl_Project_TD_8867_output.getInt32(i, 5));
        tbl_Union_TD_7865_output.setInt32(r, 6, tbl_Project_TD_8867_output.getInt32(i, 6));
        ++r;
    }
    int row1 = tbl_Project_TD_8456_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_7865_output.setInt32(r, 0, tbl_Project_TD_8456_output.getInt32(i, 0));
        tbl_Union_TD_7865_output.setInt32(r, 1, tbl_Project_TD_8456_output.getInt32(i, 1));
        tbl_Union_TD_7865_output.setInt32(r, 2, tbl_Project_TD_8456_output.getInt32(i, 2));
        tbl_Union_TD_7865_output.setInt32(r, 3, tbl_Project_TD_8456_output.getInt32(i, 3));
        tbl_Union_TD_7865_output.setInt32(r, 4, tbl_Project_TD_8456_output.getInt32(i, 4));
        tbl_Union_TD_7865_output.setInt32(r, 5, tbl_Project_TD_8456_output.getInt32(i, 5));
        tbl_Union_TD_7865_output.setInt32(r, 6, tbl_Project_TD_8456_output.getInt32(i, 6));
        ++r;
    }
    int row2 = tbl_Project_TD_8978_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_7865_output.setInt32(r, 0, tbl_Project_TD_8978_output.getInt32(i, 0));
        tbl_Union_TD_7865_output.setInt32(r, 1, tbl_Project_TD_8978_output.getInt32(i, 1));
        tbl_Union_TD_7865_output.setInt32(r, 2, tbl_Project_TD_8978_output.getInt32(i, 2));
        tbl_Union_TD_7865_output.setInt32(r, 3, tbl_Project_TD_8978_output.getInt32(i, 3));
        tbl_Union_TD_7865_output.setInt32(r, 4, tbl_Project_TD_8978_output.getInt32(i, 4));
        tbl_Union_TD_7865_output.setInt32(r, 5, tbl_Project_TD_8978_output.getInt32(i, 5));
        tbl_Union_TD_7865_output.setInt32(r, 6, tbl_Project_TD_8978_output.getInt32(i, 6));
        ++r;
    }
    tbl_Union_TD_7865_output.setNumRow(r);
    std::cout << "tbl_Union_TD_7865_output #Row: " << tbl_Union_TD_7865_output.getNumRow() << std::endl;
}

void SW_Union_TD_7735(Table &tbl_Project_TD_854_output, Table &tbl_Project_TD_8574_output, Table &tbl_Project_TD_8196_output, Table &tbl_Union_TD_7735_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5490, sales_amt#5491)
    int r = 0;
    int row0 = tbl_Project_TD_854_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_7735_output.setInt32(r, 0, tbl_Project_TD_854_output.getInt32(i, 0));
        tbl_Union_TD_7735_output.setInt32(r, 1, tbl_Project_TD_854_output.getInt32(i, 1));
        tbl_Union_TD_7735_output.setInt32(r, 2, tbl_Project_TD_854_output.getInt32(i, 2));
        tbl_Union_TD_7735_output.setInt32(r, 3, tbl_Project_TD_854_output.getInt32(i, 3));
        tbl_Union_TD_7735_output.setInt32(r, 4, tbl_Project_TD_854_output.getInt32(i, 4));
        tbl_Union_TD_7735_output.setInt32(r, 5, tbl_Project_TD_854_output.getInt32(i, 5));
        tbl_Union_TD_7735_output.setInt32(r, 6, tbl_Project_TD_854_output.getInt32(i, 6));
        ++r;
    }
    int row1 = tbl_Project_TD_8574_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_7735_output.setInt32(r, 0, tbl_Project_TD_8574_output.getInt32(i, 0));
        tbl_Union_TD_7735_output.setInt32(r, 1, tbl_Project_TD_8574_output.getInt32(i, 1));
        tbl_Union_TD_7735_output.setInt32(r, 2, tbl_Project_TD_8574_output.getInt32(i, 2));
        tbl_Union_TD_7735_output.setInt32(r, 3, tbl_Project_TD_8574_output.getInt32(i, 3));
        tbl_Union_TD_7735_output.setInt32(r, 4, tbl_Project_TD_8574_output.getInt32(i, 4));
        tbl_Union_TD_7735_output.setInt32(r, 5, tbl_Project_TD_8574_output.getInt32(i, 5));
        tbl_Union_TD_7735_output.setInt32(r, 6, tbl_Project_TD_8574_output.getInt32(i, 6));
        ++r;
    }
    int row2 = tbl_Project_TD_8196_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_7735_output.setInt32(r, 0, tbl_Project_TD_8196_output.getInt32(i, 0));
        tbl_Union_TD_7735_output.setInt32(r, 1, tbl_Project_TD_8196_output.getInt32(i, 1));
        tbl_Union_TD_7735_output.setInt32(r, 2, tbl_Project_TD_8196_output.getInt32(i, 2));
        tbl_Union_TD_7735_output.setInt32(r, 3, tbl_Project_TD_8196_output.getInt32(i, 3));
        tbl_Union_TD_7735_output.setInt32(r, 4, tbl_Project_TD_8196_output.getInt32(i, 4));
        tbl_Union_TD_7735_output.setInt32(r, 5, tbl_Project_TD_8196_output.getInt32(i, 5));
        tbl_Union_TD_7735_output.setInt32(r, 6, tbl_Project_TD_8196_output.getInt32(i, 6));
        ++r;
    }
    tbl_Union_TD_7735_output.setNumRow(r);
    std::cout << "tbl_Union_TD_7735_output #Row: " << tbl_Union_TD_7735_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6400_key {
    int32_t _d_year6424;
    int32_t _i_brand_id6403;
    int32_t _i_class_id6405;
    int32_t _i_category_id6407;
    int32_t _i_manufact_id6409;
    int32_t _sales_cnt5490;
    int32_t _sales_amt5491;
    bool operator==(const SW_Aggregate_TD_6400_key& other) const { return (_d_year6424 == other._d_year6424) && (_i_brand_id6403 == other._i_brand_id6403) && (_i_class_id6405 == other._i_class_id6405) && (_i_category_id6407 == other._i_category_id6407) && (_i_manufact_id6409 == other._i_manufact_id6409) && (_sales_cnt5490 == other._sales_cnt5490) && (_sales_amt5491 == other._sales_amt5491); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6400_key> {
    std::size_t operator() (const SW_Aggregate_TD_6400_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year6424)) + (hash<int32_t>()(k._i_brand_id6403)) + (hash<int32_t>()(k._i_class_id6405)) + (hash<int32_t>()(k._i_category_id6407)) + (hash<int32_t>()(k._i_manufact_id6409)) + (hash<int32_t>()(k._sales_cnt5490)) + (hash<int32_t>()(k._sales_amt5491));
    }
};
}
struct SW_Aggregate_TD_6400_payload {
};
void SW_Aggregate_TD_6400(Table &tbl_Union_TD_7865_output, Table &tbl_Aggregate_TD_6400_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5490, sales_amt#5491)
    // Input: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5490, sales_amt#5491)
    // Output: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5490, sales_amt#5491)
    std::unordered_map<SW_Aggregate_TD_6400_key, SW_Aggregate_TD_6400_payload> ht1;
    int nrow1 = tbl_Union_TD_7865_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6424 = tbl_Union_TD_7865_output.getInt32(i, 0);
        int32_t _i_brand_id6403 = tbl_Union_TD_7865_output.getInt32(i, 1);
        int32_t _i_class_id6405 = tbl_Union_TD_7865_output.getInt32(i, 2);
        int32_t _i_category_id6407 = tbl_Union_TD_7865_output.getInt32(i, 3);
        int32_t _i_manufact_id6409 = tbl_Union_TD_7865_output.getInt32(i, 4);
        int32_t _sales_cnt5490 = tbl_Union_TD_7865_output.getInt32(i, 5);
        int32_t _sales_amt5491 = tbl_Union_TD_7865_output.getInt32(i, 6);
        SW_Aggregate_TD_6400_key k{_d_year6424, _i_brand_id6403, _i_class_id6405, _i_category_id6407, _i_manufact_id6409, _sales_cnt5490, _sales_amt5491};
        SW_Aggregate_TD_6400_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_6400_output.setInt32(r, 0, (it.first)._d_year6424);
        tbl_Aggregate_TD_6400_output.setInt32(r, 1, (it.first)._i_brand_id6403);
        tbl_Aggregate_TD_6400_output.setInt32(r, 2, (it.first)._i_class_id6405);
        tbl_Aggregate_TD_6400_output.setInt32(r, 3, (it.first)._i_category_id6407);
        tbl_Aggregate_TD_6400_output.setInt32(r, 4, (it.first)._i_manufact_id6409);
        tbl_Aggregate_TD_6400_output.setInt32(r, 5, (it.first)._sales_cnt5490);
        tbl_Aggregate_TD_6400_output.setInt32(r, 6, (it.first)._sales_amt5491);
        ++r;
    }
    tbl_Aggregate_TD_6400_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6400_output #Row: " << tbl_Aggregate_TD_6400_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_6822_key {
    int32_t _d_year126;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    int32_t _i_manufact_id241;
    int32_t _sales_cnt5490;
    int32_t _sales_amt5491;
    bool operator==(const SW_Aggregate_TD_6822_key& other) const { return (_d_year126 == other._d_year126) && (_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239) && (_i_manufact_id241 == other._i_manufact_id241) && (_sales_cnt5490 == other._sales_cnt5490) && (_sales_amt5491 == other._sales_amt5491); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_6822_key> {
    std::size_t operator() (const SW_Aggregate_TD_6822_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239)) + (hash<int32_t>()(k._i_manufact_id241)) + (hash<int32_t>()(k._sales_cnt5490)) + (hash<int32_t>()(k._sales_amt5491));
    }
};
}
struct SW_Aggregate_TD_6822_payload {
};
void SW_Aggregate_TD_6822(Table &tbl_Union_TD_7735_output, Table &tbl_Aggregate_TD_6822_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5490, sales_amt#5491)
    // Input: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5490, sales_amt#5491)
    // Output: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5490, sales_amt#5491)
    std::unordered_map<SW_Aggregate_TD_6822_key, SW_Aggregate_TD_6822_payload> ht1;
    int nrow1 = tbl_Union_TD_7735_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Union_TD_7735_output.getInt32(i, 0);
        int32_t _i_brand_id235 = tbl_Union_TD_7735_output.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_Union_TD_7735_output.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_Union_TD_7735_output.getInt32(i, 3);
        int32_t _i_manufact_id241 = tbl_Union_TD_7735_output.getInt32(i, 4);
        int32_t _sales_cnt5490 = tbl_Union_TD_7735_output.getInt32(i, 5);
        int32_t _sales_amt5491 = tbl_Union_TD_7735_output.getInt32(i, 6);
        SW_Aggregate_TD_6822_key k{_d_year126, _i_brand_id235, _i_class_id237, _i_category_id239, _i_manufact_id241, _sales_cnt5490, _sales_amt5491};
        SW_Aggregate_TD_6822_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_6822_output.setInt32(r, 0, (it.first)._d_year126);
        tbl_Aggregate_TD_6822_output.setInt32(r, 1, (it.first)._i_brand_id235);
        tbl_Aggregate_TD_6822_output.setInt32(r, 2, (it.first)._i_class_id237);
        tbl_Aggregate_TD_6822_output.setInt32(r, 3, (it.first)._i_category_id239);
        tbl_Aggregate_TD_6822_output.setInt32(r, 4, (it.first)._i_manufact_id241);
        tbl_Aggregate_TD_6822_output.setInt32(r, 5, (it.first)._sales_cnt5490);
        tbl_Aggregate_TD_6822_output.setInt32(r, 6, (it.first)._sales_amt5491);
        ++r;
    }
    tbl_Aggregate_TD_6822_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6822_output #Row: " << tbl_Aggregate_TD_6822_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5619_key {
    int32_t _d_year6424;
    int32_t _i_brand_id6403;
    int32_t _i_class_id6405;
    int32_t _i_category_id6407;
    int32_t _i_manufact_id6409;
    bool operator==(const SW_Aggregate_TD_5619_key& other) const { return (_d_year6424 == other._d_year6424) && (_i_brand_id6403 == other._i_brand_id6403) && (_i_class_id6405 == other._i_class_id6405) && (_i_category_id6407 == other._i_category_id6407) && (_i_manufact_id6409 == other._i_manufact_id6409); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5619_key> {
    std::size_t operator() (const SW_Aggregate_TD_5619_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year6424)) + (hash<int32_t>()(k._i_brand_id6403)) + (hash<int32_t>()(k._i_class_id6405)) + (hash<int32_t>()(k._i_category_id6407)) + (hash<int32_t>()(k._i_manufact_id6409));
    }
};
}
struct SW_Aggregate_TD_5619_payload {
    int64_t _sales_cnt5605L_sum_0;
    int32_t _sales_amt5606_sum_1;
};
void SW_Aggregate_TD_5619(Table &tbl_Aggregate_TD_6400_output, Table &tbl_Aggregate_TD_5619_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sum(sales_cnt#5490) AS sales_cnt#5605L, MakeDecimal(sum(UnscaledValue(sales_amt#5491)),18,2) AS sales_amt#5606)
    // Input: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5490, sales_amt#5491)
    // Output: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5605L, sales_amt#5606)
    std::unordered_map<SW_Aggregate_TD_5619_key, SW_Aggregate_TD_5619_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_6400_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6424 = tbl_Aggregate_TD_6400_output.getInt32(i, 0);
        int32_t _i_brand_id6403 = tbl_Aggregate_TD_6400_output.getInt32(i, 1);
        int32_t _i_class_id6405 = tbl_Aggregate_TD_6400_output.getInt32(i, 2);
        int32_t _i_category_id6407 = tbl_Aggregate_TD_6400_output.getInt32(i, 3);
        int32_t _i_manufact_id6409 = tbl_Aggregate_TD_6400_output.getInt32(i, 4);
        int64_t _sales_cnt5490 = tbl_Aggregate_TD_6400_output.getInt64(i, 5);
        int32_t _sales_amt5491 = tbl_Aggregate_TD_6400_output.getInt32(i, 6);
        SW_Aggregate_TD_5619_key k{_d_year6424, _i_brand_id6403, _i_class_id6405, _i_category_id6407, _i_manufact_id6409};
        int64_t _sales_cnt5605L_sum_0 = _sales_cnt5490;
        int64_t _sales_amt5606_sum_1 = _sales_amt5491;
        SW_Aggregate_TD_5619_payload p{_sales_cnt5605L_sum_0, _sales_amt5606_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales_cnt5605L_sum_0 + _sales_cnt5605L_sum_0;
            p._sales_cnt5605L_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._sales_amt5606_sum_1 + _sales_amt5606_sum_1;
            p._sales_amt5606_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5619_output.setInt32(r, 0, (it.first)._d_year6424);
        tbl_Aggregate_TD_5619_output.setInt32(r, 1, (it.first)._i_brand_id6403);
        tbl_Aggregate_TD_5619_output.setInt32(r, 2, (it.first)._i_class_id6405);
        tbl_Aggregate_TD_5619_output.setInt32(r, 3, (it.first)._i_category_id6407);
        tbl_Aggregate_TD_5619_output.setInt32(r, 4, (it.first)._i_manufact_id6409);
        int64_t _sales_cnt5605L = (it.second)._sales_cnt5605L_sum_0;
        tbl_Aggregate_TD_5619_output.setInt64(r, 5, _sales_cnt5605L);
        int32_t _sales_amt5606 = (it.second)._sales_amt5606_sum_1;
        tbl_Aggregate_TD_5619_output.setInt32(r, 6, _sales_amt5606);
        ++r;
    }
    tbl_Aggregate_TD_5619_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5619_output #Row: " << tbl_Aggregate_TD_5619_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_5224_key {
    int32_t _d_year126;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    int32_t _i_manufact_id241;
    bool operator==(const SW_Aggregate_TD_5224_key& other) const { return (_d_year126 == other._d_year126) && (_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239) && (_i_manufact_id241 == other._i_manufact_id241); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_5224_key> {
    std::size_t operator() (const SW_Aggregate_TD_5224_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_year126)) + (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239)) + (hash<int32_t>()(k._i_manufact_id241));
    }
};
}
struct SW_Aggregate_TD_5224_payload {
    int64_t _sales_cnt5496L_sum_0;
    int32_t _sales_amt5497_sum_1;
};
void SW_Aggregate_TD_5224(Table &tbl_Aggregate_TD_6822_output, Table &tbl_Aggregate_TD_5224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sum(sales_cnt#5490) AS sales_cnt#5496L, MakeDecimal(sum(UnscaledValue(sales_amt#5491)),18,2) AS sales_amt#5497)
    // Input: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5490, sales_amt#5491)
    // Output: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5496L, sales_amt#5497)
    std::unordered_map<SW_Aggregate_TD_5224_key, SW_Aggregate_TD_5224_payload> ht1;
    int nrow1 = tbl_Aggregate_TD_6822_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_Aggregate_TD_6822_output.getInt32(i, 0);
        int32_t _i_brand_id235 = tbl_Aggregate_TD_6822_output.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_Aggregate_TD_6822_output.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_Aggregate_TD_6822_output.getInt32(i, 3);
        int32_t _i_manufact_id241 = tbl_Aggregate_TD_6822_output.getInt32(i, 4);
        int64_t _sales_cnt5490 = tbl_Aggregate_TD_6822_output.getInt64(i, 5);
        int32_t _sales_amt5491 = tbl_Aggregate_TD_6822_output.getInt32(i, 6);
        SW_Aggregate_TD_5224_key k{_d_year126, _i_brand_id235, _i_class_id237, _i_category_id239, _i_manufact_id241};
        int64_t _sales_cnt5496L_sum_0 = _sales_cnt5490;
        int64_t _sales_amt5497_sum_1 = _sales_amt5491;
        SW_Aggregate_TD_5224_payload p{_sales_cnt5496L_sum_0, _sales_amt5497_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales_cnt5496L_sum_0 + _sales_cnt5496L_sum_0;
            p._sales_cnt5496L_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._sales_amt5497_sum_1 + _sales_amt5497_sum_1;
            p._sales_amt5497_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5224_output.setInt32(r, 0, (it.first)._d_year126);
        tbl_Aggregate_TD_5224_output.setInt32(r, 1, (it.first)._i_brand_id235);
        tbl_Aggregate_TD_5224_output.setInt32(r, 2, (it.first)._i_class_id237);
        tbl_Aggregate_TD_5224_output.setInt32(r, 3, (it.first)._i_category_id239);
        tbl_Aggregate_TD_5224_output.setInt32(r, 4, (it.first)._i_manufact_id241);
        int64_t _sales_cnt5496L = (it.second)._sales_cnt5496L_sum_0;
        tbl_Aggregate_TD_5224_output.setInt64(r, 5, _sales_cnt5496L);
        int32_t _sales_amt5497 = (it.second)._sales_amt5497_sum_1;
        tbl_Aggregate_TD_5224_output.setInt32(r, 6, _sales_amt5497);
        ++r;
    }
    tbl_Aggregate_TD_5224_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5224_output #Row: " << tbl_Aggregate_TD_5224_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4103_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    int32_t _i_manufact_id241;
    bool operator==(const SW_JOIN_INNER_TD_4103_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239) && (_i_manufact_id241 == other._i_manufact_id241));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4103_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4103_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239)) + (hash<int32_t>()(k._i_manufact_id241));
    }
};
}
struct SW_JOIN_INNER_TD_4103_payload_leftMajor {
    int32_t _d_year126;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    int32_t _i_manufact_id241;
    int64_t _sales_cnt5496L;
    int32_t _sales_amt5497;
};
struct SW_JOIN_INNER_TD_4103_key_rightMajor {
    int32_t _i_brand_id6403;
    int32_t _i_class_id6405;
    int32_t _i_category_id6407;
    int32_t _i_manufact_id6409;
    bool operator==(const SW_JOIN_INNER_TD_4103_key_rightMajor& other) const {
        return ((_i_brand_id6403 == other._i_brand_id6403) && (_i_class_id6405 == other._i_class_id6405) && (_i_category_id6407 == other._i_category_id6407) && (_i_manufact_id6409 == other._i_manufact_id6409));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4103_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4103_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id6403)) + (hash<int32_t>()(k._i_class_id6405)) + (hash<int32_t>()(k._i_category_id6407)) + (hash<int32_t>()(k._i_manufact_id6409));
    }
};
}
struct SW_JOIN_INNER_TD_4103_payload_rightMajor {
    int32_t _d_year6424;
    int32_t _i_brand_id6403;
    int32_t _i_class_id6405;
    int32_t _i_category_id6407;
    int32_t _i_manufact_id6409;
    int64_t _sales_cnt5605L;
    int32_t _sales_amt5606;
};
void SW_JOIN_INNER_TD_4103(Table &tbl_Aggregate_TD_5224_output, Table &tbl_Aggregate_TD_5619_output, Table &tbl_JOIN_INNER_TD_4103_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((((i_brand_id#235 = i_brand_id#6403) AND (i_class_id#237 = i_class_id#6405)) AND (i_category_id#239 = i_category_id#6407)) AND (i_manufact_id#241 = i_manufact_id#6409)) AND (CheckOverflow((promote_precision(cast(sales_cnt#5496L as decimal(17,2))) / promote_precision(cast(sales_cnt#5605L as decimal(17,2)))), DecimalType(37,20), true) < 0.90000000000000000000)))
    // Left Table: ListBuffer(d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5496L, sales_amt#5497)
    // Right Table: ListBuffer(d_year#6424, i_brand_id#6403, i_class_id#6405, i_category_id#6407, i_manufact_id#6409, sales_cnt#5605L, sales_amt#5606)
    // Output Table: ListBuffer(d_year#6424, d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5605L, sales_cnt#5496L, sales_amt#5497, sales_amt#5606)
    int left_nrow = tbl_Aggregate_TD_5224_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_5619_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4103_key_leftMajor, SW_JOIN_INNER_TD_4103_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5224_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Aggregate_TD_5224_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Aggregate_TD_5224_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Aggregate_TD_5224_output.getInt32(i, 3);
            int32_t _i_manufact_id241_k = tbl_Aggregate_TD_5224_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4103_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k, _i_manufact_id241_k};
            int32_t _d_year126 = tbl_Aggregate_TD_5224_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Aggregate_TD_5224_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Aggregate_TD_5224_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Aggregate_TD_5224_output.getInt32(i, 3);
            int32_t _i_manufact_id241 = tbl_Aggregate_TD_5224_output.getInt32(i, 4);
            int64_t _sales_cnt5496L = tbl_Aggregate_TD_5224_output.getInt64(i, 5);
            int32_t _sales_amt5497 = tbl_Aggregate_TD_5224_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_4103_payload_leftMajor payloadA{_d_year126, _i_brand_id235, _i_class_id237, _i_category_id239, _i_manufact_id241, _sales_cnt5496L, _sales_amt5497};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5619_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id6403_k = tbl_Aggregate_TD_5619_output.getInt32(i, 1);
            int32_t _i_class_id6405_k = tbl_Aggregate_TD_5619_output.getInt32(i, 2);
            int32_t _i_category_id6407_k = tbl_Aggregate_TD_5619_output.getInt32(i, 3);
            int32_t _i_manufact_id6409_k = tbl_Aggregate_TD_5619_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4103_key_leftMajor{_i_brand_id6403_k, _i_class_id6405_k, _i_category_id6407_k, _i_manufact_id6409_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_year126 = (it->second)._d_year126;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _i_manufact_id241 = (it->second)._i_manufact_id241;
                int64_t _sales_cnt5496L = (it->second)._sales_cnt5496L;
                int32_t _sales_amt5497 = (it->second)._sales_amt5497;
                int32_t _d_year6424 = tbl_Aggregate_TD_5619_output.getInt32(i, 0);
                int32_t _i_brand_id6403 = tbl_Aggregate_TD_5619_output.getInt32(i, 1);
                int32_t _i_class_id6405 = tbl_Aggregate_TD_5619_output.getInt32(i, 2);
                int32_t _i_category_id6407 = tbl_Aggregate_TD_5619_output.getInt32(i, 3);
                int32_t _i_manufact_id6409 = tbl_Aggregate_TD_5619_output.getInt32(i, 4);
                int64_t _sales_cnt5605L = tbl_Aggregate_TD_5619_output.getInt64(i, 5);
                int32_t _sales_amt5606 = tbl_Aggregate_TD_5619_output.getInt32(i, 6);
                if (NULL < 0.90000000000000000000) {
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 1, _d_year126);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 2, _i_brand_id235);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 3, _i_class_id237);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 4, _i_category_id239);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 5, _i_manufact_id241);
                    tbl_JOIN_INNER_TD_4103_output.setInt64(r, 7, _sales_cnt5496L);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 8, _sales_amt5497);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 0, _d_year6424);
                    tbl_JOIN_INNER_TD_4103_output.setInt64(r, 6, _sales_cnt5605L);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 9, _sales_amt5606);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4103_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4103_key_rightMajor, SW_JOIN_INNER_TD_4103_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5619_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id6403_k = tbl_Aggregate_TD_5619_output.getInt32(i, 1);
            int32_t _i_class_id6405_k = tbl_Aggregate_TD_5619_output.getInt32(i, 2);
            int32_t _i_category_id6407_k = tbl_Aggregate_TD_5619_output.getInt32(i, 3);
            int32_t _i_manufact_id6409_k = tbl_Aggregate_TD_5619_output.getInt32(i, 4);
            SW_JOIN_INNER_TD_4103_key_rightMajor keyA{_i_brand_id6403_k, _i_class_id6405_k, _i_category_id6407_k, _i_manufact_id6409_k};
            int32_t _d_year6424 = tbl_Aggregate_TD_5619_output.getInt32(i, 0);
            int32_t _i_brand_id6403 = tbl_Aggregate_TD_5619_output.getInt32(i, 1);
            int32_t _i_class_id6405 = tbl_Aggregate_TD_5619_output.getInt32(i, 2);
            int32_t _i_category_id6407 = tbl_Aggregate_TD_5619_output.getInt32(i, 3);
            int32_t _i_manufact_id6409 = tbl_Aggregate_TD_5619_output.getInt32(i, 4);
            int64_t _sales_cnt5605L = tbl_Aggregate_TD_5619_output.getInt64(i, 5);
            int32_t _sales_amt5606 = tbl_Aggregate_TD_5619_output.getInt32(i, 6);
            SW_JOIN_INNER_TD_4103_payload_rightMajor payloadA{_d_year6424, _i_brand_id6403, _i_class_id6405, _i_category_id6407, _i_manufact_id6409, _sales_cnt5605L, _sales_amt5606};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5224_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Aggregate_TD_5224_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Aggregate_TD_5224_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Aggregate_TD_5224_output.getInt32(i, 3);
            int32_t _i_manufact_id241_k = tbl_Aggregate_TD_5224_output.getInt32(i, 4);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4103_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k, _i_manufact_id241_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_year6424 = (it->second)._d_year6424;
                int32_t _i_brand_id6403 = (it->second)._i_brand_id6403;
                int32_t _i_class_id6405 = (it->second)._i_class_id6405;
                int32_t _i_category_id6407 = (it->second)._i_category_id6407;
                int32_t _i_manufact_id6409 = (it->second)._i_manufact_id6409;
                int64_t _sales_cnt5605L = (it->second)._sales_cnt5605L;
                int32_t _sales_amt5606 = (it->second)._sales_amt5606;
                int32_t _d_year126 = tbl_Aggregate_TD_5224_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Aggregate_TD_5224_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Aggregate_TD_5224_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Aggregate_TD_5224_output.getInt32(i, 3);
                int32_t _i_manufact_id241 = tbl_Aggregate_TD_5224_output.getInt32(i, 4);
                int64_t _sales_cnt5496L = tbl_Aggregate_TD_5224_output.getInt64(i, 5);
                int32_t _sales_amt5497 = tbl_Aggregate_TD_5224_output.getInt32(i, 6);
                if (NULL < 0.90000000000000000000) {
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 0, _d_year6424);
                    tbl_JOIN_INNER_TD_4103_output.setInt64(r, 6, _sales_cnt5605L);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 9, _sales_amt5606);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 1, _d_year126);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 2, _i_brand_id235);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 3, _i_class_id237);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 4, _i_category_id239);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 5, _i_manufact_id241);
                    tbl_JOIN_INNER_TD_4103_output.setInt64(r, 7, _sales_cnt5496L);
                    tbl_JOIN_INNER_TD_4103_output.setInt32(r, 8, _sales_amt5497);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_4103_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4103_output #Row: " << tbl_JOIN_INNER_TD_4103_output.getNumRow() << std::endl;
}

void SW_Project_TD_325(Table &tbl_JOIN_INNER_TD_4103_output, Table &tbl_Project_TD_325_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(d_year#6424 AS prev_year#5484, d_year#126 AS year#5485, sales_cnt#5605L AS prev_yr_cnt#5486L, sales_cnt#5496L AS curr_yr_cnt#5487L, (sales_cnt#5496L - sales_cnt#5605L) AS sales_cnt_diff#5488L, CheckOverflow((promote_precision(cast(sales_amt#5497 as decimal(19,2))) - promote_precision(cast(sales_amt#5606 as decimal(19,2)))), DecimalType(19,2), true) AS sales_amt_diff#5489)
    // Input: ListBuffer(d_year#6424, d_year#126, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, sales_cnt#5605L, sales_cnt#5496L, sales_amt#5497, sales_amt#5606)
    // Output: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    int nrow1 = tbl_JOIN_INNER_TD_4103_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year6424 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 0);
        int32_t _d_year126 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 1);
        int32_t _i_brand_id235 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 2);
        int32_t _i_class_id237 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 3);
        int32_t _i_category_id239 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 4);
        int32_t _i_manufact_id241 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 5);
        int64_t _sales_cnt5605L = tbl_JOIN_INNER_TD_4103_output.getInt64(i, 6);
        int64_t _sales_cnt5496L = tbl_JOIN_INNER_TD_4103_output.getInt64(i, 7);
        int32_t _sales_amt5497 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 8);
        int32_t _sales_amt5606 = tbl_JOIN_INNER_TD_4103_output.getInt32(i, 9);
        int32_t _prev_year5484 = _d_year6424;
        tbl_Project_TD_325_output.setInt32(i, 0, _prev_year5484);
        int32_t _year5485 = _d_year126;
        tbl_Project_TD_325_output.setInt32(i, 1, _year5485);
        int64_t _prev_yr_cnt5486L = _sales_cnt5605L;
        tbl_Project_TD_325_output.setInt64(i, 6, _prev_yr_cnt5486L);
        int64_t _curr_yr_cnt5487L = _sales_cnt5496L;
        tbl_Project_TD_325_output.setInt64(i, 7, _curr_yr_cnt5487L);
        int64_t _sales_cnt_diff5488L = (_sales_cnt5496L - _sales_cnt5605L);
        tbl_Project_TD_325_output.setInt64(i, 8, _sales_cnt_diff5488L);
        int32_t _sales_amt_diff5489 = (_sales_amt5497 - _sales_amt5606);
        tbl_Project_TD_325_output.setInt32(i, 9, _sales_amt_diff5489);
        tbl_Project_TD_325_output.setInt32(i, 2, _i_brand_id235);
        tbl_Project_TD_325_output.setInt32(i, 3, _i_class_id237);
        tbl_Project_TD_325_output.setInt32(i, 4, _i_category_id239);
        tbl_Project_TD_325_output.setInt32(i, 5, _i_manufact_id241);
    }
    tbl_Project_TD_325_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_325_output #Row: " << tbl_Project_TD_325_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2173(Table &tbl_Project_TD_325_output, Table &tbl_Sort_TD_2173_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(sales_cnt_diff#5488L ASC NULLS FIRST)
    // Input: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    // Output: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    struct SW_Sort_TD_2173Row {
        int32_t _prev_year5484;
        int32_t _year5485;
        int32_t _i_brand_id235;
        int32_t _i_class_id237;
        int32_t _i_category_id239;
        int32_t _i_manufact_id241;
        int64_t _prev_yr_cnt5486L;
        int64_t _curr_yr_cnt5487L;
        int64_t _sales_cnt_diff5488L;
        int32_t _sales_amt_diff5489;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2173Row& a, const SW_Sort_TD_2173Row& b) const { return 
 (a._sales_cnt_diff5488L < b._sales_cnt_diff5488L); 
}
    }SW_Sort_TD_2173_order; 

    int nrow1 = tbl_Project_TD_325_output.getNumRow();
    std::vector<SW_Sort_TD_2173Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _prev_year5484 = tbl_Project_TD_325_output.getInt32(i, 0);
        int32_t _year5485 = tbl_Project_TD_325_output.getInt32(i, 1);
        int32_t _i_brand_id235 = tbl_Project_TD_325_output.getInt32(i, 2);
        int32_t _i_class_id237 = tbl_Project_TD_325_output.getInt32(i, 3);
        int32_t _i_category_id239 = tbl_Project_TD_325_output.getInt32(i, 4);
        int32_t _i_manufact_id241 = tbl_Project_TD_325_output.getInt32(i, 5);
        int64_t _prev_yr_cnt5486L = tbl_Project_TD_325_output.getInt64(i, 6);
        int64_t _curr_yr_cnt5487L = tbl_Project_TD_325_output.getInt64(i, 7);
        int64_t _sales_cnt_diff5488L = tbl_Project_TD_325_output.getInt64(i, 8);
        int32_t _sales_amt_diff5489 = tbl_Project_TD_325_output.getInt32(i, 9);
        SW_Sort_TD_2173Row t = {_prev_year5484,_year5485,_i_brand_id235,_i_class_id237,_i_category_id239,_i_manufact_id241,_prev_yr_cnt5486L,_curr_yr_cnt5487L,_sales_cnt_diff5488L,_sales_amt_diff5489};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2173_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2173_output.setInt32(r, 0, it._prev_year5484);
        tbl_Sort_TD_2173_output.setInt32(r, 1, it._year5485);
        tbl_Sort_TD_2173_output.setInt32(r, 2, it._i_brand_id235);
        tbl_Sort_TD_2173_output.setInt32(r, 3, it._i_class_id237);
        tbl_Sort_TD_2173_output.setInt32(r, 4, it._i_category_id239);
        tbl_Sort_TD_2173_output.setInt32(r, 5, it._i_manufact_id241);
        tbl_Sort_TD_2173_output.setInt64(r, 6, it._prev_yr_cnt5486L);
        tbl_Sort_TD_2173_output.setInt64(r, 7, it._curr_yr_cnt5487L);
        tbl_Sort_TD_2173_output.setInt64(r, 8, it._sales_cnt_diff5488L);
        tbl_Sort_TD_2173_output.setInt32(r, 9, it._sales_amt_diff5489);
        ++r;
    }
    tbl_Sort_TD_2173_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2173_output #Row: " << tbl_Sort_TD_2173_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1405(Table &tbl_Sort_TD_2173_output, Table &tbl_LocalLimit_TD_1405_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    // Output: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1405_output.setInt32(r, 0, tbl_Sort_TD_2173_output.getInt32(i, 0));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 1, tbl_Sort_TD_2173_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 2, tbl_Sort_TD_2173_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 3, tbl_Sort_TD_2173_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 4, tbl_Sort_TD_2173_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 5, tbl_Sort_TD_2173_output.getInt32(i, 5));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 6, tbl_Sort_TD_2173_output.getInt64(i, 6));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 7, tbl_Sort_TD_2173_output.getInt64(i, 7));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 8, tbl_Sort_TD_2173_output.getInt64(i, 8));
        tbl_LocalLimit_TD_1405_output.setInt32(r, 9, tbl_Sort_TD_2173_output.getInt32(i, 9));
        r++;
    }
    tbl_LocalLimit_TD_1405_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1405_output #Row: " << tbl_LocalLimit_TD_1405_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0245(Table &tbl_LocalLimit_TD_1405_output, Table &tbl_GlobalLimit_TD_0245_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    // Output: ListBuffer(prev_year#5484, year#5485, i_brand_id#235, i_class_id#237, i_category_id#239, i_manufact_id#241, prev_yr_cnt#5486L, curr_yr_cnt#5487L, sales_cnt_diff#5488L, sales_amt_diff#5489)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 0, tbl_LocalLimit_TD_1405_output.getInt32(i, 0));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 1, tbl_LocalLimit_TD_1405_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 2, tbl_LocalLimit_TD_1405_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 3, tbl_LocalLimit_TD_1405_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 4, tbl_LocalLimit_TD_1405_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 5, tbl_LocalLimit_TD_1405_output.getInt32(i, 5));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 6, tbl_LocalLimit_TD_1405_output.getInt64(i, 6));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 7, tbl_LocalLimit_TD_1405_output.getInt64(i, 7));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 8, tbl_LocalLimit_TD_1405_output.getInt64(i, 8));
        tbl_GlobalLimit_TD_0245_output.setInt32(r, 9, tbl_LocalLimit_TD_1405_output.getInt32(i, 9));
        r++;
    }
    tbl_GlobalLimit_TD_0245_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0245_output #Row: " << tbl_GlobalLimit_TD_0245_output.getNumRow() << std::endl;
}

