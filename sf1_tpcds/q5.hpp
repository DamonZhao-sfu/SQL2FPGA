#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_12681513(Table &tbl_SerializeFromObject_TD_13656707_input, Table &tbl_Filter_TD_12681513_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(ws_item_sk#8583) AND isnotnull(ws_order_number#8597L)) AND isnotnull(ws_web_site_sk#8593)))
    // Input: ListBuffer(ws_item_sk#8583, ws_web_site_sk#8593, ws_order_number#8597L)
    // Output: ListBuffer(ws_item_sk#8583, ws_web_site_sk#8593, ws_order_number#8597L)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13656707_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk8583 = tbl_SerializeFromObject_TD_13656707_input.getInt32(i, 0);
        int64_t _ws_order_number8597L = tbl_SerializeFromObject_TD_13656707_input.getInt64(i, 2);
        int32_t _ws_web_site_sk8593 = tbl_SerializeFromObject_TD_13656707_input.getInt32(i, 1);
        if (((_ws_item_sk8583!= 0) && (_ws_order_number8597L!= 0)) && (_ws_web_site_sk8593!= 0)) {
            int32_t _ws_item_sk8583_t = tbl_SerializeFromObject_TD_13656707_input.getInt32(i, 0);
            tbl_Filter_TD_12681513_output.setInt32(r, 0, _ws_item_sk8583_t);
            int32_t _ws_web_site_sk8593_t = tbl_SerializeFromObject_TD_13656707_input.getInt32(i, 1);
            tbl_Filter_TD_12681513_output.setInt32(r, 1, _ws_web_site_sk8593_t);
            int64_t _ws_order_number8597L_t = tbl_SerializeFromObject_TD_13656707_input.getInt64(i, 2);
            tbl_Filter_TD_12681513_output.setInt64(r, 2, _ws_order_number8597L_t);
            r++;
        }
    }
    tbl_Filter_TD_12681513_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12681513_output #Row: " << tbl_Filter_TD_12681513_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12479154(Table &tbl_SerializeFromObject_TD_13357257_input, Table &tbl_Filter_TD_12479154_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(wr_returned_date_sk#831))
    // Input: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13357257_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wr_returned_date_sk831 = tbl_SerializeFromObject_TD_13357257_input.getInt32(i, 0);
        if (_wr_returned_date_sk831!= 0) {
            int32_t _wr_returned_date_sk831_t = tbl_SerializeFromObject_TD_13357257_input.getInt32(i, 0);
            tbl_Filter_TD_12479154_output.setInt32(r, 0, _wr_returned_date_sk831_t);
            int32_t _wr_item_sk833_t = tbl_SerializeFromObject_TD_13357257_input.getInt32(i, 1);
            tbl_Filter_TD_12479154_output.setInt32(r, 1, _wr_item_sk833_t);
            int64_t _wr_order_number844L_t = tbl_SerializeFromObject_TD_13357257_input.getInt64(i, 2);
            tbl_Filter_TD_12479154_output.setInt64(r, 2, _wr_order_number844L_t);
            int64_t _wr_return_amt846_t = tbl_SerializeFromObject_TD_13357257_input.getInt64(i, 3);
            tbl_Filter_TD_12479154_output.setInt64(r, 3, _wr_return_amt846_t);
            int64_t _wr_net_loss854_t = tbl_SerializeFromObject_TD_13357257_input.getInt64(i, 4);
            tbl_Filter_TD_12479154_output.setInt64(r, 4, _wr_net_loss854_t);
            r++;
        }
    }
    tbl_Filter_TD_12479154_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12479154_output #Row: " << tbl_Filter_TD_12479154_output.getNumRow() << std::endl;
}


void SW_Filter_TD_11207840(Table &tbl_SerializeFromObject_TD_12862818_input, Table &tbl_Filter_TD_11207840_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_sold_date_sk#729) AND isnotnull(ws_web_site_sk#742)))
    // Input: ListBuffer(ws_web_site_sk#742, ws_sold_date_sk#729, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(ws_web_site_sk#742, ws_sold_date_sk#729, ws_ext_sales_price#752, ws_net_profit#762)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12862818_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_12862818_input.getInt32(i, 1);
        int32_t _ws_web_site_sk742 = tbl_SerializeFromObject_TD_12862818_input.getInt32(i, 0);
        if ((_ws_sold_date_sk729!= 0) && (_ws_web_site_sk742!= 0)) {
            int32_t _ws_web_site_sk742_t = tbl_SerializeFromObject_TD_12862818_input.getInt32(i, 0);
            tbl_Filter_TD_11207840_output.setInt32(r, 0, _ws_web_site_sk742_t);
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_12862818_input.getInt32(i, 1);
            tbl_Filter_TD_11207840_output.setInt32(r, 1, _ws_sold_date_sk729_t);
            int64_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_12862818_input.getInt64(i, 2);
            tbl_Filter_TD_11207840_output.setInt64(r, 2, _ws_ext_sales_price752_t);
            int64_t _ws_net_profit762_t = tbl_SerializeFromObject_TD_12862818_input.getInt64(i, 3);
            tbl_Filter_TD_11207840_output.setInt64(r, 3, _ws_net_profit762_t);
            r++;
        }
    }
    tbl_Filter_TD_11207840_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11207840_output #Row: " << tbl_Filter_TD_11207840_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11913431(Table &tbl_SerializeFromObject_TD_1220287_input, Table &tbl_Filter_TD_11913431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cr_returned_date_sk#1023) AND isnotnull(cr_catalog_page_sk#1035)))
    // Input: ListBuffer(cr_catalog_page_sk#1035, cr_returned_date_sk#1023, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(cr_catalog_page_sk#1035, cr_returned_date_sk#1023, cr_return_amount#1041, cr_net_loss#1049)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1220287_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_returned_date_sk1023 = tbl_SerializeFromObject_TD_1220287_input.getInt32(i, 1);
        int32_t _cr_catalog_page_sk1035 = tbl_SerializeFromObject_TD_1220287_input.getInt32(i, 0);
        if ((_cr_returned_date_sk1023!= 0) && (_cr_catalog_page_sk1035!= 0)) {
            int32_t _cr_catalog_page_sk1035_t = tbl_SerializeFromObject_TD_1220287_input.getInt32(i, 0);
            tbl_Filter_TD_11913431_output.setInt32(r, 0, _cr_catalog_page_sk1035_t);
            int32_t _cr_returned_date_sk1023_t = tbl_SerializeFromObject_TD_1220287_input.getInt32(i, 1);
            tbl_Filter_TD_11913431_output.setInt32(r, 1, _cr_returned_date_sk1023_t);
            int64_t _cr_return_amount1041_t = tbl_SerializeFromObject_TD_1220287_input.getInt64(i, 2);
            tbl_Filter_TD_11913431_output.setInt64(r, 2, _cr_return_amount1041_t);
            int64_t _cr_net_loss1049_t = tbl_SerializeFromObject_TD_1220287_input.getInt64(i, 3);
            tbl_Filter_TD_11913431_output.setInt64(r, 3, _cr_net_loss1049_t);
            r++;
        }
    }
    tbl_Filter_TD_11913431_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11913431_output #Row: " << tbl_Filter_TD_11913431_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11323485(Table &tbl_SerializeFromObject_TD_12847759_input, Table &tbl_Filter_TD_11323485_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_sold_date_sk#1104) AND isnotnull(cs_catalog_page_sk#1116)))
    // Input: ListBuffer(cs_catalog_page_sk#1116, cs_sold_date_sk#1104, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(cs_catalog_page_sk#1116, cs_sold_date_sk#1104, cs_ext_sales_price#1127, cs_net_profit#1137)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12847759_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_12847759_input.getInt32(i, 1);
        int32_t _cs_catalog_page_sk1116 = tbl_SerializeFromObject_TD_12847759_input.getInt32(i, 0);
        if ((_cs_sold_date_sk1104!= 0) && (_cs_catalog_page_sk1116!= 0)) {
            int32_t _cs_catalog_page_sk1116_t = tbl_SerializeFromObject_TD_12847759_input.getInt32(i, 0);
            tbl_Filter_TD_11323485_output.setInt32(r, 0, _cs_catalog_page_sk1116_t);
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_12847759_input.getInt32(i, 1);
            tbl_Filter_TD_11323485_output.setInt32(r, 1, _cs_sold_date_sk1104_t);
            int64_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_12847759_input.getInt64(i, 2);
            tbl_Filter_TD_11323485_output.setInt64(r, 2, _cs_ext_sales_price1127_t);
            int64_t _cs_net_profit1137_t = tbl_SerializeFromObject_TD_12847759_input.getInt64(i, 3);
            tbl_Filter_TD_11323485_output.setInt64(r, 3, _cs_net_profit1137_t);
            r++;
        }
    }
    tbl_Filter_TD_11323485_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11323485_output #Row: " << tbl_Filter_TD_11323485_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11770214(Table &tbl_SerializeFromObject_TD_1245072_input, Table &tbl_Filter_TD_11770214_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sr_returned_date_sk#669) AND isnotnull(sr_store_sk#676)))
    // Input: ListBuffer(sr_store_sk#676, sr_returned_date_sk#669, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(sr_store_sk#676, sr_returned_date_sk#669, sr_return_amt#680, sr_net_loss#688)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1245072_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_returned_date_sk669 = tbl_SerializeFromObject_TD_1245072_input.getInt32(i, 1);
        int32_t _sr_store_sk676 = tbl_SerializeFromObject_TD_1245072_input.getInt32(i, 0);
        if ((_sr_returned_date_sk669!= 0) && (_sr_store_sk676!= 0)) {
            int32_t _sr_store_sk676_t = tbl_SerializeFromObject_TD_1245072_input.getInt32(i, 0);
            tbl_Filter_TD_11770214_output.setInt32(r, 0, _sr_store_sk676_t);
            int32_t _sr_returned_date_sk669_t = tbl_SerializeFromObject_TD_1245072_input.getInt32(i, 1);
            tbl_Filter_TD_11770214_output.setInt32(r, 1, _sr_returned_date_sk669_t);
            int64_t _sr_return_amt680_t = tbl_SerializeFromObject_TD_1245072_input.getInt64(i, 2);
            tbl_Filter_TD_11770214_output.setInt64(r, 2, _sr_return_amt680_t);
            int64_t _sr_net_loss688_t = tbl_SerializeFromObject_TD_1245072_input.getInt64(i, 3);
            tbl_Filter_TD_11770214_output.setInt64(r, 3, _sr_net_loss688_t);
            r++;
        }
    }
    tbl_Filter_TD_11770214_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11770214_output #Row: " << tbl_Filter_TD_11770214_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11576817(Table &tbl_SerializeFromObject_TD_12550896_input, Table &tbl_Filter_TD_11576817_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_store_sk#1213, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(ss_store_sk#1213, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12550896_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_12550896_input.getInt32(i, 1);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12550896_input.getInt32(i, 0);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_12550896_input.getInt32(i, 0);
            tbl_Filter_TD_11576817_output.setInt32(r, 0, _ss_store_sk1213_t);
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_12550896_input.getInt32(i, 1);
            tbl_Filter_TD_11576817_output.setInt32(r, 1, _ss_sold_date_sk1206_t);
            int64_t _ss_ext_sales_price1221_t = tbl_SerializeFromObject_TD_12550896_input.getInt64(i, 2);
            tbl_Filter_TD_11576817_output.setInt64(r, 2, _ss_ext_sales_price1221_t);
            int64_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12550896_input.getInt64(i, 3);
            tbl_Filter_TD_11576817_output.setInt64(r, 3, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_11576817_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11576817_output #Row: " << tbl_Filter_TD_11576817_output.getNumRow() << std::endl;
}

