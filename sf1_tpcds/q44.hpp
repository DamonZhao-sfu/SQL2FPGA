#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_11415172(Table &tbl_SerializeFromObject_TD_12337282_input, Table &tbl_Filter_TD_11415172_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#3641) AND ((ss_store_sk#3641 = 4) AND isnull(ss_addr_sk#3640))))
    // Input: ListBuffer(ss_store_sk#3641, ss_net_profit#3656, ss_addr_sk#3640)
    // Output: ListBuffer(ss_store_sk#3641, ss_net_profit#3656)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12337282_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3641 = tbl_SerializeFromObject_TD_12337282_input.getInt32(i, 0);
        int32_t _ss_addr_sk3640 = tbl_SerializeFromObject_TD_12337282_input.getInt32(i, 2);
        if ((_ss_store_sk3641!= 0) && ((_ss_store_sk3641 == 4) && (_ss_addr_sk3640 == 0))) {
            int32_t _ss_store_sk3641_t = tbl_SerializeFromObject_TD_12337282_input.getInt32(i, 0);
            tbl_Filter_TD_11415172_output.setInt32(r, 0, _ss_store_sk3641_t);
            int64_t _ss_net_profit3656_t = tbl_SerializeFromObject_TD_12337282_input.getInt64(i, 1);
            tbl_Filter_TD_11415172_output.setInt64(r, 1, _ss_net_profit3656_t);
            r++;
        }
    }
    tbl_Filter_TD_11415172_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11415172_output #Row: " << tbl_Filter_TD_11415172_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11198664(Table &tbl_SerializeFromObject_TD_12531289_input, Table &tbl_Filter_TD_11198664_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#3563) AND (ss_store_sk#3563 = 4)))
    // Input: ListBuffer(ss_item_sk#3558, ss_net_profit#3578, ss_store_sk#3563)
    // Output: ListBuffer(ss_item_sk#3558, ss_net_profit#3578)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12531289_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3563 = tbl_SerializeFromObject_TD_12531289_input.getInt32(i, 2);
        if ((_ss_store_sk3563!= 0) && (_ss_store_sk3563 == 4)) {
            int32_t _ss_item_sk3558_t = tbl_SerializeFromObject_TD_12531289_input.getInt32(i, 0);
            tbl_Filter_TD_11198664_output.setInt32(r, 0, _ss_item_sk3558_t);
            int64_t _ss_net_profit3578_t = tbl_SerializeFromObject_TD_12531289_input.getInt64(i, 1);
            tbl_Filter_TD_11198664_output.setInt64(r, 1, _ss_net_profit3578_t);
            r++;
        }
    }
    tbl_Filter_TD_11198664_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11198664_output #Row: " << tbl_Filter_TD_11198664_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11397913(Table &tbl_SerializeFromObject_TD_12651205_input, Table &tbl_Filter_TD_11397913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#3618) AND ((ss_store_sk#3618 = 4) AND isnull(ss_addr_sk#3617))))
    // Input: ListBuffer(ss_store_sk#3618, ss_net_profit#3633, ss_addr_sk#3617)
    // Output: ListBuffer(ss_store_sk#3618, ss_net_profit#3633)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12651205_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk3618 = tbl_SerializeFromObject_TD_12651205_input.getInt32(i, 0);
        int32_t _ss_addr_sk3617 = tbl_SerializeFromObject_TD_12651205_input.getInt32(i, 2);
        if ((_ss_store_sk3618!= 0) && ((_ss_store_sk3618 == 4) && (_ss_addr_sk3617 == 0))) {
            int32_t _ss_store_sk3618_t = tbl_SerializeFromObject_TD_12651205_input.getInt32(i, 0);
            tbl_Filter_TD_11397913_output.setInt32(r, 0, _ss_store_sk3618_t);
            int64_t _ss_net_profit3633_t = tbl_SerializeFromObject_TD_12651205_input.getInt64(i, 1);
            tbl_Filter_TD_11397913_output.setInt64(r, 1, _ss_net_profit3633_t);
            r++;
        }
    }
    tbl_Filter_TD_11397913_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11397913_output #Row: " << tbl_Filter_TD_11397913_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11894274(Table &tbl_SerializeFromObject_TD_12403901_input, Table &tbl_Filter_TD_11894274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#1213) AND (ss_store_sk#1213 = 4)))
    // Input: ListBuffer(ss_item_sk#1208, ss_net_profit#1228, ss_store_sk#1213)
    // Output: ListBuffer(ss_item_sk#1208, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12403901_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12403901_input.getInt32(i, 2);
        if ((_ss_store_sk1213!= 0) && (_ss_store_sk1213 == 4)) {
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_12403901_input.getInt32(i, 0);
            tbl_Filter_TD_11894274_output.setInt32(r, 0, _ss_item_sk1208_t);
            int64_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12403901_input.getInt64(i, 1);
            tbl_Filter_TD_11894274_output.setInt64(r, 1, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_11894274_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11894274_output #Row: " << tbl_Filter_TD_11894274_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_10418601_consolidate(Table &tbl_Aggregate_TD_10418601_output_preprocess, Table &tbl_Aggregate_TD_10418601_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_10418601_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _rank_col3551 = tbl_Aggregate_TD_10418601_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_10418601_output.setInt64(r, 0, _rank_col3551);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_10418601_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_10418601_output #Row: " << tbl_Aggregate_TD_10418601_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10881817_key;
struct SW_Aggregate_TD_10881817_payload {
    int32_t _item_sk3549;
    int64_t _rank_col3550_avg_0;
};
void SW_Aggregate_TD_10881817(Table &tbl_Filter_TD_11198664_output, Table &tbl_Aggregate_TD_10881817_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#3558, ss_item_sk#3558 AS item_sk#3549, cast((avg(UnscaledValue(ss_net_profit#3578)) / 100.0) as decimal(11,6)) AS rank_col#3550)
    // Input: ListBuffer(ss_item_sk#3558, ss_net_profit#3578)
    // Output: ListBuffer(item_sk#3549, rank_col#3550)
    std::unordered_map<SW_Aggregate_TD_10881817_key, SW_Aggregate_TD_10881817_payload> ht1;
    int nrow1 = tbl_Filter_TD_11198664_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk3558 = tbl_Filter_TD_11198664_output.getInt32(i, 0);
        int64_t _ss_net_profit3578 = tbl_Filter_TD_11198664_output.getInt64(i, 1);
        SW_Aggregate_TD_10881817_key k = _ss_item_sk3558;
        int32_t _item_sk3549 = _ss_item_sk3558;
        int64_t _rank_col3550_avg_0 = _ss_net_profit3578;
        SW_Aggregate_TD_10881817_payload p{_item_sk3549, _rank_col3550_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._rank_col3550_avg_0 + _rank_col3550_avg_0);
            p._rank_col3550_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk3558 not required in the output table
        tbl_Aggregate_TD_10881817_output.setInt32(r, 0, (it.second)._item_sk3549);
        int64_t _rank_col3550 = ((it.second)._rank_col3550_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_10881817_output.setInt64(r, 1, _rank_col3550);
        ++r;
    }
    tbl_Aggregate_TD_10881817_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10881817_output #Row: " << tbl_Aggregate_TD_10881817_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_10169659_consolidate(Table &tbl_Aggregate_TD_10169659_output_preprocess, Table &tbl_Aggregate_TD_10169659_output) {
    int nrow = 0;
    int nrow_p = tbl_Aggregate_TD_10169659_output_preprocess.getNumRow();
    for (int r(0); r<nrow_p; ++r) {
        int64_t _rank_col3546 = tbl_Aggregate_TD_10169659_output_preprocess.combineInt64(r, 8, 0);
        tbl_Aggregate_TD_10169659_output.setInt64(r, 0, _rank_col3546);
    }
    nrow += nrow_p;
    tbl_Aggregate_TD_10169659_output.setNumRow(nrow);
    std::cout << "tbl_Aggregate_TD_10169659_output #Row: " << tbl_Aggregate_TD_10169659_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10258077_key;
struct SW_Aggregate_TD_10258077_payload {
    int32_t _item_sk3544;
    int64_t _rank_col3545_avg_0;
};
void SW_Aggregate_TD_10258077(Table &tbl_Filter_TD_11894274_output, Table &tbl_Aggregate_TD_10258077_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, ss_item_sk#1208 AS item_sk#3544, cast((avg(UnscaledValue(ss_net_profit#1228)) / 100.0) as decimal(11,6)) AS rank_col#3545)
    // Input: ListBuffer(ss_item_sk#1208, ss_net_profit#1228)
    // Output: ListBuffer(item_sk#3544, rank_col#3545)
    std::unordered_map<SW_Aggregate_TD_10258077_key, SW_Aggregate_TD_10258077_payload> ht1;
    int nrow1 = tbl_Filter_TD_11894274_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_Filter_TD_11894274_output.getInt32(i, 0);
        int64_t _ss_net_profit1228 = tbl_Filter_TD_11894274_output.getInt64(i, 1);
        SW_Aggregate_TD_10258077_key k = _ss_item_sk1208;
        int32_t _item_sk3544 = _ss_item_sk1208;
        int64_t _rank_col3545_avg_0 = _ss_net_profit1228;
        SW_Aggregate_TD_10258077_payload p{_item_sk3544, _rank_col3545_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._rank_col3545_avg_0 + _rank_col3545_avg_0);
            p._rank_col3545_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_10258077_output.setInt32(r, 0, (it.second)._item_sk3544);
        int64_t _rank_col3545 = ((it.second)._rank_col3545_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_10258077_output.setInt64(r, 1, _rank_col3545);
        ++r;
    }
    tbl_Aggregate_TD_10258077_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10258077_output #Row: " << tbl_Aggregate_TD_10258077_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9311402(Table &tbl_Aggregate_TD_10881817_output, Table &tbl_Aggregate_TD_10418601_output, Table &tbl_Filter_TD_9311402_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(rank_col#3550) AND (cast(rank_col#3550 as decimal(13,7)) > CheckOverflow((0.900000 * promote_precision(scalar-subquery#3552 [])), DecimalType(13,7), true))))
    // Input: ListBuffer(item_sk#3549, rank_col#3550)
    // Output: ListBuffer(item_sk#3549, rank_col#3550)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10881817_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _rank_col3550 = tbl_Aggregate_TD_10881817_output.getInt64(i, 1);
        if ((_rank_col3550!= 0) && (_rank_col3550 > (0.900000 * tbl_Aggregate_TD_10418601_output.getInt32(0, 0)))) {
            int32_t _item_sk3549_t = tbl_Aggregate_TD_10881817_output.getInt32(i, 0);
            tbl_Filter_TD_9311402_output.setInt32(r, 0, _item_sk3549_t);
            int64_t _rank_col3550_t = tbl_Aggregate_TD_10881817_output.getInt64(i, 1);
            tbl_Filter_TD_9311402_output.setInt64(r, 1, _rank_col3550_t);
            r++;
        }
    }
    tbl_Filter_TD_9311402_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9311402_output #Row: " << tbl_Filter_TD_9311402_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9256529(Table &tbl_Aggregate_TD_10258077_output, Table &tbl_Aggregate_TD_10169659_output, Table &tbl_Filter_TD_9256529_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(rank_col#3545) AND (cast(rank_col#3545 as decimal(13,7)) > CheckOverflow((0.900000 * promote_precision(scalar-subquery#3547 [])), DecimalType(13,7), true))))
    // Input: ListBuffer(item_sk#3544, rank_col#3545)
    // Output: ListBuffer(item_sk#3544, rank_col#3545)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10258077_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _rank_col3545 = tbl_Aggregate_TD_10258077_output.getInt64(i, 1);
        if ((_rank_col3545!= 0) && (_rank_col3545 > (0.900000 * tbl_Aggregate_TD_10169659_output.getInt32(0, 0)))) {
            int32_t _item_sk3544_t = tbl_Aggregate_TD_10258077_output.getInt32(i, 0);
            tbl_Filter_TD_9256529_output.setInt32(r, 0, _item_sk3544_t);
            int64_t _rank_col3545_t = tbl_Aggregate_TD_10258077_output.getInt64(i, 1);
            tbl_Filter_TD_9256529_output.setInt64(r, 1, _rank_col3545_t);
            r++;
        }
    }
    tbl_Filter_TD_9256529_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9256529_output #Row: " << tbl_Filter_TD_9256529_output.getNumRow() << std::endl;
}

void SW_Window_TD_8623966(Table &tbl_Filter_TD_9311402_output, Table &tbl_Window_TD_8623966_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(rank_col#3550) windowspecdefinition(rank_col#3550 DESC NULLS LAST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rnk#3553)
    // Input: ListBuffer(item_sk#3549, rank_col#3550)
    // Output: ListBuffer(item_sk#3549, rank_col#3550, rnk#3553)
    struct SW_Window_TD_8623966Row {
        int32_t _item_sk3549;
        int64_t _rank_col3550;
    }; 

    int nrow = tbl_Filter_TD_9311402_output.getNumRow();
    std::vector<SW_Window_TD_8623966Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk3549 = tbl_Filter_TD_9311402_output.getInt32(i, 0);
        tbl_Window_TD_8623966_output.setInt32(r, 0,_item_sk3549);
        int64_t _rank_col3550 = tbl_Filter_TD_9311402_output.getInt64(i, 1);
        tbl_Window_TD_8623966_output.setInt64(r, 1,_rank_col3550);
        r++;
        SW_Window_TD_8623966Row t = {_item_sk3549,_rank_col3550};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8623966Row& a, const SW_Window_TD_8623966Row& b) const { return 
(a._rank_col3550 > b._rank_col3550); 
}
    }SW_Window_TD_8623966_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8623966_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._rank_col3550 == rows0[i-1]._rank_col3550);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8623966_output.setInt32(r, 2, ranks0[i]);
    }
    tbl_Window_TD_8623966_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8623966_output #Row: " << tbl_Window_TD_8623966_output.getNumRow() << std::endl;
}

