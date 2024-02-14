#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_9581(Table &tbl_SerializeFromObject_TD_10370_input, Table &tbl_Filter_TD_9581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10370_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10370_input.getInt32(i, 0);
        if (1) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10370_input.getInt32(i, 0);
            tbl_Filter_TD_9581_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10370_input.getInt32(i, 1);
            tbl_Filter_TD_9581_output.setInt32(r, 1, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9581_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9581_output #Row: " << tbl_Filter_TD_9581_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9648(Table &tbl_SerializeFromObject_TD_1035_input, Table &tbl_Filter_TD_9648_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1035_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_1035_input.getInt32(i, 0);
        if (1) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_1035_input.getInt32(i, 0);
            tbl_Filter_TD_9648_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_1035_input.getInt32(i, 1);
            tbl_Filter_TD_9648_output.setInt32(r, 1, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9648_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9648_output #Row: " << tbl_Filter_TD_9648_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9200(Table &tbl_SerializeFromObject_TD_10768_input, Table &tbl_Filter_TD_9200_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#1104))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10768_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_10768_input.getInt32(i, 0);
        if (1) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_10768_input.getInt32(i, 0);
            tbl_Filter_TD_9200_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_ext_sales_price1127_t = tbl_SerializeFromObject_TD_10768_input.getInt32(i, 1);
            tbl_Filter_TD_9200_output.setInt32(r, 1, _cs_ext_sales_price1127_t);
            r++;
        }
    }
    tbl_Filter_TD_9200_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9200_output #Row: " << tbl_Filter_TD_9200_output.getNumRow() << std::endl;
}

void SW_Filter_TD_9577(Table &tbl_SerializeFromObject_TD_10781_input, Table &tbl_Filter_TD_9577_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#729))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_10781_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_10781_input.getInt32(i, 0);
        if (1) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_10781_input.getInt32(i, 0);
            tbl_Filter_TD_9577_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_ext_sales_price752_t = tbl_SerializeFromObject_TD_10781_input.getInt32(i, 1);
            tbl_Filter_TD_9577_output.setInt32(r, 1, _ws_ext_sales_price752_t);
            r++;
        }
    }
    tbl_Filter_TD_9577_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_9577_output #Row: " << tbl_Filter_TD_9577_output.getNumRow() << std::endl;
}

void SW_Project_TD_8575(Table &tbl_Filter_TD_9581_output, Table &tbl_Project_TD_8575_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_sold_date_sk#1104 AS sold_date_sk#3657, cs_ext_sales_price#1127 AS sales_price#3658)
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(sold_date_sk#3657, sales_price#3658)
    int nrow1 = tbl_Filter_TD_9581_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9581_output.getInt32(i, 0);
        int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9581_output.getInt32(i, 1);
        int32_t _sold_date_sk3657 = _cs_sold_date_sk1104;
        tbl_Project_TD_8575_output.setInt32(i, 0, _sold_date_sk3657);
        int32_t _sales_price3658 = _cs_ext_sales_price1127;
        tbl_Project_TD_8575_output.setInt32(i, 1, _sales_price3658);
    }
    tbl_Project_TD_8575_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8575_output #Row: " << tbl_Project_TD_8575_output.getNumRow() << std::endl;
}

void SW_Project_TD_8267(Table &tbl_Filter_TD_9648_output, Table &tbl_Project_TD_8267_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_sold_date_sk#729 AS sold_date_sk#3655, ws_ext_sales_price#752 AS sales_price#3656)
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(sold_date_sk#3655, sales_price#3656)
    int nrow1 = tbl_Filter_TD_9648_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9648_output.getInt32(i, 0);
        int32_t _ws_ext_sales_price752 = tbl_Filter_TD_9648_output.getInt32(i, 1);
        int32_t _sold_date_sk3655 = _ws_sold_date_sk729;
        tbl_Project_TD_8267_output.setInt32(i, 0, _sold_date_sk3655);
        int32_t _sales_price3656 = _ws_ext_sales_price752;
        tbl_Project_TD_8267_output.setInt32(i, 1, _sales_price3656);
    }
    tbl_Project_TD_8267_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8267_output #Row: " << tbl_Project_TD_8267_output.getNumRow() << std::endl;
}

void SW_Project_TD_8213(Table &tbl_Filter_TD_9200_output, Table &tbl_Project_TD_8213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_sold_date_sk#1104 AS sold_date_sk#3657, cs_ext_sales_price#1127 AS sales_price#3658)
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_ext_sales_price#1127)
    // Output: ListBuffer(sold_date_sk#3657, sales_price#3658)
    int nrow1 = tbl_Filter_TD_9200_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_9200_output.getInt32(i, 0);
        int32_t _cs_ext_sales_price1127 = tbl_Filter_TD_9200_output.getInt32(i, 1);
        int32_t _sold_date_sk3657 = _cs_sold_date_sk1104;
        tbl_Project_TD_8213_output.setInt32(i, 0, _sold_date_sk3657);
        int32_t _sales_price3658 = _cs_ext_sales_price1127;
        tbl_Project_TD_8213_output.setInt32(i, 1, _sales_price3658);
    }
    tbl_Project_TD_8213_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8213_output #Row: " << tbl_Project_TD_8213_output.getNumRow() << std::endl;
}

void SW_Project_TD_8713(Table &tbl_Filter_TD_9577_output, Table &tbl_Project_TD_8713_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_sold_date_sk#729 AS sold_date_sk#3655, ws_ext_sales_price#752 AS sales_price#3656)
    // Input: ListBuffer(ws_sold_date_sk#729, ws_ext_sales_price#752)
    // Output: ListBuffer(sold_date_sk#3655, sales_price#3656)
    int nrow1 = tbl_Filter_TD_9577_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk729 = tbl_Filter_TD_9577_output.getInt32(i, 0);
        int32_t _ws_ext_sales_price752 = tbl_Filter_TD_9577_output.getInt32(i, 1);
        int32_t _sold_date_sk3655 = _ws_sold_date_sk729;
        tbl_Project_TD_8713_output.setInt32(i, 0, _sold_date_sk3655);
        int32_t _sales_price3656 = _ws_ext_sales_price752;
        tbl_Project_TD_8713_output.setInt32(i, 1, _sales_price3656);
    }
    tbl_Project_TD_8713_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_8713_output #Row: " << tbl_Project_TD_8713_output.getNumRow() << std::endl;
}

void SW_Filter_TD_763(Table &tbl_SerializeFromObject_TD_8816_input, Table &tbl_Filter_TD_763_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND isnotnull(d_week_seq#124)))
    // Input: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8816_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8816_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_8816_input.getInt32(i, 1);
        if ((1) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8816_input.getInt32(i, 0);
            tbl_Filter_TD_763_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_8816_input.getInt32(i, 1);
            tbl_Filter_TD_763_output.setInt32(r, 1, _d_week_seq124_t);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_t = tbl_SerializeFromObject_TD_8816_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_763_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_t);
            r++;
        }
    }
    tbl_Filter_TD_763_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_763_output #Row: " << tbl_Filter_TD_763_output.getNumRow() << std::endl;
}