void SW_Project_TD_1073998(Table &tbl_JOIN_INNER_TD_11304473_output, Table &tbl_Project_TD_1073998_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_web_site_sk#8593 AS wsr_web_site_sk#8542, wr_returned_date_sk#831 AS date_sk#8543, 0.00 AS sales_price#8544, 0.00 AS profit#8545, wr_return_amt#846 AS return_amt#8546, wr_net_loss#854 AS net_loss#8547)
    // Input: ListBuffer(ws_web_site_sk#8593, wr_returned_date_sk#831, wr_return_amt#846, wr_net_loss#854)
    // Output: ListBuffer(wsr_web_site_sk#8542, date_sk#8543, sales_price#8544, profit#8545, return_amt#8546, net_loss#8547)
    int nrow1 = tbl_JOIN_INNER_TD_11304473_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_site_sk8593 = tbl_JOIN_INNER_TD_11304473_output.getInt32(i, 0);
        int32_t _wr_returned_date_sk831 = tbl_JOIN_INNER_TD_11304473_output.getInt32(i, 1);
        int64_t _wr_return_amt846 = tbl_JOIN_INNER_TD_11304473_output.getInt64(i, 2);
        int64_t _wr_net_loss854 = tbl_JOIN_INNER_TD_11304473_output.getInt64(i, 3);
        int32_t _wsr_web_site_sk8542 = _ws_web_site_sk8593;
        tbl_Project_TD_1073998_output.setInt32(i, 0, _wsr_web_site_sk8542);
        int32_t _date_sk8543 = _wr_returned_date_sk831;
        tbl_Project_TD_1073998_output.setInt32(i, 1, _date_sk8543);
        int64_t _sales_price8544 = 0.00;
        tbl_Project_TD_1073998_output.setInt64(i, 2, _sales_price8544);
        int64_t _profit8545 = 0.00;
        tbl_Project_TD_1073998_output.setInt64(i, 3, _profit8545);
        int64_t _return_amt8546 = _wr_return_amt846;
        tbl_Project_TD_1073998_output.setInt64(i, 4, _return_amt8546);
        int64_t _net_loss8547 = _wr_net_loss854;
        tbl_Project_TD_1073998_output.setInt64(i, 5, _net_loss8547);
    }
    tbl_Project_TD_1073998_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1073998_output #Row: " << tbl_Project_TD_1073998_output.getNumRow() << std::endl;
}

void SW_Project_TD_10165731(Table &tbl_Filter_TD_11207840_output, Table &tbl_Project_TD_10165731_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_web_site_sk#742 AS wsr_web_site_sk#8536, ws_sold_date_sk#729 AS date_sk#8537, ws_ext_sales_price#752 AS sales_price#8538, ws_net_profit#762 AS profit#8539, 0.00 AS return_amt#8540, 0.00 AS net_loss#8541)
    // Input: ListBuffer(ws_web_site_sk#742, ws_sold_date_sk#729, ws_ext_sales_price#752, ws_net_profit#762)
    // Output: ListBuffer(wsr_web_site_sk#8536, date_sk#8537, sales_price#8538, profit#8539, return_amt#8540, net_loss#8541)
    int nrow1 = tbl_Filter_TD_11207840_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_site_sk742 = tbl_Filter_TD_11207840_output.getInt32(i, 0);
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_11207840_output.getInt32(i, 1);
        int64_t _ws_ext_sales_price752 = tbl_Filter_TD_11207840_output.getInt64(i, 2);
        int64_t _ws_net_profit762 = tbl_Filter_TD_11207840_output.getInt64(i, 3);
        int32_t _wsr_web_site_sk8536 = _ws_web_site_sk742;
        tbl_Project_TD_10165731_output.setInt32(i, 0, _wsr_web_site_sk8536);
        int32_t _date_sk8537 = _ws_sold_date_sk729;
        tbl_Project_TD_10165731_output.setInt32(i, 1, _date_sk8537);
        int64_t _sales_price8538 = _ws_ext_sales_price752;
        tbl_Project_TD_10165731_output.setInt64(i, 2, _sales_price8538);
        int64_t _profit8539 = _ws_net_profit762;
        tbl_Project_TD_10165731_output.setInt64(i, 3, _profit8539);
        int64_t _return_amt8540 = 0.00;
        tbl_Project_TD_10165731_output.setInt64(i, 4, _return_amt8540);
        int64_t _net_loss8541 = 0.00;
        tbl_Project_TD_10165731_output.setInt64(i, 5, _net_loss8541);
    }
    tbl_Project_TD_10165731_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10165731_output #Row: " << tbl_Project_TD_10165731_output.getNumRow() << std::endl;
}

void SW_Project_TD_10646817(Table &tbl_Filter_TD_11913431_output, Table &tbl_Project_TD_10646817_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cr_catalog_page_sk#1035 AS page_sk#8526, cr_returned_date_sk#1023 AS date_sk#8527, 0.00 AS sales_price#8528, 0.00 AS profit#8529, cr_return_amount#1041 AS return_amt#8530, cr_net_loss#1049 AS net_loss#8531)
    // Input: ListBuffer(cr_catalog_page_sk#1035, cr_returned_date_sk#1023, cr_return_amount#1041, cr_net_loss#1049)
    // Output: ListBuffer(page_sk#8526, date_sk#8527, sales_price#8528, profit#8529, return_amt#8530, net_loss#8531)
    int nrow1 = tbl_Filter_TD_11913431_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cr_catalog_page_sk1035 = tbl_Filter_TD_11913431_output.getInt32(i, 0);
        int32_t _cr_returned_date_sk1023 = tbl_Filter_TD_11913431_output.getInt32(i, 1);
        int64_t _cr_return_amount1041 = tbl_Filter_TD_11913431_output.getInt64(i, 2);
        int64_t _cr_net_loss1049 = tbl_Filter_TD_11913431_output.getInt64(i, 3);
        int32_t _page_sk8526 = _cr_catalog_page_sk1035;
        tbl_Project_TD_10646817_output.setInt32(i, 0, _page_sk8526);
        int32_t _date_sk8527 = _cr_returned_date_sk1023;
        tbl_Project_TD_10646817_output.setInt32(i, 1, _date_sk8527);
        int64_t _sales_price8528 = 0.00;
        tbl_Project_TD_10646817_output.setInt64(i, 2, _sales_price8528);
        int64_t _profit8529 = 0.00;
        tbl_Project_TD_10646817_output.setInt64(i, 3, _profit8529);
        int64_t _return_amt8530 = _cr_return_amount1041;
        tbl_Project_TD_10646817_output.setInt64(i, 4, _return_amt8530);
        int64_t _net_loss8531 = _cr_net_loss1049;
        tbl_Project_TD_10646817_output.setInt64(i, 5, _net_loss8531);
    }
    tbl_Project_TD_10646817_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10646817_output #Row: " << tbl_Project_TD_10646817_output.getNumRow() << std::endl;
}

