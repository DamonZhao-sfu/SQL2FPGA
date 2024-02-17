#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_1128(Table &tbl_SerializeFromObject_TD_12503_input, Table &tbl_Filter_TD_1128_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#4850) AND ((ss_store_sk#4850 = 4) AND isnull(ss_addr_sk#4849))))
    // Input: ListBuffer(ss_store_sk#4850, ss_net_profit#4865, ss_addr_sk#4849)
    // Output: ListBuffer(ss_store_sk#4850, ss_net_profit#4865)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12503_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk4850 = tbl_SerializeFromObject_TD_12503_input.getInt32(i, 0);
        int32_t _ss_addr_sk4849 = tbl_SerializeFromObject_TD_12503_input.getInt32(i, 2);
        if ((_ss_store_sk4850!= 0) && ((_ss_store_sk4850 == 4) && _ss_addr_sk4849)) {
            int32_t _ss_store_sk4850_t = tbl_SerializeFromObject_TD_12503_input.getInt32(i, 0);
            tbl_Filter_TD_1128_output.setInt32(r, 0, _ss_store_sk4850_t);
            int32_t _ss_net_profit4865_t = tbl_SerializeFromObject_TD_12503_input.getInt32(i, 1);
            tbl_Filter_TD_1128_output.setInt32(r, 1, _ss_net_profit4865_t);
            r++;
        }
    }
    tbl_Filter_TD_1128_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1128_output #Row: " << tbl_Filter_TD_1128_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11999(Table &tbl_SerializeFromObject_TD_1292_input, Table &tbl_Filter_TD_11999_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#4772) AND (ss_store_sk#4772 = 4)))
    // Input: ListBuffer(ss_item_sk#4767, ss_net_profit#4787, ss_store_sk#4772)
    // Output: ListBuffer(ss_item_sk#4767, ss_net_profit#4787)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1292_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk4772 = tbl_SerializeFromObject_TD_1292_input.getInt32(i, 2);
        if ((_ss_store_sk4772!= 0) && (_ss_store_sk4772 == 4)) {
            int32_t _ss_item_sk4767_t = tbl_SerializeFromObject_TD_1292_input.getInt32(i, 0);
            tbl_Filter_TD_11999_output.setInt32(r, 0, _ss_item_sk4767_t);
            int32_t _ss_net_profit4787_t = tbl_SerializeFromObject_TD_1292_input.getInt32(i, 1);
            tbl_Filter_TD_11999_output.setInt32(r, 1, _ss_net_profit4787_t);
            r++;
        }
    }
    tbl_Filter_TD_11999_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11999_output #Row: " << tbl_Filter_TD_11999_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11943(Table &tbl_SerializeFromObject_TD_12449_input, Table &tbl_Filter_TD_11943_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#4827) AND ((ss_store_sk#4827 = 4) AND isnull(ss_addr_sk#4826))))
    // Input: ListBuffer(ss_store_sk#4827, ss_net_profit#4842, ss_addr_sk#4826)
    // Output: ListBuffer(ss_store_sk#4827, ss_net_profit#4842)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12449_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk4827 = tbl_SerializeFromObject_TD_12449_input.getInt32(i, 0);
        int32_t _ss_addr_sk4826 = tbl_SerializeFromObject_TD_12449_input.getInt32(i, 2);
        if ((_ss_store_sk4827!= 0) && ((_ss_store_sk4827 == 4) && _ss_addr_sk4826)) {
            int32_t _ss_store_sk4827_t = tbl_SerializeFromObject_TD_12449_input.getInt32(i, 0);
            tbl_Filter_TD_11943_output.setInt32(r, 0, _ss_store_sk4827_t);
            int32_t _ss_net_profit4842_t = tbl_SerializeFromObject_TD_12449_input.getInt32(i, 1);
            tbl_Filter_TD_11943_output.setInt32(r, 1, _ss_net_profit4842_t);
            r++;
        }
    }
    tbl_Filter_TD_11943_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11943_output #Row: " << tbl_Filter_TD_11943_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11976(Table &tbl_SerializeFromObject_TD_12754_input, Table &tbl_Filter_TD_11976_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_store_sk#1213) AND (ss_store_sk#1213 = 4)))
    // Input: ListBuffer(ss_item_sk#1208, ss_net_profit#1228, ss_store_sk#1213)
    // Output: ListBuffer(ss_item_sk#1208, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12754_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_12754_input.getInt32(i, 2);
        if ((_ss_store_sk1213!= 0) && (_ss_store_sk1213 == 4)) {
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_12754_input.getInt32(i, 0);
            tbl_Filter_TD_11976_output.setInt32(r, 0, _ss_item_sk1208_t);
            int32_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_12754_input.getInt32(i, 1);
            tbl_Filter_TD_11976_output.setInt32(r, 1, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_11976_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11976_output #Row: " << tbl_Filter_TD_11976_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10866_key;
struct SW_Aggregate_TD_10866_payload {
    int32_t _rank_col4760_avg_0;
};
void SW_Aggregate_TD_10866(Table &tbl_Filter_TD_1128_output, Table &tbl_Aggregate_TD_10866_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_store_sk#4850, cast((avg(UnscaledValue(ss_net_profit#4865)) / 100.0) as decimal(11,6)) AS rank_col#4760)
    // Input: ListBuffer(ss_store_sk#4850, ss_net_profit#4865)
    // Output: ListBuffer(rank_col#4760)
    std::unordered_map<SW_Aggregate_TD_10866_key, SW_Aggregate_TD_10866_payload> ht1;
    int nrow1 = tbl_Filter_TD_1128_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk4850 = tbl_Filter_TD_1128_output.getInt32(i, 0);
        int32_t _ss_net_profit4865 = tbl_Filter_TD_1128_output.getInt32(i, 1);
        SW_Aggregate_TD_10866_key k = _ss_store_sk4850;
        int64_t _rank_col4760_avg_0 = _ss_net_profit4865;
        SW_Aggregate_TD_10866_payload p{_rank_col4760_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._rank_col4760_avg_0 + _rank_col4760_avg_0);
            p._rank_col4760_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_store_sk4850 not required in the output table
        int32_t _rank_col4760 = ((it.second)._rank_col4760_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_10866_output.setInt32(r, 0, _rank_col4760);
        ++r;
    }
    tbl_Aggregate_TD_10866_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10866_output #Row: " << tbl_Aggregate_TD_10866_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10766_key;
struct SW_Aggregate_TD_10766_payload {
    int32_t _item_sk4758;
    int32_t _rank_col4759_avg_0;
};
void SW_Aggregate_TD_10766(Table &tbl_Filter_TD_11999_output, Table &tbl_Aggregate_TD_10766_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#4767, ss_item_sk#4767 AS item_sk#4758, cast((avg(UnscaledValue(ss_net_profit#4787)) / 100.0) as decimal(11,6)) AS rank_col#4759)
    // Input: ListBuffer(ss_item_sk#4767, ss_net_profit#4787)
    // Output: ListBuffer(item_sk#4758, rank_col#4759)
    std::unordered_map<SW_Aggregate_TD_10766_key, SW_Aggregate_TD_10766_payload> ht1;
    int nrow1 = tbl_Filter_TD_11999_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk4767 = tbl_Filter_TD_11999_output.getInt32(i, 0);
        int32_t _ss_net_profit4787 = tbl_Filter_TD_11999_output.getInt32(i, 1);
        SW_Aggregate_TD_10766_key k = _ss_item_sk4767;
        int32_t _item_sk4758 = _ss_item_sk4767;
        int64_t _rank_col4759_avg_0 = _ss_net_profit4787;
        SW_Aggregate_TD_10766_payload p{_item_sk4758, _rank_col4759_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._rank_col4759_avg_0 + _rank_col4759_avg_0);
            p._rank_col4759_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk4767 not required in the output table
        tbl_Aggregate_TD_10766_output.setInt32(r, 0, (it.second)._item_sk4758);
        int32_t _rank_col4759 = ((it.second)._rank_col4759_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_10766_output.setInt32(r, 1, _rank_col4759);
        ++r;
    }
    tbl_Aggregate_TD_10766_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10766_output #Row: " << tbl_Aggregate_TD_10766_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10568_key;
struct SW_Aggregate_TD_10568_payload {
    int32_t _rank_col4755_avg_0;
};
void SW_Aggregate_TD_10568(Table &tbl_Filter_TD_11943_output, Table &tbl_Aggregate_TD_10568_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_store_sk#4827, cast((avg(UnscaledValue(ss_net_profit#4842)) / 100.0) as decimal(11,6)) AS rank_col#4755)
    // Input: ListBuffer(ss_store_sk#4827, ss_net_profit#4842)
    // Output: ListBuffer(rank_col#4755)
    std::unordered_map<SW_Aggregate_TD_10568_key, SW_Aggregate_TD_10568_payload> ht1;
    int nrow1 = tbl_Filter_TD_11943_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_store_sk4827 = tbl_Filter_TD_11943_output.getInt32(i, 0);
        int32_t _ss_net_profit4842 = tbl_Filter_TD_11943_output.getInt32(i, 1);
        SW_Aggregate_TD_10568_key k = _ss_store_sk4827;
        int64_t _rank_col4755_avg_0 = _ss_net_profit4842;
        SW_Aggregate_TD_10568_payload p{_rank_col4755_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._rank_col4755_avg_0 + _rank_col4755_avg_0);
            p._rank_col4755_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_store_sk4827 not required in the output table
        int32_t _rank_col4755 = ((it.second)._rank_col4755_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_10568_output.setInt32(r, 0, _rank_col4755);
        ++r;
    }
    tbl_Aggregate_TD_10568_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10568_output #Row: " << tbl_Aggregate_TD_10568_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_10759_key;
struct SW_Aggregate_TD_10759_payload {
    int32_t _item_sk4753;
    int32_t _rank_col4754_avg_0;
};
void SW_Aggregate_TD_10759(Table &tbl_Filter_TD_11976_output, Table &tbl_Aggregate_TD_10759_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ss_item_sk#1208, ss_item_sk#1208 AS item_sk#4753, cast((avg(UnscaledValue(ss_net_profit#1228)) / 100.0) as decimal(11,6)) AS rank_col#4754)
    // Input: ListBuffer(ss_item_sk#1208, ss_net_profit#1228)
    // Output: ListBuffer(item_sk#4753, rank_col#4754)
    std::unordered_map<SW_Aggregate_TD_10759_key, SW_Aggregate_TD_10759_payload> ht1;
    int nrow1 = tbl_Filter_TD_11976_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_Filter_TD_11976_output.getInt32(i, 0);
        int32_t _ss_net_profit1228 = tbl_Filter_TD_11976_output.getInt32(i, 1);
        SW_Aggregate_TD_10759_key k = _ss_item_sk1208;
        int32_t _item_sk4753 = _ss_item_sk1208;
        int64_t _rank_col4754_avg_0 = _ss_net_profit1228;
        SW_Aggregate_TD_10759_payload p{_item_sk4753, _rank_col4754_avg_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t avg_0 = ((it->second)._rank_col4754_avg_0 + _rank_col4754_avg_0);
            p._rank_col4754_avg_0 = avg_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ss_item_sk1208 not required in the output table
        tbl_Aggregate_TD_10759_output.setInt32(r, 0, (it.second)._item_sk4753);
        int32_t _rank_col4754 = ((it.second)._rank_col4754_avg_0 / nrow1 / 100.0);
        tbl_Aggregate_TD_10759_output.setInt32(r, 1, _rank_col4754);
        ++r;
    }
    tbl_Aggregate_TD_10759_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_10759_output #Row: " << tbl_Aggregate_TD_10759_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9490(Table &tbl_Aggregate_TD_10766_output, Table &tbl_Aggregate_TD_10866_output, Table &tbl_Filter_TD_9490_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(rank_col#4759) AND (cast(rank_col#4759 as decimal(13,7)) > CheckOverflow((0.900000 * promote_precision(scalar-subquery#4761 [])), DecimalType(13,7), true))))
    // Input: ListBuffer(item_sk#4758, rank_col#4759)
    // Output: ListBuffer(item_sk#4758, rank_col#4759)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10766_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rank_col4759 = tbl_Aggregate_TD_10766_output.getInt32(i, 1);
        if ((_rank_col4759!= 0) && (_rank_col4759 > (0.900000 * tbl_Aggregate_TD_10866_output.getInt32(0, 0)))) {
            int32_t _item_sk4758_t = tbl_Aggregate_TD_10766_output.getInt32(i, 0);
            tbl_Filter_TD_9490_output.setInt32(r, 0, _item_sk4758_t);
            int32_t _rank_col4759_t = tbl_Aggregate_TD_10766_output.getInt32(i, 1);
            tbl_Filter_TD_9490_output.setInt32(r, 1, _rank_col4759_t);
            r++;
        }
    }
    tbl_Filter_TD_9490_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9490_output #Row: " << tbl_Filter_TD_9490_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9596(Table &tbl_Aggregate_TD_10759_output, Table &tbl_Aggregate_TD_10568_output, Table &tbl_Filter_TD_9596_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(rank_col#4754) AND (cast(rank_col#4754 as decimal(13,7)) > CheckOverflow((0.900000 * promote_precision(scalar-subquery#4756 [])), DecimalType(13,7), true))))
    // Input: ListBuffer(item_sk#4753, rank_col#4754)
    // Output: ListBuffer(item_sk#4753, rank_col#4754)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_10759_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rank_col4754 = tbl_Aggregate_TD_10759_output.getInt32(i, 1);
        if ((_rank_col4754!= 0) && (_rank_col4754 > (0.900000 * tbl_Aggregate_TD_10568_output.getInt32(0, 0)))) {
            int32_t _item_sk4753_t = tbl_Aggregate_TD_10759_output.getInt32(i, 0);
            tbl_Filter_TD_9596_output.setInt32(r, 0, _item_sk4753_t);
            int32_t _rank_col4754_t = tbl_Aggregate_TD_10759_output.getInt32(i, 1);
            tbl_Filter_TD_9596_output.setInt32(r, 1, _rank_col4754_t);
            r++;
        }
    }
    tbl_Filter_TD_9596_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9596_output #Row: " << tbl_Filter_TD_9596_output.getNumRow() << std::endl;
}

void SW_Window_TD_8899(Table &tbl_Filter_TD_9490_output, Table &tbl_Window_TD_8899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(rank_col#4759) windowspecdefinition(rank_col#4759 DESC NULLS LAST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rnk#4762)
    // Input: ListBuffer(item_sk#4758, rank_col#4759)
    // Output: ListBuffer(item_sk#4758, rank_col#4759, rnk#4762)
    struct SW_Window_TD_8899Row {
        int32_t _item_sk4758;
        int32_t _rank_col4759;
    }; 

    int nrow = tbl_Filter_TD_9490_output.getNumRow();
    std::vector<SW_Window_TD_8899Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk4758 = tbl_Filter_TD_9490_output.getInt32(i, 0);
        tbl_Window_TD_8899_output.setInt32(r, 0,_item_sk4758);
        int32_t _rank_col4759 = tbl_Filter_TD_9490_output.getInt32(i, 1);
        tbl_Window_TD_8899_output.setInt32(r, 1,_rank_col4759);
        r++;
        SW_Window_TD_8899Row t = {_item_sk4758,_rank_col4759};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8899Row& a, const SW_Window_TD_8899Row& b) const { return 
(a._rank_col4759 > b._rank_col4759); 
}
    }SW_Window_TD_8899_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8899_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._rank_col4759 == rows0[i-1]._rank_col4759);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8899_output.setInt32(r, 2, ranks0[i]);
    }
    tbl_Window_TD_8899_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8899_output #Row: " << tbl_Window_TD_8899_output.getNumRow() << std::endl;
}