void SW_Union_TD_7924(Table &tbl_Project_TD_8267_output, Table &tbl_Project_TD_8575_output, Table &tbl_Union_TD_7924_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sold_date_sk#3655, sales_price#3656)
    int r = 0;
    int row0 = tbl_Project_TD_8267_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_7924_output.setInt32(r, 0, tbl_Project_TD_8267_output.getInt32(i, 0));
        tbl_Union_TD_7924_output.setInt32(r, 1, tbl_Project_TD_8267_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_8575_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_7924_output.setInt32(r, 0, tbl_Project_TD_8575_output.getInt32(i, 0));
        tbl_Union_TD_7924_output.setInt32(r, 1, tbl_Project_TD_8575_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_7924_output.setNumRow(r);
    std::cout << "tbl_Union_TD_7924_output #Row: " << tbl_Union_TD_7924_output.getNumRow() << std::endl;
}

void SW_Filter_TD_79(Table &tbl_SerializeFromObject_TD_832_input, Table &tbl_Filter_TD_79_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(d_date_sk#120) AND isnotnull(d_week_seq#124)))
    // Input: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_832_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_832_input.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_SerializeFromObject_TD_832_input.getInt32(i, 1);
        if ((1) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_832_input.getInt32(i, 0);
            tbl_Filter_TD_79_output.setInt32(r, 0, _d_date_sk120_t);
            int32_t _d_week_seq124_t = tbl_SerializeFromObject_TD_832_input.getInt32(i, 1);
            tbl_Filter_TD_79_output.setInt32(r, 1, _d_week_seq124_t);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_t = tbl_SerializeFromObject_TD_832_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_79_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_t);
            r++;
        }
    }
    tbl_Filter_TD_79_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_79_output #Row: " << tbl_Filter_TD_79_output.getNumRow() << std::endl;
}

void SW_Union_TD_7314(Table &tbl_Project_TD_8713_output, Table &tbl_Project_TD_8213_output, Table &tbl_Union_TD_7314_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sold_date_sk#3655, sales_price#3656)
    int r = 0;
    int row0 = tbl_Project_TD_8713_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_7314_output.setInt32(r, 0, tbl_Project_TD_8713_output.getInt32(i, 0));
        tbl_Union_TD_7314_output.setInt32(r, 1, tbl_Project_TD_8713_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_8213_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_7314_output.setInt32(r, 0, tbl_Project_TD_8213_output.getInt32(i, 0));
        tbl_Union_TD_7314_output.setInt32(r, 1, tbl_Project_TD_8213_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_7314_output.setNumRow(r);
    std::cout << "tbl_Union_TD_7314_output #Row: " << tbl_Union_TD_7314_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6539_key_leftMajor {
    int32_t _sold_date_sk3655;
    bool operator==(const SW_JOIN_INNER_TD_6539_key_leftMajor& other) const {
        return ((_sold_date_sk3655 == other._sold_date_sk3655));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6539_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6539_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_date_sk3655));
    }
};
}
struct SW_JOIN_INNER_TD_6539_payload_leftMajor {
    int32_t _sold_date_sk3655;
    int32_t _sales_price3656;
};
struct SW_JOIN_INNER_TD_6539_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6539_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6539_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6539_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6539_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_week_seq124;
    std::string _d_day_name134;
};
void SW_JOIN_INNER_TD_6539(Table &tbl_Union_TD_7924_output, Table &tbl_Filter_TD_763_output, Table &tbl_JOIN_INNER_TD_6539_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = sold_date_sk#3655))
    // Left Table: ListBuffer(sold_date_sk#3655, sales_price#3656)
    // Right Table: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output Table: ListBuffer(sales_price#3656, d_week_seq#124, d_day_name#134)
    int left_nrow = tbl_Union_TD_7924_output.getNumRow();
    int right_nrow = tbl_Filter_TD_763_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6539_key_leftMajor, SW_JOIN_INNER_TD_6539_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_7924_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_date_sk3655_k = tbl_Union_TD_7924_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6539_key_leftMajor keyA{_sold_date_sk3655_k};
            int32_t _sold_date_sk3655 = tbl_Union_TD_7924_output.getInt32(i, 0);
            int32_t _sales_price3656 = tbl_Union_TD_7924_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6539_payload_leftMajor payloadA{_sold_date_sk3655, _sales_price3656};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_763_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_763_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6539_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk3655 = (it->second)._sold_date_sk3655;
                int32_t _sales_price3656 = (it->second)._sales_price3656;
                int32_t _d_date_sk120 = tbl_Filter_TD_763_output.getInt32(i, 0);
                int32_t _d_week_seq124 = tbl_Filter_TD_763_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_763_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _d_day_name134 = std::string(_d_day_name134_n.data());
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 0, _sales_price3656);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6539_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6539_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6539_key_rightMajor, SW_JOIN_INNER_TD_6539_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_763_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_763_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6539_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_763_output.getInt32(i, 0);
            int32_t _d_week_seq124 = tbl_Filter_TD_763_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_763_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _d_day_name134 = std::string(_d_day_name134_n.data());
            SW_JOIN_INNER_TD_6539_payload_rightMajor payloadA{_d_date_sk120, _d_week_seq124, _d_day_name134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_7924_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_date_sk3655_k = tbl_Union_TD_7924_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6539_key_rightMajor{_sold_date_sk3655_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                std::string _d_day_name134 = (it->second)._d_day_name134;
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n{};
                memcpy(_d_day_name134_n.data(), (_d_day_name134).data(), (_d_day_name134).length());
                int32_t _sold_date_sk3655 = tbl_Union_TD_7924_output.getInt32(i, 0);
                int32_t _sales_price3656 = tbl_Union_TD_7924_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6539_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                tbl_JOIN_INNER_TD_6539_output.setInt32(r, 0, _sales_price3656);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6539_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6539_output #Row: " << tbl_JOIN_INNER_TD_6539_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_6408_key_leftMajor {
    int32_t _sold_date_sk3655;
    bool operator==(const SW_JOIN_INNER_TD_6408_key_leftMajor& other) const {
        return ((_sold_date_sk3655 == other._sold_date_sk3655));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6408_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6408_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._sold_date_sk3655));
    }
};
}
struct SW_JOIN_INNER_TD_6408_payload_leftMajor {
    int32_t _sold_date_sk3655;
    int32_t _sales_price3656;
};
struct SW_JOIN_INNER_TD_6408_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_6408_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_6408_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_6408_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_6408_payload_rightMajor {
    int32_t _d_date_sk120;
    int32_t _d_week_seq124;
    std::string _d_day_name134;
};
void SW_JOIN_INNER_TD_6408(Table &tbl_Union_TD_7314_output, Table &tbl_Filter_TD_79_output, Table &tbl_JOIN_INNER_TD_6408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_date_sk#120 = sold_date_sk#3655))
    // Left Table: ListBuffer(sold_date_sk#3655, sales_price#3656)
    // Right Table: ListBuffer(d_date_sk#120, d_week_seq#124, d_day_name#134)
    // Output Table: ListBuffer(sales_price#3656, d_week_seq#124, d_day_name#134)
    int left_nrow = tbl_Union_TD_7314_output.getNumRow();
    int right_nrow = tbl_Filter_TD_79_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6408_key_leftMajor, SW_JOIN_INNER_TD_6408_payload_leftMajor> ht1;
        int nrow1 = tbl_Union_TD_7314_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _sold_date_sk3655_k = tbl_Union_TD_7314_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6408_key_leftMajor keyA{_sold_date_sk3655_k};
            int32_t _sold_date_sk3655 = tbl_Union_TD_7314_output.getInt32(i, 0);
            int32_t _sales_price3656 = tbl_Union_TD_7314_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_6408_payload_leftMajor payloadA{_sold_date_sk3655, _sales_price3656};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_79_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_79_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6408_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _sold_date_sk3655 = (it->second)._sold_date_sk3655;
                int32_t _sales_price3656 = (it->second)._sales_price3656;
                int32_t _d_date_sk120 = tbl_Filter_TD_79_output.getInt32(i, 0);
                int32_t _d_week_seq124 = tbl_Filter_TD_79_output.getInt32(i, 1);
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_79_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _d_day_name134 = std::string(_d_day_name134_n.data());
                tbl_JOIN_INNER_TD_6408_output.setInt32(r, 0, _sales_price3656);
                tbl_JOIN_INNER_TD_6408_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6408_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_6408_key_rightMajor, SW_JOIN_INNER_TD_6408_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_79_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_79_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_6408_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_79_output.getInt32(i, 0);
            int32_t _d_week_seq124 = tbl_Filter_TD_79_output.getInt32(i, 1);
            std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n = tbl_Filter_TD_79_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _d_day_name134 = std::string(_d_day_name134_n.data());
            SW_JOIN_INNER_TD_6408_payload_rightMajor payloadA{_d_date_sk120, _d_week_seq124, _d_day_name134};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Union_TD_7314_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _sold_date_sk3655_k = tbl_Union_TD_7314_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_6408_key_rightMajor{_sold_date_sk3655_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                std::string _d_day_name134 = (it->second)._d_day_name134;
                std::array<char, TPCDS_READ_MAX + 1> _d_day_name134_n{};
                memcpy(_d_day_name134_n.data(), (_d_day_name134).data(), (_d_day_name134).length());
                int32_t _sold_date_sk3655 = tbl_Union_TD_7314_output.getInt32(i, 0);
                int32_t _sales_price3656 = tbl_Union_TD_7314_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_6408_output.setInt32(r, 1, _d_week_seq124);
                tbl_JOIN_INNER_TD_6408_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _d_day_name134_n);
                tbl_JOIN_INNER_TD_6408_output.setInt32(r, 0, _sales_price3656);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_6408_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_6408_output #Row: " << tbl_JOIN_INNER_TD_6408_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5946(Table &tbl_SerializeFromObject_TD_6656_input, Table &tbl_Filter_TD_5946_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3700) AND (d_year#3700 = 2002)) AND isnotnull(d_week_seq#3698)))
    // Input: ListBuffer(d_week_seq#3698, d_year#3700)
    // Output: ListBuffer(d_week_seq#3698)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6656_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3700 = tbl_SerializeFromObject_TD_6656_input.getInt32(i, 1);
        int32_t _d_week_seq3698 = tbl_SerializeFromObject_TD_6656_input.getInt32(i, 0);
        if (((1) && (_d_year3700 == 2002)) && (1)) {
            int32_t _d_week_seq3698_t = tbl_SerializeFromObject_TD_6656_input.getInt32(i, 0);
            tbl_Filter_TD_5946_output.setInt32(r, 0, _d_week_seq3698_t);
            r++;
        }
    }
    tbl_Filter_TD_5946_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5946_output #Row: " << tbl_Filter_TD_5946_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_5898_key;