void SW_Window_TD_8245318(Table &tbl_Filter_TD_9256529_output, Table &tbl_Window_TD_8245318_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(rank_col#3545) windowspecdefinition(rank_col#3545 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rnk#3548)
    // Input: ListBuffer(item_sk#3544, rank_col#3545)
    // Output: ListBuffer(item_sk#3544, rank_col#3545, rnk#3548)
    struct SW_Window_TD_8245318Row {
        int32_t _item_sk3544;
        int64_t _rank_col3545;
    }; 

    int nrow = tbl_Filter_TD_9256529_output.getNumRow();
    std::vector<SW_Window_TD_8245318Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk3544 = tbl_Filter_TD_9256529_output.getInt32(i, 0);
        tbl_Window_TD_8245318_output.setInt32(r, 0,_item_sk3544);
        int64_t _rank_col3545 = tbl_Filter_TD_9256529_output.getInt64(i, 1);
        tbl_Window_TD_8245318_output.setInt64(r, 1,_rank_col3545);
        r++;
        SW_Window_TD_8245318Row t = {_item_sk3544,_rank_col3545};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8245318Row& a, const SW_Window_TD_8245318Row& b) const { return 
(a._rank_col3545 < b._rank_col3545); 
}
    }SW_Window_TD_8245318_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8245318_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {

        isSameOrderKey0 = ( rows0[i]._rank_col3545 == rows0[i-1]._rank_col3545);
        currentPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8245318_output.setInt32(r, 2, ranks0[i]);
    }
    tbl_Window_TD_8245318_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8245318_output #Row: " << tbl_Window_TD_8245318_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7606358(Table &tbl_Window_TD_8623966_output, Table &tbl_Filter_TD_7606358_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((rnk#3553 < 11) AND isnotnull(item_sk#3549)))
    // Input: ListBuffer(item_sk#3549, rank_col#3550, rnk#3553)
    // Output: ListBuffer(item_sk#3549, rnk#3553)
    int r = 0;
    int nrow1 = tbl_Window_TD_8623966_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk3553 = tbl_Window_TD_8623966_output.getInt32(i, 2);
        int32_t _item_sk3549 = tbl_Window_TD_8623966_output.getInt32(i, 0);
        if ((_rnk3553 < 11) && (_item_sk3549!= 0)) {
            int32_t _item_sk3549_t = tbl_Window_TD_8623966_output.getInt32(i, 0);
            tbl_Filter_TD_7606358_output.setInt32(r, 0, _item_sk3549_t);
            int32_t _rnk3553_t = tbl_Window_TD_8623966_output.getInt32(i, 2);
            tbl_Filter_TD_7606358_output.setInt32(r, 1, _rnk3553_t);
            r++;
        }
    }
    tbl_Filter_TD_7606358_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7606358_output #Row: " << tbl_Filter_TD_7606358_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7862837(Table &tbl_Window_TD_8245318_output, Table &tbl_Filter_TD_7862837_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((rnk#3548 < 11) AND isnotnull(item_sk#3544)))
    // Input: ListBuffer(item_sk#3544, rank_col#3545, rnk#3548)
    // Output: ListBuffer(item_sk#3544, rnk#3548)
    int r = 0;
    int nrow1 = tbl_Window_TD_8245318_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk3548 = tbl_Window_TD_8245318_output.getInt32(i, 2);
        int32_t _item_sk3544 = tbl_Window_TD_8245318_output.getInt32(i, 0);
        if ((_rnk3548 < 11) && (_item_sk3544!= 0)) {
            int32_t _item_sk3544_t = tbl_Window_TD_8245318_output.getInt32(i, 0);
            tbl_Filter_TD_7862837_output.setInt32(r, 0, _item_sk3544_t);
            int32_t _rnk3548_t = tbl_Window_TD_8245318_output.getInt32(i, 2);
            tbl_Filter_TD_7862837_output.setInt32(r, 1, _rnk3548_t);
            r++;
        }
    }
    tbl_Filter_TD_7862837_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7862837_output #Row: " << tbl_Filter_TD_7862837_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6626003(Table &tbl_SerializeFromObject_TD_7985453_input, Table &tbl_Filter_TD_6626003_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_product_name#249)
    // Output: ListBuffer(i_item_sk#228, i_product_name#249)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7985453_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7985453_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7985453_input.getInt32(i, 0);
            tbl_Filter_TD_6626003_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_t = tbl_SerializeFromObject_TD_7985453_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6626003_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_t);
            r++;
        }
    }
    tbl_Filter_TD_6626003_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6626003_output #Row: " << tbl_Filter_TD_6626003_output.getNumRow() << std::endl;
}


