#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_6467(Table &tbl_SerializeFromObject_TD_7107_input, Table &tbl_Filter_TD_6467_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_dep_count#10326) AND (hd_dep_count#10326 = 6)) AND isnotnull(hd_demo_sk#10323)))
    // Input: ListBuffer(hd_demo_sk#10323, hd_dep_count#10326)
    // Output: ListBuffer(hd_demo_sk#10323)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7107_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count10326 = tbl_SerializeFromObject_TD_7107_input.getInt32(i, 1);
        int32_t _hd_demo_sk10323 = tbl_SerializeFromObject_TD_7107_input.getInt32(i, 0);
        if (((_hd_dep_count10326!= 0) && (_hd_dep_count10326 == 6)) && (_hd_demo_sk10323!= 0)) {
            int32_t _hd_demo_sk10323_t = tbl_SerializeFromObject_TD_7107_input.getInt32(i, 0);
            tbl_Filter_TD_6467_output.setInt32(r, 0, _hd_demo_sk10323_t);
            r++;
        }
    }
    tbl_Filter_TD_6467_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6467_output #Row: " << tbl_Filter_TD_6467_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6232(Table &tbl_SerializeFromObject_TD_750_input, Table &tbl_Filter_TD_6232_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_ship_hdemo_sk#10299) AND (isnotnull(ws_sold_time_sk#10290) AND isnotnull(ws_web_page_sk#10301))))
    // Input: ListBuffer(ws_sold_time_sk#10290, ws_ship_hdemo_sk#10299, ws_web_page_sk#10301)
    // Output: ListBuffer(ws_sold_time_sk#10290, ws_ship_hdemo_sk#10299, ws_web_page_sk#10301)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_750_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_hdemo_sk10299 = tbl_SerializeFromObject_TD_750_input.getInt32(i, 1);
        int32_t _ws_sold_time_sk10290 = tbl_SerializeFromObject_TD_750_input.getInt32(i, 0);
        int32_t _ws_web_page_sk10301 = tbl_SerializeFromObject_TD_750_input.getInt32(i, 2);
        if ((_ws_ship_hdemo_sk10299!= 0) && ((_ws_sold_time_sk10290!= 0) && (_ws_web_page_sk10301!= 0))) {
            int32_t _ws_sold_time_sk10290_t = tbl_SerializeFromObject_TD_750_input.getInt32(i, 0);
            tbl_Filter_TD_6232_output.setInt32(r, 0, _ws_sold_time_sk10290_t);
            int32_t _ws_ship_hdemo_sk10299_t = tbl_SerializeFromObject_TD_750_input.getInt32(i, 1);
            tbl_Filter_TD_6232_output.setInt32(r, 1, _ws_ship_hdemo_sk10299_t);
            int32_t _ws_web_page_sk10301_t = tbl_SerializeFromObject_TD_750_input.getInt32(i, 2);
            tbl_Filter_TD_6232_output.setInt32(r, 2, _ws_web_page_sk10301_t);
            r++;
        }
    }
    tbl_Filter_TD_6232_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6232_output #Row: " << tbl_Filter_TD_6232_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6813(Table &tbl_SerializeFromObject_TD_7441_input, Table &tbl_Filter_TD_6813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(hd_dep_count#207) AND (hd_dep_count#207 = 6)) AND isnotnull(hd_demo_sk#204)))
    // Input: ListBuffer(hd_demo_sk#204, hd_dep_count#207)
    // Output: ListBuffer(hd_demo_sk#204)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7441_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _hd_dep_count207 = tbl_SerializeFromObject_TD_7441_input.getInt32(i, 1);
        int32_t _hd_demo_sk204 = tbl_SerializeFromObject_TD_7441_input.getInt32(i, 0);
        if (((_hd_dep_count207!= 0) && (_hd_dep_count207 == 6)) && (_hd_demo_sk204!= 0)) {
            int32_t _hd_demo_sk204_t = tbl_SerializeFromObject_TD_7441_input.getInt32(i, 0);
            tbl_Filter_TD_6813_output.setInt32(r, 0, _hd_demo_sk204_t);
            r++;
        }
    }
    tbl_Filter_TD_6813_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6813_output #Row: " << tbl_Filter_TD_6813_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6240(Table &tbl_SerializeFromObject_TD_7601_input, Table &tbl_Filter_TD_6240_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_ship_hdemo_sk#739) AND (isnotnull(ws_sold_time_sk#730) AND isnotnull(ws_web_page_sk#741))))
    // Input: ListBuffer(ws_sold_time_sk#730, ws_ship_hdemo_sk#739, ws_web_page_sk#741)
    // Output: ListBuffer(ws_sold_time_sk#730, ws_ship_hdemo_sk#739, ws_web_page_sk#741)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7601_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_ship_hdemo_sk739 = tbl_SerializeFromObject_TD_7601_input.getInt32(i, 1);
        int32_t _ws_sold_time_sk730 = tbl_SerializeFromObject_TD_7601_input.getInt32(i, 0);
        int32_t _ws_web_page_sk741 = tbl_SerializeFromObject_TD_7601_input.getInt32(i, 2);
        if ((_ws_ship_hdemo_sk739!= 0) && ((_ws_sold_time_sk730!= 0) && (_ws_web_page_sk741!= 0))) {
            int32_t _ws_sold_time_sk730_t = tbl_SerializeFromObject_TD_7601_input.getInt32(i, 0);
            tbl_Filter_TD_6240_output.setInt32(r, 0, _ws_sold_time_sk730_t);
            int32_t _ws_ship_hdemo_sk739_t = tbl_SerializeFromObject_TD_7601_input.getInt32(i, 1);
            tbl_Filter_TD_6240_output.setInt32(r, 1, _ws_ship_hdemo_sk739_t);
            int32_t _ws_web_page_sk741_t = tbl_SerializeFromObject_TD_7601_input.getInt32(i, 2);
            tbl_Filter_TD_6240_output.setInt32(r, 2, _ws_web_page_sk741_t);
            r++;
        }
    }
    tbl_Filter_TD_6240_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6240_output #Row: " << tbl_Filter_TD_6240_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5406(Table &tbl_SerializeFromObject_TD_697_input, Table &tbl_Filter_TD_5406_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(t_hour#10331) AND ((t_hour#10331 >= 19) AND (t_hour#10331 <= 20))) AND isnotnull(t_time_sk#10328)))
    // Input: ListBuffer(t_time_sk#10328, t_hour#10331)
    // Output: ListBuffer(t_time_sk#10328)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_697_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour10331 = tbl_SerializeFromObject_TD_697_input.getInt32(i, 1);
        int32_t _t_time_sk10328 = tbl_SerializeFromObject_TD_697_input.getInt32(i, 0);
        if (((_t_hour10331!= 0) && ((_t_hour10331 >= 19) && (_t_hour10331 <= 20))) && (_t_time_sk10328!= 0)) {
            int32_t _t_time_sk10328_t = tbl_SerializeFromObject_TD_697_input.getInt32(i, 0);
            tbl_Filter_TD_5406_output.setInt32(r, 0, _t_time_sk10328_t);
            r++;
        }
    }
    tbl_Filter_TD_5406_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5406_output #Row: " << tbl_Filter_TD_5406_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5209_key_leftMajor {
    int32_t _ws_ship_hdemo_sk10299;
    bool operator==(const SW_JOIN_INNER_TD_5209_key_leftMajor& other) const {
        return ((_ws_ship_hdemo_sk10299 == other._ws_ship_hdemo_sk10299));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5209_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5209_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_hdemo_sk10299));
    }
};
}
struct SW_JOIN_INNER_TD_5209_payload_leftMajor {
    int32_t _ws_sold_time_sk10290;
    int32_t _ws_ship_hdemo_sk10299;
    int32_t _ws_web_page_sk10301;
};
struct SW_JOIN_INNER_TD_5209_key_rightMajor {
    int32_t _hd_demo_sk10323;
    bool operator==(const SW_JOIN_INNER_TD_5209_key_rightMajor& other) const {
        return ((_hd_demo_sk10323 == other._hd_demo_sk10323));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5209_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5209_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk10323));
    }
};
}
struct SW_JOIN_INNER_TD_5209_payload_rightMajor {
    int32_t _hd_demo_sk10323;
};
void SW_JOIN_INNER_TD_5209(Table &tbl_Filter_TD_6232_output, Table &tbl_Filter_TD_6467_output, Table &tbl_JOIN_INNER_TD_5209_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_hdemo_sk#10299 = hd_demo_sk#10323))
    // Left Table: ListBuffer(ws_sold_time_sk#10290, ws_ship_hdemo_sk#10299, ws_web_page_sk#10301)
    // Right Table: ListBuffer(hd_demo_sk#10323)
    // Output Table: ListBuffer(ws_sold_time_sk#10290, ws_web_page_sk#10301)
    int left_nrow = tbl_Filter_TD_6232_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6467_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5209_key_leftMajor, SW_JOIN_INNER_TD_5209_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6232_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_hdemo_sk10299_k = tbl_Filter_TD_6232_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5209_key_leftMajor keyA{_ws_ship_hdemo_sk10299_k};
            int32_t _ws_sold_time_sk10290 = tbl_Filter_TD_6232_output.getInt32(i, 0);
            int32_t _ws_ship_hdemo_sk10299 = tbl_Filter_TD_6232_output.getInt32(i, 1);
            int32_t _ws_web_page_sk10301 = tbl_Filter_TD_6232_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5209_payload_leftMajor payloadA{_ws_sold_time_sk10290, _ws_ship_hdemo_sk10299, _ws_web_page_sk10301};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6467_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk10323_k = tbl_Filter_TD_6467_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5209_key_leftMajor{_hd_demo_sk10323_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_time_sk10290 = (it->second)._ws_sold_time_sk10290;
                int32_t _ws_ship_hdemo_sk10299 = (it->second)._ws_ship_hdemo_sk10299;
                int32_t _ws_web_page_sk10301 = (it->second)._ws_web_page_sk10301;
                int32_t _hd_demo_sk10323 = tbl_Filter_TD_6467_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5209_output.setInt32(r, 0, _ws_sold_time_sk10290);
                tbl_JOIN_INNER_TD_5209_output.setInt32(r, 1, _ws_web_page_sk10301);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5209_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5209_key_rightMajor, SW_JOIN_INNER_TD_5209_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6467_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk10323_k = tbl_Filter_TD_6467_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5209_key_rightMajor keyA{_hd_demo_sk10323_k};
            int32_t _hd_demo_sk10323 = tbl_Filter_TD_6467_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5209_payload_rightMajor payloadA{_hd_demo_sk10323};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6232_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_hdemo_sk10299_k = tbl_Filter_TD_6232_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5209_key_rightMajor{_ws_ship_hdemo_sk10299_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk10323 = (it->second)._hd_demo_sk10323;
                int32_t _ws_sold_time_sk10290 = tbl_Filter_TD_6232_output.getInt32(i, 0);
                int32_t _ws_ship_hdemo_sk10299 = tbl_Filter_TD_6232_output.getInt32(i, 1);
                int32_t _ws_web_page_sk10301 = tbl_Filter_TD_6232_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5209_output.setInt32(r, 0, _ws_sold_time_sk10290);
                tbl_JOIN_INNER_TD_5209_output.setInt32(r, 1, _ws_web_page_sk10301);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5209_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5209_output #Row: " << tbl_JOIN_INNER_TD_5209_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5644(Table &tbl_SerializeFromObject_TD_6858_input, Table &tbl_Filter_TD_5644_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(t_hour#468) AND ((t_hour#468 >= 8) AND (t_hour#468 <= 9))) AND isnotnull(t_time_sk#465)))
    // Input: ListBuffer(t_time_sk#465, t_hour#468)
    // Output: ListBuffer(t_time_sk#465)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6858_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _t_hour468 = tbl_SerializeFromObject_TD_6858_input.getInt32(i, 1);
        int32_t _t_time_sk465 = tbl_SerializeFromObject_TD_6858_input.getInt32(i, 0);
        if (((_t_hour468!= 0) && ((_t_hour468 >= 8) && (_t_hour468 <= 9))) && (_t_time_sk465!= 0)) {
            int32_t _t_time_sk465_t = tbl_SerializeFromObject_TD_6858_input.getInt32(i, 0);
            tbl_Filter_TD_5644_output.setInt32(r, 0, _t_time_sk465_t);
            r++;
        }
    }
    tbl_Filter_TD_5644_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5644_output #Row: " << tbl_Filter_TD_5644_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5714_key_leftMajor {
    int32_t _ws_ship_hdemo_sk739;
    bool operator==(const SW_JOIN_INNER_TD_5714_key_leftMajor& other) const {
        return ((_ws_ship_hdemo_sk739 == other._ws_ship_hdemo_sk739));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5714_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5714_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_ship_hdemo_sk739));
    }
};
}
struct SW_JOIN_INNER_TD_5714_payload_leftMajor {
    int32_t _ws_sold_time_sk730;
    int32_t _ws_ship_hdemo_sk739;
    int32_t _ws_web_page_sk741;
};
struct SW_JOIN_INNER_TD_5714_key_rightMajor {
    int32_t _hd_demo_sk204;
    bool operator==(const SW_JOIN_INNER_TD_5714_key_rightMajor& other) const {
        return ((_hd_demo_sk204 == other._hd_demo_sk204));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5714_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5714_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._hd_demo_sk204));
    }
};
}
struct SW_JOIN_INNER_TD_5714_payload_rightMajor {
    int32_t _hd_demo_sk204;
};
void SW_JOIN_INNER_TD_5714(Table &tbl_Filter_TD_6240_output, Table &tbl_Filter_TD_6813_output, Table &tbl_JOIN_INNER_TD_5714_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_ship_hdemo_sk#739 = hd_demo_sk#204))
    // Left Table: ListBuffer(ws_sold_time_sk#730, ws_ship_hdemo_sk#739, ws_web_page_sk#741)
    // Right Table: ListBuffer(hd_demo_sk#204)
    // Output Table: ListBuffer(ws_sold_time_sk#730, ws_web_page_sk#741)
    int left_nrow = tbl_Filter_TD_6240_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6813_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5714_key_leftMajor, SW_JOIN_INNER_TD_5714_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_6240_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_ship_hdemo_sk739_k = tbl_Filter_TD_6240_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_5714_key_leftMajor keyA{_ws_ship_hdemo_sk739_k};
            int32_t _ws_sold_time_sk730 = tbl_Filter_TD_6240_output.getInt32(i, 0);
            int32_t _ws_ship_hdemo_sk739 = tbl_Filter_TD_6240_output.getInt32(i, 1);
            int32_t _ws_web_page_sk741 = tbl_Filter_TD_6240_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_5714_payload_leftMajor payloadA{_ws_sold_time_sk730, _ws_ship_hdemo_sk739, _ws_web_page_sk741};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6813_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_6813_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5714_key_leftMajor{_hd_demo_sk204_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_time_sk730 = (it->second)._ws_sold_time_sk730;
                int32_t _ws_ship_hdemo_sk739 = (it->second)._ws_ship_hdemo_sk739;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _hd_demo_sk204 = tbl_Filter_TD_6813_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 0, _ws_sold_time_sk730);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 1, _ws_web_page_sk741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5714_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5714_key_rightMajor, SW_JOIN_INNER_TD_5714_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6813_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _hd_demo_sk204_k = tbl_Filter_TD_6813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5714_key_rightMajor keyA{_hd_demo_sk204_k};
            int32_t _hd_demo_sk204 = tbl_Filter_TD_6813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5714_payload_rightMajor payloadA{_hd_demo_sk204};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6240_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_ship_hdemo_sk739_k = tbl_Filter_TD_6240_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5714_key_rightMajor{_ws_ship_hdemo_sk739_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _hd_demo_sk204 = (it->second)._hd_demo_sk204;
                int32_t _ws_sold_time_sk730 = tbl_Filter_TD_6240_output.getInt32(i, 0);
                int32_t _ws_ship_hdemo_sk739 = tbl_Filter_TD_6240_output.getInt32(i, 1);
                int32_t _ws_web_page_sk741 = tbl_Filter_TD_6240_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 0, _ws_sold_time_sk730);
                tbl_JOIN_INNER_TD_5714_output.setInt32(r, 1, _ws_web_page_sk741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5714_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5714_output #Row: " << tbl_JOIN_INNER_TD_5714_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4775(Table &tbl_SerializeFromObject_TD_566_input, Table &tbl_Filter_TD_4775_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wp_char_count#10348) AND ((wp_char_count#10348 >= 5000) AND (wp_char_count#10348 <= 5200))) AND isnotnull(wp_web_page_sk#10338)))
    // Input: ListBuffer(wp_web_page_sk#10338, wp_char_count#10348)
    // Output: ListBuffer(wp_web_page_sk#10338)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_566_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_char_count10348 = tbl_SerializeFromObject_TD_566_input.getInt32(i, 1);
        int32_t _wp_web_page_sk10338 = tbl_SerializeFromObject_TD_566_input.getInt32(i, 0);
        if (((_wp_char_count10348!= 0) && ((_wp_char_count10348 >= 5000) && (_wp_char_count10348 <= 5200))) && (_wp_web_page_sk10338!= 0)) {
            int32_t _wp_web_page_sk10338_t = tbl_SerializeFromObject_TD_566_input.getInt32(i, 0);
            tbl_Filter_TD_4775_output.setInt32(r, 0, _wp_web_page_sk10338_t);
            r++;
        }
    }
    tbl_Filter_TD_4775_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4775_output #Row: " << tbl_Filter_TD_4775_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4513_key_leftMajor {
    int32_t _ws_sold_time_sk10290;
    bool operator==(const SW_JOIN_INNER_TD_4513_key_leftMajor& other) const {
        return ((_ws_sold_time_sk10290 == other._ws_sold_time_sk10290));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4513_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4513_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_time_sk10290));
    }
};
}
struct SW_JOIN_INNER_TD_4513_payload_leftMajor {
    int32_t _ws_sold_time_sk10290;
    int32_t _ws_web_page_sk10301;
};
struct SW_JOIN_INNER_TD_4513_key_rightMajor {
    int32_t _t_time_sk10328;
    bool operator==(const SW_JOIN_INNER_TD_4513_key_rightMajor& other) const {
        return ((_t_time_sk10328 == other._t_time_sk10328));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4513_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4513_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk10328));
    }
};
}
struct SW_JOIN_INNER_TD_4513_payload_rightMajor {
    int32_t _t_time_sk10328;
};
void SW_JOIN_INNER_TD_4513(Table &tbl_JOIN_INNER_TD_5209_output, Table &tbl_Filter_TD_5406_output, Table &tbl_JOIN_INNER_TD_4513_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_time_sk#10290 = t_time_sk#10328))
    // Left Table: ListBuffer(ws_sold_time_sk#10290, ws_web_page_sk#10301)
    // Right Table: ListBuffer(t_time_sk#10328)
    // Output Table: ListBuffer(ws_web_page_sk#10301)
    int left_nrow = tbl_JOIN_INNER_TD_5209_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5406_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4513_key_leftMajor, SW_JOIN_INNER_TD_4513_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5209_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_time_sk10290_k = tbl_JOIN_INNER_TD_5209_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4513_key_leftMajor keyA{_ws_sold_time_sk10290_k};
            int32_t _ws_sold_time_sk10290 = tbl_JOIN_INNER_TD_5209_output.getInt32(i, 0);
            int32_t _ws_web_page_sk10301 = tbl_JOIN_INNER_TD_5209_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4513_payload_leftMajor payloadA{_ws_sold_time_sk10290, _ws_web_page_sk10301};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5406_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk10328_k = tbl_Filter_TD_5406_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4513_key_leftMajor{_t_time_sk10328_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_time_sk10290 = (it->second)._ws_sold_time_sk10290;
                int32_t _ws_web_page_sk10301 = (it->second)._ws_web_page_sk10301;
                int32_t _t_time_sk10328 = tbl_Filter_TD_5406_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4513_output.setInt32(r, 0, _ws_web_page_sk10301);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4513_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4513_key_rightMajor, SW_JOIN_INNER_TD_4513_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5406_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk10328_k = tbl_Filter_TD_5406_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4513_key_rightMajor keyA{_t_time_sk10328_k};
            int32_t _t_time_sk10328 = tbl_Filter_TD_5406_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4513_payload_rightMajor payloadA{_t_time_sk10328};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5209_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_time_sk10290_k = tbl_JOIN_INNER_TD_5209_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4513_key_rightMajor{_ws_sold_time_sk10290_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk10328 = (it->second)._t_time_sk10328;
                int32_t _ws_sold_time_sk10290 = tbl_JOIN_INNER_TD_5209_output.getInt32(i, 0);
                int32_t _ws_web_page_sk10301 = tbl_JOIN_INNER_TD_5209_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4513_output.setInt32(r, 0, _ws_web_page_sk10301);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4513_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4513_output #Row: " << tbl_JOIN_INNER_TD_4513_output.getNumRow() << std::endl;
}

void SW_Filter_TD_4565(Table &tbl_SerializeFromObject_TD_5856_input, Table &tbl_Filter_TD_4565_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(wp_char_count#625) AND ((wp_char_count#625 >= 5000) AND (wp_char_count#625 <= 5200))) AND isnotnull(wp_web_page_sk#615)))
    // Input: ListBuffer(wp_web_page_sk#615, wp_char_count#625)
    // Output: ListBuffer(wp_web_page_sk#615)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_5856_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _wp_char_count625 = tbl_SerializeFromObject_TD_5856_input.getInt32(i, 1);
        int32_t _wp_web_page_sk615 = tbl_SerializeFromObject_TD_5856_input.getInt32(i, 0);
        if (((_wp_char_count625!= 0) && ((_wp_char_count625 >= 5000) && (_wp_char_count625 <= 5200))) && (_wp_web_page_sk615!= 0)) {
            int32_t _wp_web_page_sk615_t = tbl_SerializeFromObject_TD_5856_input.getInt32(i, 0);
            tbl_Filter_TD_4565_output.setInt32(r, 0, _wp_web_page_sk615_t);
            r++;
        }
    }
    tbl_Filter_TD_4565_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_4565_output #Row: " << tbl_Filter_TD_4565_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4390_key_leftMajor {
    int32_t _ws_sold_time_sk730;
    bool operator==(const SW_JOIN_INNER_TD_4390_key_leftMajor& other) const {
        return ((_ws_sold_time_sk730 == other._ws_sold_time_sk730));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4390_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4390_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_time_sk730));
    }
};
}
struct SW_JOIN_INNER_TD_4390_payload_leftMajor {
    int32_t _ws_sold_time_sk730;
    int32_t _ws_web_page_sk741;
};
struct SW_JOIN_INNER_TD_4390_key_rightMajor {
    int32_t _t_time_sk465;
    bool operator==(const SW_JOIN_INNER_TD_4390_key_rightMajor& other) const {
        return ((_t_time_sk465 == other._t_time_sk465));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4390_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4390_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._t_time_sk465));
    }
};
}
struct SW_JOIN_INNER_TD_4390_payload_rightMajor {
    int32_t _t_time_sk465;
};
void SW_JOIN_INNER_TD_4390(Table &tbl_JOIN_INNER_TD_5714_output, Table &tbl_Filter_TD_5644_output, Table &tbl_JOIN_INNER_TD_4390_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_time_sk#730 = t_time_sk#465))
    // Left Table: ListBuffer(ws_sold_time_sk#730, ws_web_page_sk#741)
    // Right Table: ListBuffer(t_time_sk#465)
    // Output Table: ListBuffer(ws_web_page_sk#741)
    int left_nrow = tbl_JOIN_INNER_TD_5714_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5644_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4390_key_leftMajor, SW_JOIN_INNER_TD_4390_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5714_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_time_sk730_k = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4390_key_leftMajor keyA{_ws_sold_time_sk730_k};
            int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
            int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_4390_payload_leftMajor payloadA{_ws_sold_time_sk730, _ws_web_page_sk741};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5644_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_5644_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4390_key_leftMajor{_t_time_sk465_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_time_sk730 = (it->second)._ws_sold_time_sk730;
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _t_time_sk465 = tbl_Filter_TD_5644_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4390_output.setInt32(r, 0, _ws_web_page_sk741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4390_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4390_key_rightMajor, SW_JOIN_INNER_TD_4390_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5644_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _t_time_sk465_k = tbl_Filter_TD_5644_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4390_key_rightMajor keyA{_t_time_sk465_k};
            int32_t _t_time_sk465 = tbl_Filter_TD_5644_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4390_payload_rightMajor payloadA{_t_time_sk465};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5714_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_time_sk730_k = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4390_key_rightMajor{_ws_sold_time_sk730_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _t_time_sk465 = (it->second)._t_time_sk465;
                int32_t _ws_sold_time_sk730 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 0);
                int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_5714_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_4390_output.setInt32(r, 0, _ws_web_page_sk741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4390_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4390_output #Row: " << tbl_JOIN_INNER_TD_4390_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3758_key_leftMajor {
    int32_t _ws_web_page_sk10301;
    bool operator==(const SW_JOIN_INNER_TD_3758_key_leftMajor& other) const {
        return ((_ws_web_page_sk10301 == other._ws_web_page_sk10301));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3758_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3758_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_page_sk10301));
    }
};
}
struct SW_JOIN_INNER_TD_3758_payload_leftMajor {
    int32_t _ws_web_page_sk10301;
};
struct SW_JOIN_INNER_TD_3758_key_rightMajor {
    int32_t _wp_web_page_sk10338;
    bool operator==(const SW_JOIN_INNER_TD_3758_key_rightMajor& other) const {
        return ((_wp_web_page_sk10338 == other._wp_web_page_sk10338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3758_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3758_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk10338));
    }
};
}
struct SW_JOIN_INNER_TD_3758_payload_rightMajor {
    int32_t _wp_web_page_sk10338;
};
void SW_JOIN_INNER_TD_3758(Table &tbl_JOIN_INNER_TD_4513_output, Table &tbl_Filter_TD_4775_output, Table &tbl_JOIN_INNER_TD_3758_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_page_sk#10301 = wp_web_page_sk#10338))
    // Left Table: ListBuffer(ws_web_page_sk#10301)
    // Right Table: ListBuffer(wp_web_page_sk#10338)
    // Output Table: ListBuffer(ws_web_page_sk#10301, wp_web_page_sk#10338)
    int left_nrow = tbl_JOIN_INNER_TD_4513_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4775_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3758_key_leftMajor, SW_JOIN_INNER_TD_3758_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4513_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_page_sk10301_k = tbl_JOIN_INNER_TD_4513_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3758_key_leftMajor keyA{_ws_web_page_sk10301_k};
            int32_t _ws_web_page_sk10301 = tbl_JOIN_INNER_TD_4513_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3758_payload_leftMajor payloadA{_ws_web_page_sk10301};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4775_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk10338_k = tbl_Filter_TD_4775_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3758_key_leftMajor{_wp_web_page_sk10338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_web_page_sk10301 = (it->second)._ws_web_page_sk10301;
                int32_t _wp_web_page_sk10338 = tbl_Filter_TD_4775_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3758_output.setInt32(r, 0, _ws_web_page_sk10301);
                tbl_JOIN_INNER_TD_3758_output.setInt32(r, 1, _wp_web_page_sk10338);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3758_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3758_key_rightMajor, SW_JOIN_INNER_TD_3758_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4775_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk10338_k = tbl_Filter_TD_4775_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3758_key_rightMajor keyA{_wp_web_page_sk10338_k};
            int32_t _wp_web_page_sk10338 = tbl_Filter_TD_4775_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3758_payload_rightMajor payloadA{_wp_web_page_sk10338};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4513_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_page_sk10301_k = tbl_JOIN_INNER_TD_4513_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3758_key_rightMajor{_ws_web_page_sk10301_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk10338 = (it->second)._wp_web_page_sk10338;
                int32_t _ws_web_page_sk10301 = tbl_JOIN_INNER_TD_4513_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3758_output.setInt32(r, 1, _wp_web_page_sk10338);
                tbl_JOIN_INNER_TD_3758_output.setInt32(r, 0, _ws_web_page_sk10301);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3758_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3758_output #Row: " << tbl_JOIN_INNER_TD_3758_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_3951_key_leftMajor {
    int32_t _ws_web_page_sk741;
    bool operator==(const SW_JOIN_INNER_TD_3951_key_leftMajor& other) const {
        return ((_ws_web_page_sk741 == other._ws_web_page_sk741));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3951_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3951_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_web_page_sk741));
    }
};
}
struct SW_JOIN_INNER_TD_3951_payload_leftMajor {
    int32_t _ws_web_page_sk741;
};
struct SW_JOIN_INNER_TD_3951_key_rightMajor {
    int32_t _wp_web_page_sk615;
    bool operator==(const SW_JOIN_INNER_TD_3951_key_rightMajor& other) const {
        return ((_wp_web_page_sk615 == other._wp_web_page_sk615));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_3951_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_3951_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._wp_web_page_sk615));
    }
};
}
struct SW_JOIN_INNER_TD_3951_payload_rightMajor {
    int32_t _wp_web_page_sk615;
};
void SW_JOIN_INNER_TD_3951(Table &tbl_JOIN_INNER_TD_4390_output, Table &tbl_Filter_TD_4565_output, Table &tbl_JOIN_INNER_TD_3951_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_web_page_sk#741 = wp_web_page_sk#615))
    // Left Table: ListBuffer(ws_web_page_sk#741)
    // Right Table: ListBuffer(wp_web_page_sk#615)
    // Output Table: ListBuffer(ws_web_page_sk#741, wp_web_page_sk#615)
    int left_nrow = tbl_JOIN_INNER_TD_4390_output.getNumRow();
    int right_nrow = tbl_Filter_TD_4565_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3951_key_leftMajor, SW_JOIN_INNER_TD_3951_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_4390_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3951_key_leftMajor keyA{_ws_web_page_sk741_k};
            int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3951_payload_leftMajor payloadA{_ws_web_page_sk741};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_4565_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_4565_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3951_key_leftMajor{_wp_web_page_sk615_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_web_page_sk741 = (it->second)._ws_web_page_sk741;
                int32_t _wp_web_page_sk615 = tbl_Filter_TD_4565_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3951_output.setInt32(r, 0, _ws_web_page_sk741);
                tbl_JOIN_INNER_TD_3951_output.setInt32(r, 1, _wp_web_page_sk615);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3951_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_3951_key_rightMajor, SW_JOIN_INNER_TD_3951_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_4565_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _wp_web_page_sk615_k = tbl_Filter_TD_4565_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3951_key_rightMajor keyA{_wp_web_page_sk615_k};
            int32_t _wp_web_page_sk615 = tbl_Filter_TD_4565_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_3951_payload_rightMajor payloadA{_wp_web_page_sk615};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_4390_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_web_page_sk741_k = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_3951_key_rightMajor{_ws_web_page_sk741_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _wp_web_page_sk615 = (it->second)._wp_web_page_sk615;
                int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_4390_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_3951_output.setInt32(r, 1, _wp_web_page_sk615);
                tbl_JOIN_INNER_TD_3951_output.setInt32(r, 0, _ws_web_page_sk741);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_3951_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_3951_output #Row: " << tbl_JOIN_INNER_TD_3951_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2829(Table &tbl_JOIN_INNER_TD_3758_output, Table &tbl_Aggregate_TD_2829_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS pmc#10287L)
    // Input: ListBuffer(ws_web_page_sk#10301, wp_web_page_sk#10338)
    // Output: ListBuffer(pmc#10287L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3758_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_page_sk10301 = tbl_JOIN_INNER_TD_3758_output.getInt32(i, 0);
        int32_t _wp_web_page_sk10338 = tbl_JOIN_INNER_TD_3758_output.getInt32(i, 1);
        int64_t _pmc10287L_count_0 = 1;
        count_0 += _pmc10287L_count_0;
    }
    int r = 0;
    int64_t _pmc10287L = count_0;
    tbl_Aggregate_TD_2829_output.setInt64(r++, 0, _pmc10287L);
    tbl_Aggregate_TD_2829_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2829_output #Row: " << tbl_Aggregate_TD_2829_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_2431(Table &tbl_JOIN_INNER_TD_3951_output, Table &tbl_Aggregate_TD_2431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(count(1) AS amc#10286L)
    // Input: ListBuffer(ws_web_page_sk#741, wp_web_page_sk#615)
    // Output: ListBuffer(amc#10286L)
    int64_t count_0 = 0;
    int nrow1 = tbl_JOIN_INNER_TD_3951_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_web_page_sk741 = tbl_JOIN_INNER_TD_3951_output.getInt32(i, 0);
        int32_t _wp_web_page_sk615 = tbl_JOIN_INNER_TD_3951_output.getInt32(i, 1);
        int64_t _amc10286L_count_0 = 1;
        count_0 += _amc10286L_count_0;
    }
    int r = 0;
    int64_t _amc10286L = count_0;
    tbl_Aggregate_TD_2431_output.setInt64(r++, 0, _amc10286L);
    tbl_Aggregate_TD_2431_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_2431_output #Row: " << tbl_Aggregate_TD_2431_output.getNumRow() << std::endl;
}