struct SW_Aggregate_TD_5898_payload {
    int32_t _sun_sales3659_sum_0;
    int32_t _mon_sales3660_sum_1;
    int32_t _tue_sales3661_sum_2;
    int32_t _wed_sales3662_sum_3;
    int32_t _thu_sales3663_sum_4;
    int32_t _fri_sales3664_sum_5;
    int32_t _sat_sales3665_sum_6;
};
void SW_Aggregate_TD_5898(Table &tbl_JOIN_INNER_TD_6539_output, Table &tbl_Aggregate_TD_5898_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_week_seq#124, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Sunday) THEN sales_price#3656 END)),17,2) AS sun_sales#3659, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Monday) THEN sales_price#3656 END)),17,2) AS mon_sales#3660, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Tuesday) THEN sales_price#3656 END)),17,2) AS tue_sales#3661, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Wednesday) THEN sales_price#3656 END)),17,2) AS wed_sales#3662, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Thursday) THEN sales_price#3656 END)),17,2) AS thu_sales#3663, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Friday) THEN sales_price#3656 END)),17,2) AS fri_sales#3664, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Saturday) THEN sales_price#3656 END)),17,2) AS sat_sales#3665)
    // Input: ListBuffer(sales_price#3656, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    std::unordered_map<SW_Aggregate_TD_5898_key, SW_Aggregate_TD_5898_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6539_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales_price3656 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6539_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _d_day_name134 = tbl_JOIN_INNER_TD_6539_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_5898_key k = _d_week_seq124;
        int64_t _sun_sales3659_sum_0 = (std::string(_d_day_name134.data()) == "Sunday") ? _sales_price3656 : 1;
        int64_t _mon_sales3660_sum_1 = (std::string(_d_day_name134.data()) == "Monday") ? _sales_price3656 : 1;
        int64_t _tue_sales3661_sum_2 = (std::string(_d_day_name134.data()) == "Tuesday") ? _sales_price3656 : 1;
        int64_t _wed_sales3662_sum_3 = (std::string(_d_day_name134.data()) == "Wednesday") ? _sales_price3656 : 1;
        int64_t _thu_sales3663_sum_4 = (std::string(_d_day_name134.data()) == "Thursday") ? _sales_price3656 : 1;
        int64_t _fri_sales3664_sum_5 = (std::string(_d_day_name134.data()) == "Friday") ? _sales_price3656 : 1;
        int64_t _sat_sales3665_sum_6 = (std::string(_d_day_name134.data()) == "Saturday") ? _sales_price3656 : 1;
        SW_Aggregate_TD_5898_payload p{_sun_sales3659_sum_0, _mon_sales3660_sum_1, _tue_sales3661_sum_2, _wed_sales3662_sum_3, _thu_sales3663_sum_4, _fri_sales3664_sum_5, _sat_sales3665_sum_6};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sun_sales3659_sum_0 + _sun_sales3659_sum_0;
            p._sun_sales3659_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._mon_sales3660_sum_1 + _mon_sales3660_sum_1;
            p._mon_sales3660_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._tue_sales3661_sum_2 + _tue_sales3661_sum_2;
            p._tue_sales3661_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._wed_sales3662_sum_3 + _wed_sales3662_sum_3;
            p._wed_sales3662_sum_3 = sum_3;
            int32_t sum_4 = (it->second)._thu_sales3663_sum_4 + _thu_sales3663_sum_4;
            p._thu_sales3663_sum_4 = sum_4;
            int32_t sum_5 = (it->second)._fri_sales3664_sum_5 + _fri_sales3664_sum_5;
            p._fri_sales3664_sum_5 = sum_5;
            int32_t sum_6 = (it->second)._sat_sales3665_sum_6 + _sat_sales3665_sum_6;
            p._sat_sales3665_sum_6 = sum_6;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5898_output.setInt32(r, 0, (it.first));
        int32_t _sun_sales3659 = (it.second)._sun_sales3659_sum_0;
        tbl_Aggregate_TD_5898_output.setInt32(r, 1, _sun_sales3659);
        int32_t _mon_sales3660 = (it.second)._mon_sales3660_sum_1;
        tbl_Aggregate_TD_5898_output.setInt32(r, 2, _mon_sales3660);
        int32_t _tue_sales3661 = (it.second)._tue_sales3661_sum_2;
        tbl_Aggregate_TD_5898_output.setInt32(r, 3, _tue_sales3661);
        int32_t _wed_sales3662 = (it.second)._wed_sales3662_sum_3;
        tbl_Aggregate_TD_5898_output.setInt32(r, 4, _wed_sales3662);
        int32_t _thu_sales3663 = (it.second)._thu_sales3663_sum_4;
        tbl_Aggregate_TD_5898_output.setInt32(r, 5, _thu_sales3663);
        int32_t _fri_sales3664 = (it.second)._fri_sales3664_sum_5;
        tbl_Aggregate_TD_5898_output.setInt32(r, 6, _fri_sales3664);
        int32_t _sat_sales3665 = (it.second)._sat_sales3665_sum_6;
        tbl_Aggregate_TD_5898_output.setInt32(r, 7, _sat_sales3665);
        ++r;
    }
    tbl_Aggregate_TD_5898_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5898_output #Row: " << tbl_Aggregate_TD_5898_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5864(Table &tbl_SerializeFromObject_TD_6130_input, Table &tbl_Filter_TD_5864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3672) AND (d_year#3672 = 2001)) AND isnotnull(d_week_seq#3670)))
    // Input: ListBuffer(d_week_seq#3670, d_year#3672)
    // Output: ListBuffer(d_week_seq#3670)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6130_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3672 = tbl_SerializeFromObject_TD_6130_input.getInt32(i, 1);
        int32_t _d_week_seq3670 = tbl_SerializeFromObject_TD_6130_input.getInt32(i, 0);
        if (((1) && (_d_year3672 == 2001)) && (1)) {
            int32_t _d_week_seq3670_t = tbl_SerializeFromObject_TD_6130_input.getInt32(i, 0);
            tbl_Filter_TD_5864_output.setInt32(r, 0, _d_week_seq3670_t);
            r++;
        }
    }
    tbl_Filter_TD_5864_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5864_output #Row: " << tbl_Filter_TD_5864_output.getNumRow() << std::endl;
}