void SW_Filter_TD_5581896(Table &tbl_SerializeFromObject_TD_6718070_input, Table &tbl_Filter_TD_5581896_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3579))
    // Input: ListBuffer(i_item_sk#3579, i_product_name#3600)
    // Output: ListBuffer(i_item_sk#3579, i_product_name#3600)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6718070_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3579 = tbl_SerializeFromObject_TD_6718070_input.getInt32(i, 0);
        if (_i_item_sk3579!= 0) {
            int32_t _i_item_sk3579_t = tbl_SerializeFromObject_TD_6718070_input.getInt32(i, 0);
            tbl_Filter_TD_5581896_output.setInt32(r, 0, _i_item_sk3579_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name3600_t = tbl_SerializeFromObject_TD_6718070_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5581896_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name3600_t);
            r++;
        }
    }
    tbl_Filter_TD_5581896_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5581896_output #Row: " << tbl_Filter_TD_5581896_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5902447_key_leftMajor {
    int32_t _item_sk3544;
    bool operator==(const SW_JOIN_INNER_TD_5902447_key_leftMajor& other) const {
        return ((_item_sk3544 == other._item_sk3544));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5902447_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5902447_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk3544));
    }
};
}
struct SW_JOIN_INNER_TD_5902447_payload_leftMajor {
    int32_t _item_sk3544;
    int32_t _rnk3548;
    int32_t _item_sk3549;
};
struct SW_JOIN_INNER_TD_5902447_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5902447_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5902447_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5902447_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5902447_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_product_name249;
};
void SW_JOIN_INNER_TD_5902447(Table &tbl_JOIN_INNER_TD_6478433_output, Table &tbl_Filter_TD_6626003_output, Table &tbl_JOIN_INNER_TD_5902447_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = item_sk#3544))
    // Left Table: ListBuffer(item_sk#3544, rnk#3548, item_sk#3549)
    // Right Table: ListBuffer(i_item_sk#228, i_product_name#249)
    // Output Table: ListBuffer(rnk#3548, item_sk#3549, i_product_name#249)
    int left_nrow = tbl_JOIN_INNER_TD_6478433_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6626003_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5902447_key_leftMajor, SW_JOIN_INNER_TD_5902447_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6478433_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk3544_k = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5902447_key_leftMajor keyA{_item_sk3544_k};
            int32_t _item_sk3544 = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 0);
            int32_t _rnk3548 = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 1);
            int32_t _item_sk3549 = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5902447_payload_leftMajor payloadA{_item_sk3544, _rnk3548, _item_sk3549};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6626003_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6626003_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5902447_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _item_sk3544 = (it->second)._item_sk3544;
                int32_t _rnk3548 = (it->second)._rnk3548;
                int32_t _item_sk3549 = (it->second)._item_sk3549;
                int32_t _i_item_sk228 = tbl_Filter_TD_6626003_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_6626003_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_5902447_output.setInt32(r, 0, _rnk3548);
                tbl_JOIN_INNER_TD_5902447_output.setInt32(r, 1, _item_sk3549);
                tbl_JOIN_INNER_TD_5902447_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5902447_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5902447_key_rightMajor, SW_JOIN_INNER_TD_5902447_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6626003_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6626003_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5902447_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6626003_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_6626003_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_5902447_payload_rightMajor payloadA{_i_item_sk228, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6478433_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk3544_k = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5902447_key_rightMajor{_item_sk3544_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _item_sk3544 = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 0);
                int32_t _rnk3548 = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 1);
                int32_t _item_sk3549 = tbl_JOIN_INNER_TD_6478433_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5902447_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name249_n);
                tbl_JOIN_INNER_TD_5902447_output.setInt32(r, 0, _rnk3548);
                tbl_JOIN_INNER_TD_5902447_output.setInt32(r, 1, _item_sk3549);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5902447_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5902447_output #Row: " << tbl_JOIN_INNER_TD_5902447_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4435382_key_leftMajor {
    int32_t _item_sk3549;
    bool operator==(const SW_JOIN_INNER_TD_4435382_key_leftMajor& other) const {
        return ((_item_sk3549 == other._item_sk3549));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4435382_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4435382_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk3549));
    }
};
}
struct SW_JOIN_INNER_TD_4435382_payload_leftMajor {
    int32_t _rnk3548;
    int32_t _item_sk3549;
    std::string _i_product_name249;
};
struct SW_JOIN_INNER_TD_4435382_key_rightMajor {
    int32_t _i_item_sk3579;
    bool operator==(const SW_JOIN_INNER_TD_4435382_key_rightMajor& other) const {
        return ((_i_item_sk3579 == other._i_item_sk3579));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4435382_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4435382_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3579));
    }
};
}
struct SW_JOIN_INNER_TD_4435382_payload_rightMajor {
    int32_t _i_item_sk3579;
    std::string _i_product_name3600;
};
void SW_JOIN_INNER_TD_4435382(Table &tbl_JOIN_INNER_TD_5902447_output, Table &tbl_Filter_TD_5581896_output, Table &tbl_JOIN_INNER_TD_4435382_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#3579 = item_sk#3549))
    // Left Table: ListBuffer(rnk#3548, item_sk#3549, i_product_name#249)
    // Right Table: ListBuffer(i_item_sk#3579, i_product_name#3600)
    // Output Table: ListBuffer(rnk#3548, i_product_name#249, i_product_name#3600)
    int left_nrow = tbl_JOIN_INNER_TD_5902447_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5581896_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4435382_key_leftMajor, SW_JOIN_INNER_TD_4435382_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5902447_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk3549_k = tbl_JOIN_INNER_TD_5902447_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4435382_key_leftMajor keyA{_item_sk3549_k};
            int32_t _rnk3548 = tbl_JOIN_INNER_TD_5902447_output.getInt32(i, 0);
            int32_t _item_sk3549 = tbl_JOIN_INNER_TD_5902447_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_JOIN_INNER_TD_5902447_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_4435382_payload_leftMajor payloadA{_rnk3548, _item_sk3549, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5581896_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3579_k = tbl_Filter_TD_5581896_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4435382_key_leftMajor{_i_item_sk3579_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _rnk3548 = (it->second)._rnk3548;
                int32_t _item_sk3549 = (it->second)._item_sk3549;
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _i_item_sk3579 = tbl_Filter_TD_5581896_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name3600_n = tbl_Filter_TD_5581896_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name3600 = std::string(_i_product_name3600_n.data());
                tbl_JOIN_INNER_TD_4435382_output.setInt32(r, 0, _rnk3548);
                tbl_JOIN_INNER_TD_4435382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_n);
                tbl_JOIN_INNER_TD_4435382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name3600_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4435382_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4435382_key_rightMajor, SW_JOIN_INNER_TD_4435382_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5581896_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3579_k = tbl_Filter_TD_5581896_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4435382_key_rightMajor keyA{_i_item_sk3579_k};
            int32_t _i_item_sk3579 = tbl_Filter_TD_5581896_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name3600_n = tbl_Filter_TD_5581896_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name3600 = std::string(_i_product_name3600_n.data());
            SW_JOIN_INNER_TD_4435382_payload_rightMajor payloadA{_i_item_sk3579, _i_product_name3600};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5902447_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk3549_k = tbl_JOIN_INNER_TD_5902447_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4435382_key_rightMajor{_item_sk3549_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3579 = (it->second)._i_item_sk3579;
                std::string _i_product_name3600 = (it->second)._i_product_name3600;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name3600_n{};
                memcpy(_i_product_name3600_n.data(), (_i_product_name3600).data(), (_i_product_name3600).length());
                int32_t _rnk3548 = tbl_JOIN_INNER_TD_5902447_output.getInt32(i, 0);
                int32_t _item_sk3549 = tbl_JOIN_INNER_TD_5902447_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_JOIN_INNER_TD_5902447_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_4435382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name3600_n);
                tbl_JOIN_INNER_TD_4435382_output.setInt32(r, 0, _rnk3548);
                tbl_JOIN_INNER_TD_4435382_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4435382_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4435382_output #Row: " << tbl_JOIN_INNER_TD_4435382_output.getNumRow() << std::endl;
}

void SW_Project_TD_3292213(Table &tbl_JOIN_INNER_TD_4435382_output, Table &tbl_Project_TD_3292213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_product_name#249 AS best_performing#3554, i_product_name#3600 AS worst_performing#3555)
    // Input: ListBuffer(rnk#3548, i_product_name#249, i_product_name#3600)
    // Output: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    int nrow1 = tbl_JOIN_INNER_TD_4435382_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk3548 = tbl_JOIN_INNER_TD_4435382_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249 = tbl_JOIN_INNER_TD_4435382_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name3600 = tbl_JOIN_INNER_TD_4435382_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _best_performing3554 = _i_product_name249;
        tbl_Project_TD_3292213_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _best_performing3554);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing3555 = _i_product_name3600;
        tbl_Project_TD_3292213_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _worst_performing3555);
        tbl_Project_TD_3292213_output.setInt32(i, 0, _rnk3548);
    }
    tbl_Project_TD_3292213_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3292213_output #Row: " << tbl_Project_TD_3292213_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2208247(Table &tbl_Project_TD_3292213_output, Table &tbl_Sort_TD_2208247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(rnk#3548 ASC NULLS FIRST)
    // Input: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    // Output: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    struct SW_Sort_TD_2208247Row {
        int32_t _rnk3548;
        std::string _best_performing3554;
        std::string _worst_performing3555;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2208247Row& a, const SW_Sort_TD_2208247Row& b) const { return 
 (a._rnk3548 < b._rnk3548); 
}
    }SW_Sort_TD_2208247_order; 

    int nrow1 = tbl_Project_TD_3292213_output.getNumRow();
    std::vector<SW_Sort_TD_2208247Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk3548 = tbl_Project_TD_3292213_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _best_performing3554 = tbl_Project_TD_3292213_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing3555 = tbl_Project_TD_3292213_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        SW_Sort_TD_2208247Row t = {_rnk3548,std::string(_best_performing3554.data()),std::string(_worst_performing3555.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2208247_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2208247_output.setInt32(r, 0, it._rnk3548);
        std::array<char, TPCDS_READ_MAX + 1> _best_performing3554{};
        memcpy(_best_performing3554.data(), (it._best_performing3554).data(), (it._best_performing3554).length());
        tbl_Sort_TD_2208247_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _best_performing3554);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing3555{};
        memcpy(_worst_performing3555.data(), (it._worst_performing3555).data(), (it._worst_performing3555).length());
        tbl_Sort_TD_2208247_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _worst_performing3555);
        ++r;
    }
    tbl_Sort_TD_2208247_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2208247_output #Row: " << tbl_Sort_TD_2208247_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_178366(Table &tbl_Sort_TD_2208247_output, Table &tbl_LocalLimit_TD_178366_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    // Output: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_178366_output.setInt32(r, 0, tbl_Sort_TD_2208247_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _best_performing3554_n = tbl_Sort_TD_2208247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_178366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _best_performing3554_n);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing3555_n = tbl_Sort_TD_2208247_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_178366_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _worst_performing3555_n);
        r++;
    }
    tbl_LocalLimit_TD_178366_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_178366_output #Row: " << tbl_LocalLimit_TD_178366_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0500080(Table &tbl_LocalLimit_TD_178366_output, Table &tbl_GlobalLimit_TD_0500080_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    // Output: ListBuffer(rnk#3548, best_performing#3554, worst_performing#3555)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0500080_output.setInt32(r, 0, tbl_LocalLimit_TD_178366_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _best_performing3554_n = tbl_LocalLimit_TD_178366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0500080_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _best_performing3554_n);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing3555_n = tbl_LocalLimit_TD_178366_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0500080_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _worst_performing3555_n);
        r++;
    }
    tbl_GlobalLimit_TD_0500080_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0500080_output #Row: " << tbl_GlobalLimit_TD_0500080_output.getNumRow() << std::endl;
}

