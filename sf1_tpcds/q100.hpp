#include <regex> 
#include <stdint.h> 

void SW_Aggregate_TD_011(Table &tbl_SerializeFromObject_TD_1104_input, Table &tbl_Aggregate_TD_011_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS total#3544L, count(ss_sold_date_sk#1206) AS not_null_total#3545L, count(ss_sold_date_sk#1206) AS unique_days#3546L, max(ss_sold_date_sk#1206) AS max_ss_sold_date_sk#3547, max(ss_sold_time_sk#1207) AS max_ss_sold_time_sk#3548, max(ss_item_sk#1208) AS max_ss_item_sk#3549, max(ss_customer_sk#1209) AS max_ss_customer_sk#3550, max(ss_cdemo_sk#1210) AS max_ss_cdemo_sk#3551, max(ss_hdemo_sk#1211) AS max_ss_hdemo_sk#3552, max(ss_addr_sk#1212) AS max_ss_addr_sk#3553, max(ss_store_sk#1213) AS max_ss_store_sk#3554, max(ss_promo_sk#1214) AS max_ss_promo_sk#3555)
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_sold_time_sk#1207, ss_item_sk#1208, ss_customer_sk#1209, ss_cdemo_sk#1210, ss_hdemo_sk#1211, ss_addr_sk#1212, ss_store_sk#1213, ss_promo_sk#1214)
    // Output: ListBuffer(total#3544L, not_null_total#3545L, unique_days#3546L, max_ss_sold_date_sk#3547, max_ss_sold_time_sk#3548, max_ss_item_sk#3549, max_ss_customer_sk#3550, max_ss_cdemo_sk#3551, max_ss_hdemo_sk#3552, max_ss_addr_sk#3553, max_ss_store_sk#3554, max_ss_promo_sk#3555)
    int64_t count_0 = 0;
    int64_t count_1 = 0;
    int64_t count_2 = 0;
    int32_t max_3 = 0;
    int32_t max_4 = 0;
    int32_t max_5 = 0;
    int32_t max_6 = 0;
    int32_t max_7 = 0;
    int32_t max_8 = 0;
    int32_t max_9 = 0;
    int32_t max_10 = 0;
    int32_t max_11 = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1104_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 0);
        int32_t _ss_sold_time_sk1207 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 1);
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 2);
        int32_t _ss_customer_sk1209 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 3);
        int32_t _ss_cdemo_sk1210 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 4);
        int32_t _ss_hdemo_sk1211 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 5);
        int32_t _ss_addr_sk1212 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 6);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 7);
        int32_t _ss_promo_sk1214 = tbl_SerializeFromObject_TD_1104_input.getInt32(i, 8);
        int64_t _total3544L_count_0 = 1;
        int64_t _not_null_total3545L_count_1 = _ss_sold_date_sk1206;
        int64_t _unique_days3546L_count_2 = _ss_sold_date_sk1206;
        int32_t _max_ss_sold_date_sk3547_max_3 = _ss_sold_date_sk1206;
        int32_t _max_ss_sold_time_sk3548_max_4 = _ss_sold_time_sk1207;
        int32_t _max_ss_item_sk3549_max_5 = _ss_item_sk1208;
        int32_t _max_ss_customer_sk3550_max_6 = _ss_customer_sk1209;
        int32_t _max_ss_cdemo_sk3551_max_7 = _ss_cdemo_sk1210;
        int32_t _max_ss_hdemo_sk3552_max_8 = _ss_hdemo_sk1211;
        int32_t _max_ss_addr_sk3553_max_9 = _ss_addr_sk1212;
        int32_t _max_ss_store_sk3554_max_10 = _ss_store_sk1213;
        int32_t _max_ss_promo_sk3555_max_11 = _ss_promo_sk1214;
        count_0 += _total3544L_count_0;
        count_1 += _not_null_total3545L_count_1;
        count_2 += _unique_days3546L_count_2;
        max_3 = max_3 < _max_ss_sold_date_sk3547_max_3 ? _max_ss_sold_date_sk3547_max_3 : max_3;
        max_4 = max_4 < _max_ss_sold_time_sk3548_max_4 ? _max_ss_sold_time_sk3548_max_4 : max_4;
        max_5 = max_5 < _max_ss_item_sk3549_max_5 ? _max_ss_item_sk3549_max_5 : max_5;
        max_6 = max_6 < _max_ss_customer_sk3550_max_6 ? _max_ss_customer_sk3550_max_6 : max_6;
        max_7 = max_7 < _max_ss_cdemo_sk3551_max_7 ? _max_ss_cdemo_sk3551_max_7 : max_7;
        max_8 = max_8 < _max_ss_hdemo_sk3552_max_8 ? _max_ss_hdemo_sk3552_max_8 : max_8;
        max_9 = max_9 < _max_ss_addr_sk3553_max_9 ? _max_ss_addr_sk3553_max_9 : max_9;
        max_10 = max_10 < _max_ss_store_sk3554_max_10 ? _max_ss_store_sk3554_max_10 : max_10;
        max_11 = max_11 < _max_ss_promo_sk3555_max_11 ? _max_ss_promo_sk3555_max_11 : max_11;
    }
    int r = 0;
    int64_t _total3544L = count_0;
    tbl_Aggregate_TD_011_output.setInt64(r++, 0, _total3544L);
    int64_t _not_null_total3545L = count_1;
    tbl_Aggregate_TD_011_output.setInt64(r++, 1, _not_null_total3545L);
    int64_t _unique_days3546L = count_2;
    tbl_Aggregate_TD_011_output.setInt64(r++, 2, _unique_days3546L);
    int32_t _max_ss_sold_date_sk3547 = max_3;
    tbl_Aggregate_TD_011_output.setInt32(r++, 3, _max_ss_sold_date_sk3547);
    int32_t _max_ss_sold_time_sk3548 = max_4;
    tbl_Aggregate_TD_011_output.setInt32(r++, 4, _max_ss_sold_time_sk3548);
    int32_t _max_ss_item_sk3549 = max_5;
    tbl_Aggregate_TD_011_output.setInt32(r++, 5, _max_ss_item_sk3549);
    int32_t _max_ss_customer_sk3550 = max_6;
    tbl_Aggregate_TD_011_output.setInt32(r++, 6, _max_ss_customer_sk3550);
    int32_t _max_ss_cdemo_sk3551 = max_7;
    tbl_Aggregate_TD_011_output.setInt32(r++, 7, _max_ss_cdemo_sk3551);
    int32_t _max_ss_hdemo_sk3552 = max_8;
    tbl_Aggregate_TD_011_output.setInt32(r++, 8, _max_ss_hdemo_sk3552);
    int32_t _max_ss_addr_sk3553 = max_9;
    tbl_Aggregate_TD_011_output.setInt32(r++, 9, _max_ss_addr_sk3553);
    int32_t _max_ss_store_sk3554 = max_10;
    tbl_Aggregate_TD_011_output.setInt32(r++, 10, _max_ss_store_sk3554);
    int32_t _max_ss_promo_sk3555 = max_11;
    tbl_Aggregate_TD_011_output.setInt32(r++, 11, _max_ss_promo_sk3555);
    tbl_Aggregate_TD_011_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_011_output #Row: " << tbl_Aggregate_TD_011_output.getNumRow() << std::endl;
}