typedef int32_t SW_Aggregate_TD_5606_key;
struct SW_Aggregate_TD_5606_payload {
    int32_t _sun_sales3659_sum_0;
    int32_t _mon_sales3660_sum_1;
    int32_t _tue_sales3661_sum_2;
    int32_t _wed_sales3662_sum_3;
    int32_t _thu_sales3663_sum_4;
    int32_t _fri_sales3664_sum_5;
    int32_t _sat_sales3665_sum_6;
};
void SW_Aggregate_TD_5606(Table &tbl_JOIN_INNER_TD_6408_output, Table &tbl_Aggregate_TD_5606_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(d_week_seq#124, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Sunday) THEN sales_price#3656 END)),17,2) AS sun_sales#3659, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Monday) THEN sales_price#3656 END)),17,2) AS mon_sales#3660, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Tuesday) THEN sales_price#3656 END)),17,2) AS tue_sales#3661, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Wednesday) THEN sales_price#3656 END)),17,2) AS wed_sales#3662, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Thursday) THEN sales_price#3656 END)),17,2) AS thu_sales#3663, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Friday) THEN sales_price#3656 END)),17,2) AS fri_sales#3664, MakeDecimal(sum(UnscaledValue(CASE WHEN (d_day_name#134 = Saturday) THEN sales_price#3656 END)),17,2) AS sat_sales#3665)
    // Input: ListBuffer(sales_price#3656, d_week_seq#124, d_day_name#134)
    // Output: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    std::unordered_map<SW_Aggregate_TD_5606_key, SW_Aggregate_TD_5606_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_6408_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales_price3656 = tbl_JOIN_INNER_TD_6408_output.getInt32(i, 0);
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_6408_output.getInt32(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _d_day_name134 = tbl_JOIN_INNER_TD_6408_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        SW_Aggregate_TD_5606_key k = _d_week_seq124;
        int64_t _sun_sales3659_sum_0 = (std::string(_d_day_name134.data()) == "Sunday") ? _sales_price3656 : 1;
        int64_t _mon_sales3660_sum_1 = (std::string(_d_day_name134.data()) == "Monday") ? _sales_price3656 : 1;
        int64_t _tue_sales3661_sum_2 = (std::string(_d_day_name134.data()) == "Tuesday") ? _sales_price3656 : 1;
        int64_t _wed_sales3662_sum_3 = (std::string(_d_day_name134.data()) == "Wednesday") ? _sales_price3656 : 1;
        int64_t _thu_sales3663_sum_4 = (std::string(_d_day_name134.data()) == "Thursday") ? _sales_price3656 : 1;
        int64_t _fri_sales3664_sum_5 = (std::string(_d_day_name134.data()) == "Friday") ? _sales_price3656 : 1;
        int64_t _sat_sales3665_sum_6 = (std::string(_d_day_name134.data()) == "Saturday") ? _sales_price3656 : 1;
        SW_Aggregate_TD_5606_payload p{_sun_sales3659_sum_0, _mon_sales3660_sum_1, _tue_sales3661_sum_2, _wed_sales3662_sum_3, _thu_sales3663_sum_4, _fri_sales3664_sum_5, _sat_sales3665_sum_6};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sun_sales3659_sum_0 + _sun_sales3659_sum_0;
            p._sun_sales3659_sum_0 = sum_0;
            int32_t sum_1 = (it->second)._mon_sales3660_sum_1 + _mon_sales3660_sum_1;
            p._mon_sales3660_sum_1 = sum_1;
            int32_t sum_2 = (it->second)._tue_sales3661_sum_2 + _tue_sales3661_sum_2;
            p._tue_sales3661_sum_2 = sum_2;
            int32_t sum_3 = (it->second)._wed_sales3662_sum_3 + _wed_sales3662_sum_3;
            p._wed_sales3662_sum_3 = sum_3;
            int32_t sum_4 = (it->second)._thu_sales3663_sum_4 + _thu_sales3663_sum_4;
            p._thu_sales3663_sum_4 = sum_4;
            int32_t sum_5 = (it->second)._fri_sales3664_sum_5 + _fri_sales3664_sum_5;
            p._fri_sales3664_sum_5 = sum_5;
            int32_t sum_6 = (it->second)._sat_sales3665_sum_6 + _sat_sales3665_sum_6;
            p._sat_sales3665_sum_6 = sum_6;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_5606_output.setInt32(r, 0, (it.first));
        int32_t _sun_sales3659 = (it.second)._sun_sales3659_sum_0;
        tbl_Aggregate_TD_5606_output.setInt32(r, 1, _sun_sales3659);
        int32_t _mon_sales3660 = (it.second)._mon_sales3660_sum_1;
        tbl_Aggregate_TD_5606_output.setInt32(r, 2, _mon_sales3660);
        int32_t _tue_sales3661 = (it.second)._tue_sales3661_sum_2;
        tbl_Aggregate_TD_5606_output.setInt32(r, 3, _tue_sales3661);
        int32_t _wed_sales3662 = (it.second)._wed_sales3662_sum_3;
        tbl_Aggregate_TD_5606_output.setInt32(r, 4, _wed_sales3662);
        int32_t _thu_sales3663 = (it.second)._thu_sales3663_sum_4;
        tbl_Aggregate_TD_5606_output.setInt32(r, 5, _thu_sales3663);
        int32_t _fri_sales3664 = (it.second)._fri_sales3664_sum_5;
        tbl_Aggregate_TD_5606_output.setInt32(r, 6, _fri_sales3664);
        int32_t _sat_sales3665 = (it.second)._sat_sales3665_sum_6;
        tbl_Aggregate_TD_5606_output.setInt32(r, 7, _sat_sales3665);
        ++r;
    }
    tbl_Aggregate_TD_5606_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_5606_output #Row: " << tbl_Aggregate_TD_5606_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4663_key_leftMajor {
    int32_t _d_week_seq124;
    bool operator==(const SW_JOIN_INNER_TD_4663_key_leftMajor& other) const {
        return ((_d_week_seq124 == other._d_week_seq124));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4663_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4663_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124));
    }
};
}
struct SW_JOIN_INNER_TD_4663_payload_leftMajor {
    int32_t _d_week_seq124;
    int32_t _sun_sales3659;
    int32_t _mon_sales3660;
    int32_t _tue_sales3661;
    int32_t _wed_sales3662;
    int32_t _thu_sales3663;
    int32_t _fri_sales3664;
    int32_t _sat_sales3665;
};
struct SW_JOIN_INNER_TD_4663_key_rightMajor {
    int32_t _d_week_seq3698;
    bool operator==(const SW_JOIN_INNER_TD_4663_key_rightMajor& other) const {
        return ((_d_week_seq3698 == other._d_week_seq3698));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4663_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4663_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq3698));
    }
};
}
struct SW_JOIN_INNER_TD_4663_payload_rightMajor {
    int32_t _d_week_seq3698;
};
void SW_JOIN_INNER_TD_4663(Table &tbl_Aggregate_TD_5898_output, Table &tbl_Filter_TD_5946_output, Table &tbl_JOIN_INNER_TD_4663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_week_seq#3698 = d_week_seq#124))
    // Left Table: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    // Right Table: ListBuffer(d_week_seq#3698)
    // Output Table: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    int left_nrow = tbl_Aggregate_TD_5898_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5946_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4663_key_leftMajor, SW_JOIN_INNER_TD_4663_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5898_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq124_k = tbl_Aggregate_TD_5898_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4663_key_leftMajor keyA{_d_week_seq124_k};
            int32_t _d_week_seq124 = tbl_Aggregate_TD_5898_output.getInt32(i, 0);
            int32_t _sun_sales3659 = tbl_Aggregate_TD_5898_output.getInt32(i, 1);
            int32_t _mon_sales3660 = tbl_Aggregate_TD_5898_output.getInt32(i, 2);
            int32_t _tue_sales3661 = tbl_Aggregate_TD_5898_output.getInt32(i, 3);
            int32_t _wed_sales3662 = tbl_Aggregate_TD_5898_output.getInt32(i, 4);
            int32_t _thu_sales3663 = tbl_Aggregate_TD_5898_output.getInt32(i, 5);
            int32_t _fri_sales3664 = tbl_Aggregate_TD_5898_output.getInt32(i, 6);
            int32_t _sat_sales3665 = tbl_Aggregate_TD_5898_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_4663_payload_leftMajor payloadA{_d_week_seq124, _sun_sales3659, _mon_sales3660, _tue_sales3661, _wed_sales3662, _thu_sales3663, _fri_sales3664, _sat_sales3665};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5946_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq3698_k = tbl_Filter_TD_5946_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4663_key_leftMajor{_d_week_seq3698_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _sun_sales3659 = (it->second)._sun_sales3659;
                int32_t _mon_sales3660 = (it->second)._mon_sales3660;
                int32_t _tue_sales3661 = (it->second)._tue_sales3661;
                int32_t _wed_sales3662 = (it->second)._wed_sales3662;
                int32_t _thu_sales3663 = (it->second)._thu_sales3663;
                int32_t _fri_sales3664 = (it->second)._fri_sales3664;
                int32_t _sat_sales3665 = (it->second)._sat_sales3665;
                int32_t _d_week_seq3698 = tbl_Filter_TD_5946_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 1, _sun_sales3659);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 2, _mon_sales3660);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 3, _tue_sales3661);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 4, _wed_sales3662);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 5, _thu_sales3663);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 6, _fri_sales3664);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 7, _sat_sales3665);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4663_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4663_key_rightMajor, SW_JOIN_INNER_TD_4663_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5946_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq3698_k = tbl_Filter_TD_5946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4663_key_rightMajor keyA{_d_week_seq3698_k};
            int32_t _d_week_seq3698 = tbl_Filter_TD_5946_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4663_payload_rightMajor payloadA{_d_week_seq3698};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5898_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq124_k = tbl_Aggregate_TD_5898_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4663_key_rightMajor{_d_week_seq124_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq3698 = (it->second)._d_week_seq3698;
                int32_t _d_week_seq124 = tbl_Aggregate_TD_5898_output.getInt32(i, 0);
                int32_t _sun_sales3659 = tbl_Aggregate_TD_5898_output.getInt32(i, 1);
                int32_t _mon_sales3660 = tbl_Aggregate_TD_5898_output.getInt32(i, 2);
                int32_t _tue_sales3661 = tbl_Aggregate_TD_5898_output.getInt32(i, 3);
                int32_t _wed_sales3662 = tbl_Aggregate_TD_5898_output.getInt32(i, 4);
                int32_t _thu_sales3663 = tbl_Aggregate_TD_5898_output.getInt32(i, 5);
                int32_t _fri_sales3664 = tbl_Aggregate_TD_5898_output.getInt32(i, 6);
                int32_t _sat_sales3665 = tbl_Aggregate_TD_5898_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 1, _sun_sales3659);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 2, _mon_sales3660);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 3, _tue_sales3661);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 4, _wed_sales3662);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 5, _thu_sales3663);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 6, _fri_sales3664);
                tbl_JOIN_INNER_TD_4663_output.setInt32(r, 7, _sat_sales3665);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4663_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4663_output #Row: " << tbl_JOIN_INNER_TD_4663_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4402_key_leftMajor {
    int32_t _d_week_seq124;
    bool operator==(const SW_JOIN_INNER_TD_4402_key_leftMajor& other) const {
        return ((_d_week_seq124 == other._d_week_seq124));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4402_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4402_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq124));
    }
};
}
struct SW_JOIN_INNER_TD_4402_payload_leftMajor {
    int32_t _d_week_seq124;
    int32_t _sun_sales3659;
    int32_t _mon_sales3660;
    int32_t _tue_sales3661;
    int32_t _wed_sales3662;
    int32_t _thu_sales3663;
    int32_t _fri_sales3664;
    int32_t _sat_sales3665;
};
struct SW_JOIN_INNER_TD_4402_key_rightMajor {
    int32_t _d_week_seq3670;
    bool operator==(const SW_JOIN_INNER_TD_4402_key_rightMajor& other) const {
        return ((_d_week_seq3670 == other._d_week_seq3670));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4402_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4402_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq3670));
    }
};
}
struct SW_JOIN_INNER_TD_4402_payload_rightMajor {
    int32_t _d_week_seq3670;
};
void SW_JOIN_INNER_TD_4402(Table &tbl_Aggregate_TD_5606_output, Table &tbl_Filter_TD_5864_output, Table &tbl_JOIN_INNER_TD_4402_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_week_seq#3670 = d_week_seq#124))
    // Left Table: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    // Right Table: ListBuffer(d_week_seq#3670)
    // Output Table: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    int left_nrow = tbl_Aggregate_TD_5606_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5864_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4402_key_leftMajor, SW_JOIN_INNER_TD_4402_payload_leftMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_5606_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq124_k = tbl_Aggregate_TD_5606_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4402_key_leftMajor keyA{_d_week_seq124_k};
            int32_t _d_week_seq124 = tbl_Aggregate_TD_5606_output.getInt32(i, 0);
            int32_t _sun_sales3659 = tbl_Aggregate_TD_5606_output.getInt32(i, 1);
            int32_t _mon_sales3660 = tbl_Aggregate_TD_5606_output.getInt32(i, 2);
            int32_t _tue_sales3661 = tbl_Aggregate_TD_5606_output.getInt32(i, 3);
            int32_t _wed_sales3662 = tbl_Aggregate_TD_5606_output.getInt32(i, 4);
            int32_t _thu_sales3663 = tbl_Aggregate_TD_5606_output.getInt32(i, 5);
            int32_t _fri_sales3664 = tbl_Aggregate_TD_5606_output.getInt32(i, 6);
            int32_t _sat_sales3665 = tbl_Aggregate_TD_5606_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_4402_payload_leftMajor payloadA{_d_week_seq124, _sun_sales3659, _mon_sales3660, _tue_sales3661, _wed_sales3662, _thu_sales3663, _fri_sales3664, _sat_sales3665};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5864_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq3670_k = tbl_Filter_TD_5864_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4402_key_leftMajor{_d_week_seq3670_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq124 = (it->second)._d_week_seq124;
                int32_t _sun_sales3659 = (it->second)._sun_sales3659;
                int32_t _mon_sales3660 = (it->second)._mon_sales3660;
                int32_t _tue_sales3661 = (it->second)._tue_sales3661;
                int32_t _wed_sales3662 = (it->second)._wed_sales3662;
                int32_t _thu_sales3663 = (it->second)._thu_sales3663;
                int32_t _fri_sales3664 = (it->second)._fri_sales3664;
                int32_t _sat_sales3665 = (it->second)._sat_sales3665;
                int32_t _d_week_seq3670 = tbl_Filter_TD_5864_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 1, _sun_sales3659);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 2, _mon_sales3660);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 3, _tue_sales3661);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 4, _wed_sales3662);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 5, _thu_sales3663);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 6, _fri_sales3664);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 7, _sat_sales3665);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4402_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4402_key_rightMajor, SW_JOIN_INNER_TD_4402_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5864_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq3670_k = tbl_Filter_TD_5864_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4402_key_rightMajor keyA{_d_week_seq3670_k};
            int32_t _d_week_seq3670 = tbl_Filter_TD_5864_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_4402_payload_rightMajor payloadA{_d_week_seq3670};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_5606_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq124_k = tbl_Aggregate_TD_5606_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4402_key_rightMajor{_d_week_seq124_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq3670 = (it->second)._d_week_seq3670;
                int32_t _d_week_seq124 = tbl_Aggregate_TD_5606_output.getInt32(i, 0);
                int32_t _sun_sales3659 = tbl_Aggregate_TD_5606_output.getInt32(i, 1);
                int32_t _mon_sales3660 = tbl_Aggregate_TD_5606_output.getInt32(i, 2);
                int32_t _tue_sales3661 = tbl_Aggregate_TD_5606_output.getInt32(i, 3);
                int32_t _wed_sales3662 = tbl_Aggregate_TD_5606_output.getInt32(i, 4);
                int32_t _thu_sales3663 = tbl_Aggregate_TD_5606_output.getInt32(i, 5);
                int32_t _fri_sales3664 = tbl_Aggregate_TD_5606_output.getInt32(i, 6);
                int32_t _sat_sales3665 = tbl_Aggregate_TD_5606_output.getInt32(i, 7);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 0, _d_week_seq124);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 1, _sun_sales3659);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 2, _mon_sales3660);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 3, _tue_sales3661);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 4, _wed_sales3662);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 5, _thu_sales3663);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 6, _fri_sales3664);
                tbl_JOIN_INNER_TD_4402_output.setInt32(r, 7, _sat_sales3665);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4402_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4402_output #Row: " << tbl_JOIN_INNER_TD_4402_output.getNumRow() << std::endl;
}