void SW_Project_TD_1021780(Table &tbl_Filter_TD_11323485_output, Table &tbl_Project_TD_1021780_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_catalog_page_sk#1116 AS page_sk#8520, cs_sold_date_sk#1104 AS date_sk#8521, cs_ext_sales_price#1127 AS sales_price#8522, cs_net_profit#1137 AS profit#8523, 0.00 AS return_amt#8524, 0.00 AS net_loss#8525)
    // Input: ListBuffer(cs_catalog_page_sk#1116, cs_sold_date_sk#1104, cs_ext_sales_price#1127, cs_net_profit#1137)
    // Output: ListBuffer(page_sk#8520, date_sk#8521, sales_price#8522, profit#8523, return_amt#8524, net_loss#8525)
    int nrow1 = tbl_Filter_TD_11323485_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_catalog_page_sk1116 = tbl_Filter_TD_11323485_output.getInt32(i, 0);
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_11323485_output.getInt32(i, 1);
        int64_t _cs_ext_sales_price1127 = tbl_Filter_TD_11323485_output.getInt64(i, 2);
        int64_t _cs_net_profit1137 = tbl_Filter_TD_11323485_output.getInt64(i, 3);
        int32_t _page_sk8520 = _cs_catalog_page_sk1116;
        tbl_Project_TD_1021780_output.setInt32(i, 0, _page_sk8520);
        int32_t _date_sk8521 = _cs_sold_date_sk1104;
        tbl_Project_TD_1021780_output.setInt32(i, 1, _date_sk8521);
        int64_t _sales_price8522 = _cs_ext_sales_price1127;
        tbl_Project_TD_1021780_output.setInt64(i, 2, _sales_price8522);
        int64_t _profit8523 = _cs_net_profit1137;
        tbl_Project_TD_1021780_output.setInt64(i, 3, _profit8523);
        int64_t _return_amt8524 = 0.00;
        tbl_Project_TD_1021780_output.setInt64(i, 4, _return_amt8524);
        int64_t _net_loss8525 = 0.00;
        tbl_Project_TD_1021780_output.setInt64(i, 5, _net_loss8525);
    }
    tbl_Project_TD_1021780_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1021780_output #Row: " << tbl_Project_TD_1021780_output.getNumRow() << std::endl;
}

void SW_Project_TD_10300903(Table &tbl_Filter_TD_11770214_output, Table &tbl_Project_TD_10300903_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(sr_store_sk#676 AS store_sk#8510, sr_returned_date_sk#669 AS date_sk#8511, 0.00 AS sales_price#8512, 0.00 AS profit#8513, sr_return_amt#680 AS return_amt#8514, sr_net_loss#688 AS net_loss#8515)
    // Input: ListBuffer(sr_store_sk#676, sr_returned_date_sk#669, sr_return_amt#680, sr_net_loss#688)
    // Output: ListBuffer(store_sk#8510, date_sk#8511, sales_price#8512, profit#8513, return_amt#8514, net_loss#8515)
    int nrow1 = tbl_Filter_TD_11770214_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sr_store_sk676 = tbl_Filter_TD_11770214_output.getInt32(i, 0);
        int32_t _sr_returned_date_sk669 = tbl_Filter_TD_11770214_output.getInt32(i, 1);
        int64_t _sr_return_amt680 = tbl_Filter_TD_11770214_output.getInt64(i, 2);
        int64_t _sr_net_loss688 = tbl_Filter_TD_11770214_output.getInt64(i, 3);
        int32_t _store_sk8510 = _sr_store_sk676;
        tbl_Project_TD_10300903_output.setInt32(i, 0, _store_sk8510);
        int32_t _date_sk8511 = _sr_returned_date_sk669;
        tbl_Project_TD_10300903_output.setInt32(i, 1, _date_sk8511);
        int64_t _sales_price8512 = 0.00;
        tbl_Project_TD_10300903_output.setInt64(i, 2, _sales_price8512);
        int64_t _profit8513 = 0.00;
        tbl_Project_TD_10300903_output.setInt64(i, 3, _profit8513);
        int64_t _return_amt8514 = _sr_return_amt680;
        tbl_Project_TD_10300903_output.setInt64(i, 4, _return_amt8514);
        int64_t _net_loss8515 = _sr_net_loss688;
        tbl_Project_TD_10300903_output.setInt64(i, 5, _net_loss8515);
    }
    tbl_Project_TD_10300903_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10300903_output #Row: " << tbl_Project_TD_10300903_output.getNumRow() << std::endl;
}

void SW_Project_TD_10598873(Table &tbl_Filter_TD_11576817_output, Table &tbl_Project_TD_10598873_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_store_sk#1213 AS store_sk#8504, ss_sold_date_sk#1206 AS date_sk#8505, ss_ext_sales_price#1221 AS sales_price#8506, ss_net_profit#1228 AS profit#8507, 0.00 AS return_amt#8508, 0.00 AS net_loss#8509)
    // Input: ListBuffer(ss_store_sk#1213, ss_sold_date_sk#1206, ss_ext_sales_price#1221, ss_net_profit#1228)
    // Output: ListBuffer(store_sk#8504, date_sk#8505, sales_price#8506, profit#8507, return_amt#8508, net_loss#8509)
    int nrow1 = tbl_Filter_TD_11576817_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_Filter_TD_11576817_output.getInt32(i, 0);
        int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_11576817_output.getInt32(i, 1);
        int64_t _ss_ext_sales_price1221 = tbl_Filter_TD_11576817_output.getInt64(i, 2);
        int64_t _ss_net_profit1228 = tbl_Filter_TD_11576817_output.getInt64(i, 3);
        int32_t _store_sk8504 = _ss_store_sk1213;
        tbl_Project_TD_10598873_output.setInt32(i, 0, _store_sk8504);
        int32_t _date_sk8505 = _ss_sold_date_sk1206;
        tbl_Project_TD_10598873_output.setInt32(i, 1, _date_sk8505);
        int64_t _sales_price8506 = _ss_ext_sales_price1221;
        tbl_Project_TD_10598873_output.setInt64(i, 2, _sales_price8506);
        int64_t _profit8507 = _ss_net_profit1228;
        tbl_Project_TD_10598873_output.setInt64(i, 3, _profit8507);
        int64_t _return_amt8508 = 0.00;
        tbl_Project_TD_10598873_output.setInt64(i, 4, _return_amt8508);
        int64_t _net_loss8509 = 0.00;
        tbl_Project_TD_10598873_output.setInt64(i, 5, _net_loss8509);
    }
    tbl_Project_TD_10598873_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10598873_output #Row: " << tbl_Project_TD_10598873_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9518619(Table &tbl_SerializeFromObject_TD_10543457_input, Table &tbl_Filter_TD_9518619_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#8616) AND ((d_date#8616 >= 2000-08-23) AND (d_date#8616 <= 2000-09-06))) AND isnotnull(d_date_sk#8614)))
    // Input: ListBuffer(d_date_sk#8614, d_date#8616)
    // Output: ListBuffer(d_date_sk#8614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10543457_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date8616 = tbl_SerializeFromObject_TD_10543457_input.getInt32(i, 1);
        int32_t _d_date_sk8614 = tbl_SerializeFromObject_TD_10543457_input.getInt32(i, 0);
        if (((_d_date8616!= 0) && ((_d_date8616 >= 20000823) && (_d_date8616 <= 20000906))) && (_d_date_sk8614!= 0)) {
            int32_t _d_date_sk8614_t = tbl_SerializeFromObject_TD_10543457_input.getInt32(i, 0);
            tbl_Filter_TD_9518619_output.setInt32(r, 0, _d_date_sk8614_t);
            r++;
        }
    }
    tbl_Filter_TD_9518619_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9518619_output #Row: " << tbl_Filter_TD_9518619_output.getNumRow() << std::endl;
}