void SW_JOIN_CROSS_TD_1775(Table &tbl_Aggregate_TD_2431_output, Table &tbl_Aggregate_TD_2829_output, Table &tbl_JOIN_CROSS_TD_1775_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_CROSS
    // Operation: ListBuffer(JOIN_CROSS)
    // Left Table: ListBuffer(amc#10286L)
    // Right Table: ListBuffer(pmc#10287L)
    // Output Table: ListBuffer(amc#10286L, pmc#10287L)
    int left_nrow = tbl_Aggregate_TD_2431_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_2829_output.getNumRow();
    long r = 0;
    for (int i = 0; i < left_nrow; i++) {
        for (int j = 0; j < right_nrow; j++) {
        tbl_JOIN_CROSS_TD_1775_output.setInt32(r, 0, tbl_Aggregate_TD_2431_output.getInt64(i, 0));
        tbl_JOIN_CROSS_TD_1775_output.setInt32(r, 1, tbl_Aggregate_TD_2829_output.getInt64(j, 1));
        ++r;
    }
    tbl_JOIN_CROSS_TD_1775_output.setNumRow(r);
    std::cout << "tbl_JOIN_CROSS_TD_1775_output #Row: " << tbl_JOIN_CROSS_TD_1775_output.getNumRow() << std::endl;
}

void SW_Project_TD_0242(Table &tbl_JOIN_CROSS_TD_1775_output, Table &tbl_Project_TD_0242_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(CheckOverflow((promote_precision(cast(amc#10286L as decimal(15,4))) / promote_precision(cast(pmc#10287L as decimal(15,4)))), DecimalType(35,20), true) AS am_pm_ratio#10288)
    // Input: ListBuffer(amc#10286L, pmc#10287L)
    // Output: ListBuffer(am_pm_ratio#10288)
    int nrow1 = tbl_JOIN_CROSS_TD_1775_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _amc10286L = tbl_JOIN_CROSS_TD_1775_output.getInt64(i, 0);
        int64_t _pmc10287L = tbl_JOIN_CROSS_TD_1775_output.getInt64(i, 1);
        int32_t _am_pm_ratio10288 = (_amc10286L / _pmc10287L);
        tbl_Project_TD_0242_output.setInt32(i, 0, _am_pm_ratio10288);
    }
    tbl_Project_TD_0242_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_0242_output #Row: " << tbl_Project_TD_0242_output.getNumRow() << std::endl;
}