void SW_Project_TD_3832(Table &tbl_JOIN_INNER_TD_4663_output, Table &tbl_Project_TD_3832_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(d_week_seq#124 AS d_week_seq2#3647, sun_sales#3659 AS sun_sales2#3648, mon_sales#3660 AS mon_sales2#3649, tue_sales#3661 AS tue_sales2#3650, wed_sales#3662 AS wed_sales2#3651, thu_sales#3663 AS thu_sales2#3652, fri_sales#3664 AS fri_sales2#3653, sat_sales#3665 AS sat_sales2#3654)
    // Input: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    // Output: ListBuffer(d_week_seq2#3647, sun_sales2#3648, mon_sales2#3649, tue_sales2#3650, wed_sales2#3651, thu_sales2#3652, fri_sales2#3653, sat_sales2#3654)
    int nrow1 = tbl_JOIN_INNER_TD_4663_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 0);
        int32_t _sun_sales3659 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 1);
        int32_t _mon_sales3660 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 2);
        int32_t _tue_sales3661 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 3);
        int32_t _wed_sales3662 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 4);
        int32_t _thu_sales3663 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 5);
        int32_t _fri_sales3664 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 6);
        int32_t _sat_sales3665 = tbl_JOIN_INNER_TD_4663_output.getInt32(i, 7);
        int32_t _d_week_seq23647 = _d_week_seq124;
        tbl_Project_TD_3832_output.setInt32(i, 0, _d_week_seq23647);
        int32_t _sun_sales23648 = _sun_sales3659;
        tbl_Project_TD_3832_output.setInt32(i, 1, _sun_sales23648);
        int32_t _mon_sales23649 = _mon_sales3660;
        tbl_Project_TD_3832_output.setInt32(i, 2, _mon_sales23649);
        int32_t _tue_sales23650 = _tue_sales3661;
        tbl_Project_TD_3832_output.setInt32(i, 3, _tue_sales23650);
        int32_t _wed_sales23651 = _wed_sales3662;
        tbl_Project_TD_3832_output.setInt32(i, 4, _wed_sales23651);
        int32_t _thu_sales23652 = _thu_sales3663;
        tbl_Project_TD_3832_output.setInt32(i, 5, _thu_sales23652);
        int32_t _fri_sales23653 = _fri_sales3664;
        tbl_Project_TD_3832_output.setInt32(i, 6, _fri_sales23653);
        int32_t _sat_sales23654 = _sat_sales3665;
        tbl_Project_TD_3832_output.setInt32(i, 7, _sat_sales23654);
    }
    tbl_Project_TD_3832_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3832_output #Row: " << tbl_Project_TD_3832_output.getNumRow() << std::endl;
}