void SW_Union_TD_9149122(Table &tbl_Project_TD_10165731_output, Table &tbl_Project_TD_1073998_output, Table &tbl_Union_TD_9149122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(wsr_web_site_sk#8536, date_sk#8537, sales_price#8538, profit#8539, return_amt#8540, net_loss#8541)
    int r = 0;
    int row0 = tbl_Project_TD_10165731_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9149122_output.setInt32(r, 0, tbl_Project_TD_10165731_output.getInt32(i, 0));
        tbl_Union_TD_9149122_output.setInt32(r, 1, tbl_Project_TD_10165731_output.getInt32(i, 1));
        tbl_Union_TD_9149122_output.setInt32(r, 2, tbl_Project_TD_10165731_output.getInt64(i, 2));
        tbl_Union_TD_9149122_output.setInt32(r, 3, tbl_Project_TD_10165731_output.getInt64(i, 3));
        tbl_Union_TD_9149122_output.setInt32(r, 4, tbl_Project_TD_10165731_output.getInt64(i, 4));
        tbl_Union_TD_9149122_output.setInt32(r, 5, tbl_Project_TD_10165731_output.getInt64(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_1073998_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9149122_output.setInt32(r, 0, tbl_Project_TD_1073998_output.getInt32(i, 0));
        tbl_Union_TD_9149122_output.setInt32(r, 1, tbl_Project_TD_1073998_output.getInt32(i, 1));
        tbl_Union_TD_9149122_output.setInt32(r, 2, tbl_Project_TD_1073998_output.getInt64(i, 2));
        tbl_Union_TD_9149122_output.setInt32(r, 3, tbl_Project_TD_1073998_output.getInt64(i, 3));
        tbl_Union_TD_9149122_output.setInt32(r, 4, tbl_Project_TD_1073998_output.getInt64(i, 4));
        tbl_Union_TD_9149122_output.setInt32(r, 5, tbl_Project_TD_1073998_output.getInt64(i, 5));
        ++r;
    }
    tbl_Union_TD_9149122_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9149122_output #Row: " << tbl_Union_TD_9149122_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9164580(Table &tbl_SerializeFromObject_TD_10281500_input, Table &tbl_Filter_TD_9164580_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#8554) AND ((d_date#8554 >= 2000-08-23) AND (d_date#8554 <= 2000-09-06))) AND isnotnull(d_date_sk#8552)))
    // Input: ListBuffer(d_date_sk#8552, d_date#8554)
    // Output: ListBuffer(d_date_sk#8552)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10281500_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date8554 = tbl_SerializeFromObject_TD_10281500_input.getInt32(i, 1);
        int32_t _d_date_sk8552 = tbl_SerializeFromObject_TD_10281500_input.getInt32(i, 0);
        if (((_d_date8554!= 0) && ((_d_date8554 >= 20000823) && (_d_date8554 <= 20000906))) && (_d_date_sk8552!= 0)) {
            int32_t _d_date_sk8552_t = tbl_SerializeFromObject_TD_10281500_input.getInt32(i, 0);
            tbl_Filter_TD_9164580_output.setInt32(r, 0, _d_date_sk8552_t);
            r++;
        }
    }
    tbl_Filter_TD_9164580_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9164580_output #Row: " << tbl_Filter_TD_9164580_output.getNumRow() << std::endl;
}

void SW_Union_TD_9782858(Table &tbl_Project_TD_1021780_output, Table &tbl_Project_TD_10646817_output, Table &tbl_Union_TD_9782858_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(page_sk#8520, date_sk#8521, sales_price#8522, profit#8523, return_amt#8524, net_loss#8525)
    int r = 0;
    int row0 = tbl_Project_TD_1021780_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9782858_output.setInt32(r, 0, tbl_Project_TD_1021780_output.getInt32(i, 0));
        tbl_Union_TD_9782858_output.setInt32(r, 1, tbl_Project_TD_1021780_output.getInt32(i, 1));
        tbl_Union_TD_9782858_output.setInt32(r, 2, tbl_Project_TD_1021780_output.getInt64(i, 2));
        tbl_Union_TD_9782858_output.setInt32(r, 3, tbl_Project_TD_1021780_output.getInt64(i, 3));
        tbl_Union_TD_9782858_output.setInt32(r, 4, tbl_Project_TD_1021780_output.getInt64(i, 4));
        tbl_Union_TD_9782858_output.setInt32(r, 5, tbl_Project_TD_1021780_output.getInt64(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_10646817_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9782858_output.setInt32(r, 0, tbl_Project_TD_10646817_output.getInt32(i, 0));
        tbl_Union_TD_9782858_output.setInt32(r, 1, tbl_Project_TD_10646817_output.getInt32(i, 1));
        tbl_Union_TD_9782858_output.setInt32(r, 2, tbl_Project_TD_10646817_output.getInt64(i, 2));
        tbl_Union_TD_9782858_output.setInt32(r, 3, tbl_Project_TD_10646817_output.getInt64(i, 3));
        tbl_Union_TD_9782858_output.setInt32(r, 4, tbl_Project_TD_10646817_output.getInt64(i, 4));
        tbl_Union_TD_9782858_output.setInt32(r, 5, tbl_Project_TD_10646817_output.getInt64(i, 5));
        ++r;
    }
    tbl_Union_TD_9782858_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9782858_output #Row: " << tbl_Union_TD_9782858_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9118376(Table &tbl_SerializeFromObject_TD_10330_input, Table &tbl_Filter_TD_9118376_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_date#122) AND ((d_date#122 >= 2000-08-23) AND (d_date#122 <= 2000-09-06))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_date#122)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10330_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date122 = tbl_SerializeFromObject_TD_10330_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_10330_input.getInt32(i, 0);
        if (((_d_date122!= 0) && ((_d_date122 >= 20000823) && (_d_date122 <= 20000906))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_10330_input.getInt32(i, 0);
            tbl_Filter_TD_9118376_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_9118376_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9118376_output #Row: " << tbl_Filter_TD_9118376_output.getNumRow() << std::endl;
}

void SW_Union_TD_9154141(Table &tbl_Project_TD_10598873_output, Table &tbl_Project_TD_10300903_output, Table &tbl_Union_TD_9154141_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(store_sk#8504, date_sk#8505, sales_price#8506, profit#8507, return_amt#8508, net_loss#8509)
    int r = 0;
    int row0 = tbl_Project_TD_10598873_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9154141_output.setInt32(r, 0, tbl_Project_TD_10598873_output.getInt32(i, 0));
        tbl_Union_TD_9154141_output.setInt32(r, 1, tbl_Project_TD_10598873_output.getInt32(i, 1));
        tbl_Union_TD_9154141_output.setInt32(r, 2, tbl_Project_TD_10598873_output.getInt64(i, 2));
        tbl_Union_TD_9154141_output.setInt32(r, 3, tbl_Project_TD_10598873_output.getInt64(i, 3));
        tbl_Union_TD_9154141_output.setInt32(r, 4, tbl_Project_TD_10598873_output.getInt64(i, 4));
        tbl_Union_TD_9154141_output.setInt32(r, 5, tbl_Project_TD_10598873_output.getInt64(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_10300903_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9154141_output.setInt32(r, 0, tbl_Project_TD_10300903_output.getInt32(i, 0));
        tbl_Union_TD_9154141_output.setInt32(r, 1, tbl_Project_TD_10300903_output.getInt32(i, 1));
        tbl_Union_TD_9154141_output.setInt32(r, 2, tbl_Project_TD_10300903_output.getInt64(i, 2));
        tbl_Union_TD_9154141_output.setInt32(r, 3, tbl_Project_TD_10300903_output.getInt64(i, 3));
        tbl_Union_TD_9154141_output.setInt32(r, 4, tbl_Project_TD_10300903_output.getInt64(i, 4));
        tbl_Union_TD_9154141_output.setInt32(r, 5, tbl_Project_TD_10300903_output.getInt64(i, 5));
        ++r;
    }
    tbl_Union_TD_9154141_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9154141_output #Row: " << tbl_Union_TD_9154141_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8908160(Table &tbl_SerializeFromObject_TD_9413481_input, Table &tbl_Filter_TD_8908160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(web_site_sk#537))
    // Input: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output: ListBuffer(web_site_sk#537, web_site_id#538)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9413481_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _web_site_sk537 = tbl_SerializeFromObject_TD_9413481_input.getInt32(i, 0);
        if (_web_site_sk537!= 0) {
            int32_t _web_site_sk537_t = tbl_SerializeFromObject_TD_9413481_input.getInt32(i, 0);
            tbl_Filter_TD_8908160_output.setInt32(r, 0, _web_site_sk537_t);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_t = tbl_SerializeFromObject_TD_9413481_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8908160_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _web_site_id538_t);
            r++;
        }
    }
    tbl_Filter_TD_8908160_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8908160_output #Row: " << tbl_Filter_TD_8908160_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8568976(Table &tbl_SerializeFromObject_TD_9111814_input, Table &tbl_Filter_TD_8568976_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cp_catalog_page_sk#996))
    // Input: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9111814_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cp_catalog_page_sk996 = tbl_SerializeFromObject_TD_9111814_input.getInt32(i, 0);
        if (_cp_catalog_page_sk996!= 0) {
            int32_t _cp_catalog_page_sk996_t = tbl_SerializeFromObject_TD_9111814_input.getInt32(i, 0);
            tbl_Filter_TD_8568976_output.setInt32(r, 0, _cp_catalog_page_sk996_t);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_t = tbl_SerializeFromObject_TD_9111814_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8568976_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _cp_catalog_page_id997_t);
            r++;
        }
    }
    tbl_Filter_TD_8568976_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8568976_output #Row: " << tbl_Filter_TD_8568976_output.getNumRow() << std::endl;
}


void SW_Filter_TD_8416531(Table &tbl_SerializeFromObject_TD_9746654_input, Table &tbl_Filter_TD_8416531_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(s_store_sk#378))
    // Input: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output: ListBuffer(s_store_sk#378, s_store_id#379)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9746654_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_9746654_input.getInt32(i, 0);
        if (_s_store_sk378!= 0) {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_9746654_input.getInt32(i, 0);
            tbl_Filter_TD_8416531_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_t = tbl_SerializeFromObject_TD_9746654_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_8416531_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_id379_t);
            r++;
        }
    }
    tbl_Filter_TD_8416531_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8416531_output #Row: " << tbl_Filter_TD_8416531_output.getNumRow() << std::endl;
}


struct SW_JOIN_INNER_TD_7506229_key_leftMajor {
    int32_t _wsr_web_site_sk8536;
    bool operator==(const SW_JOIN_INNER_TD_7506229_key_leftMajor& other) const {
        return ((_wsr_web_site_sk8536 == other._wsr_web_site_sk8536));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7506229_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7506229_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wsr_web_site_sk8536));
    }
};
}
struct SW_JOIN_INNER_TD_7506229_payload_leftMajor {
    int32_t _wsr_web_site_sk8536;
    int64_t _sales_price8538;
    int64_t _profit8539;
    int64_t _return_amt8540;
    int64_t _net_loss8541;
};
struct SW_JOIN_INNER_TD_7506229_key_rightMajor {
    int32_t _web_site_sk537;
    bool operator==(const SW_JOIN_INNER_TD_7506229_key_rightMajor& other) const {
        return ((_web_site_sk537 == other._web_site_sk537));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7506229_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7506229_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._web_site_sk537));
    }
};
}
struct SW_JOIN_INNER_TD_7506229_payload_rightMajor {
    int32_t _web_site_sk537;
    std::string _web_site_id538;
};
void SW_JOIN_INNER_TD_7506229(Table &tbl_JOIN_INNER_TD_898670_output, Table &tbl_Filter_TD_8908160_output, Table &tbl_JOIN_INNER_TD_7506229_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((wsr_web_site_sk#8536 = web_site_sk#537))
    // Left Table: ListBuffer(wsr_web_site_sk#8536, sales_price#8538, profit#8539, return_amt#8540, net_loss#8541)
    // Right Table: ListBuffer(web_site_sk#537, web_site_id#538)
    // Output Table: ListBuffer(sales_price#8538, profit#8539, return_amt#8540, net_loss#8541, web_site_id#538)
    int left_nrow = tbl_JOIN_INNER_TD_898670_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8908160_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7506229_key_leftMajor, SW_JOIN_INNER_TD_7506229_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_898670_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wsr_web_site_sk8536_k = tbl_JOIN_INNER_TD_898670_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7506229_key_leftMajor keyA{_wsr_web_site_sk8536_k};
            int32_t _wsr_web_site_sk8536 = tbl_JOIN_INNER_TD_898670_output.getInt32(i, 0);
            int64_t _sales_price8538 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 1);
            int64_t _profit8539 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 2);
            int64_t _return_amt8540 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 3);
            int64_t _net_loss8541 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_7506229_payload_leftMajor payloadA{_wsr_web_site_sk8536, _sales_price8538, _profit8539, _return_amt8540, _net_loss8541};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8908160_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_8908160_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7506229_key_leftMajor{_web_site_sk537_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wsr_web_site_sk8536 = (it->second)._wsr_web_site_sk8536;
                int64_t _sales_price8538 = (it->second)._sales_price8538;
                int64_t _profit8539 = (it->second)._profit8539;
                int64_t _return_amt8540 = (it->second)._return_amt8540;
                int64_t _net_loss8541 = (it->second)._net_loss8541;
                int32_t _web_site_sk537 = tbl_Filter_TD_8908160_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_8908160_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _web_site_id538 = std::string(_web_site_id538_n.data());
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 0, _sales_price8538);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 1, _profit8539);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 2, _return_amt8540);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 3, _net_loss8541);
                tbl_JOIN_INNER_TD_7506229_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7506229_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7506229_key_rightMajor, SW_JOIN_INNER_TD_7506229_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8908160_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _web_site_sk537_k = tbl_Filter_TD_8908160_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7506229_key_rightMajor keyA{_web_site_sk537_k};
            int32_t _web_site_sk537 = tbl_Filter_TD_8908160_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n = tbl_Filter_TD_8908160_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _web_site_id538 = std::string(_web_site_id538_n.data());
            SW_JOIN_INNER_TD_7506229_payload_rightMajor payloadA{_web_site_sk537, _web_site_id538};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_898670_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wsr_web_site_sk8536_k = tbl_JOIN_INNER_TD_898670_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7506229_key_rightMajor{_wsr_web_site_sk8536_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _web_site_sk537 = (it->second)._web_site_sk537;
                std::string _web_site_id538 = (it->second)._web_site_id538;
                std::array<char, TPCDS_READ_MAX + 1> _web_site_id538_n{};
                memcpy(_web_site_id538_n.data(), (_web_site_id538).data(), (_web_site_id538).length());
                int32_t _wsr_web_site_sk8536 = tbl_JOIN_INNER_TD_898670_output.getInt32(i, 0);
                int64_t _sales_price8538 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 1);
                int64_t _profit8539 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 2);
                int64_t _return_amt8540 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 3);
                int64_t _net_loss8541 = tbl_JOIN_INNER_TD_898670_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_7506229_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _web_site_id538_n);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 0, _sales_price8538);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 1, _profit8539);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 2, _return_amt8540);
                tbl_JOIN_INNER_TD_7506229_output.setInt64(r, 3, _net_loss8541);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7506229_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7506229_output #Row: " << tbl_JOIN_INNER_TD_7506229_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7734937_key_leftMajor {
    int32_t _page_sk8520;
    bool operator==(const SW_JOIN_INNER_TD_7734937_key_leftMajor& other) const {
        return ((_page_sk8520 == other._page_sk8520));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7734937_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7734937_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._page_sk8520));
    }
};
}
struct SW_JOIN_INNER_TD_7734937_payload_leftMajor {
    int32_t _page_sk8520;
    int64_t _sales_price8522;
    int64_t _profit8523;
    int64_t _return_amt8524;
    int64_t _net_loss8525;
};
struct SW_JOIN_INNER_TD_7734937_key_rightMajor {
    int32_t _cp_catalog_page_sk996;
    bool operator==(const SW_JOIN_INNER_TD_7734937_key_rightMajor& other) const {
        return ((_cp_catalog_page_sk996 == other._cp_catalog_page_sk996));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7734937_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7734937_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cp_catalog_page_sk996));
    }
};
}
struct SW_JOIN_INNER_TD_7734937_payload_rightMajor {
    int32_t _cp_catalog_page_sk996;
    std::string _cp_catalog_page_id997;
};
void SW_JOIN_INNER_TD_7734937(Table &tbl_JOIN_INNER_TD_864901_output, Table &tbl_Filter_TD_8568976_output, Table &tbl_JOIN_INNER_TD_7734937_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((page_sk#8520 = cp_catalog_page_sk#996))
    // Left Table: ListBuffer(page_sk#8520, sales_price#8522, profit#8523, return_amt#8524, net_loss#8525)
    // Right Table: ListBuffer(cp_catalog_page_sk#996, cp_catalog_page_id#997)
    // Output Table: ListBuffer(sales_price#8522, profit#8523, return_amt#8524, net_loss#8525, cp_catalog_page_id#997)
    int left_nrow = tbl_JOIN_INNER_TD_864901_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8568976_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7734937_key_leftMajor, SW_JOIN_INNER_TD_7734937_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_864901_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _page_sk8520_k = tbl_JOIN_INNER_TD_864901_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7734937_key_leftMajor keyA{_page_sk8520_k};
            int32_t _page_sk8520 = tbl_JOIN_INNER_TD_864901_output.getInt32(i, 0);
            int64_t _sales_price8522 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 1);
            int64_t _profit8523 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 2);
            int64_t _return_amt8524 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 3);
            int64_t _net_loss8525 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_7734937_payload_leftMajor payloadA{_page_sk8520, _sales_price8522, _profit8523, _return_amt8524, _net_loss8525};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8568976_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_8568976_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7734937_key_leftMajor{_cp_catalog_page_sk996_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _page_sk8520 = (it->second)._page_sk8520;
                int64_t _sales_price8522 = (it->second)._sales_price8522;
                int64_t _profit8523 = (it->second)._profit8523;
                int64_t _return_amt8524 = (it->second)._return_amt8524;
                int64_t _net_loss8525 = (it->second)._net_loss8525;
                int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_8568976_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_8568976_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 0, _sales_price8522);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 1, _profit8523);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 2, _return_amt8524);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 3, _net_loss8525);
                tbl_JOIN_INNER_TD_7734937_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7734937_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7734937_key_rightMajor, SW_JOIN_INNER_TD_7734937_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8568976_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cp_catalog_page_sk996_k = tbl_Filter_TD_8568976_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7734937_key_rightMajor keyA{_cp_catalog_page_sk996_k};
            int32_t _cp_catalog_page_sk996 = tbl_Filter_TD_8568976_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n = tbl_Filter_TD_8568976_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _cp_catalog_page_id997 = std::string(_cp_catalog_page_id997_n.data());
            SW_JOIN_INNER_TD_7734937_payload_rightMajor payloadA{_cp_catalog_page_sk996, _cp_catalog_page_id997};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_864901_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _page_sk8520_k = tbl_JOIN_INNER_TD_864901_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7734937_key_rightMajor{_page_sk8520_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cp_catalog_page_sk996 = (it->second)._cp_catalog_page_sk996;
                std::string _cp_catalog_page_id997 = (it->second)._cp_catalog_page_id997;
                std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997_n{};
                memcpy(_cp_catalog_page_id997_n.data(), (_cp_catalog_page_id997).data(), (_cp_catalog_page_id997).length());
                int32_t _page_sk8520 = tbl_JOIN_INNER_TD_864901_output.getInt32(i, 0);
                int64_t _sales_price8522 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 1);
                int64_t _profit8523 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 2);
                int64_t _return_amt8524 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 3);
                int64_t _net_loss8525 = tbl_JOIN_INNER_TD_864901_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_7734937_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _cp_catalog_page_id997_n);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 0, _sales_price8522);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 1, _profit8523);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 2, _return_amt8524);
                tbl_JOIN_INNER_TD_7734937_output.setInt64(r, 3, _net_loss8525);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7734937_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7734937_output #Row: " << tbl_JOIN_INNER_TD_7734937_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_7305513_key_leftMajor {
    int32_t _store_sk8504;
    bool operator==(const SW_JOIN_INNER_TD_7305513_key_leftMajor& other) const {
        return ((_store_sk8504 == other._store_sk8504));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7305513_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7305513_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._store_sk8504));
    }
};
}
struct SW_JOIN_INNER_TD_7305513_payload_leftMajor {
    int32_t _store_sk8504;
    int64_t _sales_price8506;
    int64_t _profit8507;
    int64_t _return_amt8508;
    int64_t _net_loss8509;
};
struct SW_JOIN_INNER_TD_7305513_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_7305513_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_7305513_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_7305513_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_7305513_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_id379;
};
void SW_JOIN_INNER_TD_7305513(Table &tbl_JOIN_INNER_TD_8935998_output, Table &tbl_Filter_TD_8416531_output, Table &tbl_JOIN_INNER_TD_7305513_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((store_sk#8504 = s_store_sk#378))
    // Left Table: ListBuffer(store_sk#8504, sales_price#8506, profit#8507, return_amt#8508, net_loss#8509)
    // Right Table: ListBuffer(s_store_sk#378, s_store_id#379)
    // Output Table: ListBuffer(sales_price#8506, profit#8507, return_amt#8508, net_loss#8509, s_store_id#379)
    int left_nrow = tbl_JOIN_INNER_TD_8935998_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8416531_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7305513_key_leftMajor, SW_JOIN_INNER_TD_7305513_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_8935998_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _store_sk8504_k = tbl_JOIN_INNER_TD_8935998_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7305513_key_leftMajor keyA{_store_sk8504_k};
            int32_t _store_sk8504 = tbl_JOIN_INNER_TD_8935998_output.getInt32(i, 0);
            int64_t _sales_price8506 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 1);
            int64_t _profit8507 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 2);
            int64_t _return_amt8508 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 3);
            int64_t _net_loss8509 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 4);
            SW_JOIN_INNER_TD_7305513_payload_leftMajor payloadA{_store_sk8504, _sales_price8506, _profit8507, _return_amt8508, _net_loss8509};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_8416531_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_8416531_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7305513_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _store_sk8504 = (it->second)._store_sk8504;
                int64_t _sales_price8506 = (it->second)._sales_price8506;
                int64_t _profit8507 = (it->second)._profit8507;
                int64_t _return_amt8508 = (it->second)._return_amt8508;
                int64_t _net_loss8509 = (it->second)._net_loss8509;
                int32_t _s_store_sk378 = tbl_Filter_TD_8416531_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_8416531_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_id379 = std::string(_s_store_id379_n.data());
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 0, _sales_price8506);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 1, _profit8507);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 2, _return_amt8508);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 3, _net_loss8509);
                tbl_JOIN_INNER_TD_7305513_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7305513_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_7305513_key_rightMajor, SW_JOIN_INNER_TD_7305513_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8416531_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_8416531_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_7305513_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_8416531_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n = tbl_Filter_TD_8416531_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_id379 = std::string(_s_store_id379_n.data());
            SW_JOIN_INNER_TD_7305513_payload_rightMajor payloadA{_s_store_sk378, _s_store_id379};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_8935998_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _store_sk8504_k = tbl_JOIN_INNER_TD_8935998_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_7305513_key_rightMajor{_store_sk8504_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_id379 = (it->second)._s_store_id379;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_id379_n{};
                memcpy(_s_store_id379_n.data(), (_s_store_id379).data(), (_s_store_id379).length());
                int32_t _store_sk8504 = tbl_JOIN_INNER_TD_8935998_output.getInt32(i, 0);
                int64_t _sales_price8506 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 1);
                int64_t _profit8507 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 2);
                int64_t _return_amt8508 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 3);
                int64_t _net_loss8509 = tbl_JOIN_INNER_TD_8935998_output.getInt64(i, 4);
                tbl_JOIN_INNER_TD_7305513_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _s_store_id379_n);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 0, _sales_price8506);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 1, _profit8507);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 2, _return_amt8508);
                tbl_JOIN_INNER_TD_7305513_output.setInt64(r, 3, _net_loss8509);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_7305513_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_7305513_output #Row: " << tbl_JOIN_INNER_TD_7305513_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_68174_key;