void SW_Window_TD_8430(Table &tbl_Filter_TD_9596_output, Table &tbl_Window_TD_8430_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Window
    // Operation: ListBuffer(rank(rank_col#4754) windowspecdefinition(rank_col#4754 ASC NULLS FIRST, specifiedwindowframe(RowFrame, unboundedpreceding$(), currentrow$())) AS rnk#4757)
    // Input: ListBuffer(item_sk#4753, rank_col#4754)
    // Output: ListBuffer(item_sk#4753, rank_col#4754, rnk#4757)
    struct SW_Window_TD_8430Row {
        int32_t _item_sk4753;
        int32_t _rank_col4754;
    }; 

    int nrow = tbl_Filter_TD_9596_output.getNumRow();
    std::vector<SW_Window_TD_8430Row> rows0;
    int r = 0;
    for (int i = 0; i < nrow; i++) {
        int32_t _item_sk4753 = tbl_Filter_TD_9596_output.getInt32(i, 0);
        tbl_Window_TD_8430_output.setInt32(r, 0,_item_sk4753);
        int32_t _rank_col4754 = tbl_Filter_TD_9596_output.getInt32(i, 1);
        tbl_Window_TD_8430_output.setInt32(r, 1,_rank_col4754);
        r++;
        SW_Window_TD_8430Row t = {_item_sk4753,_rank_col4754};
        rows0.push_back(t);
    }
    struct {
        bool operator()(const SW_Window_TD_8430Row& a, const SW_Window_TD_8430Row& b) const { return 
(a._rank_col4754 < b._rank_col4754); 
}
    }SW_Window_TD_8430_order0; 

    std::sort(rows0.begin(), rows0.end(), SW_Window_TD_8430_order0);
    std::vector<int32_t> ranks0(rows0.size(), 0);
    int32_t currentRank0 = 0;
    int32_t currentPartitionCount0 = 1;
    bool isSamePartition0 = true;
    bool isSameOrderKey0 = true;
    if (!rows0.empty()) {;
      ranks0[0] = ++currentRank0;
    };
    for (int i = 1; i< rows0.size(); i++) {
        isSamePartition0 = ();
        isSameOrderKey0 = ( rows0[i]._rank_col4754 == rows0[i-1]._rank_col4754);
        curPartitionCount0++;
        if (isSamePartition0&& !isSameOrderKey0) {
            currentRank0 = currentPartitionCount0;
        } else if (!isSamePartition0) {
            currentPartitionCount0 = 1;
            currentRank0 = currentPartitionCount0;
        }
        ranks0[i] = currentRank0;
    }
    for (int i = 0; i< nrow; i++) {
        tbl_Window_TD_8430_output.setInt32(r, 2, ranks0[i]);
    }
    tbl_Window_TD_8430_output.setNumRow(r);
    std::cout << "tbl_Window_TD_8430_output #Row: " << tbl_Window_TD_8430_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7251(Table &tbl_Window_TD_8899_output, Table &tbl_Filter_TD_7251_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((rnk#4762 < 11) AND isnotnull(item_sk#4758)))
    // Input: ListBuffer(item_sk#4758, rank_col#4759, rnk#4762)
    // Output: ListBuffer(item_sk#4758, rnk#4762)
    int r = 0;
    int nrow1 = tbl_Window_TD_8899_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk4762 = tbl_Window_TD_8899_output.getInt32(i, 2);
        int32_t _item_sk4758 = tbl_Window_TD_8899_output.getInt32(i, 0);
        if ((_rnk4762 < 11) && (_item_sk4758!= 0)) {
            int32_t _item_sk4758_t = tbl_Window_TD_8899_output.getInt32(i, 0);
            tbl_Filter_TD_7251_output.setInt32(r, 0, _item_sk4758_t);
            int32_t _rnk4762_t = tbl_Window_TD_8899_output.getInt32(i, 2);
            tbl_Filter_TD_7251_output.setInt32(r, 1, _rnk4762_t);
            r++;
        }
    }
    tbl_Filter_TD_7251_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7251_output #Row: " << tbl_Filter_TD_7251_output.getNumRow() << std::endl;
}

void SW_Filter_TD_777(Table &tbl_Window_TD_8430_output, Table &tbl_Filter_TD_777_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((rnk#4757 < 11) AND isnotnull(item_sk#4753)))
    // Input: ListBuffer(item_sk#4753, rank_col#4754, rnk#4757)
    // Output: ListBuffer(item_sk#4753, rnk#4757)
    int r = 0;
    int nrow1 = tbl_Window_TD_8430_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk4757 = tbl_Window_TD_8430_output.getInt32(i, 2);
        int32_t _item_sk4753 = tbl_Window_TD_8430_output.getInt32(i, 0);
        if ((_rnk4757 < 11) && (_item_sk4753!= 0)) {
            int32_t _item_sk4753_t = tbl_Window_TD_8430_output.getInt32(i, 0);
            tbl_Filter_TD_777_output.setInt32(r, 0, _item_sk4753_t);
            int32_t _rnk4757_t = tbl_Window_TD_8430_output.getInt32(i, 2);
            tbl_Filter_TD_777_output.setInt32(r, 1, _rnk4757_t);
            r++;
        }
    }
    tbl_Filter_TD_777_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_777_output #Row: " << tbl_Filter_TD_777_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6343(Table &tbl_SerializeFromObject_TD_7341_input, Table &tbl_Filter_TD_6343_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#228))
    // Input: ListBuffer(i_item_sk#228, i_product_name#249)
    // Output: ListBuffer(i_item_sk#228, i_product_name#249)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7341_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_SerializeFromObject_TD_7341_input.getInt32(i, 0);
        if (_i_item_sk228!= 0) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_7341_input.getInt32(i, 0);
            tbl_Filter_TD_6343_output.setInt32(r, 0, _i_item_sk228_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_t = tbl_SerializeFromObject_TD_7341_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6343_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_t);
            r++;
        }
    }
    tbl_Filter_TD_6343_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6343_output #Row: " << tbl_Filter_TD_6343_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6110_key_leftMajor {
    int32_t _rnk4757;
    bool operator==(const SW_JOIN_INNER_TD_6110_key_leftMajor& other) const {
        return ((_rnk4757 == other._rnk4757));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6110_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6110_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._rnk4757));
    }
};
}
struct SW_JOIN_INNER_TD_6110_payload_leftMajor {
    int32_t _item_sk4753;
    int32_t _rnk4757;
};
struct SW_JOIN_INNER_TD_6110_key_rightMajor {
    int32_t _rnk4762;
    bool operator==(const SW_JOIN_INNER_TD_6110_key_rightMajor& other) const {
        return ((_rnk4762 == other._rnk4762));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6110_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6110_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._rnk4762));
    }
};
}
struct SW_JOIN_INNER_TD_6110_payload_rightMajor {
    int32_t _item_sk4758;
    int32_t _rnk4762;
};
void SW_JOIN_INNER_TD_6110(Table &tbl_Filter_TD_777_output, Table &tbl_Filter_TD_7251_output, Table &tbl_JOIN_INNER_TD_6110_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((rnk#4757 = rnk#4762))
    // Left Table: ListBuffer(item_sk#4753, rnk#4757)
    // Right Table: ListBuffer(item_sk#4758, rnk#4762)
    // Output Table: ListBuffer(item_sk#4753, rnk#4757, item_sk#4758)
    int left_nrow = tbl_Filter_TD_777_output.getNumRow();
    int right_nrow = tbl_Filter_TD_7251_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6110_key_leftMajor, SW_JOIN_INNER_TD_6110_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_777_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _rnk4757_k = tbl_Filter_TD_777_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6110_key_leftMajor keyA{_rnk4757_k};
            int32_t _item_sk4753 = tbl_Filter_TD_777_output.getInt32(i, 0);
            int32_t _rnk4757 = tbl_Filter_TD_777_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6110_payload_leftMajor payloadA{_item_sk4753, _rnk4757};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_7251_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _rnk4762_k = tbl_Filter_TD_7251_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6110_key_leftMajor{_rnk4762_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _item_sk4753 = (it->second)._item_sk4753;
                int32_t _rnk4757 = (it->second)._rnk4757;
                int32_t _item_sk4758 = tbl_Filter_TD_7251_output.getInt32(i, 0);
                int32_t _rnk4762 = tbl_Filter_TD_7251_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6110_output.setInt32(r, 0, _item_sk4753);
                tbl_JOIN_INNER_TD_6110_output.setInt32(r, 1, _rnk4757);
                tbl_JOIN_INNER_TD_6110_output.setInt32(r, 2, _item_sk4758);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6110_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6110_key_rightMajor, SW_JOIN_INNER_TD_6110_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_7251_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _rnk4762_k = tbl_Filter_TD_7251_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6110_key_rightMajor keyA{_rnk4762_k};
            int32_t _item_sk4758 = tbl_Filter_TD_7251_output.getInt32(i, 0);
            int32_t _rnk4762 = tbl_Filter_TD_7251_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6110_payload_rightMajor payloadA{_item_sk4758, _rnk4762};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_777_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _rnk4757_k = tbl_Filter_TD_777_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6110_key_rightMajor{_rnk4757_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _item_sk4758 = (it->second)._item_sk4758;
                int32_t _rnk4762 = (it->second)._rnk4762;
                int32_t _item_sk4753 = tbl_Filter_TD_777_output.getInt32(i, 0);
                int32_t _rnk4757 = tbl_Filter_TD_777_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6110_output.setInt32(r, 2, _item_sk4758);
                tbl_JOIN_INNER_TD_6110_output.setInt32(r, 0, _item_sk4753);
                tbl_JOIN_INNER_TD_6110_output.setInt32(r, 1, _rnk4757);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6110_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6110_output #Row: " << tbl_JOIN_INNER_TD_6110_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5662(Table &tbl_SerializeFromObject_TD_6797_input, Table &tbl_Filter_TD_5662_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#4788))
    // Input: ListBuffer(i_item_sk#4788, i_product_name#4809)
    // Output: ListBuffer(i_item_sk#4788, i_product_name#4809)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6797_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4788 = tbl_SerializeFromObject_TD_6797_input.getInt32(i, 0);
        if (_i_item_sk4788!= 0) {
            int32_t _i_item_sk4788_t = tbl_SerializeFromObject_TD_6797_input.getInt32(i, 0);
            tbl_Filter_TD_5662_output.setInt32(r, 0, _i_item_sk4788_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name4809_t = tbl_SerializeFromObject_TD_6797_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5662_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name4809_t);
            r++;
        }
    }
    tbl_Filter_TD_5662_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5662_output #Row: " << tbl_Filter_TD_5662_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5138_key_leftMajor {
    int32_t _item_sk4753;
    bool operator==(const SW_JOIN_INNER_TD_5138_key_leftMajor& other) const {
        return ((_item_sk4753 == other._item_sk4753));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5138_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5138_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk4753));
    }
};
}
struct SW_JOIN_INNER_TD_5138_payload_leftMajor {
    int32_t _item_sk4753;
    int32_t _rnk4757;
    int32_t _item_sk4758;
};
struct SW_JOIN_INNER_TD_5138_key_rightMajor {
    int32_t _i_item_sk228;
    bool operator==(const SW_JOIN_INNER_TD_5138_key_rightMajor& other) const {
        return ((_i_item_sk228 == other._i_item_sk228));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5138_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5138_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk228));
    }
};
}
struct SW_JOIN_INNER_TD_5138_payload_rightMajor {
    int32_t _i_item_sk228;
    std::string _i_product_name249;
};
void SW_JOIN_INNER_TD_5138(Table &tbl_JOIN_INNER_TD_6110_output, Table &tbl_Filter_TD_6343_output, Table &tbl_JOIN_INNER_TD_5138_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#228 = item_sk#4753))
    // Left Table: ListBuffer(item_sk#4753, rnk#4757, item_sk#4758)
    // Right Table: ListBuffer(i_item_sk#228, i_product_name#249)
    // Output Table: ListBuffer(rnk#4757, item_sk#4758, i_product_name#249)
    int left_nrow = tbl_JOIN_INNER_TD_6110_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6343_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5138_key_leftMajor, SW_JOIN_INNER_TD_5138_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6110_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk4753_k = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5138_key_leftMajor keyA{_item_sk4753_k};
            int32_t _item_sk4753 = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 0);
            int32_t _rnk4757 = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 1);
            int32_t _item_sk4758 = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5138_payload_leftMajor payloadA{_item_sk4753, _rnk4757, _item_sk4758};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6343_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6343_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5138_key_leftMajor{_i_item_sk228_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _item_sk4753 = (it->second)._item_sk4753;
                int32_t _rnk4757 = (it->second)._rnk4757;
                int32_t _item_sk4758 = (it->second)._item_sk4758;
                int32_t _i_item_sk228 = tbl_Filter_TD_6343_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_6343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_5138_output.setInt32(r, 0, _rnk4757);
                tbl_JOIN_INNER_TD_5138_output.setInt32(r, 1, _item_sk4758);
                tbl_JOIN_INNER_TD_5138_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5138_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5138_key_rightMajor, SW_JOIN_INNER_TD_5138_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6343_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk228_k = tbl_Filter_TD_6343_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5138_key_rightMajor keyA{_i_item_sk228_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_6343_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_6343_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_5138_payload_rightMajor payloadA{_i_item_sk228, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6110_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk4753_k = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5138_key_rightMajor{_item_sk4753_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _item_sk4753 = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 0);
                int32_t _rnk4757 = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 1);
                int32_t _item_sk4758 = tbl_JOIN_INNER_TD_6110_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5138_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name249_n);
                tbl_JOIN_INNER_TD_5138_output.setInt32(r, 0, _rnk4757);
                tbl_JOIN_INNER_TD_5138_output.setInt32(r, 1, _item_sk4758);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5138_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5138_output #Row: " << tbl_JOIN_INNER_TD_5138_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4116_key_leftMajor {
    int32_t _item_sk4758;
    bool operator==(const SW_JOIN_INNER_TD_4116_key_leftMajor& other) const {
        return ((_item_sk4758 == other._item_sk4758));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4116_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4116_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._item_sk4758));
    }
};
}
struct SW_JOIN_INNER_TD_4116_payload_leftMajor {
    int32_t _rnk4757;
    int32_t _item_sk4758;
    std::string _i_product_name249;
};
struct SW_JOIN_INNER_TD_4116_key_rightMajor {
    int32_t _i_item_sk4788;
    bool operator==(const SW_JOIN_INNER_TD_4116_key_rightMajor& other) const {
        return ((_i_item_sk4788 == other._i_item_sk4788));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4116_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4116_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4788));
    }
};
}
struct SW_JOIN_INNER_TD_4116_payload_rightMajor {
    int32_t _i_item_sk4788;
    std::string _i_product_name4809;
};
void SW_JOIN_INNER_TD_4116(Table &tbl_JOIN_INNER_TD_5138_output, Table &tbl_Filter_TD_5662_output, Table &tbl_JOIN_INNER_TD_4116_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_item_sk#4788 = item_sk#4758))
    // Left Table: ListBuffer(rnk#4757, item_sk#4758, i_product_name#249)
    // Right Table: ListBuffer(i_item_sk#4788, i_product_name#4809)
    // Output Table: ListBuffer(rnk#4757, i_product_name#249, i_product_name#4809)
    int left_nrow = tbl_JOIN_INNER_TD_5138_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5662_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4116_key_leftMajor, SW_JOIN_INNER_TD_4116_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5138_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _item_sk4758_k = tbl_JOIN_INNER_TD_5138_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4116_key_leftMajor keyA{_item_sk4758_k};
            int32_t _rnk4757 = tbl_JOIN_INNER_TD_5138_output.getInt32(i, 0);
            int32_t _item_sk4758 = tbl_JOIN_INNER_TD_5138_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_JOIN_INNER_TD_5138_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_4116_payload_leftMajor payloadA{_rnk4757, _item_sk4758, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5662_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4788_k = tbl_Filter_TD_5662_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4116_key_leftMajor{_i_item_sk4788_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _rnk4757 = (it->second)._rnk4757;
                int32_t _item_sk4758 = (it->second)._item_sk4758;
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                int32_t _i_item_sk4788 = tbl_Filter_TD_5662_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name4809_n = tbl_Filter_TD_5662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name4809 = std::string(_i_product_name4809_n.data());
                tbl_JOIN_INNER_TD_4116_output.setInt32(r, 0, _rnk4757);
                tbl_JOIN_INNER_TD_4116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_n);
                tbl_JOIN_INNER_TD_4116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name4809_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4116_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4116_key_rightMajor, SW_JOIN_INNER_TD_4116_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5662_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4788_k = tbl_Filter_TD_5662_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4116_key_rightMajor keyA{_i_item_sk4788_k};
            int32_t _i_item_sk4788 = tbl_Filter_TD_5662_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name4809_n = tbl_Filter_TD_5662_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name4809 = std::string(_i_product_name4809_n.data());
            SW_JOIN_INNER_TD_4116_payload_rightMajor payloadA{_i_item_sk4788, _i_product_name4809};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5138_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _item_sk4758_k = tbl_JOIN_INNER_TD_5138_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4116_key_rightMajor{_item_sk4758_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4788 = (it->second)._i_item_sk4788;
                std::string _i_product_name4809 = (it->second)._i_product_name4809;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name4809_n{};
                memcpy(_i_product_name4809_n.data(), (_i_product_name4809).data(), (_i_product_name4809).length());
                int32_t _rnk4757 = tbl_JOIN_INNER_TD_5138_output.getInt32(i, 0);
                int32_t _item_sk4758 = tbl_JOIN_INNER_TD_5138_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_JOIN_INNER_TD_5138_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_4116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _i_product_name4809_n);
                tbl_JOIN_INNER_TD_4116_output.setInt32(r, 0, _rnk4757);
                tbl_JOIN_INNER_TD_4116_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4116_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4116_output #Row: " << tbl_JOIN_INNER_TD_4116_output.getNumRow() << std::endl;
}

void SW_Project_TD_3135(Table &tbl_JOIN_INNER_TD_4116_output, Table &tbl_Project_TD_3135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_product_name#249 AS best_performing#4763, i_product_name#4809 AS worst_performing#4764)
    // Input: ListBuffer(rnk#4757, i_product_name#249, i_product_name#4809)
    // Output: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    int nrow1 = tbl_JOIN_INNER_TD_4116_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk4757 = tbl_JOIN_INNER_TD_4116_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249 = tbl_JOIN_INNER_TD_4116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name4809 = tbl_JOIN_INNER_TD_4116_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _best_performing4763 = _i_product_name249;
        tbl_Project_TD_3135_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 1, _best_performing4763);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing4764 = _i_product_name4809;
        tbl_Project_TD_3135_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _worst_performing4764);
        tbl_Project_TD_3135_output.setInt32(i, 0, _rnk4757);
    }
    tbl_Project_TD_3135_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3135_output #Row: " << tbl_Project_TD_3135_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2196(Table &tbl_Project_TD_3135_output, Table &tbl_Sort_TD_2196_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(rnk#4757 ASC NULLS FIRST)
    // Input: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    // Output: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    struct SW_Sort_TD_2196Row {
        int32_t _rnk4757;
        std::string _best_performing4763;
        std::string _worst_performing4764;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2196Row& a, const SW_Sort_TD_2196Row& b) const { return 
 (a._rnk4757 < b._rnk4757); 
}
    }SW_Sort_TD_2196_order; 

    int nrow1 = tbl_Project_TD_3135_output.getNumRow();
    std::vector<SW_Sort_TD_2196Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _rnk4757 = tbl_Project_TD_3135_output.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _best_performing4763 = tbl_Project_TD_3135_output.getcharN<char, TPCDS_READ_MAX +1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing4764 = tbl_Project_TD_3135_output.getcharN<char, TPCDS_READ_MAX +1>(i, 2);
        SW_Sort_TD_2196Row t = {_rnk4757,std::string(_best_performing4763.data()),std::string(_worst_performing4764.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2196_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_2196_output.setInt32(r, 0, it._rnk4757);
        std::array<char, TPCDS_READ_MAX + 1> _best_performing4763{};
        memcpy(_best_performing4763.data(), (it._best_performing4763).data(), (it._best_performing4763).length());
        tbl_Sort_TD_2196_output.setcharN<char, TPCDS_READ_MAX +1>(r, 1, _best_performing4763);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing4764{};
        memcpy(_worst_performing4764.data(), (it._worst_performing4764).data(), (it._worst_performing4764).length());
        tbl_Sort_TD_2196_output.setcharN<char, TPCDS_READ_MAX +1>(r, 2, _worst_performing4764);
        ++r;
    }
    tbl_Sort_TD_2196_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2196_output #Row: " << tbl_Sort_TD_2196_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1914(Table &tbl_Sort_TD_2196_output, Table &tbl_LocalLimit_TD_1914_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    // Output: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_LocalLimit_TD_1914_output.setInt32(r, 0, tbl_Sort_TD_2196_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _best_performing4763_n = tbl_Sort_TD_2196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_LocalLimit_TD_1914_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _best_performing4763_n);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing4764_n = tbl_Sort_TD_2196_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_LocalLimit_TD_1914_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _worst_performing4764_n);
        r++;
    }
    tbl_LocalLimit_TD_1914_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1914_output #Row: " << tbl_LocalLimit_TD_1914_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0739(Table &tbl_LocalLimit_TD_1914_output, Table &tbl_GlobalLimit_TD_0739_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    // Output: ListBuffer(rnk#4757, best_performing#4763, worst_performing#4764)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        tbl_GlobalLimit_TD_0739_output.setInt32(r, 0, tbl_LocalLimit_TD_1914_output.getInt32(i, 0));
        std::array<char, TPCDS_READ_MAX + 1> _best_performing4763_n = tbl_LocalLimit_TD_1914_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        tbl_GlobalLimit_TD_0739_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _best_performing4763_n);
        std::array<char, TPCDS_READ_MAX + 1> _worst_performing4764_n = tbl_LocalLimit_TD_1914_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_GlobalLimit_TD_0739_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _worst_performing4764_n);
        r++;
    }
    tbl_GlobalLimit_TD_0739_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0739_output #Row: " << tbl_GlobalLimit_TD_0739_output.getNumRow() << std::endl;
}