void SW_Project_TD_3932(Table &tbl_JOIN_INNER_TD_4402_output, Table &tbl_Project_TD_3932_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(d_week_seq#124 AS d_week_seq1#3639, sun_sales#3659 AS sun_sales1#3640, mon_sales#3660 AS mon_sales1#3641, tue_sales#3661 AS tue_sales1#3642, wed_sales#3662 AS wed_sales1#3643, thu_sales#3663 AS thu_sales1#3644, fri_sales#3664 AS fri_sales1#3645, sat_sales#3665 AS sat_sales1#3646)
    // Input: ListBuffer(d_week_seq#124, sun_sales#3659, mon_sales#3660, tue_sales#3661, wed_sales#3662, thu_sales#3663, fri_sales#3664, sat_sales#3665)
    // Output: ListBuffer(d_week_seq1#3639, sun_sales1#3640, mon_sales1#3641, tue_sales1#3642, wed_sales1#3643, thu_sales1#3644, fri_sales1#3645, sat_sales1#3646)
    int nrow1 = tbl_JOIN_INNER_TD_4402_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq124 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 0);
        int32_t _sun_sales3659 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 1);
        int32_t _mon_sales3660 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 2);
        int32_t _tue_sales3661 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 3);
        int32_t _wed_sales3662 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 4);
        int32_t _thu_sales3663 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 5);
        int32_t _fri_sales3664 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 6);
        int32_t _sat_sales3665 = tbl_JOIN_INNER_TD_4402_output.getInt32(i, 7);
        int32_t _d_week_seq13639 = _d_week_seq124;
        tbl_Project_TD_3932_output.setInt32(i, 0, _d_week_seq13639);
        int32_t _sun_sales13640 = _sun_sales3659;
        tbl_Project_TD_3932_output.setInt32(i, 1, _sun_sales13640);
        int32_t _mon_sales13641 = _mon_sales3660;
        tbl_Project_TD_3932_output.setInt32(i, 2, _mon_sales13641);
        int32_t _tue_sales13642 = _tue_sales3661;
        tbl_Project_TD_3932_output.setInt32(i, 3, _tue_sales13642);
        int32_t _wed_sales13643 = _wed_sales3662;
        tbl_Project_TD_3932_output.setInt32(i, 4, _wed_sales13643);
        int32_t _thu_sales13644 = _thu_sales3663;
        tbl_Project_TD_3932_output.setInt32(i, 5, _thu_sales13644);
        int32_t _fri_sales13645 = _fri_sales3664;
        tbl_Project_TD_3932_output.setInt32(i, 6, _fri_sales13645);
        int32_t _sat_sales13646 = _sat_sales3665;
        tbl_Project_TD_3932_output.setInt32(i, 7, _sat_sales13646);
    }
    tbl_Project_TD_3932_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_3932_output #Row: " << tbl_Project_TD_3932_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2609_key_leftMajor {
    int32_t _d_week_seq13639;
    bool operator==(const SW_JOIN_INNER_TD_2609_key_leftMajor& other) const {
        return ((_d_week_seq13639 == other._d_week_seq13639));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2609_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2609_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq13639));
    }
};
}
struct SW_JOIN_INNER_TD_2609_payload_leftMajor {
    int32_t _d_week_seq13639;
    int32_t _sun_sales13640;
    int32_t _mon_sales13641;
    int32_t _tue_sales13642;
    int32_t _wed_sales13643;
    int32_t _thu_sales13644;
    int32_t _fri_sales13645;
    int32_t _sat_sales13646;
};
struct SW_JOIN_INNER_TD_2609_key_rightMajor {
    int32_t _d_week_seq23647;
    bool operator==(const SW_JOIN_INNER_TD_2609_key_rightMajor& other) const {
        return ((_d_week_seq23647 == other._d_week_seq23647));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2609_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2609_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_week_seq23647));
    }
};
}
struct SW_JOIN_INNER_TD_2609_payload_rightMajor {
    int32_t _d_week_seq23647;
    int32_t _sun_sales23648;
    int32_t _mon_sales23649;
    int32_t _tue_sales23650;
    int32_t _wed_sales23651;
    int32_t _thu_sales23652;
    int32_t _fri_sales23653;
    int32_t _sat_sales23654;
};
void SW_JOIN_INNER_TD_2609(Table &tbl_Project_TD_3932_output, Table &tbl_Project_TD_3832_output, Table &tbl_JOIN_INNER_TD_2609_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((d_week_seq1#3639 = (d_week_seq2#3647 - 53)))
    // Left Table: ListBuffer(d_week_seq1#3639, sun_sales1#3640, mon_sales1#3641, tue_sales1#3642, wed_sales1#3643, thu_sales1#3644, fri_sales1#3645, sat_sales1#3646)
    // Right Table: ListBuffer(d_week_seq2#3647, sun_sales2#3648, mon_sales2#3649, tue_sales2#3650, wed_sales2#3651, thu_sales2#3652, fri_sales2#3653, sat_sales2#3654)
    // Output Table: ListBuffer(d_week_seq1#3639, sun_sales1#3640, sun_sales2#3648, mon_sales1#3641, mon_sales2#3649, tue_sales1#3642, tue_sales2#3650, wed_sales1#3643, wed_sales2#3651, thu_sales1#3644, thu_sales2#3652, fri_sales1#3645, fri_sales2#3653, sat_sales1#3646, sat_sales2#3654)
    int left_nrow = tbl_Project_TD_3932_output.getNumRow();
    int right_nrow = tbl_Project_TD_3832_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2609_key_leftMajor, SW_JOIN_INNER_TD_2609_payload_leftMajor> ht1;
        int nrow1 = tbl_Project_TD_3932_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq13639_k = tbl_Project_TD_3932_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2609_key_leftMajor keyA{_d_week_seq13639_k};
            int32_t _d_week_seq13639 = tbl_Project_TD_3932_output.getInt32(i, 0);
            int32_t _sun_sales13640 = tbl_Project_TD_3932_output.getInt32(i, 1);
            int32_t _mon_sales13641 = tbl_Project_TD_3932_output.getInt32(i, 2);
            int32_t _tue_sales13642 = tbl_Project_TD_3932_output.getInt32(i, 3);
            int32_t _wed_sales13643 = tbl_Project_TD_3932_output.getInt32(i, 4);
            int32_t _thu_sales13644 = tbl_Project_TD_3932_output.getInt32(i, 5);
            int32_t _fri_sales13645 = tbl_Project_TD_3932_output.getInt32(i, 6);
            int32_t _sat_sales13646 = tbl_Project_TD_3932_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_2609_payload_leftMajor payloadA{_d_week_seq13639, _sun_sales13640, _mon_sales13641, _tue_sales13642, _wed_sales13643, _thu_sales13644, _fri_sales13645, _sat_sales13646};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3832_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq23647_k = tbl_Project_TD_3832_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2609_key_leftMajor{_d_week_seq23647_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq13639 = (it->second)._d_week_seq13639;
                int32_t _sun_sales13640 = (it->second)._sun_sales13640;
                int32_t _mon_sales13641 = (it->second)._mon_sales13641;
                int32_t _tue_sales13642 = (it->second)._tue_sales13642;
                int32_t _wed_sales13643 = (it->second)._wed_sales13643;
                int32_t _thu_sales13644 = (it->second)._thu_sales13644;
                int32_t _fri_sales13645 = (it->second)._fri_sales13645;
                int32_t _sat_sales13646 = (it->second)._sat_sales13646;
                int32_t _d_week_seq23647 = tbl_Project_TD_3832_output.getInt32(i, 0);
                int32_t _sun_sales23648 = tbl_Project_TD_3832_output.getInt32(i, 1);
                int32_t _mon_sales23649 = tbl_Project_TD_3832_output.getInt32(i, 2);
                int32_t _tue_sales23650 = tbl_Project_TD_3832_output.getInt32(i, 3);
                int32_t _wed_sales23651 = tbl_Project_TD_3832_output.getInt32(i, 4);
                int32_t _thu_sales23652 = tbl_Project_TD_3832_output.getInt32(i, 5);
                int32_t _fri_sales23653 = tbl_Project_TD_3832_output.getInt32(i, 6);
                int32_t _sat_sales23654 = tbl_Project_TD_3832_output.getInt32(i, 7);
                if (_d_week_seq13639 == (_d_week_seq23647 - 53)) {
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 0, _d_week_seq13639);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 1, _sun_sales13640);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 3, _mon_sales13641);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 5, _tue_sales13642);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 7, _wed_sales13643);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 9, _thu_sales13644);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 11, _fri_sales13645);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 13, _sat_sales13646);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 2, _sun_sales23648);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 4, _mon_sales23649);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 6, _tue_sales23650);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 8, _wed_sales23651);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 10, _thu_sales23652);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 12, _fri_sales23653);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 14, _sat_sales23654);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_2609_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2609_key_rightMajor, SW_JOIN_INNER_TD_2609_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_3832_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_week_seq23647_k = tbl_Project_TD_3832_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2609_key_rightMajor keyA{_d_week_seq23647_k};
            int32_t _d_week_seq23647 = tbl_Project_TD_3832_output.getInt32(i, 0);
            int32_t _sun_sales23648 = tbl_Project_TD_3832_output.getInt32(i, 1);
            int32_t _mon_sales23649 = tbl_Project_TD_3832_output.getInt32(i, 2);
            int32_t _tue_sales23650 = tbl_Project_TD_3832_output.getInt32(i, 3);
            int32_t _wed_sales23651 = tbl_Project_TD_3832_output.getInt32(i, 4);
            int32_t _thu_sales23652 = tbl_Project_TD_3832_output.getInt32(i, 5);
            int32_t _fri_sales23653 = tbl_Project_TD_3832_output.getInt32(i, 6);
            int32_t _sat_sales23654 = tbl_Project_TD_3832_output.getInt32(i, 7);
            SW_JOIN_INNER_TD_2609_payload_rightMajor payloadA{_d_week_seq23647, _sun_sales23648, _mon_sales23649, _tue_sales23650, _wed_sales23651, _thu_sales23652, _fri_sales23653, _sat_sales23654};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Project_TD_3932_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_week_seq13639_k = tbl_Project_TD_3932_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2609_key_rightMajor{_d_week_seq13639_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_week_seq23647 = (it->second)._d_week_seq23647;
                int32_t _sun_sales23648 = (it->second)._sun_sales23648;
                int32_t _mon_sales23649 = (it->second)._mon_sales23649;
                int32_t _tue_sales23650 = (it->second)._tue_sales23650;
                int32_t _wed_sales23651 = (it->second)._wed_sales23651;
                int32_t _thu_sales23652 = (it->second)._thu_sales23652;
                int32_t _fri_sales23653 = (it->second)._fri_sales23653;
                int32_t _sat_sales23654 = (it->second)._sat_sales23654;
                int32_t _d_week_seq13639 = tbl_Project_TD_3932_output.getInt32(i, 0);
                int32_t _sun_sales13640 = tbl_Project_TD_3932_output.getInt32(i, 1);
                int32_t _mon_sales13641 = tbl_Project_TD_3932_output.getInt32(i, 2);
                int32_t _tue_sales13642 = tbl_Project_TD_3932_output.getInt32(i, 3);
                int32_t _wed_sales13643 = tbl_Project_TD_3932_output.getInt32(i, 4);
                int32_t _thu_sales13644 = tbl_Project_TD_3932_output.getInt32(i, 5);
                int32_t _fri_sales13645 = tbl_Project_TD_3932_output.getInt32(i, 6);
                int32_t _sat_sales13646 = tbl_Project_TD_3932_output.getInt32(i, 7);
                if (_d_week_seq13639 == (_d_week_seq23647 - 53)) {
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 2, _sun_sales23648);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 4, _mon_sales23649);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 6, _tue_sales23650);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 8, _wed_sales23651);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 10, _thu_sales23652);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 12, _fri_sales23653);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 14, _sat_sales23654);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 0, _d_week_seq13639);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 1, _sun_sales13640);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 3, _mon_sales13641);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 5, _tue_sales13642);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 7, _wed_sales13643);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 9, _thu_sales13644);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 11, _fri_sales13645);
                    tbl_JOIN_INNER_TD_2609_output.setInt32(r, 13, _sat_sales13646);
                    r++;
                }
                it++;
            }
        }
        tbl_JOIN_INNER_TD_2609_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2609_output #Row: " << tbl_JOIN_INNER_TD_2609_output.getNumRow() << std::endl;
}