struct SW_Aggregate_TD_68174_payload {
    int64_t _sales8548_sum_0;
    int64_t _returns8550_sum_1;
    int64_t _profit8500_sum_2;
    int64_t _profit8500_sum_3;
    std::string _channel8949;
    std::string _id8950;
};
void SW_Aggregate_TD_68174(Table &tbl_JOIN_INNER_TD_7506229_output, Table &tbl_Aggregate_TD_68174_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(web_site_id#538, MakeDecimal(sum(UnscaledValue(sales_price#8538)),17,2) AS sales#8548, MakeDecimal(sum(UnscaledValue(return_amt#8540)),17,2) AS returns#8550, CheckOverflow((promote_precision(cast(MakeDecimal(sum(UnscaledValue(profit#8539)),17,2) as decimal(18,2))) - promote_precision(cast(MakeDecimal(sum(UnscaledValue(net_loss#8541)),17,2) as decimal(18,2)))), DecimalType(18,2), true) AS profit#8500, web channel AS channel#8949, concat(web_site, web_site_id#538) AS id#8950)
    // Input: ListBuffer(sales_price#8538, profit#8539, return_amt#8540, net_loss#8541, web_site_id#538)
    // Output: ListBuffer(sales#8548, returns#8550, profit#8500, channel#8949, id#8950)
    std::unordered_map<SW_Aggregate_TD_68174_key, SW_Aggregate_TD_68174_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7506229_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales_price8538 = tbl_JOIN_INNER_TD_7506229_output.getInt64(i, 0);
        int64_t _profit8539 = tbl_JOIN_INNER_TD_7506229_output.getInt64(i, 1);
        int64_t _return_amt8540 = tbl_JOIN_INNER_TD_7506229_output.getInt64(i, 2);
        int64_t _net_loss8541 = tbl_JOIN_INNER_TD_7506229_output.getInt64(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _web_site_id538 = tbl_JOIN_INNER_TD_7506229_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_68174_key k = std::string(_web_site_id538.data());
        int64_t _sales8548_sum_0 = _sales_price8538;
        int64_t _returns8550_sum_1 = _return_amt8540;
        int64_t _profit8500_sum_2 = _profit8539;
        int64_t _profit8500_sum_3 = _net_loss8541;
        std::string _channel8949 = "web channel";
        std::string _id8950 = std::string("web_site").append(std::string(_web_site_id538.data()));
        SW_Aggregate_TD_68174_payload p{_sales8548_sum_0, _returns8550_sum_1, _profit8500_sum_2, _profit8500_sum_3, std::string(_channel8949.data()), std::string(_id8950.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales8548_sum_0 + _sales8548_sum_0;
            p._sales8548_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns8550_sum_1 + _returns8550_sum_1;
            p._returns8550_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit8500_sum_2 + _profit8500_sum_2;
            p._profit8500_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._profit8500_sum_3 + _profit8500_sum_3;
            p._profit8500_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _web_site_id538 not required in the output table
        int64_t _sales8548 = (it.second)._sales8548_sum_0;
        tbl_Aggregate_TD_68174_output.setInt64(r, 0, _sales8548);
        int64_t _returns8550 = (it.second)._returns8550_sum_1;
        tbl_Aggregate_TD_68174_output.setInt64(r, 1, _returns8550);
        int64_t _profit8500 = ((it.second)._profit8500_sum_2 - (it.second)._profit8500_sum_3);
        tbl_Aggregate_TD_68174_output.setInt64(r, 2, _profit8500);
        std::array<char, TPCDS_READ_MAX + 1> _channel8949_n{};
        memcpy(_channel8949_n.data(), (it.second)._channel8949.data(), (it.second)._channel8949.length());
        tbl_Aggregate_TD_68174_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8949_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8950_n{};
        memcpy(_id8950_n.data(), (it.second)._id8950.data(), (it.second)._id8950.length());
        tbl_Aggregate_TD_68174_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8950_n);
        ++r;
    }
    tbl_Aggregate_TD_68174_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_68174_output #Row: " << tbl_Aggregate_TD_68174_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6853031_key;
struct SW_Aggregate_TD_6853031_payload {
    int64_t _sales8532_sum_0;
    int64_t _returns8534_sum_1;
    int64_t _profit8497_sum_2;
    int64_t _profit8497_sum_3;
    std::string _channel8947;
    std::string _id8948;
};
void SW_Aggregate_TD_6853031(Table &tbl_JOIN_INNER_TD_7734937_output, Table &tbl_Aggregate_TD_6853031_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(cp_catalog_page_id#997, MakeDecimal(sum(UnscaledValue(sales_price#8522)),17,2) AS sales#8532, MakeDecimal(sum(UnscaledValue(return_amt#8524)),17,2) AS returns#8534, CheckOverflow((promote_precision(cast(MakeDecimal(sum(UnscaledValue(profit#8523)),17,2) as decimal(18,2))) - promote_precision(cast(MakeDecimal(sum(UnscaledValue(net_loss#8525)),17,2) as decimal(18,2)))), DecimalType(18,2), true) AS profit#8497, catalog channel AS channel#8947, concat(catalog_page, cp_catalog_page_id#997) AS id#8948)
    // Input: ListBuffer(sales_price#8522, profit#8523, return_amt#8524, net_loss#8525, cp_catalog_page_id#997)
    // Output: ListBuffer(sales#8532, returns#8534, profit#8497, channel#8947, id#8948)
    std::unordered_map<SW_Aggregate_TD_6853031_key, SW_Aggregate_TD_6853031_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7734937_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales_price8522 = tbl_JOIN_INNER_TD_7734937_output.getInt64(i, 0);
        int64_t _profit8523 = tbl_JOIN_INNER_TD_7734937_output.getInt64(i, 1);
        int64_t _return_amt8524 = tbl_JOIN_INNER_TD_7734937_output.getInt64(i, 2);
        int64_t _net_loss8525 = tbl_JOIN_INNER_TD_7734937_output.getInt64(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _cp_catalog_page_id997 = tbl_JOIN_INNER_TD_7734937_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6853031_key k = std::string(_cp_catalog_page_id997.data());
        int64_t _sales8532_sum_0 = _sales_price8522;
        int64_t _returns8534_sum_1 = _return_amt8524;
        int64_t _profit8497_sum_2 = _profit8523;
        int64_t _profit8497_sum_3 = _net_loss8525;
        std::string _channel8947 = "catalog channel";
        std::string _id8948 = std::string("catalog_page").append(std::string(_cp_catalog_page_id997.data()));
        SW_Aggregate_TD_6853031_payload p{_sales8532_sum_0, _returns8534_sum_1, _profit8497_sum_2, _profit8497_sum_3, std::string(_channel8947.data()), std::string(_id8948.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales8532_sum_0 + _sales8532_sum_0;
            p._sales8532_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns8534_sum_1 + _returns8534_sum_1;
            p._returns8534_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit8497_sum_2 + _profit8497_sum_2;
            p._profit8497_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._profit8497_sum_3 + _profit8497_sum_3;
            p._profit8497_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _cp_catalog_page_id997 not required in the output table
        int64_t _sales8532 = (it.second)._sales8532_sum_0;
        tbl_Aggregate_TD_6853031_output.setInt64(r, 0, _sales8532);
        int64_t _returns8534 = (it.second)._returns8534_sum_1;
        tbl_Aggregate_TD_6853031_output.setInt64(r, 1, _returns8534);
        int64_t _profit8497 = ((it.second)._profit8497_sum_2 - (it.second)._profit8497_sum_3);
        tbl_Aggregate_TD_6853031_output.setInt64(r, 2, _profit8497);
        std::array<char, TPCDS_READ_MAX + 1> _channel8947_n{};
        memcpy(_channel8947_n.data(), (it.second)._channel8947.data(), (it.second)._channel8947.length());
        tbl_Aggregate_TD_6853031_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8947_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8948_n{};
        memcpy(_id8948_n.data(), (it.second)._id8948.data(), (it.second)._id8948.length());
        tbl_Aggregate_TD_6853031_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8948_n);
        ++r;
    }
    tbl_Aggregate_TD_6853031_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6853031_output #Row: " << tbl_Aggregate_TD_6853031_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6377967_key;
struct SW_Aggregate_TD_6377967_payload {
    int64_t _sales8516_sum_0;
    int64_t _returns8518_sum_1;
    int64_t _profit8494_sum_2;
    int64_t _profit8494_sum_3;
    std::string _channel8657;
    std::string _id8658;
};
void SW_Aggregate_TD_6377967(Table &tbl_JOIN_INNER_TD_7305513_output, Table &tbl_Aggregate_TD_6377967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_id#379, MakeDecimal(sum(UnscaledValue(sales_price#8506)),17,2) AS sales#8516, MakeDecimal(sum(UnscaledValue(return_amt#8508)),17,2) AS returns#8518, CheckOverflow((promote_precision(cast(MakeDecimal(sum(UnscaledValue(profit#8507)),17,2) as decimal(18,2))) - promote_precision(cast(MakeDecimal(sum(UnscaledValue(net_loss#8509)),17,2) as decimal(18,2)))), DecimalType(18,2), true) AS profit#8494, store channel AS channel#8657, concat(store, s_store_id#379) AS id#8658)
    // Input: ListBuffer(sales_price#8506, profit#8507, return_amt#8508, net_loss#8509, s_store_id#379)
    // Output: ListBuffer(sales#8516, returns#8518, profit#8494, channel#8657, id#8658)
    std::unordered_map<SW_Aggregate_TD_6377967_key, SW_Aggregate_TD_6377967_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_7305513_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales_price8506 = tbl_JOIN_INNER_TD_7305513_output.getInt64(i, 0);
        int64_t _profit8507 = tbl_JOIN_INNER_TD_7305513_output.getInt64(i, 1);
        int64_t _return_amt8508 = tbl_JOIN_INNER_TD_7305513_output.getInt64(i, 2);
        int64_t _net_loss8509 = tbl_JOIN_INNER_TD_7305513_output.getInt64(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_id379 = tbl_JOIN_INNER_TD_7305513_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        SW_Aggregate_TD_6377967_key k = std::string(_s_store_id379.data());
        int64_t _sales8516_sum_0 = _sales_price8506;
        int64_t _returns8518_sum_1 = _return_amt8508;
        int64_t _profit8494_sum_2 = _profit8507;
        int64_t _profit8494_sum_3 = _net_loss8509;
        std::string _channel8657 = "store channel";
        std::string _id8658 = std::string("store").append(std::string(_s_store_id379.data()));
        SW_Aggregate_TD_6377967_payload p{_sales8516_sum_0, _returns8518_sum_1, _profit8494_sum_2, _profit8494_sum_3, std::string(_channel8657.data()), std::string(_id8658.data())};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales8516_sum_0 + _sales8516_sum_0;
            p._sales8516_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns8518_sum_1 + _returns8518_sum_1;
            p._returns8518_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit8494_sum_2 + _profit8494_sum_2;
            p._profit8494_sum_2 = sum_2;
            int64_t sum_3 = (it->second)._profit8494_sum_3 + _profit8494_sum_3;
            p._profit8494_sum_3 = sum_3;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _s_store_id379 not required in the output table
        int64_t _sales8516 = (it.second)._sales8516_sum_0;
        tbl_Aggregate_TD_6377967_output.setInt64(r, 0, _sales8516);
        int64_t _returns8518 = (it.second)._returns8518_sum_1;
        tbl_Aggregate_TD_6377967_output.setInt64(r, 1, _returns8518);
        int64_t _profit8494 = ((it.second)._profit8494_sum_2 - (it.second)._profit8494_sum_3);
        tbl_Aggregate_TD_6377967_output.setInt64(r, 2, _profit8494);
        std::array<char, TPCDS_READ_MAX + 1> _channel8657_n{};
        memcpy(_channel8657_n.data(), (it.second)._channel8657.data(), (it.second)._channel8657.length());
        tbl_Aggregate_TD_6377967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8657_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8658_n{};
        memcpy(_id8658_n.data(), (it.second)._id8658.data(), (it.second)._id8658.length());
        tbl_Aggregate_TD_6377967_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8658_n);
        ++r;
    }
    tbl_Aggregate_TD_6377967_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6377967_output #Row: " << tbl_Aggregate_TD_6377967_output.getNumRow() << std::endl;
}

void SW_Union_TD_5500647(Table &tbl_Aggregate_TD_6377967_output, Table &tbl_Aggregate_TD_6853031_output, Table &tbl_Aggregate_TD_68174_output, Table &tbl_Union_TD_5500647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#8516, returns#8518, profit#8494, channel#8657, id#8658)
    int r = 0;
    int row0 = tbl_Aggregate_TD_6377967_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5500647_output.setInt32(r, 0, tbl_Aggregate_TD_6377967_output.getInt64(i, 0));
        tbl_Union_TD_5500647_output.setInt32(r, 1, tbl_Aggregate_TD_6377967_output.getInt64(i, 1));
        tbl_Union_TD_5500647_output.setInt32(r, 2, tbl_Aggregate_TD_6377967_output.getInt64(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8657_n = tbl_Union_TD_5500647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5500647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8657_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8658_n = tbl_Union_TD_5500647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5500647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8658_n);
        ++r;
    }
    int row1 = tbl_Aggregate_TD_6853031_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5500647_output.setInt32(r, 0, tbl_Aggregate_TD_6853031_output.getInt64(i, 0));
        tbl_Union_TD_5500647_output.setInt32(r, 1, tbl_Aggregate_TD_6853031_output.getInt64(i, 1));
        tbl_Union_TD_5500647_output.setInt32(r, 2, tbl_Aggregate_TD_6853031_output.getInt64(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8947_n = tbl_Union_TD_5500647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5500647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8947_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8948_n = tbl_Union_TD_5500647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5500647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8948_n);
        ++r;
    }
    int row2 = tbl_Aggregate_TD_68174_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5500647_output.setInt32(r, 0, tbl_Aggregate_TD_68174_output.getInt64(i, 0));
        tbl_Union_TD_5500647_output.setInt32(r, 1, tbl_Aggregate_TD_68174_output.getInt64(i, 1));
        tbl_Union_TD_5500647_output.setInt32(r, 2, tbl_Aggregate_TD_68174_output.getInt64(i, 2));
        std::array<char, TPCDS_READ_MAX + 1> _channel8949_n = tbl_Union_TD_5500647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        tbl_Union_TD_5500647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 3, _channel8949_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8950_n = tbl_Union_TD_5500647_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        tbl_Union_TD_5500647_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 4, _id8950_n);
        ++r;
    }
    tbl_Union_TD_5500647_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5500647_output #Row: " << tbl_Union_TD_5500647_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4641929(Table &tbl_Union_TD_5500647_output, Table &tbl_Expand_TD_4641929_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#8516, returns#8518, profit#8494, channel#8657, id#8658)
    // Output: ListBuffer(sales#8516, returns#8518, profit#8494, channel#8660, id#8661, spark_grouping_id#8659L)
    std::cout << "tbl_Expand_TD_4641929_output #Row: " << tbl_Expand_TD_4641929_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3469911_key {
    std::string _channel8660;
    std::string _id8661;
    int64_t _spark_grouping_id8659L;
    bool operator==(const SW_Aggregate_TD_3469911_key& other) const { return (_channel8660 == other._channel8660) && (_id8661 == other._id8661) && (_spark_grouping_id8659L == other._spark_grouping_id8659L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3469911_key> {
    std::size_t operator() (const SW_Aggregate_TD_3469911_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel8660)) + (hash<string>()(k._id8661)) + (hash<int64_t>()(k._spark_grouping_id8659L));
    }
};
}
struct SW_Aggregate_TD_3469911_payload {
    int64_t _sales8501_sum_0;
    int64_t _returns8502_sum_1;
    int64_t _profit8503_sum_2;
};
void SW_Aggregate_TD_3469911(Table &tbl_Expand_TD_4641929_output, Table &tbl_Aggregate_TD_3469911_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#8660, id#8661, spark_grouping_id#8659L, sum(sales#8516) AS sales#8501, sum(returns#8518) AS returns#8502, sum(profit#8494) AS profit#8503)
    // Input: ListBuffer(sales#8516, returns#8518, profit#8494, channel#8660, id#8661, spark_grouping_id#8659L)
    // Output: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    std::unordered_map<SW_Aggregate_TD_3469911_key, SW_Aggregate_TD_3469911_payload> ht1;
    int nrow1 = tbl_Expand_TD_4641929_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _sales8516 = tbl_Expand_TD_4641929_output.getInt64(i, 0);
        int64_t _returns8518 = tbl_Expand_TD_4641929_output.getInt64(i, 1);
        int64_t _profit8494 = tbl_Expand_TD_4641929_output.getInt64(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _channel8660 = tbl_Expand_TD_4641929_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _id8661 = tbl_Expand_TD_4641929_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        int64_t _spark_grouping_id8659L = tbl_Expand_TD_4641929_output.getInt64(i, 5);
        SW_Aggregate_TD_3469911_key k{std::string(_channel8660.data()), std::string(_id8661.data()), _spark_grouping_id8659L};
        int64_t _sales8501_sum_0 = _sales8516;
        int64_t _returns8502_sum_1 = _returns8518;
        int64_t _profit8503_sum_2 = _profit8494;
        SW_Aggregate_TD_3469911_payload p{_sales8501_sum_0, _returns8502_sum_1, _profit8503_sum_2};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sales8501_sum_0 + _sales8501_sum_0;
            p._sales8501_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._returns8502_sum_1 + _returns8502_sum_1;
            p._returns8502_sum_1 = sum_1;
            int64_t sum_2 = (it->second)._profit8503_sum_2 + _profit8503_sum_2;
            p._profit8503_sum_2 = sum_2;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8660{};
        memcpy(_channel8660.data(), ((it.first)._channel8660).data(), ((it.first)._channel8660).length());
        tbl_Aggregate_TD_3469911_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8660);
        std::array<char, TPCDS_READ_MAX + 1> _id8661{};
        memcpy(_id8661.data(), ((it.first)._id8661).data(), ((it.first)._id8661).length());
        tbl_Aggregate_TD_3469911_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8661);
        // _spark_grouping_id8659L not required in the output table
        int64_t _sales8501 = (it.second)._sales8501_sum_0;
        tbl_Aggregate_TD_3469911_output.setInt64(r, 2, _sales8501);
        int64_t _returns8502 = (it.second)._returns8502_sum_1;
        tbl_Aggregate_TD_3469911_output.setInt64(r, 3, _returns8502);
        int64_t _profit8503 = (it.second)._profit8503_sum_2;
        tbl_Aggregate_TD_3469911_output.setInt64(r, 4, _profit8503);
        ++r;
    }
    tbl_Aggregate_TD_3469911_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3469911_output #Row: " << tbl_Aggregate_TD_3469911_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2698032(Table &tbl_Aggregate_TD_3469911_output, Table &tbl_Sort_TD_2698032_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#8660 ASC NULLS FIRST, id#8661 ASC NULLS FIRST)
    // Input: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    // Output: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    struct SW_Sort_TD_2698032Row {
        std::string _channel8660;
        std::string _id8661;
        int64_t _sales8501;
        int64_t _returns8502;
        int64_t _profit8503;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2698032Row& a, const SW_Sort_TD_2698032Row& b) const { return 
 (a._channel8660 < b._channel8660) || 
 ((a._channel8660 == b._channel8660) && (a._id8661 < b._id8661)); 
}
    }SW_Sort_TD_2698032_order; 

    int nrow1 = tbl_Aggregate_TD_3469911_output.getNumRow();
    std::vector<SW_Sort_TD_2698032Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8660 = tbl_Aggregate_TD_3469911_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _id8661 = tbl_Aggregate_TD_3469911_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        int64_t _sales8501 = tbl_Aggregate_TD_3469911_output.getInt64(i, 2);
        int64_t _returns8502 = tbl_Aggregate_TD_3469911_output.getInt64(i, 3);
        int64_t _profit8503 = tbl_Aggregate_TD_3469911_output.getInt64(i, 4);
        SW_Sort_TD_2698032Row t = {std::string(_channel8660.data()),std::string(_id8661.data()),_sales8501,_returns8502,_profit8503};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2698032_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8660{};
        memcpy(_channel8660.data(), (it._channel8660).data(), (it._channel8660).length());
        tbl_Sort_TD_2698032_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel8660);
        std::array<char, TPCDS_READ_MAX + 1> _id8661{};
        memcpy(_id8661.data(), (it._id8661).data(), (it._id8661).length());
        tbl_Sort_TD_2698032_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _id8661);
        tbl_Sort_TD_2698032_output.setInt64(r, 2, it._sales8501);
        tbl_Sort_TD_2698032_output.setInt64(r, 3, it._returns8502);
        tbl_Sort_TD_2698032_output.setInt64(r, 4, it._profit8503);
        ++r;
    }
    tbl_Sort_TD_2698032_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2698032_output #Row: " << tbl_Sort_TD_2698032_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1340039(Table &tbl_Sort_TD_2698032_output, Table &tbl_LocalLimit_TD_1340039_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    // Output: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8660_n = tbl_Sort_TD_2698032_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1340039_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8660_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8661_n = tbl_Sort_TD_2698032_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1340039_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8661_n);
        tbl_LocalLimit_TD_1340039_output.setInt64(r, 2, tbl_Sort_TD_2698032_output.getInt64(i, 2));
        tbl_LocalLimit_TD_1340039_output.setInt64(r, 3, tbl_Sort_TD_2698032_output.getInt64(i, 3));
        tbl_LocalLimit_TD_1340039_output.setInt64(r, 4, tbl_Sort_TD_2698032_output.getInt64(i, 4));
        r++;
    }
    tbl_LocalLimit_TD_1340039_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1340039_output #Row: " << tbl_LocalLimit_TD_1340039_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_042503(Table &tbl_LocalLimit_TD_1340039_output, Table &tbl_GlobalLimit_TD_042503_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    // Output: ListBuffer(channel#8660, id#8661, sales#8501, returns#8502, profit#8503)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel8660_n = tbl_LocalLimit_TD_1340039_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_042503_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel8660_n);
        std::array<char, TPCDS_READ_MAX + 1> _id8661_n = tbl_LocalLimit_TD_1340039_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_042503_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _id8661_n);
        tbl_GlobalLimit_TD_042503_output.setInt64(r, 2, tbl_LocalLimit_TD_1340039_output.getInt64(i, 2));
        tbl_GlobalLimit_TD_042503_output.setInt64(r, 3, tbl_LocalLimit_TD_1340039_output.getInt64(i, 3));
        tbl_GlobalLimit_TD_042503_output.setInt64(r, 4, tbl_LocalLimit_TD_1340039_output.getInt64(i, 4));
        r++;
    }
    tbl_GlobalLimit_TD_042503_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_042503_output #Row: " << tbl_GlobalLimit_TD_042503_output.getNumRow() << std::endl;
}