void SW_Project_TD_1793(Table &tbl_JOIN_INNER_TD_2609_output, Table &tbl_Project_TD_1793_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(round(CheckOverflow((promote_precision(sun_sales1#3640) / promote_precision(sun_sales2#3648)), DecimalType(37,20), true), 2) AS round((sun_sales1 / sun_sales2), 2)#3729, round(CheckOverflow((promote_precision(mon_sales1#3641) / promote_precision(mon_sales2#3649)), DecimalType(37,20), true), 2) AS round((mon_sales1 / mon_sales2), 2)#3730, round(CheckOverflow((promote_precision(tue_sales1#3642) / promote_precision(tue_sales2#3650)), DecimalType(37,20), true), 2) AS round((tue_sales1 / tue_sales2), 2)#3731, round(CheckOverflow((promote_precision(wed_sales1#3643) / promote_precision(wed_sales2#3651)), DecimalType(37,20), true), 2) AS round((wed_sales1 / wed_sales2), 2)#3732, round(CheckOverflow((promote_precision(thu_sales1#3644) / promote_precision(thu_sales2#3652)), DecimalType(37,20), true), 2) AS round((thu_sales1 / thu_sales2), 2)#3733, round(CheckOverflow((promote_precision(fri_sales1#3645) / promote_precision(fri_sales2#3653)), DecimalType(37,20), true), 2) AS round((fri_sales1 / fri_sales2), 2)#3734, round(CheckOverflow((promote_precision(sat_sales1#3646) / promote_precision(sat_sales2#3654)), DecimalType(37,20), true), 2) AS round((sat_sales1 / sat_sales2), 2)#3735)
    // Input: ListBuffer(d_week_seq1#3639, sun_sales1#3640, sun_sales2#3648, mon_sales1#3641, mon_sales2#3649, tue_sales1#3642, tue_sales2#3650, wed_sales1#3643, wed_sales2#3651, thu_sales1#3644, thu_sales2#3652, fri_sales1#3645, fri_sales2#3653, sat_sales1#3646, sat_sales2#3654)
    // Output: ListBuffer(d_week_seq1#3639, round((sun_sales1 / sun_sales2), 2)#3729, round((mon_sales1 / mon_sales2), 2)#3730, round((tue_sales1 / tue_sales2), 2)#3731, round((wed_sales1 / wed_sales2), 2)#3732, round((thu_sales1 / thu_sales2), 2)#3733, round((fri_sales1 / fri_sales2), 2)#3734, round((sat_sales1 / sat_sales2), 2)#3735)
    int nrow1 = tbl_JOIN_INNER_TD_2609_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq13639 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 0);
        int32_t _sun_sales13640 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 1);
        int32_t _sun_sales23648 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 2);
        int32_t _mon_sales13641 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 3);
        int32_t _mon_sales23649 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 4);
        int32_t _tue_sales13642 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 5);
        int32_t _tue_sales23650 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 6);
        int32_t _wed_sales13643 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 7);
        int32_t _wed_sales23651 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 8);
        int32_t _thu_sales13644 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 9);
        int32_t _thu_sales23652 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 10);
        int32_t _fri_sales13645 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 11);
        int32_t _fri_sales23653 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 12);
        int32_t _sat_sales13646 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 13);
        int32_t _sat_sales23654 = tbl_JOIN_INNER_TD_2609_output.getInt32(i, 14);
        int32_t _23729 = (_sun_sales13640 / _sun_sales23648);
        tbl_Project_TD_1793_output.setInt32(i, 1, _23729);
        int32_t _23730 = (_mon_sales13641 / _mon_sales23649);
        tbl_Project_TD_1793_output.setInt32(i, 2, _23730);
        int32_t _23731 = (_tue_sales13642 / _tue_sales23650);
        tbl_Project_TD_1793_output.setInt32(i, 3, _23731);
        int32_t _23732 = (_wed_sales13643 / _wed_sales23651);
        tbl_Project_TD_1793_output.setInt32(i, 4, _23732);
        int32_t _23733 = (_thu_sales13644 / _thu_sales23652);
        tbl_Project_TD_1793_output.setInt32(i, 5, _23733);
        int32_t _23734 = (_fri_sales13645 / _fri_sales23653);
        tbl_Project_TD_1793_output.setInt32(i, 6, _23734);
        int32_t _23735 = (_sat_sales13646 / _sat_sales23654);
        tbl_Project_TD_1793_output.setInt32(i, 7, _23735);
        tbl_Project_TD_1793_output.setInt32(i, 0, _d_week_seq13639);
    }
    tbl_Project_TD_1793_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1793_output #Row: " << tbl_Project_TD_1793_output.getNumRow() << std::endl;
}

void SW_Sort_TD_0658(Table &tbl_Project_TD_1793_output, Table &tbl_Sort_TD_0658_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(d_week_seq1#3639 ASC NULLS FIRST)
    // Input: ListBuffer(d_week_seq1#3639, round((sun_sales1 / sun_sales2), 2)#3729, round((mon_sales1 / mon_sales2), 2)#3730, round((tue_sales1 / tue_sales2), 2)#3731, round((wed_sales1 / wed_sales2), 2)#3732, round((thu_sales1 / thu_sales2), 2)#3733, round((fri_sales1 / fri_sales2), 2)#3734, round((sat_sales1 / sat_sales2), 2)#3735)
    // Output: ListBuffer(d_week_seq1#3639, round((sun_sales1 / sun_sales2), 2)#3729, round((mon_sales1 / mon_sales2), 2)#3730, round((tue_sales1 / tue_sales2), 2)#3731, round((wed_sales1 / wed_sales2), 2)#3732, round((thu_sales1 / thu_sales2), 2)#3733, round((fri_sales1 / fri_sales2), 2)#3734, round((sat_sales1 / sat_sales2), 2)#3735)
    struct SW_Sort_TD_0658Row {
        int32_t _d_week_seq13639;
        int32_t _23729;
        int32_t _23730;
        int32_t _23731;
        int32_t _23732;
        int32_t _23733;
        int32_t _23734;
        int32_t _23735;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_0658Row& a, const SW_Sort_TD_0658Row& b) const { return 
 (a._d_week_seq13639 < b._d_week_seq13639); 
}
    }SW_Sort_TD_0658_order; 

    int nrow1 = tbl_Project_TD_1793_output.getNumRow();
    std::vector<SW_Sort_TD_0658Row> rows;
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_week_seq13639 = tbl_Project_TD_1793_output.getInt32(i, 0);
        int32_t _23729 = tbl_Project_TD_1793_output.getInt32(i, 1);
        int32_t _23730 = tbl_Project_TD_1793_output.getInt32(i, 2);
        int32_t _23731 = tbl_Project_TD_1793_output.getInt32(i, 3);
        int32_t _23732 = tbl_Project_TD_1793_output.getInt32(i, 4);
        int32_t _23733 = tbl_Project_TD_1793_output.getInt32(i, 5);
        int32_t _23734 = tbl_Project_TD_1793_output.getInt32(i, 6);
        int32_t _23735 = tbl_Project_TD_1793_output.getInt32(i, 7);
        SW_Sort_TD_0658Row t = {_d_week_seq13639,_23729,_23730,_23731,_23732,_23733,_23734,_23735};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_0658_order);
    int r = 0;
    for (auto& it : rows) {
        tbl_Sort_TD_0658_output.setInt32(r, 0, it._d_week_seq13639);
        tbl_Sort_TD_0658_output.setInt32(r, 1, it._23729);
        tbl_Sort_TD_0658_output.setInt32(r, 2, it._23730);
        tbl_Sort_TD_0658_output.setInt32(r, 3, it._23731);
        tbl_Sort_TD_0658_output.setInt32(r, 4, it._23732);
        tbl_Sort_TD_0658_output.setInt32(r, 5, it._23733);
        tbl_Sort_TD_0658_output.setInt32(r, 6, it._23734);
        tbl_Sort_TD_0658_output.setInt32(r, 7, it._23735);
        if (r < 10) {
            std::cout << it._d_week_seq13639 << " " << it._23729 << " " << it._23730 << " " << it._23731 << " " << it._23732 << " " << it._23733 << " " << it._23734 << " " << it._23735 << " " << std::endl;
        }
        ++r;
    }
    tbl_Sort_TD_0658_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_0658_output #Row: " << tbl_Sort_TD_0658_output.getNumRow() << std::endl;
}

