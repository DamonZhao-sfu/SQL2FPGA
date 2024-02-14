#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_236(Table &tbl_SerializeFromObject_TD_24659_input, Table &tbl_Filter_TD_236_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24659_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24659_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24659_input.getInt32(i, 0);
            tbl_Filter_TD_236_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24659_input.getInt32(i, 1);
            tbl_Filter_TD_236_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24659_input.getInt32(i, 2);
            tbl_Filter_TD_236_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24659_input.getInt32(i, 3);
            tbl_Filter_TD_236_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_236_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_236_output #Row: " << tbl_Filter_TD_236_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2387(Table &tbl_SerializeFromObject_TD_24262_input, Table &tbl_Filter_TD_2387_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24262_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24262_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24262_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24262_input.getInt32(i, 0);
            tbl_Filter_TD_2387_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24262_input.getInt32(i, 1);
            tbl_Filter_TD_2387_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_2387_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2387_output #Row: " << tbl_Filter_TD_2387_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23536(Table &tbl_SerializeFromObject_TD_2482_input, Table &tbl_Filter_TD_23536_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2482_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_2482_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_2482_input.getInt32(i, 0);
            tbl_Filter_TD_23536_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_2482_input.getInt32(i, 1);
            tbl_Filter_TD_23536_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_2482_input.getInt32(i, 2);
            tbl_Filter_TD_23536_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_2482_input.getInt32(i, 3);
            tbl_Filter_TD_23536_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23536_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23536_output #Row: " << tbl_Filter_TD_23536_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23686(Table &tbl_SerializeFromObject_TD_24208_input, Table &tbl_Filter_TD_23686_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24208_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24208_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24208_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24208_input.getInt32(i, 0);
            tbl_Filter_TD_23686_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24208_input.getInt32(i, 1);
            tbl_Filter_TD_23686_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23686_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23686_output #Row: " << tbl_Filter_TD_23686_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23440(Table &tbl_SerializeFromObject_TD_24898_input, Table &tbl_Filter_TD_23440_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24898_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24898_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24898_input.getInt32(i, 0);
            tbl_Filter_TD_23440_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24898_input.getInt32(i, 1);
            tbl_Filter_TD_23440_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24898_input.getInt32(i, 2);
            tbl_Filter_TD_23440_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24898_input.getInt32(i, 3);
            tbl_Filter_TD_23440_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23440_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23440_output #Row: " << tbl_Filter_TD_23440_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23326(Table &tbl_SerializeFromObject_TD_2472_input, Table &tbl_Filter_TD_23326_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2472_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_2472_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_2472_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_2472_input.getInt32(i, 0);
            tbl_Filter_TD_23326_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_2472_input.getInt32(i, 1);
            tbl_Filter_TD_23326_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23326_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23326_output #Row: " << tbl_Filter_TD_23326_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23906(Table &tbl_SerializeFromObject_TD_24730_input, Table &tbl_Filter_TD_23906_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24730_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24730_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24730_input.getInt32(i, 0);
            tbl_Filter_TD_23906_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24730_input.getInt32(i, 1);
            tbl_Filter_TD_23906_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24730_input.getInt32(i, 2);
            tbl_Filter_TD_23906_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24730_input.getInt32(i, 3);
            tbl_Filter_TD_23906_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23906_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23906_output #Row: " << tbl_Filter_TD_23906_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23944(Table &tbl_SerializeFromObject_TD_24254_input, Table &tbl_Filter_TD_23944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24254_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24254_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24254_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24254_input.getInt32(i, 0);
            tbl_Filter_TD_23944_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24254_input.getInt32(i, 1);
            tbl_Filter_TD_23944_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23944_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23944_output #Row: " << tbl_Filter_TD_23944_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23122(Table &tbl_SerializeFromObject_TD_24896_input, Table &tbl_Filter_TD_23122_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24896_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24896_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24896_input.getInt32(i, 0);
            tbl_Filter_TD_23122_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24896_input.getInt32(i, 1);
            tbl_Filter_TD_23122_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24896_input.getInt32(i, 2);
            tbl_Filter_TD_23122_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24896_input.getInt32(i, 3);
            tbl_Filter_TD_23122_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23122_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23122_output #Row: " << tbl_Filter_TD_23122_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23206(Table &tbl_SerializeFromObject_TD_24976_input, Table &tbl_Filter_TD_23206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24976_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24976_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24976_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24976_input.getInt32(i, 0);
            tbl_Filter_TD_23206_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24976_input.getInt32(i, 1);
            tbl_Filter_TD_23206_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23206_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23206_output #Row: " << tbl_Filter_TD_23206_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23517(Table &tbl_SerializeFromObject_TD_24227_input, Table &tbl_Filter_TD_23517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3592))
    // Input: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24227_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3592 = tbl_SerializeFromObject_TD_24227_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3592_t = tbl_SerializeFromObject_TD_24227_input.getInt32(i, 0);
            tbl_Filter_TD_23517_output.setInt32(r, 0, _i_item_sk3592_t);
            int32_t _i_brand_id3599_t = tbl_SerializeFromObject_TD_24227_input.getInt32(i, 1);
            tbl_Filter_TD_23517_output.setInt32(r, 1, _i_brand_id3599_t);
            int32_t _i_class_id3601_t = tbl_SerializeFromObject_TD_24227_input.getInt32(i, 2);
            tbl_Filter_TD_23517_output.setInt32(r, 2, _i_class_id3601_t);
            int32_t _i_category_id3603_t = tbl_SerializeFromObject_TD_24227_input.getInt32(i, 3);
            tbl_Filter_TD_23517_output.setInt32(r, 3, _i_category_id3603_t);
            r++;
        }
    }
    tbl_Filter_TD_23517_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23517_output #Row: " << tbl_Filter_TD_23517_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23147(Table &tbl_SerializeFromObject_TD_24534_input, Table &tbl_Filter_TD_23147_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24534_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24534_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24534_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24534_input.getInt32(i, 0);
            tbl_Filter_TD_23147_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24534_input.getInt32(i, 1);
            tbl_Filter_TD_23147_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23147_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23147_output #Row: " << tbl_Filter_TD_23147_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22573(Table &tbl_SerializeFromObject_TD_2341_input, Table &tbl_Filter_TD_22573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2341_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_2341_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_2341_input.getInt32(i, 0);
        if (((1) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (1)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_2341_input.getInt32(i, 0);
            tbl_Filter_TD_22573_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22573_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22573_output #Row: " << tbl_Filter_TD_22573_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22241_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22241_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22241_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22241_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22241_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22241_key_rightMajor {
    int32_t _i_item_sk3592;
    bool operator==(const SW_JOIN_INNER_TD_22241_key_rightMajor& other) const {
        return ((_i_item_sk3592 == other._i_item_sk3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22241_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22241_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3592));
    }
};
}
struct SW_JOIN_INNER_TD_22241_payload_rightMajor {
    int32_t _i_item_sk3592;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_INNER_TD_22241(Table &tbl_Filter_TD_2387_output, Table &tbl_Filter_TD_236_output, Table &tbl_JOIN_INNER_TD_22241_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3592))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_Filter_TD_2387_output.getNumRow();
    int right_nrow = tbl_Filter_TD_236_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22241_key_leftMajor, SW_JOIN_INNER_TD_22241_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_2387_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_2387_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22241_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_2387_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_2387_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22241_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_236_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_236_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22241_key_leftMajor{_i_item_sk3592_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk3592 = tbl_Filter_TD_236_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_Filter_TD_236_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_Filter_TD_236_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_Filter_TD_236_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 3, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22241_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22241_key_rightMajor, SW_JOIN_INNER_TD_22241_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_236_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_236_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22241_key_rightMajor keyA{_i_item_sk3592_k};
            int32_t _i_item_sk3592 = tbl_Filter_TD_236_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_Filter_TD_236_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_Filter_TD_236_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_Filter_TD_236_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22241_payload_rightMajor payloadA{_i_item_sk3592, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2387_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_2387_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22241_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3592 = (it->second)._i_item_sk3592;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_2387_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_2387_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 3, _i_category_id3603);
                tbl_JOIN_INNER_TD_22241_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22241_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22241_output #Row: " << tbl_JOIN_INNER_TD_22241_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22899(Table &tbl_SerializeFromObject_TD_23739_input, Table &tbl_Filter_TD_22899_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23739_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23739_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23739_input.getInt32(i, 0);
        if (((1) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (1)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23739_input.getInt32(i, 0);
            tbl_Filter_TD_22899_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22899_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22899_output #Row: " << tbl_Filter_TD_22899_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22349_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22349_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22349_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22349_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22349_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22349_key_rightMajor {
    int32_t _i_item_sk3592;
    bool operator==(const SW_JOIN_INNER_TD_22349_key_rightMajor& other) const {
        return ((_i_item_sk3592 == other._i_item_sk3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22349_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22349_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3592));
    }
};
}
struct SW_JOIN_INNER_TD_22349_payload_rightMajor {
    int32_t _i_item_sk3592;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_INNER_TD_22349(Table &tbl_Filter_TD_23686_output, Table &tbl_Filter_TD_23536_output, Table &tbl_JOIN_INNER_TD_22349_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3592))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_Filter_TD_23686_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23536_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22349_key_leftMajor, SW_JOIN_INNER_TD_22349_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23686_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23686_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22349_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23686_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23686_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22349_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23536_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23536_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22349_key_leftMajor{_i_item_sk3592_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk3592 = tbl_Filter_TD_23536_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_Filter_TD_23536_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_Filter_TD_23536_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_Filter_TD_23536_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 3, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22349_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22349_key_rightMajor, SW_JOIN_INNER_TD_22349_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23536_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23536_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22349_key_rightMajor keyA{_i_item_sk3592_k};
            int32_t _i_item_sk3592 = tbl_Filter_TD_23536_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_Filter_TD_23536_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_Filter_TD_23536_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_Filter_TD_23536_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22349_payload_rightMajor payloadA{_i_item_sk3592, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23686_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23686_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22349_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3592 = (it->second)._i_item_sk3592;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23686_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23686_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 3, _i_category_id3603);
                tbl_JOIN_INNER_TD_22349_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22349_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22349_output #Row: " << tbl_JOIN_INNER_TD_22349_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22335(Table &tbl_SerializeFromObject_TD_23930_input, Table &tbl_Filter_TD_22335_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23930_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23930_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23930_input.getInt32(i, 0);
        if (((1) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (1)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23930_input.getInt32(i, 0);
            tbl_Filter_TD_22335_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22335_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22335_output #Row: " << tbl_Filter_TD_22335_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22152_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22152_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22152_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22152_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22152_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22152_key_rightMajor {
    int32_t _i_item_sk3592;
    bool operator==(const SW_JOIN_INNER_TD_22152_key_rightMajor& other) const {
        return ((_i_item_sk3592 == other._i_item_sk3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22152_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22152_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3592));
    }
};
}
struct SW_JOIN_INNER_TD_22152_payload_rightMajor {
    int32_t _i_item_sk3592;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_INNER_TD_22152(Table &tbl_Filter_TD_23326_output, Table &tbl_Filter_TD_23440_output, Table &tbl_JOIN_INNER_TD_22152_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3592))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_Filter_TD_23326_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23440_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22152_key_leftMajor, SW_JOIN_INNER_TD_22152_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23326_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23326_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22152_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23326_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23326_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22152_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23440_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23440_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22152_key_leftMajor{_i_item_sk3592_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk3592 = tbl_Filter_TD_23440_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_Filter_TD_23440_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_Filter_TD_23440_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_Filter_TD_23440_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 3, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22152_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22152_key_rightMajor, SW_JOIN_INNER_TD_22152_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23440_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23440_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22152_key_rightMajor keyA{_i_item_sk3592_k};
            int32_t _i_item_sk3592 = tbl_Filter_TD_23440_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_Filter_TD_23440_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_Filter_TD_23440_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_Filter_TD_23440_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22152_payload_rightMajor payloadA{_i_item_sk3592, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23326_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23326_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22152_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3592 = (it->second)._i_item_sk3592;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23326_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23326_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 3, _i_category_id3603);
                tbl_JOIN_INNER_TD_22152_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22152_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22152_output #Row: " << tbl_JOIN_INNER_TD_22152_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22764(Table &tbl_SerializeFromObject_TD_23926_input, Table &tbl_Filter_TD_22764_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23926_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23926_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23926_input.getInt32(i, 0);
        if (((1) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (1)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23926_input.getInt32(i, 0);
            tbl_Filter_TD_22764_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22764_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22764_output #Row: " << tbl_Filter_TD_22764_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22127_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22127_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22127_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22127_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22127_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22127_key_rightMajor {
    int32_t _i_item_sk3592;
    bool operator==(const SW_JOIN_INNER_TD_22127_key_rightMajor& other) const {
        return ((_i_item_sk3592 == other._i_item_sk3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22127_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22127_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3592));
    }
};
}
struct SW_JOIN_INNER_TD_22127_payload_rightMajor {
    int32_t _i_item_sk3592;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_INNER_TD_22127(Table &tbl_Filter_TD_23944_output, Table &tbl_Filter_TD_23906_output, Table &tbl_JOIN_INNER_TD_22127_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3592))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_Filter_TD_23944_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23906_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22127_key_leftMajor, SW_JOIN_INNER_TD_22127_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23944_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23944_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22127_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23944_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23944_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22127_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23906_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23906_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22127_key_leftMajor{_i_item_sk3592_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk3592 = tbl_Filter_TD_23906_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_Filter_TD_23906_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_Filter_TD_23906_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_Filter_TD_23906_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 3, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22127_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22127_key_rightMajor, SW_JOIN_INNER_TD_22127_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23906_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23906_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22127_key_rightMajor keyA{_i_item_sk3592_k};
            int32_t _i_item_sk3592 = tbl_Filter_TD_23906_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_Filter_TD_23906_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_Filter_TD_23906_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_Filter_TD_23906_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22127_payload_rightMajor payloadA{_i_item_sk3592, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23944_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23944_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22127_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3592 = (it->second)._i_item_sk3592;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23944_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23944_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 3, _i_category_id3603);
                tbl_JOIN_INNER_TD_22127_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22127_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22127_output #Row: " << tbl_JOIN_INNER_TD_22127_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22534(Table &tbl_SerializeFromObject_TD_23139_input, Table &tbl_Filter_TD_22534_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23139_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23139_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23139_input.getInt32(i, 0);
        if (((1) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (1)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23139_input.getInt32(i, 0);
            tbl_Filter_TD_22534_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22534_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22534_output #Row: " << tbl_Filter_TD_22534_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2235_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_2235_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2235_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2235_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_2235_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_2235_key_rightMajor {
    int32_t _i_item_sk3592;
    bool operator==(const SW_JOIN_INNER_TD_2235_key_rightMajor& other) const {
        return ((_i_item_sk3592 == other._i_item_sk3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2235_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2235_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3592));
    }
};
}
struct SW_JOIN_INNER_TD_2235_payload_rightMajor {
    int32_t _i_item_sk3592;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_INNER_TD_2235(Table &tbl_Filter_TD_23206_output, Table &tbl_Filter_TD_23122_output, Table &tbl_JOIN_INNER_TD_2235_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3592))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_Filter_TD_23206_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23122_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2235_key_leftMajor, SW_JOIN_INNER_TD_2235_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23206_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23206_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_2235_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23206_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23206_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_2235_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23122_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23122_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2235_key_leftMajor{_i_item_sk3592_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk3592 = tbl_Filter_TD_23122_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_Filter_TD_23122_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_Filter_TD_23122_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_Filter_TD_23122_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 3, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2235_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2235_key_rightMajor, SW_JOIN_INNER_TD_2235_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23122_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23122_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2235_key_rightMajor keyA{_i_item_sk3592_k};
            int32_t _i_item_sk3592 = tbl_Filter_TD_23122_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_Filter_TD_23122_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_Filter_TD_23122_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_Filter_TD_23122_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_2235_payload_rightMajor payloadA{_i_item_sk3592, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23206_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23206_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2235_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3592 = (it->second)._i_item_sk3592;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23206_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23206_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 3, _i_category_id3603);
                tbl_JOIN_INNER_TD_2235_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2235_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2235_output #Row: " << tbl_JOIN_INNER_TD_2235_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22357(Table &tbl_SerializeFromObject_TD_23339_input, Table &tbl_Filter_TD_22357_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3620) AND ((d_year#3620 >= 1999) AND (d_year#3620 <= 2001))) AND isnotnull(d_date_sk#3614)))
    // Input: ListBuffer(d_date_sk#3614, d_year#3620)
    // Output: ListBuffer(d_date_sk#3614)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23339_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3620 = tbl_SerializeFromObject_TD_23339_input.getInt32(i, 1);
        int32_t _d_date_sk3614 = tbl_SerializeFromObject_TD_23339_input.getInt32(i, 0);
        if (((1) && ((_d_year3620 >= 1999) && (_d_year3620 <= 2001))) && (1)) {
            int32_t _d_date_sk3614_t = tbl_SerializeFromObject_TD_23339_input.getInt32(i, 0);
            tbl_Filter_TD_22357_output.setInt32(r, 0, _d_date_sk3614_t);
            r++;
        }
    }
    tbl_Filter_TD_22357_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22357_output #Row: " << tbl_Filter_TD_22357_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22205_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22205_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22205_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22205_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22205_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22205_key_rightMajor {
    int32_t _i_item_sk3592;
    bool operator==(const SW_JOIN_INNER_TD_22205_key_rightMajor& other) const {
        return ((_i_item_sk3592 == other._i_item_sk3592));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22205_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22205_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3592));
    }
};
}
struct SW_JOIN_INNER_TD_22205_payload_rightMajor {
    int32_t _i_item_sk3592;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_INNER_TD_22205(Table &tbl_Filter_TD_23147_output, Table &tbl_Filter_TD_23517_output, Table &tbl_JOIN_INNER_TD_22205_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#3592))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#3592, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_Filter_TD_23147_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23517_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22205_key_leftMajor, SW_JOIN_INNER_TD_22205_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23147_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23147_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22205_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23147_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23147_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22205_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23517_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23517_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22205_key_leftMajor{_i_item_sk3592_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk3592 = tbl_Filter_TD_23517_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_Filter_TD_23517_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_Filter_TD_23517_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_Filter_TD_23517_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 3, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22205_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22205_key_rightMajor, SW_JOIN_INNER_TD_22205_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23517_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3592_k = tbl_Filter_TD_23517_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22205_key_rightMajor keyA{_i_item_sk3592_k};
            int32_t _i_item_sk3592 = tbl_Filter_TD_23517_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_Filter_TD_23517_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_Filter_TD_23517_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_Filter_TD_23517_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22205_payload_rightMajor payloadA{_i_item_sk3592, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23147_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23147_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22205_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3592 = (it->second)._i_item_sk3592;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23147_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23147_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 1, _i_brand_id3599);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 2, _i_class_id3601);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 3, _i_category_id3603);
                tbl_JOIN_INNER_TD_22205_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22205_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22205_output #Row: " << tbl_JOIN_INNER_TD_22205_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21442_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21442_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21442_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21442_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21442_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
struct SW_JOIN_INNER_TD_21442_key_rightMajor {
    int32_t _d_date_sk3614;
    bool operator==(const SW_JOIN_INNER_TD_21442_key_rightMajor& other) const {
        return ((_d_date_sk3614 == other._d_date_sk3614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21442_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21442_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3614));
    }
};
}
struct SW_JOIN_INNER_TD_21442_payload_rightMajor {
    int32_t _d_date_sk3614;
};
void SW_JOIN_INNER_TD_21442(Table &tbl_JOIN_INNER_TD_22241_output, Table &tbl_Filter_TD_22573_output, Table &tbl_JOIN_INNER_TD_21442_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3614))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Right Table: ListBuffer(d_date_sk#3614)
    // Output Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_JOIN_INNER_TD_22241_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22573_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21442_key_leftMajor, SW_JOIN_INNER_TD_21442_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22241_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21442_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21442_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22573_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22573_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21442_key_leftMajor{_d_date_sk3614_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _d_date_sk3614 = tbl_Filter_TD_22573_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21442_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21442_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21442_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21442_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21442_key_rightMajor, SW_JOIN_INNER_TD_21442_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22573_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22573_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21442_key_rightMajor keyA{_d_date_sk3614_k};
            int32_t _d_date_sk3614 = tbl_Filter_TD_22573_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21442_payload_rightMajor payloadA{_d_date_sk3614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22241_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21442_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3614 = (it->second)._d_date_sk3614;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22241_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21442_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21442_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21442_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21442_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21442_output #Row: " << tbl_JOIN_INNER_TD_21442_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21175(Table &tbl_SerializeFromObject_TD_22837_input, Table &tbl_Filter_TD_21175_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22837_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 3);
        if ((1) && (((1) && (1)) && (1))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 0);
            tbl_Filter_TD_21175_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 1);
            tbl_Filter_TD_21175_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 2);
            tbl_Filter_TD_21175_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22837_input.getInt32(i, 3);
            tbl_Filter_TD_21175_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21175_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21175_output #Row: " << tbl_Filter_TD_21175_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21645_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21645_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21645_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21645_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21645_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
struct SW_JOIN_INNER_TD_21645_key_rightMajor {
    int32_t _d_date_sk3614;
    bool operator==(const SW_JOIN_INNER_TD_21645_key_rightMajor& other) const {
        return ((_d_date_sk3614 == other._d_date_sk3614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21645_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21645_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3614));
    }
};
}
struct SW_JOIN_INNER_TD_21645_payload_rightMajor {
    int32_t _d_date_sk3614;
};
void SW_JOIN_INNER_TD_21645(Table &tbl_JOIN_INNER_TD_22349_output, Table &tbl_Filter_TD_22899_output, Table &tbl_JOIN_INNER_TD_21645_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3614))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Right Table: ListBuffer(d_date_sk#3614)
    // Output Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_JOIN_INNER_TD_22349_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22899_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21645_key_leftMajor, SW_JOIN_INNER_TD_21645_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22349_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21645_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21645_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22899_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22899_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21645_key_leftMajor{_d_date_sk3614_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _d_date_sk3614 = tbl_Filter_TD_22899_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21645_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21645_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21645_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21645_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21645_key_rightMajor, SW_JOIN_INNER_TD_21645_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22899_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22899_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21645_key_rightMajor keyA{_d_date_sk3614_k};
            int32_t _d_date_sk3614 = tbl_Filter_TD_22899_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21645_payload_rightMajor payloadA{_d_date_sk3614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22349_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21645_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3614 = (it->second)._d_date_sk3614;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22349_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21645_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21645_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21645_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21645_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21645_output #Row: " << tbl_JOIN_INNER_TD_21645_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21914(Table &tbl_SerializeFromObject_TD_22865_input, Table &tbl_Filter_TD_21914_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22865_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 3);
        if ((1) && (((1) && (1)) && (1))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 0);
            tbl_Filter_TD_21914_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 1);
            tbl_Filter_TD_21914_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 2);
            tbl_Filter_TD_21914_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22865_input.getInt32(i, 3);
            tbl_Filter_TD_21914_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21914_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21914_output #Row: " << tbl_Filter_TD_21914_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21388_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21388_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21388_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21388_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21388_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
struct SW_JOIN_INNER_TD_21388_key_rightMajor {
    int32_t _d_date_sk3614;
    bool operator==(const SW_JOIN_INNER_TD_21388_key_rightMajor& other) const {
        return ((_d_date_sk3614 == other._d_date_sk3614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21388_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21388_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3614));
    }
};
}
struct SW_JOIN_INNER_TD_21388_payload_rightMajor {
    int32_t _d_date_sk3614;
};
void SW_JOIN_INNER_TD_21388(Table &tbl_JOIN_INNER_TD_22152_output, Table &tbl_Filter_TD_22335_output, Table &tbl_JOIN_INNER_TD_21388_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3614))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Right Table: ListBuffer(d_date_sk#3614)
    // Output Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_JOIN_INNER_TD_22152_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22335_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21388_key_leftMajor, SW_JOIN_INNER_TD_21388_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22152_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21388_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21388_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22335_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22335_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21388_key_leftMajor{_d_date_sk3614_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _d_date_sk3614 = tbl_Filter_TD_22335_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21388_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21388_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21388_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21388_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21388_key_rightMajor, SW_JOIN_INNER_TD_21388_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22335_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22335_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21388_key_rightMajor keyA{_d_date_sk3614_k};
            int32_t _d_date_sk3614 = tbl_Filter_TD_22335_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21388_payload_rightMajor payloadA{_d_date_sk3614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22152_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21388_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3614 = (it->second)._d_date_sk3614;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22152_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21388_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21388_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21388_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21388_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21388_output #Row: " << tbl_JOIN_INNER_TD_21388_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21655(Table &tbl_SerializeFromObject_TD_22116_input, Table &tbl_Filter_TD_21655_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22116_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 3);
        if ((1) && (((1) && (1)) && (1))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 0);
            tbl_Filter_TD_21655_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 1);
            tbl_Filter_TD_21655_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 2);
            tbl_Filter_TD_21655_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22116_input.getInt32(i, 3);
            tbl_Filter_TD_21655_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21655_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21655_output #Row: " << tbl_Filter_TD_21655_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21964_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21964_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21964_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21964_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21964_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
struct SW_JOIN_INNER_TD_21964_key_rightMajor {
    int32_t _d_date_sk3614;
    bool operator==(const SW_JOIN_INNER_TD_21964_key_rightMajor& other) const {
        return ((_d_date_sk3614 == other._d_date_sk3614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21964_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21964_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3614));
    }
};
}
struct SW_JOIN_INNER_TD_21964_payload_rightMajor {
    int32_t _d_date_sk3614;
};
void SW_JOIN_INNER_TD_21964(Table &tbl_JOIN_INNER_TD_22127_output, Table &tbl_Filter_TD_22764_output, Table &tbl_JOIN_INNER_TD_21964_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3614))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Right Table: ListBuffer(d_date_sk#3614)
    // Output Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_JOIN_INNER_TD_22127_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22764_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21964_key_leftMajor, SW_JOIN_INNER_TD_21964_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22127_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21964_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21964_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22764_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22764_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21964_key_leftMajor{_d_date_sk3614_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _d_date_sk3614 = tbl_Filter_TD_22764_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21964_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21964_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21964_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21964_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21964_key_rightMajor, SW_JOIN_INNER_TD_21964_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22764_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22764_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21964_key_rightMajor keyA{_d_date_sk3614_k};
            int32_t _d_date_sk3614 = tbl_Filter_TD_22764_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21964_payload_rightMajor payloadA{_d_date_sk3614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22127_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21964_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3614 = (it->second)._d_date_sk3614;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22127_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21964_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21964_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21964_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21964_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21964_output #Row: " << tbl_JOIN_INNER_TD_21964_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21634(Table &tbl_SerializeFromObject_TD_22523_input, Table &tbl_Filter_TD_21634_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22523_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 3);
        if ((1) && (((1) && (1)) && (1))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 0);
            tbl_Filter_TD_21634_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 1);
            tbl_Filter_TD_21634_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 2);
            tbl_Filter_TD_21634_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22523_input.getInt32(i, 3);
            tbl_Filter_TD_21634_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21634_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21634_output #Row: " << tbl_Filter_TD_21634_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21962_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21962_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21962_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21962_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21962_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
struct SW_JOIN_INNER_TD_21962_key_rightMajor {
    int32_t _d_date_sk3614;
    bool operator==(const SW_JOIN_INNER_TD_21962_key_rightMajor& other) const {
        return ((_d_date_sk3614 == other._d_date_sk3614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21962_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21962_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3614));
    }
};
}
struct SW_JOIN_INNER_TD_21962_payload_rightMajor {
    int32_t _d_date_sk3614;
};
void SW_JOIN_INNER_TD_21962(Table &tbl_JOIN_INNER_TD_2235_output, Table &tbl_Filter_TD_22534_output, Table &tbl_JOIN_INNER_TD_21962_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3614))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Right Table: ListBuffer(d_date_sk#3614)
    // Output Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_JOIN_INNER_TD_2235_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22534_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21962_key_leftMajor, SW_JOIN_INNER_TD_21962_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2235_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21962_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21962_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22534_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22534_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21962_key_leftMajor{_d_date_sk3614_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _d_date_sk3614 = tbl_Filter_TD_22534_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21962_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21962_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21962_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21962_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21962_key_rightMajor, SW_JOIN_INNER_TD_21962_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22534_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22534_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21962_key_rightMajor keyA{_d_date_sk3614_k};
            int32_t _d_date_sk3614 = tbl_Filter_TD_22534_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21962_payload_rightMajor payloadA{_d_date_sk3614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_2235_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21962_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3614 = (it->second)._d_date_sk3614;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_2235_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21962_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21962_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21962_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21962_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21962_output #Row: " << tbl_JOIN_INNER_TD_21962_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21401(Table &tbl_SerializeFromObject_TD_22794_input, Table &tbl_Filter_TD_21401_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22794_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 3);
        if ((1) && (((1) && (1)) && (1))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 0);
            tbl_Filter_TD_21401_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 1);
            tbl_Filter_TD_21401_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 2);
            tbl_Filter_TD_21401_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22794_input.getInt32(i, 3);
            tbl_Filter_TD_21401_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21401_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21401_output #Row: " << tbl_Filter_TD_21401_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21752_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21752_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21752_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21752_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21752_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
struct SW_JOIN_INNER_TD_21752_key_rightMajor {
    int32_t _d_date_sk3614;
    bool operator==(const SW_JOIN_INNER_TD_21752_key_rightMajor& other) const {
        return ((_d_date_sk3614 == other._d_date_sk3614));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21752_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21752_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3614));
    }
};
}
struct SW_JOIN_INNER_TD_21752_payload_rightMajor {
    int32_t _d_date_sk3614;
};
void SW_JOIN_INNER_TD_21752(Table &tbl_JOIN_INNER_TD_22205_output, Table &tbl_Filter_TD_22357_output, Table &tbl_JOIN_INNER_TD_21752_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#3614))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Right Table: ListBuffer(d_date_sk#3614)
    // Output Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    int left_nrow = tbl_JOIN_INNER_TD_22205_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22357_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21752_key_leftMajor, SW_JOIN_INNER_TD_21752_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22205_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21752_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 0);
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 1);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 2);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21752_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22357_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22357_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21752_key_leftMajor{_d_date_sk3614_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id3599 = (it->second)._i_brand_id3599;
                int32_t _i_class_id3601 = (it->second)._i_class_id3601;
                int32_t _i_category_id3603 = (it->second)._i_category_id3603;
                int32_t _d_date_sk3614 = tbl_Filter_TD_22357_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21752_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21752_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21752_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21752_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21752_key_rightMajor, SW_JOIN_INNER_TD_21752_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22357_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3614_k = tbl_Filter_TD_22357_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21752_key_rightMajor keyA{_d_date_sk3614_k};
            int32_t _d_date_sk3614 = tbl_Filter_TD_22357_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21752_payload_rightMajor payloadA{_d_date_sk3614};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22205_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21752_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3614 = (it->second)._d_date_sk3614;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 0);
                int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 1);
                int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 2);
                int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_22205_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21752_output.setInt32(r, 0, _i_brand_id3599);
                tbl_JOIN_INNER_TD_21752_output.setInt32(r, 1, _i_class_id3601);
                tbl_JOIN_INNER_TD_21752_output.setInt32(r, 2, _i_category_id3603);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21752_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21752_output #Row: " << tbl_JOIN_INNER_TD_21752_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21523(Table &tbl_SerializeFromObject_TD_22184_input, Table &tbl_Filter_TD_21523_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#3570) AND ((isnotnull(i_brand_id#3577) AND isnotnull(i_class_id#3579)) AND isnotnull(i_category_id#3581))))
    // Input: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22184_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3570 = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 0);
        int32_t _i_brand_id3577 = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 1);
        int32_t _i_class_id3579 = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 2);
        int32_t _i_category_id3581 = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 3);
        if ((1) && (((1) && (1)) && (1))) {
            int32_t _i_item_sk3570_t = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 0);
            tbl_Filter_TD_21523_output.setInt32(r, 0, _i_item_sk3570_t);
            int32_t _i_brand_id3577_t = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 1);
            tbl_Filter_TD_21523_output.setInt32(r, 1, _i_brand_id3577_t);
            int32_t _i_class_id3579_t = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 2);
            tbl_Filter_TD_21523_output.setInt32(r, 2, _i_class_id3579_t);
            int32_t _i_category_id3581_t = tbl_SerializeFromObject_TD_22184_input.getInt32(i, 3);
            tbl_Filter_TD_21523_output.setInt32(r, 3, _i_category_id3581_t);
            r++;
        }
    }
    tbl_Filter_TD_21523_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21523_output #Row: " << tbl_Filter_TD_21523_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20103_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20103_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20103_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20103_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20103_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20103_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20103(Table &tbl_Filter_TD_21175_output, Table &tbl_JOIN_INNER_TD_21442_output, Table &tbl_JOIN_LEFTSEMI_TD_20103_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21175_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21442_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20103_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21442_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21175_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21442_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21442_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21442_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21442_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21442_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21442_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20103_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21175_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21175_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21175_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20103_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21175_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21175_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21175_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21175_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20103_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20103_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20103_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20103_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20103_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20103_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20103_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20602(Table &tbl_SerializeFromObject_TD_2120_input, Table &tbl_Filter_TD_20602_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2120_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_2120_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_2120_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_2120_input.getInt32(i, 0);
            tbl_Filter_TD_20602_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_2120_input.getInt32(i, 1);
            tbl_Filter_TD_20602_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20602_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20602_output #Row: " << tbl_Filter_TD_20602_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2099_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2099_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2099_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2099_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2099_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2099_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_2099(Table &tbl_Filter_TD_21914_output, Table &tbl_JOIN_INNER_TD_21645_output, Table &tbl_JOIN_LEFTSEMI_TD_2099_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21914_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21645_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2099_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21645_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21914_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21645_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21645_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21645_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21645_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21645_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21645_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2099_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21914_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21914_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21914_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2099_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21914_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21914_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21914_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21914_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_2099_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_2099_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_2099_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_2099_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_2099_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2099_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2099_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20306(Table &tbl_SerializeFromObject_TD_21508_input, Table &tbl_Filter_TD_20306_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21508_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21508_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21508_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21508_input.getInt32(i, 0);
            tbl_Filter_TD_20306_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21508_input.getInt32(i, 1);
            tbl_Filter_TD_20306_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20306_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20306_output #Row: " << tbl_Filter_TD_20306_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2066_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2066_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2066_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2066_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2066_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2066_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_2066(Table &tbl_Filter_TD_21655_output, Table &tbl_JOIN_INNER_TD_21388_output, Table &tbl_JOIN_LEFTSEMI_TD_2066_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21655_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21388_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2066_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21388_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21655_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21388_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21388_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21388_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21388_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21388_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21388_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2066_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21655_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21655_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21655_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2066_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21655_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21655_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21655_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21655_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_2066_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_2066_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_2066_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_2066_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_2066_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2066_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2066_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20406(Table &tbl_SerializeFromObject_TD_21383_input, Table &tbl_Filter_TD_20406_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21383_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21383_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21383_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21383_input.getInt32(i, 0);
            tbl_Filter_TD_20406_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21383_input.getInt32(i, 1);
            tbl_Filter_TD_20406_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20406_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20406_output #Row: " << tbl_Filter_TD_20406_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20649_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20649_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20649_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20649_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20649_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20649_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20649(Table &tbl_Filter_TD_21634_output, Table &tbl_JOIN_INNER_TD_21964_output, Table &tbl_JOIN_LEFTSEMI_TD_20649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21634_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21964_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20649_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21964_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21634_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21964_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21964_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21964_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21964_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21964_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21964_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20649_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21634_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21634_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21634_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20649_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21634_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21634_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21634_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21634_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20649_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20649_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20649_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20649_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20649_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20649_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20649_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20171(Table &tbl_SerializeFromObject_TD_21468_input, Table &tbl_Filter_TD_20171_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21468_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21468_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21468_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21468_input.getInt32(i, 0);
            tbl_Filter_TD_20171_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21468_input.getInt32(i, 1);
            tbl_Filter_TD_20171_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20171_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20171_output #Row: " << tbl_Filter_TD_20171_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20711_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20711_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20711_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20711_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20711_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20711_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_20711(Table &tbl_Filter_TD_21401_output, Table &tbl_JOIN_INNER_TD_21962_output, Table &tbl_JOIN_LEFTSEMI_TD_20711_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21401_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21962_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20711_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21962_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21401_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21962_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21962_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21962_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21962_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21962_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21962_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20711_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21401_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21401_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21401_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20711_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21401_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21401_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21401_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21401_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20711_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_20711_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_20711_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_20711_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20711_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20711_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20711_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20453(Table &tbl_SerializeFromObject_TD_21202_input, Table &tbl_Filter_TD_20453_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21202_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21202_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21202_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21202_input.getInt32(i, 0);
            tbl_Filter_TD_20453_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21202_input.getInt32(i, 1);
            tbl_Filter_TD_20453_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20453_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20453_output #Row: " << tbl_Filter_TD_20453_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_2074_key_leftMajor {
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2074_key_leftMajor& other) const {
        return ((_i_brand_id3577 == other._i_brand_id3577) && (_i_class_id3579 == other._i_class_id3579) && (_i_category_id3581 == other._i_category_id3581));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2074_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2074_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3577)) + (hash<int32_t>()(k._i_class_id3579)) + (hash<int32_t>()(k._i_category_id3581));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2074_payload_leftMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor& other) const {
        return ((_i_brand_id3599 == other._i_brand_id3599) && (_i_class_id3601 == other._i_class_id3601) && (_i_category_id3603 == other._i_category_id3603));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3599)) + (hash<int32_t>()(k._i_class_id3601)) + (hash<int32_t>()(k._i_category_id3603));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_2074_payload_rightMajor {
    int32_t _i_brand_id3599;
    int32_t _i_class_id3601;
    int32_t _i_category_id3603;
};
void SW_JOIN_LEFTSEMI_TD_2074(Table &tbl_Filter_TD_21523_output, Table &tbl_JOIN_INNER_TD_21752_output, Table &tbl_JOIN_LEFTSEMI_TD_2074_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#3577 <=> i_brand_id#3599) AND (i_class_id#3579 <=> i_class_id#3601)) AND (i_category_id#3581 <=> i_category_id#3603)))
    // Left Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(i_brand_id#3599, i_class_id#3601, i_category_id#3603)
    // Output Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_21523_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21752_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor, SW_JOIN_LEFTSEMI_TD_2074_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21752_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21523_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3599_k = tbl_JOIN_INNER_TD_21752_output.getInt32(i, 0);
            int32_t _i_class_id3601_k = tbl_JOIN_INNER_TD_21752_output.getInt32(i, 1);
            int32_t _i_category_id3603_k = tbl_JOIN_INNER_TD_21752_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor keyA{_i_brand_id3599_k, _i_class_id3601_k, _i_category_id3603_k};
            int32_t _i_brand_id3599 = tbl_JOIN_INNER_TD_21752_output.getInt32(i, 0);
            int32_t _i_class_id3601 = tbl_JOIN_INNER_TD_21752_output.getInt32(i, 1);
            int32_t _i_category_id3603 = tbl_JOIN_INNER_TD_21752_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_2074_payload_rightMajor payloadA{_i_brand_id3599, _i_class_id3601, _i_category_id3603};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id3577_k = tbl_Filter_TD_21523_output.getInt32(i, 1);
            int32_t _i_class_id3579_k = tbl_Filter_TD_21523_output.getInt32(i, 2);
            int32_t _i_category_id3581_k = tbl_Filter_TD_21523_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_2074_key_rightMajor{_i_brand_id3577_k, _i_class_id3579_k, _i_category_id3581_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3570 = tbl_Filter_TD_21523_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_Filter_TD_21523_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_Filter_TD_21523_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_Filter_TD_21523_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_2074_output.setInt32(r, 0, _i_item_sk3570);
                tbl_JOIN_LEFTSEMI_TD_2074_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_LEFTSEMI_TD_2074_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_LEFTSEMI_TD_2074_output.setInt32(r, 3, _i_category_id3581);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_2074_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_2074_output #Row: " << tbl_JOIN_LEFTSEMI_TD_2074_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20339(Table &tbl_SerializeFromObject_TD_21265_input, Table &tbl_Filter_TD_20339_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21265_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21265_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21265_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21265_input.getInt32(i, 0);
            tbl_Filter_TD_20339_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21265_input.getInt32(i, 1);
            tbl_Filter_TD_20339_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20339_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20339_output #Row: " << tbl_Filter_TD_20339_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19629(Table &tbl_SerializeFromObject_TD_20489_input, Table &tbl_Filter_TD_19629_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20489_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20489_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20489_input.getInt32(i, 0);
        if (((1) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20489_input.getInt32(i, 0);
            tbl_Filter_TD_19629_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19629_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19629_output #Row: " << tbl_Filter_TD_19629_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19465_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19465_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19465_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19465_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19465_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19465_key_rightMajor {
    int32_t _i_item_sk3570;
    bool operator==(const SW_JOIN_INNER_TD_19465_key_rightMajor& other) const {
        return ((_i_item_sk3570 == other._i_item_sk3570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19465_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19465_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3570));
    }
};
}
struct SW_JOIN_INNER_TD_19465_payload_rightMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
void SW_JOIN_INNER_TD_19465(Table &tbl_Filter_TD_20602_output, Table &tbl_JOIN_LEFTSEMI_TD_20103_output, Table &tbl_JOIN_INNER_TD_19465_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#3570))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_20602_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20103_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19465_key_leftMajor, SW_JOIN_INNER_TD_19465_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20602_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20602_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19465_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20602_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20602_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19465_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20103_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19465_key_leftMajor{_i_item_sk3570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 3, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19465_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19465_key_rightMajor, SW_JOIN_INNER_TD_19465_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20103_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19465_key_rightMajor keyA{_i_item_sk3570_k};
            int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_20103_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19465_payload_rightMajor payloadA{_i_item_sk3570, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20602_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20602_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19465_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3570 = (it->second)._i_item_sk3570;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20602_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20602_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 3, _i_category_id3581);
                tbl_JOIN_INNER_TD_19465_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19465_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19465_output #Row: " << tbl_JOIN_INNER_TD_19465_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19709(Table &tbl_SerializeFromObject_TD_20845_input, Table &tbl_Filter_TD_19709_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20845_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20845_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20845_input.getInt32(i, 0);
        if (((1) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20845_input.getInt32(i, 0);
            tbl_Filter_TD_19709_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19709_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19709_output #Row: " << tbl_Filter_TD_19709_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19663_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19663_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19663_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19663_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19663_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19663_key_rightMajor {
    int32_t _i_item_sk3570;
    bool operator==(const SW_JOIN_INNER_TD_19663_key_rightMajor& other) const {
        return ((_i_item_sk3570 == other._i_item_sk3570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19663_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19663_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3570));
    }
};
}
struct SW_JOIN_INNER_TD_19663_payload_rightMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
void SW_JOIN_INNER_TD_19663(Table &tbl_Filter_TD_20306_output, Table &tbl_JOIN_LEFTSEMI_TD_2099_output, Table &tbl_JOIN_INNER_TD_19663_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#3570))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_20306_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_2099_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19663_key_leftMajor, SW_JOIN_INNER_TD_19663_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20306_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20306_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19663_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20306_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20306_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19663_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_2099_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19663_key_leftMajor{_i_item_sk3570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 3, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19663_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19663_key_rightMajor, SW_JOIN_INNER_TD_19663_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_2099_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19663_key_rightMajor keyA{_i_item_sk3570_k};
            int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_2099_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19663_payload_rightMajor payloadA{_i_item_sk3570, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20306_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20306_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19663_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3570 = (it->second)._i_item_sk3570;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20306_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20306_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 3, _i_category_id3581);
                tbl_JOIN_INNER_TD_19663_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19663_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19663_output #Row: " << tbl_JOIN_INNER_TD_19663_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19257(Table &tbl_SerializeFromObject_TD_20381_input, Table &tbl_Filter_TD_19257_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20381_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20381_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20381_input.getInt32(i, 0);
        if (((1) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20381_input.getInt32(i, 0);
            tbl_Filter_TD_19257_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19257_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19257_output #Row: " << tbl_Filter_TD_19257_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19768_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19768_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19768_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19768_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19768_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19768_key_rightMajor {
    int32_t _i_item_sk3570;
    bool operator==(const SW_JOIN_INNER_TD_19768_key_rightMajor& other) const {
        return ((_i_item_sk3570 == other._i_item_sk3570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19768_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19768_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3570));
    }
};
}
struct SW_JOIN_INNER_TD_19768_payload_rightMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
void SW_JOIN_INNER_TD_19768(Table &tbl_Filter_TD_20406_output, Table &tbl_JOIN_LEFTSEMI_TD_2066_output, Table &tbl_JOIN_INNER_TD_19768_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#3570))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_20406_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_2066_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19768_key_leftMajor, SW_JOIN_INNER_TD_19768_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20406_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20406_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19768_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20406_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20406_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19768_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_2066_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19768_key_leftMajor{_i_item_sk3570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 3, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19768_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19768_key_rightMajor, SW_JOIN_INNER_TD_19768_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_2066_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19768_key_rightMajor keyA{_i_item_sk3570_k};
            int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_2066_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19768_payload_rightMajor payloadA{_i_item_sk3570, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20406_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20406_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19768_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3570 = (it->second)._i_item_sk3570;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20406_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20406_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 3, _i_category_id3581);
                tbl_JOIN_INNER_TD_19768_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19768_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19768_output #Row: " << tbl_JOIN_INNER_TD_19768_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19587(Table &tbl_SerializeFromObject_TD_20276_input, Table &tbl_Filter_TD_19587_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20276_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20276_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20276_input.getInt32(i, 0);
        if (((1) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20276_input.getInt32(i, 0);
            tbl_Filter_TD_19587_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19587_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19587_output #Row: " << tbl_Filter_TD_19587_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19464_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19464_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19464_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19464_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19464_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19464_key_rightMajor {
    int32_t _i_item_sk3570;
    bool operator==(const SW_JOIN_INNER_TD_19464_key_rightMajor& other) const {
        return ((_i_item_sk3570 == other._i_item_sk3570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19464_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19464_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3570));
    }
};
}
struct SW_JOIN_INNER_TD_19464_payload_rightMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
void SW_JOIN_INNER_TD_19464(Table &tbl_Filter_TD_20171_output, Table &tbl_JOIN_LEFTSEMI_TD_20649_output, Table &tbl_JOIN_INNER_TD_19464_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#3570))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_20171_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20649_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19464_key_leftMajor, SW_JOIN_INNER_TD_19464_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20171_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20171_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19464_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20171_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20171_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19464_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20649_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19464_key_leftMajor{_i_item_sk3570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 3, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19464_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19464_key_rightMajor, SW_JOIN_INNER_TD_19464_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20649_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19464_key_rightMajor keyA{_i_item_sk3570_k};
            int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_20649_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19464_payload_rightMajor payloadA{_i_item_sk3570, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20171_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20171_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19464_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3570 = (it->second)._i_item_sk3570;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20171_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20171_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 3, _i_category_id3581);
                tbl_JOIN_INNER_TD_19464_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19464_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19464_output #Row: " << tbl_JOIN_INNER_TD_19464_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19223(Table &tbl_SerializeFromObject_TD_20483_input, Table &tbl_Filter_TD_19223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20483_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20483_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20483_input.getInt32(i, 0);
        if (((1) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20483_input.getInt32(i, 0);
            tbl_Filter_TD_19223_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19223_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19223_output #Row: " << tbl_Filter_TD_19223_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19326_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19326_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19326_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19326_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19326_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19326_key_rightMajor {
    int32_t _i_item_sk3570;
    bool operator==(const SW_JOIN_INNER_TD_19326_key_rightMajor& other) const {
        return ((_i_item_sk3570 == other._i_item_sk3570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19326_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19326_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3570));
    }
};
}
struct SW_JOIN_INNER_TD_19326_payload_rightMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
void SW_JOIN_INNER_TD_19326(Table &tbl_Filter_TD_20453_output, Table &tbl_JOIN_LEFTSEMI_TD_20711_output, Table &tbl_JOIN_INNER_TD_19326_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#3570))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_20453_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20711_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19326_key_leftMajor, SW_JOIN_INNER_TD_19326_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20453_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20453_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19326_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20453_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20453_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19326_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20711_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19326_key_leftMajor{_i_item_sk3570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 3, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19326_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19326_key_rightMajor, SW_JOIN_INNER_TD_19326_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20711_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19326_key_rightMajor keyA{_i_item_sk3570_k};
            int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_20711_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19326_payload_rightMajor payloadA{_i_item_sk3570, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20453_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20453_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19326_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3570 = (it->second)._i_item_sk3570;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20453_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20453_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 3, _i_category_id3581);
                tbl_JOIN_INNER_TD_19326_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19326_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19326_output #Row: " << tbl_JOIN_INNER_TD_19326_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19818(Table &tbl_SerializeFromObject_TD_20636_input, Table &tbl_Filter_TD_19818_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20636_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20636_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20636_input.getInt32(i, 0);
        if (((1) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (1)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20636_input.getInt32(i, 0);
            tbl_Filter_TD_19818_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19818_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19818_output #Row: " << tbl_Filter_TD_19818_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19808_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19808_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19808_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19808_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19808_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19808_key_rightMajor {
    int32_t _i_item_sk3570;
    bool operator==(const SW_JOIN_INNER_TD_19808_key_rightMajor& other) const {
        return ((_i_item_sk3570 == other._i_item_sk3570));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19808_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19808_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3570));
    }
};
}
struct SW_JOIN_INNER_TD_19808_payload_rightMajor {
    int32_t _i_item_sk3570;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
void SW_JOIN_INNER_TD_19808(Table &tbl_Filter_TD_20339_output, Table &tbl_JOIN_LEFTSEMI_TD_2074_output, Table &tbl_JOIN_INNER_TD_19808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#3570))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#3570, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_Filter_TD_20339_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_2074_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19808_key_leftMajor, SW_JOIN_INNER_TD_19808_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20339_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20339_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19808_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20339_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20339_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19808_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_2074_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19808_key_leftMajor{_i_item_sk3570_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 3, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19808_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19808_key_rightMajor, SW_JOIN_INNER_TD_19808_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_2074_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3570_k = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19808_key_rightMajor keyA{_i_item_sk3570_k};
            int32_t _i_item_sk3570 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_LEFTSEMI_TD_2074_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19808_payload_rightMajor payloadA{_i_item_sk3570, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20339_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20339_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19808_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3570 = (it->second)._i_item_sk3570;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20339_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20339_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 1, _i_brand_id3577);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 2, _i_class_id3579);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 3, _i_category_id3581);
                tbl_JOIN_INNER_TD_19808_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19808_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19808_output #Row: " << tbl_JOIN_INNER_TD_19808_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18409(Table &tbl_SerializeFromObject_TD_19969_input, Table &tbl_Filter_TD_18409_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19969_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19969_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19969_input.getInt32(i, 0);
            tbl_Filter_TD_18409_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19969_input.getInt32(i, 1);
            tbl_Filter_TD_18409_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19969_input.getInt32(i, 2);
            tbl_Filter_TD_18409_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19969_input.getInt32(i, 3);
            tbl_Filter_TD_18409_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18409_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18409_output #Row: " << tbl_Filter_TD_18409_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18274(Table &tbl_SerializeFromObject_TD_19606_input, Table &tbl_Filter_TD_18274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19606_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19606_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19606_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19606_input.getInt32(i, 0);
            tbl_Filter_TD_18274_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19606_input.getInt32(i, 1);
            tbl_Filter_TD_18274_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18274_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18274_output #Row: " << tbl_Filter_TD_18274_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18936_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18936_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18936_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18936_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18936_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_INNER_TD_18936_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18936_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18936_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18936_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18936_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18936(Table &tbl_JOIN_INNER_TD_19465_output, Table &tbl_Filter_TD_19629_output, Table &tbl_JOIN_INNER_TD_18936_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_JOIN_INNER_TD_19465_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19629_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18936_key_leftMajor, SW_JOIN_INNER_TD_18936_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19465_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18936_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18936_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19629_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19629_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18936_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _d_date_sk120 = tbl_Filter_TD_19629_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18936_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18936_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18936_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18936_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18936_key_rightMajor, SW_JOIN_INNER_TD_18936_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19629_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19629_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18936_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19629_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18936_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19465_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18936_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19465_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18936_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18936_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18936_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18936_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18936_output #Row: " << tbl_JOIN_INNER_TD_18936_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18874(Table &tbl_SerializeFromObject_TD_19189_input, Table &tbl_Filter_TD_18874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19189_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19189_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19189_input.getInt32(i, 0);
            tbl_Filter_TD_18874_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19189_input.getInt32(i, 1);
            tbl_Filter_TD_18874_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19189_input.getInt32(i, 2);
            tbl_Filter_TD_18874_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19189_input.getInt32(i, 3);
            tbl_Filter_TD_18874_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18874_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18874_output #Row: " << tbl_Filter_TD_18874_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18985(Table &tbl_SerializeFromObject_TD_19842_input, Table &tbl_Filter_TD_18985_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19842_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19842_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19842_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19842_input.getInt32(i, 0);
            tbl_Filter_TD_18985_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19842_input.getInt32(i, 1);
            tbl_Filter_TD_18985_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18985_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18985_output #Row: " << tbl_Filter_TD_18985_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18921_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18921_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18921_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18921_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18921_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_INNER_TD_18921_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18921_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18921_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18921_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18921_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18921(Table &tbl_JOIN_INNER_TD_19663_output, Table &tbl_Filter_TD_19709_output, Table &tbl_JOIN_INNER_TD_18921_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_JOIN_INNER_TD_19663_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19709_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18921_key_leftMajor, SW_JOIN_INNER_TD_18921_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19663_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18921_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18921_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19709_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19709_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18921_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _d_date_sk120 = tbl_Filter_TD_19709_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18921_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18921_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18921_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18921_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18921_key_rightMajor, SW_JOIN_INNER_TD_18921_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19709_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19709_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18921_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19709_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18921_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19663_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18921_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19663_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18921_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18921_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18921_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18921_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18921_output #Row: " << tbl_JOIN_INNER_TD_18921_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18697(Table &tbl_SerializeFromObject_TD_19456_input, Table &tbl_Filter_TD_18697_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19456_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19456_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19456_input.getInt32(i, 0);
            tbl_Filter_TD_18697_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19456_input.getInt32(i, 1);
            tbl_Filter_TD_18697_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19456_input.getInt32(i, 2);
            tbl_Filter_TD_18697_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19456_input.getInt32(i, 3);
            tbl_Filter_TD_18697_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18697_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18697_output #Row: " << tbl_Filter_TD_18697_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18843(Table &tbl_SerializeFromObject_TD_19198_input, Table &tbl_Filter_TD_18843_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19198_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19198_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19198_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19198_input.getInt32(i, 0);
            tbl_Filter_TD_18843_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19198_input.getInt32(i, 1);
            tbl_Filter_TD_18843_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18843_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18843_output #Row: " << tbl_Filter_TD_18843_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18698_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18698_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18698_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18698_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18698_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_INNER_TD_18698_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18698_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18698_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18698_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18698_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18698(Table &tbl_JOIN_INNER_TD_19768_output, Table &tbl_Filter_TD_19257_output, Table &tbl_JOIN_INNER_TD_18698_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_JOIN_INNER_TD_19768_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19257_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18698_key_leftMajor, SW_JOIN_INNER_TD_18698_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19768_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18698_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18698_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19257_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19257_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18698_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _d_date_sk120 = tbl_Filter_TD_19257_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18698_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18698_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18698_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18698_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18698_key_rightMajor, SW_JOIN_INNER_TD_18698_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19257_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19257_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18698_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19257_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18698_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19768_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18698_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19768_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18698_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18698_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18698_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18698_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18698_output #Row: " << tbl_JOIN_INNER_TD_18698_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18675(Table &tbl_SerializeFromObject_TD_1961_input, Table &tbl_Filter_TD_18675_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1961_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_1961_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_1961_input.getInt32(i, 0);
            tbl_Filter_TD_18675_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_1961_input.getInt32(i, 1);
            tbl_Filter_TD_18675_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_1961_input.getInt32(i, 2);
            tbl_Filter_TD_18675_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_1961_input.getInt32(i, 3);
            tbl_Filter_TD_18675_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18675_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18675_output #Row: " << tbl_Filter_TD_18675_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18154(Table &tbl_SerializeFromObject_TD_19104_input, Table &tbl_Filter_TD_18154_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19104_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19104_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19104_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19104_input.getInt32(i, 0);
            tbl_Filter_TD_18154_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19104_input.getInt32(i, 1);
            tbl_Filter_TD_18154_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18154_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18154_output #Row: " << tbl_Filter_TD_18154_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1814_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_1814_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1814_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1814_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_1814_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_INNER_TD_1814_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_1814_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1814_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1814_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_1814_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_1814(Table &tbl_JOIN_INNER_TD_19464_output, Table &tbl_Filter_TD_19587_output, Table &tbl_JOIN_INNER_TD_1814_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_JOIN_INNER_TD_19464_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19587_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1814_key_leftMajor, SW_JOIN_INNER_TD_1814_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19464_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1814_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1814_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19587_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19587_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1814_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _d_date_sk120 = tbl_Filter_TD_19587_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1814_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_1814_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_1814_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1814_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1814_key_rightMajor, SW_JOIN_INNER_TD_1814_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19587_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19587_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1814_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19587_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1814_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19464_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1814_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19464_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1814_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_1814_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_1814_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1814_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1814_output #Row: " << tbl_JOIN_INNER_TD_1814_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1868(Table &tbl_SerializeFromObject_TD_19619_input, Table &tbl_Filter_TD_1868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19619_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19619_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19619_input.getInt32(i, 0);
            tbl_Filter_TD_1868_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19619_input.getInt32(i, 1);
            tbl_Filter_TD_1868_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19619_input.getInt32(i, 2);
            tbl_Filter_TD_1868_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19619_input.getInt32(i, 3);
            tbl_Filter_TD_1868_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_1868_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1868_output #Row: " << tbl_Filter_TD_1868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18961(Table &tbl_SerializeFromObject_TD_19653_input, Table &tbl_Filter_TD_18961_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19653_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19653_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19653_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19653_input.getInt32(i, 0);
            tbl_Filter_TD_18961_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19653_input.getInt32(i, 1);
            tbl_Filter_TD_18961_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18961_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18961_output #Row: " << tbl_Filter_TD_18961_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18956_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18956_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18956_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18956_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18956_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_INNER_TD_18956_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18956_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18956_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18956_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18956_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18956(Table &tbl_JOIN_INNER_TD_19326_output, Table &tbl_Filter_TD_19223_output, Table &tbl_JOIN_INNER_TD_18956_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_JOIN_INNER_TD_19326_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19223_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18956_key_leftMajor, SW_JOIN_INNER_TD_18956_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19326_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18956_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18956_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19223_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19223_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18956_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _d_date_sk120 = tbl_Filter_TD_19223_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18956_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18956_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18956_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18956_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18956_key_rightMajor, SW_JOIN_INNER_TD_18956_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19223_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19223_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18956_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19223_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18956_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19326_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18956_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19326_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18956_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18956_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18956_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18956_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18956_output #Row: " << tbl_JOIN_INNER_TD_18956_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18595(Table &tbl_SerializeFromObject_TD_19740_input, Table &tbl_Filter_TD_18595_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3642))
    // Input: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19740_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3642 = tbl_SerializeFromObject_TD_19740_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3642_t = tbl_SerializeFromObject_TD_19740_input.getInt32(i, 0);
            tbl_Filter_TD_18595_output.setInt32(r, 0, _i_item_sk3642_t);
            int32_t _i_brand_id3649_t = tbl_SerializeFromObject_TD_19740_input.getInt32(i, 1);
            tbl_Filter_TD_18595_output.setInt32(r, 1, _i_brand_id3649_t);
            int32_t _i_class_id3651_t = tbl_SerializeFromObject_TD_19740_input.getInt32(i, 2);
            tbl_Filter_TD_18595_output.setInt32(r, 2, _i_class_id3651_t);
            int32_t _i_category_id3653_t = tbl_SerializeFromObject_TD_19740_input.getInt32(i, 3);
            tbl_Filter_TD_18595_output.setInt32(r, 3, _i_category_id3653_t);
            r++;
        }
    }
    tbl_Filter_TD_18595_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18595_output #Row: " << tbl_Filter_TD_18595_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18556(Table &tbl_SerializeFromObject_TD_19637_input, Table &tbl_Filter_TD_18556_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19637_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19637_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19637_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19637_input.getInt32(i, 0);
            tbl_Filter_TD_18556_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19637_input.getInt32(i, 1);
            tbl_Filter_TD_18556_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18556_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18556_output #Row: " << tbl_Filter_TD_18556_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18168_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18168_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18168_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18168_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18168_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id3577;
    int32_t _i_class_id3579;
    int32_t _i_category_id3581;
};
struct SW_JOIN_INNER_TD_18168_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18168_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18168_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18168_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18168_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18168(Table &tbl_JOIN_INNER_TD_19808_output, Table &tbl_Filter_TD_19818_output, Table &tbl_JOIN_INNER_TD_18168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    int left_nrow = tbl_JOIN_INNER_TD_19808_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19818_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18168_key_leftMajor, SW_JOIN_INNER_TD_18168_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19808_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18168_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 0);
            int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 1);
            int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 2);
            int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18168_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id3577, _i_class_id3579, _i_category_id3581};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19818_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19818_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18168_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id3577 = (it->second)._i_brand_id3577;
                int32_t _i_class_id3579 = (it->second)._i_class_id3579;
                int32_t _i_category_id3581 = (it->second)._i_category_id3581;
                int32_t _d_date_sk120 = tbl_Filter_TD_19818_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18168_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18168_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18168_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18168_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18168_key_rightMajor, SW_JOIN_INNER_TD_18168_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19818_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19818_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18168_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19818_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18168_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19808_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18168_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 0);
                int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 1);
                int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 2);
                int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_19808_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18168_output.setInt32(r, 0, _i_brand_id3577);
                tbl_JOIN_INNER_TD_18168_output.setInt32(r, 1, _i_class_id3579);
                tbl_JOIN_INNER_TD_18168_output.setInt32(r, 2, _i_category_id3581);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18168_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18168_output #Row: " << tbl_JOIN_INNER_TD_18168_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17519(Table &tbl_SerializeFromObject_TD_18227_input, Table &tbl_Filter_TD_17519_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18227_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18227_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18227_input.getInt32(i, 0);
        if (((1) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (1)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18227_input.getInt32(i, 0);
            tbl_Filter_TD_17519_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17519_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17519_output #Row: " << tbl_Filter_TD_17519_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_175_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_175_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_175_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_175_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_175_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_175_key_rightMajor {
    int32_t _i_item_sk3642;
    bool operator==(const SW_JOIN_INNER_TD_175_key_rightMajor& other) const {
        return ((_i_item_sk3642 == other._i_item_sk3642));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_175_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_175_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3642));
    }
};
}
struct SW_JOIN_INNER_TD_175_payload_rightMajor {
    int32_t _i_item_sk3642;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_INNER_TD_175(Table &tbl_Filter_TD_18274_output, Table &tbl_Filter_TD_18409_output, Table &tbl_JOIN_INNER_TD_175_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3642))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_Filter_TD_18274_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18409_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_175_key_leftMajor, SW_JOIN_INNER_TD_175_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18274_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18274_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_175_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18274_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18274_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_175_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18409_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18409_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_175_key_leftMajor{_i_item_sk3642_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk3642 = tbl_Filter_TD_18409_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_Filter_TD_18409_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_Filter_TD_18409_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_Filter_TD_18409_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 3, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_175_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_175_key_rightMajor, SW_JOIN_INNER_TD_175_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18409_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18409_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_175_key_rightMajor keyA{_i_item_sk3642_k};
            int32_t _i_item_sk3642 = tbl_Filter_TD_18409_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_Filter_TD_18409_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_Filter_TD_18409_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_Filter_TD_18409_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_175_payload_rightMajor payloadA{_i_item_sk3642, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18274_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18274_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_175_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3642 = (it->second)._i_item_sk3642;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18274_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18274_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 3, _i_category_id3653);
                tbl_JOIN_INNER_TD_175_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_175_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_175_output #Row: " << tbl_JOIN_INNER_TD_175_output.getNumRow() << std::endl;
}

void SW_Project_TD_1710(Table &tbl_JOIN_INNER_TD_18936_output, Table &tbl_Project_TD_1710_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18936_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18936_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18936_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18936_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_1710_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_1710_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_1710_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_1710_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1710_output #Row: " << tbl_Project_TD_1710_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17204(Table &tbl_SerializeFromObject_TD_18652_input, Table &tbl_Filter_TD_17204_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18652_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18652_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18652_input.getInt32(i, 0);
        if (((1) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (1)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18652_input.getInt32(i, 0);
            tbl_Filter_TD_17204_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17204_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17204_output #Row: " << tbl_Filter_TD_17204_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17674_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17674_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17674_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17674_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17674_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17674_key_rightMajor {
    int32_t _i_item_sk3642;
    bool operator==(const SW_JOIN_INNER_TD_17674_key_rightMajor& other) const {
        return ((_i_item_sk3642 == other._i_item_sk3642));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17674_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17674_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3642));
    }
};
}
struct SW_JOIN_INNER_TD_17674_payload_rightMajor {
    int32_t _i_item_sk3642;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_INNER_TD_17674(Table &tbl_Filter_TD_18985_output, Table &tbl_Filter_TD_18874_output, Table &tbl_JOIN_INNER_TD_17674_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3642))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_Filter_TD_18985_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18874_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17674_key_leftMajor, SW_JOIN_INNER_TD_17674_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18985_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18985_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17674_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18985_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18985_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17674_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18874_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18874_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17674_key_leftMajor{_i_item_sk3642_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk3642 = tbl_Filter_TD_18874_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_Filter_TD_18874_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_Filter_TD_18874_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_Filter_TD_18874_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 3, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17674_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17674_key_rightMajor, SW_JOIN_INNER_TD_17674_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18874_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18874_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17674_key_rightMajor keyA{_i_item_sk3642_k};
            int32_t _i_item_sk3642 = tbl_Filter_TD_18874_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_Filter_TD_18874_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_Filter_TD_18874_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_Filter_TD_18874_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17674_payload_rightMajor payloadA{_i_item_sk3642, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18985_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18985_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17674_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3642 = (it->second)._i_item_sk3642;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18985_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18985_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 3, _i_category_id3653);
                tbl_JOIN_INNER_TD_17674_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17674_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17674_output #Row: " << tbl_JOIN_INNER_TD_17674_output.getNumRow() << std::endl;
}

void SW_Project_TD_17441(Table &tbl_JOIN_INNER_TD_18921_output, Table &tbl_Project_TD_17441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18921_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18921_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18921_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18921_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17441_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17441_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17441_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17441_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17441_output #Row: " << tbl_Project_TD_17441_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17991(Table &tbl_SerializeFromObject_TD_18564_input, Table &tbl_Filter_TD_17991_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18564_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18564_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18564_input.getInt32(i, 0);
        if (((1) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (1)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18564_input.getInt32(i, 0);
            tbl_Filter_TD_17991_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17991_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17991_output #Row: " << tbl_Filter_TD_17991_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17683_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17683_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17683_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17683_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17683_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17683_key_rightMajor {
    int32_t _i_item_sk3642;
    bool operator==(const SW_JOIN_INNER_TD_17683_key_rightMajor& other) const {
        return ((_i_item_sk3642 == other._i_item_sk3642));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17683_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17683_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3642));
    }
};
}
struct SW_JOIN_INNER_TD_17683_payload_rightMajor {
    int32_t _i_item_sk3642;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_INNER_TD_17683(Table &tbl_Filter_TD_18843_output, Table &tbl_Filter_TD_18697_output, Table &tbl_JOIN_INNER_TD_17683_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3642))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_Filter_TD_18843_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18697_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17683_key_leftMajor, SW_JOIN_INNER_TD_17683_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18843_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18843_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17683_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18843_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18843_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17683_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18697_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18697_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17683_key_leftMajor{_i_item_sk3642_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk3642 = tbl_Filter_TD_18697_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_Filter_TD_18697_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_Filter_TD_18697_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_Filter_TD_18697_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 3, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17683_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17683_key_rightMajor, SW_JOIN_INNER_TD_17683_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18697_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18697_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17683_key_rightMajor keyA{_i_item_sk3642_k};
            int32_t _i_item_sk3642 = tbl_Filter_TD_18697_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_Filter_TD_18697_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_Filter_TD_18697_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_Filter_TD_18697_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17683_payload_rightMajor payloadA{_i_item_sk3642, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18843_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18843_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17683_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3642 = (it->second)._i_item_sk3642;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18843_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18843_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 3, _i_category_id3653);
                tbl_JOIN_INNER_TD_17683_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17683_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17683_output #Row: " << tbl_JOIN_INNER_TD_17683_output.getNumRow() << std::endl;
}

void SW_Project_TD_17191(Table &tbl_JOIN_INNER_TD_18698_output, Table &tbl_Project_TD_17191_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18698_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18698_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18698_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18698_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17191_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17191_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17191_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17191_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17191_output #Row: " << tbl_Project_TD_17191_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17748(Table &tbl_SerializeFromObject_TD_18174_input, Table &tbl_Filter_TD_17748_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18174_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18174_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18174_input.getInt32(i, 0);
        if (((1) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (1)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18174_input.getInt32(i, 0);
            tbl_Filter_TD_17748_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17748_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17748_output #Row: " << tbl_Filter_TD_17748_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1791_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_1791_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1791_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1791_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_1791_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_1791_key_rightMajor {
    int32_t _i_item_sk3642;
    bool operator==(const SW_JOIN_INNER_TD_1791_key_rightMajor& other) const {
        return ((_i_item_sk3642 == other._i_item_sk3642));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1791_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1791_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3642));
    }
};
}
struct SW_JOIN_INNER_TD_1791_payload_rightMajor {
    int32_t _i_item_sk3642;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_INNER_TD_1791(Table &tbl_Filter_TD_18154_output, Table &tbl_Filter_TD_18675_output, Table &tbl_JOIN_INNER_TD_1791_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3642))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_Filter_TD_18154_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18675_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1791_key_leftMajor, SW_JOIN_INNER_TD_1791_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18154_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18154_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1791_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18154_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18154_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1791_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18675_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18675_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1791_key_leftMajor{_i_item_sk3642_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk3642 = tbl_Filter_TD_18675_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_Filter_TD_18675_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_Filter_TD_18675_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_Filter_TD_18675_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 3, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1791_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1791_key_rightMajor, SW_JOIN_INNER_TD_1791_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18675_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18675_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1791_key_rightMajor keyA{_i_item_sk3642_k};
            int32_t _i_item_sk3642 = tbl_Filter_TD_18675_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_Filter_TD_18675_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_Filter_TD_18675_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_Filter_TD_18675_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1791_payload_rightMajor payloadA{_i_item_sk3642, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18154_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18154_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1791_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3642 = (it->second)._i_item_sk3642;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18154_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18154_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 3, _i_category_id3653);
                tbl_JOIN_INNER_TD_1791_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1791_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1791_output #Row: " << tbl_JOIN_INNER_TD_1791_output.getNumRow() << std::endl;
}

void SW_Project_TD_17618(Table &tbl_JOIN_INNER_TD_1814_output, Table &tbl_Project_TD_17618_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_1814_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_1814_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_1814_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_1814_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17618_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17618_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17618_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17618_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17618_output #Row: " << tbl_Project_TD_17618_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1711(Table &tbl_SerializeFromObject_TD_18327_input, Table &tbl_Filter_TD_1711_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18327_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18327_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18327_input.getInt32(i, 0);
        if (((1) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (1)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18327_input.getInt32(i, 0);
            tbl_Filter_TD_1711_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_1711_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1711_output #Row: " << tbl_Filter_TD_1711_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1797_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_1797_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1797_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1797_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_1797_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_1797_key_rightMajor {
    int32_t _i_item_sk3642;
    bool operator==(const SW_JOIN_INNER_TD_1797_key_rightMajor& other) const {
        return ((_i_item_sk3642 == other._i_item_sk3642));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1797_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1797_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3642));
    }
};
}
struct SW_JOIN_INNER_TD_1797_payload_rightMajor {
    int32_t _i_item_sk3642;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_INNER_TD_1797(Table &tbl_Filter_TD_18961_output, Table &tbl_Filter_TD_1868_output, Table &tbl_JOIN_INNER_TD_1797_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3642))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_Filter_TD_18961_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1868_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1797_key_leftMajor, SW_JOIN_INNER_TD_1797_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18961_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18961_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1797_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18961_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18961_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_1797_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1868_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_1868_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1797_key_leftMajor{_i_item_sk3642_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk3642 = tbl_Filter_TD_1868_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_Filter_TD_1868_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_Filter_TD_1868_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_Filter_TD_1868_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 3, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1797_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1797_key_rightMajor, SW_JOIN_INNER_TD_1797_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1868_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_1868_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1797_key_rightMajor keyA{_i_item_sk3642_k};
            int32_t _i_item_sk3642 = tbl_Filter_TD_1868_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_Filter_TD_1868_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_Filter_TD_1868_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_Filter_TD_1868_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1797_payload_rightMajor payloadA{_i_item_sk3642, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18961_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18961_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1797_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3642 = (it->second)._i_item_sk3642;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18961_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18961_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 3, _i_category_id3653);
                tbl_JOIN_INNER_TD_1797_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1797_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1797_output #Row: " << tbl_JOIN_INNER_TD_1797_output.getNumRow() << std::endl;
}

void SW_Project_TD_17879(Table &tbl_JOIN_INNER_TD_18956_output, Table &tbl_Project_TD_17879_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18956_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18956_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18956_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18956_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17879_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17879_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17879_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17879_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17879_output #Row: " << tbl_Project_TD_17879_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17542(Table &tbl_SerializeFromObject_TD_18272_input, Table &tbl_Filter_TD_17542_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3670) AND ((d_year#3670 >= 1999) AND (d_year#3670 <= 2001))) AND isnotnull(d_date_sk#3664)))
    // Input: ListBuffer(d_date_sk#3664, d_year#3670)
    // Output: ListBuffer(d_date_sk#3664)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18272_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3670 = tbl_SerializeFromObject_TD_18272_input.getInt32(i, 1);
        int32_t _d_date_sk3664 = tbl_SerializeFromObject_TD_18272_input.getInt32(i, 0);
        if (((1) && ((_d_year3670 >= 1999) && (_d_year3670 <= 2001))) && (1)) {
            int32_t _d_date_sk3664_t = tbl_SerializeFromObject_TD_18272_input.getInt32(i, 0);
            tbl_Filter_TD_17542_output.setInt32(r, 0, _d_date_sk3664_t);
            r++;
        }
    }
    tbl_Filter_TD_17542_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17542_output #Row: " << tbl_Filter_TD_17542_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17560_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17560_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17560_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17560_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17560_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17560_key_rightMajor {
    int32_t _i_item_sk3642;
    bool operator==(const SW_JOIN_INNER_TD_17560_key_rightMajor& other) const {
        return ((_i_item_sk3642 == other._i_item_sk3642));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17560_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17560_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3642));
    }
};
}
struct SW_JOIN_INNER_TD_17560_payload_rightMajor {
    int32_t _i_item_sk3642;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_INNER_TD_17560(Table &tbl_Filter_TD_18556_output, Table &tbl_Filter_TD_18595_output, Table &tbl_JOIN_INNER_TD_17560_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#3642))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#3642, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_Filter_TD_18556_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18595_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17560_key_leftMajor, SW_JOIN_INNER_TD_17560_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18556_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18556_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17560_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18556_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18556_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17560_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18595_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18595_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17560_key_leftMajor{_i_item_sk3642_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk3642 = tbl_Filter_TD_18595_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_Filter_TD_18595_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_Filter_TD_18595_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_Filter_TD_18595_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 3, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17560_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17560_key_rightMajor, SW_JOIN_INNER_TD_17560_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18595_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3642_k = tbl_Filter_TD_18595_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17560_key_rightMajor keyA{_i_item_sk3642_k};
            int32_t _i_item_sk3642 = tbl_Filter_TD_18595_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_Filter_TD_18595_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_Filter_TD_18595_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_Filter_TD_18595_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17560_payload_rightMajor payloadA{_i_item_sk3642, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18556_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18556_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17560_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3642 = (it->second)._i_item_sk3642;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18556_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18556_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 1, _i_brand_id3649);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 2, _i_class_id3651);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 3, _i_category_id3653);
                tbl_JOIN_INNER_TD_17560_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17560_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17560_output #Row: " << tbl_JOIN_INNER_TD_17560_output.getNumRow() << std::endl;
}

void SW_Project_TD_17388(Table &tbl_JOIN_INNER_TD_18168_output, Table &tbl_Project_TD_17388_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#3577 AS brand_id#3559, i_class_id#3579 AS class_id#3560, i_category_id#3581 AS category_id#3561)
    // Input: ListBuffer(i_brand_id#3577, i_class_id#3579, i_category_id#3581)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int nrow1 = tbl_JOIN_INNER_TD_18168_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id3577 = tbl_JOIN_INNER_TD_18168_output.getInt32(i, 0);
        int32_t _i_class_id3579 = tbl_JOIN_INNER_TD_18168_output.getInt32(i, 1);
        int32_t _i_category_id3581 = tbl_JOIN_INNER_TD_18168_output.getInt32(i, 2);
        int32_t _brand_id3559 = _i_brand_id3577;
        tbl_Project_TD_17388_output.setInt32(i, 0, _brand_id3559);
        int32_t _class_id3560 = _i_class_id3579;
        tbl_Project_TD_17388_output.setInt32(i, 1, _class_id3560);
        int32_t _category_id3561 = _i_category_id3581;
        tbl_Project_TD_17388_output.setInt32(i, 2, _category_id3561);
    }
    tbl_Project_TD_17388_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17388_output #Row: " << tbl_Project_TD_17388_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16441_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16441_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16441_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16441_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16441_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
struct SW_JOIN_INNER_TD_16441_key_rightMajor {
    int32_t _d_date_sk3664;
    bool operator==(const SW_JOIN_INNER_TD_16441_key_rightMajor& other) const {
        return ((_d_date_sk3664 == other._d_date_sk3664));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16441_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16441_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3664));
    }
};
}
struct SW_JOIN_INNER_TD_16441_payload_rightMajor {
    int32_t _d_date_sk3664;
};
void SW_JOIN_INNER_TD_16441(Table &tbl_JOIN_INNER_TD_175_output, Table &tbl_Filter_TD_17519_output, Table &tbl_JOIN_INNER_TD_16441_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3664))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Right Table: ListBuffer(d_date_sk#3664)
    // Output Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_JOIN_INNER_TD_175_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17519_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16441_key_leftMajor, SW_JOIN_INNER_TD_16441_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_175_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_175_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16441_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16441_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17519_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17519_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16441_key_leftMajor{_d_date_sk3664_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _d_date_sk3664 = tbl_Filter_TD_17519_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16441_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16441_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16441_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16441_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16441_key_rightMajor, SW_JOIN_INNER_TD_16441_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17519_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17519_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16441_key_rightMajor keyA{_d_date_sk3664_k};
            int32_t _d_date_sk3664 = tbl_Filter_TD_17519_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16441_payload_rightMajor payloadA{_d_date_sk3664};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_175_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_175_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16441_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3664 = (it->second)._d_date_sk3664;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_175_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16441_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16441_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16441_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16441_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16441_output #Row: " << tbl_JOIN_INNER_TD_16441_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_167_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_167_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_167_key> {
    std::size_t operator() (const SW_Aggregate_TD_167_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_167_payload {
};
void SW_Aggregate_TD_167(Table &tbl_Project_TD_1710_output, Table &tbl_Aggregate_TD_167_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_167_key, SW_Aggregate_TD_167_payload> ht1;
    int nrow1 = tbl_Project_TD_1710_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_Project_TD_1710_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_Project_TD_1710_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_Project_TD_1710_output.getInt32(i, 2);
        SW_Aggregate_TD_167_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_167_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_167_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_167_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_167_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_167_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_167_output #Row: " << tbl_Aggregate_TD_167_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16300_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16300_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16300_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16300_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16300_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
struct SW_JOIN_INNER_TD_16300_key_rightMajor {
    int32_t _d_date_sk3664;
    bool operator==(const SW_JOIN_INNER_TD_16300_key_rightMajor& other) const {
        return ((_d_date_sk3664 == other._d_date_sk3664));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16300_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16300_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3664));
    }
};
}
struct SW_JOIN_INNER_TD_16300_payload_rightMajor {
    int32_t _d_date_sk3664;
};
void SW_JOIN_INNER_TD_16300(Table &tbl_JOIN_INNER_TD_17674_output, Table &tbl_Filter_TD_17204_output, Table &tbl_JOIN_INNER_TD_16300_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3664))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Right Table: ListBuffer(d_date_sk#3664)
    // Output Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_JOIN_INNER_TD_17674_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17204_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16300_key_leftMajor, SW_JOIN_INNER_TD_16300_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17674_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16300_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16300_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17204_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17204_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16300_key_leftMajor{_d_date_sk3664_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _d_date_sk3664 = tbl_Filter_TD_17204_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16300_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16300_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16300_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16300_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16300_key_rightMajor, SW_JOIN_INNER_TD_16300_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17204_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17204_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16300_key_rightMajor keyA{_d_date_sk3664_k};
            int32_t _d_date_sk3664 = tbl_Filter_TD_17204_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16300_payload_rightMajor payloadA{_d_date_sk3664};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17674_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16300_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3664 = (it->second)._d_date_sk3664;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_17674_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16300_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16300_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16300_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16300_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16300_output #Row: " << tbl_JOIN_INNER_TD_16300_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16233_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_16233_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16233_key> {
    std::size_t operator() (const SW_Aggregate_TD_16233_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_16233_payload {
};
void SW_Aggregate_TD_16233(Table &tbl_Project_TD_17441_output, Table &tbl_Aggregate_TD_16233_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_16233_key, SW_Aggregate_TD_16233_payload> ht1;
    int nrow1 = tbl_Project_TD_17441_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_Project_TD_17441_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_Project_TD_17441_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_Project_TD_17441_output.getInt32(i, 2);
        SW_Aggregate_TD_16233_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_16233_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16233_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_16233_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_16233_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_16233_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16233_output #Row: " << tbl_Aggregate_TD_16233_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16622_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16622_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16622_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16622_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16622_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
struct SW_JOIN_INNER_TD_16622_key_rightMajor {
    int32_t _d_date_sk3664;
    bool operator==(const SW_JOIN_INNER_TD_16622_key_rightMajor& other) const {
        return ((_d_date_sk3664 == other._d_date_sk3664));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16622_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16622_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3664));
    }
};
}
struct SW_JOIN_INNER_TD_16622_payload_rightMajor {
    int32_t _d_date_sk3664;
};
void SW_JOIN_INNER_TD_16622(Table &tbl_JOIN_INNER_TD_17683_output, Table &tbl_Filter_TD_17991_output, Table &tbl_JOIN_INNER_TD_16622_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3664))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Right Table: ListBuffer(d_date_sk#3664)
    // Output Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_JOIN_INNER_TD_17683_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17991_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16622_key_leftMajor, SW_JOIN_INNER_TD_16622_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17683_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16622_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16622_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17991_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17991_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16622_key_leftMajor{_d_date_sk3664_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _d_date_sk3664 = tbl_Filter_TD_17991_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16622_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16622_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16622_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16622_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16622_key_rightMajor, SW_JOIN_INNER_TD_16622_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17991_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17991_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16622_key_rightMajor keyA{_d_date_sk3664_k};
            int32_t _d_date_sk3664 = tbl_Filter_TD_17991_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16622_payload_rightMajor payloadA{_d_date_sk3664};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17683_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16622_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3664 = (it->second)._d_date_sk3664;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_17683_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16622_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16622_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16622_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16622_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16622_output #Row: " << tbl_JOIN_INNER_TD_16622_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_1621_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_1621_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_1621_key> {
    std::size_t operator() (const SW_Aggregate_TD_1621_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_1621_payload {
};
void SW_Aggregate_TD_1621(Table &tbl_Project_TD_17191_output, Table &tbl_Aggregate_TD_1621_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_1621_key, SW_Aggregate_TD_1621_payload> ht1;
    int nrow1 = tbl_Project_TD_17191_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_Project_TD_17191_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_Project_TD_17191_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_Project_TD_17191_output.getInt32(i, 2);
        SW_Aggregate_TD_1621_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_1621_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_1621_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_1621_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_1621_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_1621_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_1621_output #Row: " << tbl_Aggregate_TD_1621_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16787_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16787_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16787_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16787_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16787_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
struct SW_JOIN_INNER_TD_16787_key_rightMajor {
    int32_t _d_date_sk3664;
    bool operator==(const SW_JOIN_INNER_TD_16787_key_rightMajor& other) const {
        return ((_d_date_sk3664 == other._d_date_sk3664));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16787_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16787_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3664));
    }
};
}
struct SW_JOIN_INNER_TD_16787_payload_rightMajor {
    int32_t _d_date_sk3664;
};
void SW_JOIN_INNER_TD_16787(Table &tbl_JOIN_INNER_TD_1791_output, Table &tbl_Filter_TD_17748_output, Table &tbl_JOIN_INNER_TD_16787_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3664))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Right Table: ListBuffer(d_date_sk#3664)
    // Output Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_JOIN_INNER_TD_1791_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17748_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16787_key_leftMajor, SW_JOIN_INNER_TD_16787_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1791_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16787_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16787_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17748_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17748_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16787_key_leftMajor{_d_date_sk3664_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _d_date_sk3664 = tbl_Filter_TD_17748_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16787_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16787_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16787_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16787_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16787_key_rightMajor, SW_JOIN_INNER_TD_16787_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17748_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17748_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16787_key_rightMajor keyA{_d_date_sk3664_k};
            int32_t _d_date_sk3664 = tbl_Filter_TD_17748_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16787_payload_rightMajor payloadA{_d_date_sk3664};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1791_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16787_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3664 = (it->second)._d_date_sk3664;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_1791_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16787_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16787_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16787_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16787_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16787_output #Row: " << tbl_JOIN_INNER_TD_16787_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16107_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_16107_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16107_key> {
    std::size_t operator() (const SW_Aggregate_TD_16107_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_16107_payload {
};
void SW_Aggregate_TD_16107(Table &tbl_Project_TD_17618_output, Table &tbl_Aggregate_TD_16107_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_16107_key, SW_Aggregate_TD_16107_payload> ht1;
    int nrow1 = tbl_Project_TD_17618_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_Project_TD_17618_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_Project_TD_17618_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_Project_TD_17618_output.getInt32(i, 2);
        SW_Aggregate_TD_16107_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_16107_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16107_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_16107_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_16107_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_16107_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16107_output #Row: " << tbl_Aggregate_TD_16107_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16530_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16530_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16530_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16530_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16530_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
struct SW_JOIN_INNER_TD_16530_key_rightMajor {
    int32_t _d_date_sk3664;
    bool operator==(const SW_JOIN_INNER_TD_16530_key_rightMajor& other) const {
        return ((_d_date_sk3664 == other._d_date_sk3664));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16530_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16530_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3664));
    }
};
}
struct SW_JOIN_INNER_TD_16530_payload_rightMajor {
    int32_t _d_date_sk3664;
};
void SW_JOIN_INNER_TD_16530(Table &tbl_JOIN_INNER_TD_1797_output, Table &tbl_Filter_TD_1711_output, Table &tbl_JOIN_INNER_TD_16530_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3664))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Right Table: ListBuffer(d_date_sk#3664)
    // Output Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_JOIN_INNER_TD_1797_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1711_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16530_key_leftMajor, SW_JOIN_INNER_TD_16530_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_1797_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16530_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16530_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1711_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_1711_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16530_key_leftMajor{_d_date_sk3664_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _d_date_sk3664 = tbl_Filter_TD_1711_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16530_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16530_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16530_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16530_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16530_key_rightMajor, SW_JOIN_INNER_TD_16530_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1711_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_1711_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16530_key_rightMajor keyA{_d_date_sk3664_k};
            int32_t _d_date_sk3664 = tbl_Filter_TD_1711_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16530_payload_rightMajor payloadA{_d_date_sk3664};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_1797_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16530_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3664 = (it->second)._d_date_sk3664;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_1797_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16530_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16530_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16530_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16530_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16530_output #Row: " << tbl_JOIN_INNER_TD_16530_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16373_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_16373_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16373_key> {
    std::size_t operator() (const SW_Aggregate_TD_16373_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_16373_payload {
};
void SW_Aggregate_TD_16373(Table &tbl_Project_TD_17879_output, Table &tbl_Aggregate_TD_16373_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_16373_key, SW_Aggregate_TD_16373_payload> ht1;
    int nrow1 = tbl_Project_TD_17879_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_Project_TD_17879_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_Project_TD_17879_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_Project_TD_17879_output.getInt32(i, 2);
        SW_Aggregate_TD_16373_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_16373_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16373_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_16373_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_16373_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_16373_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16373_output #Row: " << tbl_Aggregate_TD_16373_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16168_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16168_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16168_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16168_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16168_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
struct SW_JOIN_INNER_TD_16168_key_rightMajor {
    int32_t _d_date_sk3664;
    bool operator==(const SW_JOIN_INNER_TD_16168_key_rightMajor& other) const {
        return ((_d_date_sk3664 == other._d_date_sk3664));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16168_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16168_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3664));
    }
};
}
struct SW_JOIN_INNER_TD_16168_payload_rightMajor {
    int32_t _d_date_sk3664;
};
void SW_JOIN_INNER_TD_16168(Table &tbl_JOIN_INNER_TD_17560_output, Table &tbl_Filter_TD_17542_output, Table &tbl_JOIN_INNER_TD_16168_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#3664))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Right Table: ListBuffer(d_date_sk#3664)
    // Output Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    int left_nrow = tbl_JOIN_INNER_TD_17560_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17542_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16168_key_leftMajor, SW_JOIN_INNER_TD_16168_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17560_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16168_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 0);
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 1);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 2);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16168_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17542_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17542_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16168_key_leftMajor{_d_date_sk3664_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id3649 = (it->second)._i_brand_id3649;
                int32_t _i_class_id3651 = (it->second)._i_class_id3651;
                int32_t _i_category_id3653 = (it->second)._i_category_id3653;
                int32_t _d_date_sk3664 = tbl_Filter_TD_17542_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16168_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16168_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16168_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16168_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16168_key_rightMajor, SW_JOIN_INNER_TD_16168_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17542_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3664_k = tbl_Filter_TD_17542_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16168_key_rightMajor keyA{_d_date_sk3664_k};
            int32_t _d_date_sk3664 = tbl_Filter_TD_17542_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16168_payload_rightMajor payloadA{_d_date_sk3664};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17560_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16168_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3664 = (it->second)._d_date_sk3664;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 0);
                int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 1);
                int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 2);
                int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_17560_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16168_output.setInt32(r, 0, _i_brand_id3649);
                tbl_JOIN_INNER_TD_16168_output.setInt32(r, 1, _i_class_id3651);
                tbl_JOIN_INNER_TD_16168_output.setInt32(r, 2, _i_category_id3653);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16168_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16168_output #Row: " << tbl_JOIN_INNER_TD_16168_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16795_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_16795_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16795_key> {
    std::size_t operator() (const SW_Aggregate_TD_16795_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_16795_payload {
};
void SW_Aggregate_TD_16795(Table &tbl_Project_TD_17388_output, Table &tbl_Aggregate_TD_16795_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_16795_key, SW_Aggregate_TD_16795_payload> ht1;
    int nrow1 = tbl_Project_TD_17388_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_Project_TD_17388_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_Project_TD_17388_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_Project_TD_17388_output.getInt32(i, 2);
        SW_Aggregate_TD_16795_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_16795_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16795_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_16795_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_16795_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_16795_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16795_output #Row: " << tbl_Aggregate_TD_16795_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15519_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15519_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15519_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15519_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15519_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15519_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15519(Table &tbl_Aggregate_TD_167_output, Table &tbl_JOIN_INNER_TD_16441_output, Table &tbl_JOIN_LEFTSEMI_TD_15519_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_167_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16441_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15519_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16441_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_167_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16441_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16441_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16441_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16441_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16441_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16441_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15519_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_167_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_167_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_167_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15519_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_167_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_167_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_167_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15519_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15519_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15519_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15519_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15519_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15519_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1528_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1528_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1528_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1528_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1528_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1528_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_1528(Table &tbl_Aggregate_TD_16233_output, Table &tbl_JOIN_INNER_TD_16300_output, Table &tbl_JOIN_LEFTSEMI_TD_1528_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16233_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16300_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1528_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16300_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16233_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16300_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16300_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16300_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16300_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16300_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16300_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1528_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16233_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16233_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16233_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1528_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16233_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16233_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16233_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1528_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_1528_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_1528_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1528_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1528_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1528_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1569_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1569_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1569_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1569_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1569_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1569_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_1569(Table &tbl_Aggregate_TD_1621_output, Table &tbl_JOIN_INNER_TD_16622_output, Table &tbl_JOIN_LEFTSEMI_TD_1569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_1621_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16622_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1569_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16622_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_1621_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16622_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16622_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16622_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16622_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16622_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16622_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1569_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_1621_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_1621_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_1621_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1569_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_1621_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_1621_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_1621_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1569_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_1569_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_1569_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1569_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1569_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1569_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15984_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15984_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15984_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15984_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15984_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15984_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15984(Table &tbl_Aggregate_TD_16107_output, Table &tbl_JOIN_INNER_TD_16787_output, Table &tbl_JOIN_LEFTSEMI_TD_15984_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16107_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16787_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15984_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16787_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16107_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16787_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16787_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16787_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16787_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16787_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16787_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15984_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16107_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16107_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16107_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15984_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16107_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16107_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16107_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15984_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15984_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15984_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15984_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15984_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15984_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15737_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15737_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15737_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15737_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15737_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15737_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_15737(Table &tbl_Aggregate_TD_16373_output, Table &tbl_JOIN_INNER_TD_16530_output, Table &tbl_JOIN_LEFTSEMI_TD_15737_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16373_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16530_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15737_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16530_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16373_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16530_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16530_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16530_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16530_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16530_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16530_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15737_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16373_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16373_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16373_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15737_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16373_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16373_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16373_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15737_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_15737_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_15737_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15737_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15737_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15737_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1525_key_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1525_key_leftMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1525_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1525_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1525_payload_leftMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
struct SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor& other) const {
        return ((_i_brand_id3649 == other._i_brand_id3649) && (_i_class_id3651 == other._i_class_id3651) && (_i_category_id3653 == other._i_category_id3653));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3649)) + (hash<int32_t>()(k._i_class_id3651)) + (hash<int32_t>()(k._i_category_id3653));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1525_payload_rightMajor {
    int32_t _i_brand_id3649;
    int32_t _i_class_id3651;
    int32_t _i_category_id3653;
};
void SW_JOIN_LEFTSEMI_TD_1525(Table &tbl_Aggregate_TD_16795_output, Table &tbl_JOIN_INNER_TD_16168_output, Table &tbl_JOIN_LEFTSEMI_TD_1525_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#3559 <=> i_brand_id#3649) AND (class_id#3560 <=> i_class_id#3651)) AND (category_id#3561 <=> i_category_id#3653)))
    // Left Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Right Table: ListBuffer(i_brand_id#3649, i_class_id#3651, i_category_id#3653)
    // Output Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    int left_nrow = tbl_Aggregate_TD_16795_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16168_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1525_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16168_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16795_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id3649_k = tbl_JOIN_INNER_TD_16168_output.getInt32(i, 0);
            int32_t _i_class_id3651_k = tbl_JOIN_INNER_TD_16168_output.getInt32(i, 1);
            int32_t _i_category_id3653_k = tbl_JOIN_INNER_TD_16168_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor keyA{_i_brand_id3649_k, _i_class_id3651_k, _i_category_id3653_k};
            int32_t _i_brand_id3649 = tbl_JOIN_INNER_TD_16168_output.getInt32(i, 0);
            int32_t _i_class_id3651 = tbl_JOIN_INNER_TD_16168_output.getInt32(i, 1);
            int32_t _i_category_id3653 = tbl_JOIN_INNER_TD_16168_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1525_payload_rightMajor payloadA{_i_brand_id3649, _i_class_id3651, _i_category_id3653};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_16795_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_16795_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_16795_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1525_key_rightMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            if (it != ht1.end()) {
                int32_t _brand_id3559 = tbl_Aggregate_TD_16795_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_16795_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_16795_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1525_output.setInt32(r, 0, _brand_id3559);
                tbl_JOIN_LEFTSEMI_TD_1525_output.setInt32(r, 1, _class_id3560);
                tbl_JOIN_LEFTSEMI_TD_1525_output.setInt32(r, 2, _category_id3561);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1525_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1525_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1525_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14981_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_14981_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14981_key> {
    std::size_t operator() (const SW_Aggregate_TD_14981_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_14981_payload {
};
void SW_Aggregate_TD_14981(Table &tbl_JOIN_LEFTSEMI_TD_15519_output, Table &tbl_Aggregate_TD_14981_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_14981_key, SW_Aggregate_TD_14981_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15519_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_JOIN_LEFTSEMI_TD_15519_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_JOIN_LEFTSEMI_TD_15519_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_JOIN_LEFTSEMI_TD_15519_output.getInt32(i, 2);
        SW_Aggregate_TD_14981_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_14981_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14981_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_14981_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_14981_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_14981_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14981_output #Row: " << tbl_Aggregate_TD_14981_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14102(Table &tbl_SerializeFromObject_TD_15566_input, Table &tbl_Filter_TD_14102_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15566_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 3);
        if (((1) && (1)) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 0);
            tbl_Filter_TD_14102_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 1);
            tbl_Filter_TD_14102_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 2);
            tbl_Filter_TD_14102_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15566_input.getInt32(i, 3);
            tbl_Filter_TD_14102_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14102_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14102_output #Row: " << tbl_Filter_TD_14102_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14419_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_14419_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14419_key> {
    std::size_t operator() (const SW_Aggregate_TD_14419_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_14419_payload {
};
void SW_Aggregate_TD_14419(Table &tbl_JOIN_LEFTSEMI_TD_1528_output, Table &tbl_Aggregate_TD_14419_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_14419_key, SW_Aggregate_TD_14419_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_1528_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_JOIN_LEFTSEMI_TD_1528_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_JOIN_LEFTSEMI_TD_1528_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_JOIN_LEFTSEMI_TD_1528_output.getInt32(i, 2);
        SW_Aggregate_TD_14419_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_14419_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14419_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_14419_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_14419_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_14419_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14419_output #Row: " << tbl_Aggregate_TD_14419_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14555(Table &tbl_SerializeFromObject_TD_15684_input, Table &tbl_Filter_TD_14555_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15684_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 3);
        if (((1) && (1)) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 0);
            tbl_Filter_TD_14555_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 1);
            tbl_Filter_TD_14555_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 2);
            tbl_Filter_TD_14555_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15684_input.getInt32(i, 3);
            tbl_Filter_TD_14555_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14555_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14555_output #Row: " << tbl_Filter_TD_14555_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14533_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_14533_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14533_key> {
    std::size_t operator() (const SW_Aggregate_TD_14533_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_14533_payload {
};
void SW_Aggregate_TD_14533(Table &tbl_JOIN_LEFTSEMI_TD_1569_output, Table &tbl_Aggregate_TD_14533_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_14533_key, SW_Aggregate_TD_14533_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_1569_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_JOIN_LEFTSEMI_TD_1569_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_JOIN_LEFTSEMI_TD_1569_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_JOIN_LEFTSEMI_TD_1569_output.getInt32(i, 2);
        SW_Aggregate_TD_14533_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_14533_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14533_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_14533_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_14533_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_14533_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14533_output #Row: " << tbl_Aggregate_TD_14533_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14419(Table &tbl_SerializeFromObject_TD_15527_input, Table &tbl_Filter_TD_14419_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15527_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 3);
        if (((1) && (1)) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 0);
            tbl_Filter_TD_14419_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 1);
            tbl_Filter_TD_14419_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 2);
            tbl_Filter_TD_14419_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15527_input.getInt32(i, 3);
            tbl_Filter_TD_14419_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14419_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14419_output #Row: " << tbl_Filter_TD_14419_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14993_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_14993_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14993_key> {
    std::size_t operator() (const SW_Aggregate_TD_14993_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_14993_payload {
};
void SW_Aggregate_TD_14993(Table &tbl_JOIN_LEFTSEMI_TD_15984_output, Table &tbl_Aggregate_TD_14993_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_14993_key, SW_Aggregate_TD_14993_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15984_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_JOIN_LEFTSEMI_TD_15984_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_JOIN_LEFTSEMI_TD_15984_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_JOIN_LEFTSEMI_TD_15984_output.getInt32(i, 2);
        SW_Aggregate_TD_14993_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_14993_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14993_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_14993_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_14993_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_14993_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14993_output #Row: " << tbl_Aggregate_TD_14993_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14391(Table &tbl_SerializeFromObject_TD_15622_input, Table &tbl_Filter_TD_14391_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15622_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 3);
        if (((1) && (1)) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 0);
            tbl_Filter_TD_14391_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 1);
            tbl_Filter_TD_14391_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 2);
            tbl_Filter_TD_14391_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15622_input.getInt32(i, 3);
            tbl_Filter_TD_14391_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14391_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14391_output #Row: " << tbl_Filter_TD_14391_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14413_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_14413_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14413_key> {
    std::size_t operator() (const SW_Aggregate_TD_14413_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_14413_payload {
};
void SW_Aggregate_TD_14413(Table &tbl_JOIN_LEFTSEMI_TD_15737_output, Table &tbl_Aggregate_TD_14413_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_14413_key, SW_Aggregate_TD_14413_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15737_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_JOIN_LEFTSEMI_TD_15737_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_JOIN_LEFTSEMI_TD_15737_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_JOIN_LEFTSEMI_TD_15737_output.getInt32(i, 2);
        SW_Aggregate_TD_14413_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_14413_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14413_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_14413_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_14413_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_14413_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14413_output #Row: " << tbl_Aggregate_TD_14413_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14893(Table &tbl_SerializeFromObject_TD_15375_input, Table &tbl_Filter_TD_14893_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15375_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 3);
        if (((1) && (1)) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 0);
            tbl_Filter_TD_14893_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 1);
            tbl_Filter_TD_14893_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 2);
            tbl_Filter_TD_14893_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15375_input.getInt32(i, 3);
            tbl_Filter_TD_14893_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14893_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14893_output #Row: " << tbl_Filter_TD_14893_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14208_key {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_Aggregate_TD_14208_key& other) const { return (_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14208_key> {
    std::size_t operator() (const SW_Aggregate_TD_14208_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_Aggregate_TD_14208_payload {
};
void SW_Aggregate_TD_14208(Table &tbl_JOIN_LEFTSEMI_TD_1525_output, Table &tbl_Aggregate_TD_14208_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Input: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    std::unordered_map<SW_Aggregate_TD_14208_key, SW_Aggregate_TD_14208_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_1525_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id3559 = tbl_JOIN_LEFTSEMI_TD_1525_output.getInt32(i, 0);
        int32_t _class_id3560 = tbl_JOIN_LEFTSEMI_TD_1525_output.getInt32(i, 1);
        int32_t _category_id3561 = tbl_JOIN_LEFTSEMI_TD_1525_output.getInt32(i, 2);
        SW_Aggregate_TD_14208_key k{_brand_id3559, _class_id3560, _category_id3561};
        SW_Aggregate_TD_14208_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14208_output.setInt32(r, 0, (it.first)._brand_id3559);
        tbl_Aggregate_TD_14208_output.setInt32(r, 1, (it.first)._class_id3560);
        tbl_Aggregate_TD_14208_output.setInt32(r, 2, (it.first)._category_id3561);
        ++r;
    }
    tbl_Aggregate_TD_14208_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14208_output #Row: " << tbl_Aggregate_TD_14208_output.getNumRow() << std::endl;
}

void SW_Filter_TD_149(Table &tbl_SerializeFromObject_TD_15152_input, Table &tbl_Filter_TD_149_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15152_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 3);
        if (((1) && (1)) && (1)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 0);
            tbl_Filter_TD_149_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 1);
            tbl_Filter_TD_149_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 2);
            tbl_Filter_TD_149_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15152_input.getInt32(i, 3);
            tbl_Filter_TD_149_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_149_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_149_output #Row: " << tbl_Filter_TD_149_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13498_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13498_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13498_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13498_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13498_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13498_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13498_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13498_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13498_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13498_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13498(Table &tbl_Filter_TD_14102_output, Table &tbl_Aggregate_TD_14981_output, Table &tbl_JOIN_INNER_TD_13498_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14102_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14981_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13498_key_leftMajor, SW_JOIN_INNER_TD_13498_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14102_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14102_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14102_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14102_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13498_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14102_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14102_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14102_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14102_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13498_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14981_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14981_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14981_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14981_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13498_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14981_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14981_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14981_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13498_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13498_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13498_key_rightMajor, SW_JOIN_INNER_TD_13498_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14981_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14981_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14981_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14981_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13498_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14981_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14981_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14981_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13498_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14102_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14102_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14102_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14102_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13498_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14102_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14102_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14102_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14102_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13498_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13498_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13498_output #Row: " << tbl_JOIN_INNER_TD_13498_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13488_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13488_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13488_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13488_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13488_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13488_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13488_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13488_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13488_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13488_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13488(Table &tbl_Filter_TD_14555_output, Table &tbl_Aggregate_TD_14419_output, Table &tbl_JOIN_INNER_TD_13488_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14555_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14419_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13488_key_leftMajor, SW_JOIN_INNER_TD_13488_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14555_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14555_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14555_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14555_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13488_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14555_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14555_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14555_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14555_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13488_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14419_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14419_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14419_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14419_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13488_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14419_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14419_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14419_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13488_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13488_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13488_key_rightMajor, SW_JOIN_INNER_TD_13488_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14419_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14419_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14419_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14419_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13488_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14419_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14419_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14419_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13488_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14555_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14555_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14555_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14555_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13488_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14555_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14555_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14555_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14555_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13488_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13488_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13488_output #Row: " << tbl_JOIN_INNER_TD_13488_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13804_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13804_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13804_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13804_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13804_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13804_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13804_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13804_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13804_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13804_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13804(Table &tbl_Filter_TD_14419_output, Table &tbl_Aggregate_TD_14533_output, Table &tbl_JOIN_INNER_TD_13804_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14419_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14533_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13804_key_leftMajor, SW_JOIN_INNER_TD_13804_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14419_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14419_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14419_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14419_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13804_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14419_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14419_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14419_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14419_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13804_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14533_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14533_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14533_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14533_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13804_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14533_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14533_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14533_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13804_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13804_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13804_key_rightMajor, SW_JOIN_INNER_TD_13804_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14533_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14533_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14533_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14533_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13804_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14533_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14533_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14533_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13804_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14419_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14419_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14419_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14419_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13804_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14419_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14419_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14419_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14419_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13804_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13804_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13804_output #Row: " << tbl_JOIN_INNER_TD_13804_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13246_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13246_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13246_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13246_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13246_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13246_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13246_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13246_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13246_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13246_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13246(Table &tbl_Filter_TD_14391_output, Table &tbl_Aggregate_TD_14993_output, Table &tbl_JOIN_INNER_TD_13246_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14391_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14993_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13246_key_leftMajor, SW_JOIN_INNER_TD_13246_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14391_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14391_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14391_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14391_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13246_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14391_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14391_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14391_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14391_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13246_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14993_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14993_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14993_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14993_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13246_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14993_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14993_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14993_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13246_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13246_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13246_key_rightMajor, SW_JOIN_INNER_TD_13246_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14993_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14993_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14993_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14993_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13246_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14993_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14993_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14993_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13246_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14391_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14391_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14391_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14391_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13246_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14391_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14391_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14391_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14391_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13246_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13246_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13246_output #Row: " << tbl_JOIN_INNER_TD_13246_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13959_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13959_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13959_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13959_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13959_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13959_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13959_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13959_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13959_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13959_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13959(Table &tbl_Filter_TD_14893_output, Table &tbl_Aggregate_TD_14413_output, Table &tbl_JOIN_INNER_TD_13959_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14893_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14413_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13959_key_leftMajor, SW_JOIN_INNER_TD_13959_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14893_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14893_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14893_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14893_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13959_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14893_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14893_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14893_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14893_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13959_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14413_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14413_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14413_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14413_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13959_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14413_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14413_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14413_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13959_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13959_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13959_key_rightMajor, SW_JOIN_INNER_TD_13959_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14413_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14413_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14413_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14413_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13959_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14413_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14413_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14413_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13959_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14893_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14893_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14893_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14893_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13959_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_14893_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14893_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14893_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14893_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13959_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13959_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13959_output #Row: " << tbl_JOIN_INNER_TD_13959_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13775_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13775_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13775_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13775_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13775_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13775_key_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
    bool operator==(const SW_JOIN_INNER_TD_13775_key_rightMajor& other) const {
        return ((_brand_id3559 == other._brand_id3559) && (_class_id3560 == other._class_id3560) && (_category_id3561 == other._category_id3561));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13775_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13775_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id3559)) + (hash<int32_t>()(k._class_id3560)) + (hash<int32_t>()(k._category_id3561));
    }
};
}
struct SW_JOIN_INNER_TD_13775_payload_rightMajor {
    int32_t _brand_id3559;
    int32_t _class_id3560;
    int32_t _category_id3561;
};
void SW_JOIN_INNER_TD_13775(Table &tbl_Filter_TD_149_output, Table &tbl_Aggregate_TD_14208_output, Table &tbl_JOIN_INNER_TD_13775_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#3559) AND (i_class_id#237 = class_id#3560)) AND (i_category_id#239 = category_id#3561)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#3559, class_id#3560, category_id#3561)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_149_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14208_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13775_key_leftMajor, SW_JOIN_INNER_TD_13775_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_149_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_149_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_149_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_149_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13775_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_149_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_149_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_149_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_149_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13775_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14208_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14208_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14208_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14208_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13775_key_leftMajor{_brand_id3559_k, _class_id3560_k, _category_id3561_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id3559 = tbl_Aggregate_TD_14208_output.getInt32(i, 0);
                int32_t _class_id3560 = tbl_Aggregate_TD_14208_output.getInt32(i, 1);
                int32_t _category_id3561 = tbl_Aggregate_TD_14208_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13775_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13775_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13775_key_rightMajor, SW_JOIN_INNER_TD_13775_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14208_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id3559_k = tbl_Aggregate_TD_14208_output.getInt32(i, 0);
            int32_t _class_id3560_k = tbl_Aggregate_TD_14208_output.getInt32(i, 1);
            int32_t _category_id3561_k = tbl_Aggregate_TD_14208_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13775_key_rightMajor keyA{_brand_id3559_k, _class_id3560_k, _category_id3561_k};
            int32_t _brand_id3559 = tbl_Aggregate_TD_14208_output.getInt32(i, 0);
            int32_t _class_id3560 = tbl_Aggregate_TD_14208_output.getInt32(i, 1);
            int32_t _category_id3561 = tbl_Aggregate_TD_14208_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13775_payload_rightMajor payloadA{_brand_id3559, _class_id3560, _category_id3561};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_149_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_149_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_149_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_149_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13775_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id3559 = (it->second)._brand_id3559;
                int32_t _class_id3560 = (it->second)._class_id3560;
                int32_t _category_id3561 = (it->second)._category_id3561;
                int32_t _i_item_sk228 = tbl_Filter_TD_149_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_149_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_149_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_149_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13775_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13775_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13775_output #Row: " << tbl_JOIN_INNER_TD_13775_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12106(Table &tbl_SerializeFromObject_TD_13687_input, Table &tbl_Filter_TD_12106_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3845) AND ((d_year#3845 >= 1999) AND (d_year#3845 <= 2001))) AND isnotnull(d_date_sk#3839)))
    // Input: ListBuffer(d_date_sk#3839, d_year#3845)
    // Output: ListBuffer(d_date_sk#3839)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13687_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3845 = tbl_SerializeFromObject_TD_13687_input.getInt32(i, 1);
        int32_t _d_date_sk3839 = tbl_SerializeFromObject_TD_13687_input.getInt32(i, 0);
        if (((1) && ((_d_year3845 >= 1999) && (_d_year3845 <= 2001))) && (1)) {
            int32_t _d_date_sk3839_t = tbl_SerializeFromObject_TD_13687_input.getInt32(i, 0);
            tbl_Filter_TD_12106_output.setInt32(r, 0, _d_date_sk3839_t);
            r++;
        }
    }
    tbl_Filter_TD_12106_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12106_output #Row: " << tbl_Filter_TD_12106_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12943(Table &tbl_SerializeFromObject_TD_13957_input, Table &tbl_Filter_TD_12943_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#3805))
    // Input: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13957_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk3805 = tbl_SerializeFromObject_TD_13957_input.getInt32(i, 0);
        if (1) {
            int32_t _ws_sold_date_sk3805_t = tbl_SerializeFromObject_TD_13957_input.getInt32(i, 0);
            tbl_Filter_TD_12943_output.setInt32(r, 0, _ws_sold_date_sk3805_t);
            int32_t _ws_quantity3823_t = tbl_SerializeFromObject_TD_13957_input.getInt32(i, 1);
            tbl_Filter_TD_12943_output.setInt32(r, 1, _ws_quantity3823_t);
            int32_t _ws_list_price3825_t = tbl_SerializeFromObject_TD_13957_input.getInt32(i, 2);
            tbl_Filter_TD_12943_output.setInt32(r, 2, _ws_list_price3825_t);
            r++;
        }
    }
    tbl_Filter_TD_12943_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12943_output #Row: " << tbl_Filter_TD_12943_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12813(Table &tbl_SerializeFromObject_TD_13557_input, Table &tbl_Filter_TD_12813_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3783) AND ((d_year#3783 >= 1999) AND (d_year#3783 <= 2001))) AND isnotnull(d_date_sk#3777)))
    // Input: ListBuffer(d_date_sk#3777, d_year#3783)
    // Output: ListBuffer(d_date_sk#3777)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13557_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3783 = tbl_SerializeFromObject_TD_13557_input.getInt32(i, 1);
        int32_t _d_date_sk3777 = tbl_SerializeFromObject_TD_13557_input.getInt32(i, 0);
        if (((1) && ((_d_year3783 >= 1999) && (_d_year3783 <= 2001))) && (1)) {
            int32_t _d_date_sk3777_t = tbl_SerializeFromObject_TD_13557_input.getInt32(i, 0);
            tbl_Filter_TD_12813_output.setInt32(r, 0, _d_date_sk3777_t);
            r++;
        }
    }
    tbl_Filter_TD_12813_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12813_output #Row: " << tbl_Filter_TD_12813_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12930(Table &tbl_SerializeFromObject_TD_13299_input, Table &tbl_Filter_TD_12930_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#3743))
    // Input: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13299_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3743 = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 0);
        if (1) {
            int32_t _cs_sold_date_sk3743_t = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 0);
            tbl_Filter_TD_12930_output.setInt32(r, 0, _cs_sold_date_sk3743_t);
            int32_t _cs_quantity3761_t = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 1);
            tbl_Filter_TD_12930_output.setInt32(r, 1, _cs_quantity3761_t);
            int32_t _cs_list_price3763_t = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 2);
            tbl_Filter_TD_12930_output.setInt32(r, 2, _cs_list_price3763_t);
            r++;
        }
    }
    tbl_Filter_TD_12930_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12930_output #Row: " << tbl_Filter_TD_12930_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1224(Table &tbl_SerializeFromObject_TD_13703_input, Table &tbl_Filter_TD_1224_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3721) AND ((d_year#3721 >= 1999) AND (d_year#3721 <= 2001))) AND isnotnull(d_date_sk#3715)))
    // Input: ListBuffer(d_date_sk#3715, d_year#3721)
    // Output: ListBuffer(d_date_sk#3715)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13703_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3721 = tbl_SerializeFromObject_TD_13703_input.getInt32(i, 1);
        int32_t _d_date_sk3715 = tbl_SerializeFromObject_TD_13703_input.getInt32(i, 0);
        if (((1) && ((_d_year3721 >= 1999) && (_d_year3721 <= 2001))) && (1)) {
            int32_t _d_date_sk3715_t = tbl_SerializeFromObject_TD_13703_input.getInt32(i, 0);
            tbl_Filter_TD_1224_output.setInt32(r, 0, _d_date_sk3715_t);
            r++;
        }
    }
    tbl_Filter_TD_1224_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1224_output #Row: " << tbl_Filter_TD_1224_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12778(Table &tbl_SerializeFromObject_TD_13967_input, Table &tbl_Filter_TD_12778_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#3692))
    // Input: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13967_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3692 = tbl_SerializeFromObject_TD_13967_input.getInt32(i, 0);
        if (1) {
            int32_t _ss_sold_date_sk3692_t = tbl_SerializeFromObject_TD_13967_input.getInt32(i, 0);
            tbl_Filter_TD_12778_output.setInt32(r, 0, _ss_sold_date_sk3692_t);
            int32_t _ss_quantity3702_t = tbl_SerializeFromObject_TD_13967_input.getInt32(i, 1);
            tbl_Filter_TD_12778_output.setInt32(r, 1, _ss_quantity3702_t);
            int32_t _ss_list_price3704_t = tbl_SerializeFromObject_TD_13967_input.getInt32(i, 2);
            tbl_Filter_TD_12778_output.setInt32(r, 2, _ss_list_price3704_t);
            r++;
        }
    }
    tbl_Filter_TD_12778_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12778_output #Row: " << tbl_Filter_TD_12778_output.getNumRow() << std::endl;
}

void SW_Project_TD_12309(Table &tbl_JOIN_INNER_TD_13498_output, Table &tbl_Project_TD_12309_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13498_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13498_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12309_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12309_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12309_output #Row: " << tbl_Project_TD_12309_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12493(Table &tbl_SerializeFromObject_TD_1375_input, Table &tbl_Filter_TD_12493_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#4058))
    // Input: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Output: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1375_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk4058 = tbl_SerializeFromObject_TD_1375_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk4058_t = tbl_SerializeFromObject_TD_1375_input.getInt32(i, 0);
            tbl_Filter_TD_12493_output.setInt32(r, 0, _i_item_sk4058_t);
            int32_t _i_brand_id4065_t = tbl_SerializeFromObject_TD_1375_input.getInt32(i, 1);
            tbl_Filter_TD_12493_output.setInt32(r, 1, _i_brand_id4065_t);
            int32_t _i_class_id4067_t = tbl_SerializeFromObject_TD_1375_input.getInt32(i, 2);
            tbl_Filter_TD_12493_output.setInt32(r, 2, _i_class_id4067_t);
            int32_t _i_category_id4069_t = tbl_SerializeFromObject_TD_1375_input.getInt32(i, 3);
            tbl_Filter_TD_12493_output.setInt32(r, 3, _i_category_id4069_t);
            r++;
        }
    }
    tbl_Filter_TD_12493_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12493_output #Row: " << tbl_Filter_TD_12493_output.getNumRow() << std::endl;
}

void SW_Project_TD_12573(Table &tbl_JOIN_INNER_TD_13488_output, Table &tbl_Project_TD_12573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13488_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13488_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12573_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12573_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12573_output #Row: " << tbl_Project_TD_12573_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12571(Table &tbl_SerializeFromObject_TD_13682_input, Table &tbl_Filter_TD_12571_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#4027) AND isnotnull(ws_sold_date_sk#4024)))
    // Input: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    // Output: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13682_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk4027 = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk4024 = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ws_sold_date_sk4024_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 0);
            tbl_Filter_TD_12571_output.setInt32(r, 0, _ws_sold_date_sk4024_t);
            int32_t _ws_item_sk4027_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 1);
            tbl_Filter_TD_12571_output.setInt32(r, 1, _ws_item_sk4027_t);
            int32_t _ws_quantity4042_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 2);
            tbl_Filter_TD_12571_output.setInt32(r, 2, _ws_quantity4042_t);
            int32_t _ws_list_price4044_t = tbl_SerializeFromObject_TD_13682_input.getInt32(i, 3);
            tbl_Filter_TD_12571_output.setInt32(r, 3, _ws_list_price4044_t);
            r++;
        }
    }
    tbl_Filter_TD_12571_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12571_output #Row: " << tbl_Filter_TD_12571_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12105(Table &tbl_SerializeFromObject_TD_13108_input, Table &tbl_Filter_TD_12105_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3845) AND ((d_year#3845 >= 1999) AND (d_year#3845 <= 2001))) AND isnotnull(d_date_sk#3839)))
    // Input: ListBuffer(d_date_sk#3839, d_year#3845)
    // Output: ListBuffer(d_date_sk#3839)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13108_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3845 = tbl_SerializeFromObject_TD_13108_input.getInt32(i, 1);
        int32_t _d_date_sk3839 = tbl_SerializeFromObject_TD_13108_input.getInt32(i, 0);
        if (((1) && ((_d_year3845 >= 1999) && (_d_year3845 <= 2001))) && (1)) {
            int32_t _d_date_sk3839_t = tbl_SerializeFromObject_TD_13108_input.getInt32(i, 0);
            tbl_Filter_TD_12105_output.setInt32(r, 0, _d_date_sk3839_t);
            r++;
        }
    }
    tbl_Filter_TD_12105_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12105_output #Row: " << tbl_Filter_TD_12105_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12852(Table &tbl_SerializeFromObject_TD_1342_input, Table &tbl_Filter_TD_12852_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#3805))
    // Input: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1342_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk3805 = tbl_SerializeFromObject_TD_1342_input.getInt32(i, 0);
        if (1) {
            int32_t _ws_sold_date_sk3805_t = tbl_SerializeFromObject_TD_1342_input.getInt32(i, 0);
            tbl_Filter_TD_12852_output.setInt32(r, 0, _ws_sold_date_sk3805_t);
            int32_t _ws_quantity3823_t = tbl_SerializeFromObject_TD_1342_input.getInt32(i, 1);
            tbl_Filter_TD_12852_output.setInt32(r, 1, _ws_quantity3823_t);
            int32_t _ws_list_price3825_t = tbl_SerializeFromObject_TD_1342_input.getInt32(i, 2);
            tbl_Filter_TD_12852_output.setInt32(r, 2, _ws_list_price3825_t);
            r++;
        }
    }
    tbl_Filter_TD_12852_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12852_output #Row: " << tbl_Filter_TD_12852_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1255(Table &tbl_SerializeFromObject_TD_138_input, Table &tbl_Filter_TD_1255_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3783) AND ((d_year#3783 >= 1999) AND (d_year#3783 <= 2001))) AND isnotnull(d_date_sk#3777)))
    // Input: ListBuffer(d_date_sk#3777, d_year#3783)
    // Output: ListBuffer(d_date_sk#3777)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_138_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3783 = tbl_SerializeFromObject_TD_138_input.getInt32(i, 1);
        int32_t _d_date_sk3777 = tbl_SerializeFromObject_TD_138_input.getInt32(i, 0);
        if (((1) && ((_d_year3783 >= 1999) && (_d_year3783 <= 2001))) && (1)) {
            int32_t _d_date_sk3777_t = tbl_SerializeFromObject_TD_138_input.getInt32(i, 0);
            tbl_Filter_TD_1255_output.setInt32(r, 0, _d_date_sk3777_t);
            r++;
        }
    }
    tbl_Filter_TD_1255_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1255_output #Row: " << tbl_Filter_TD_1255_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1246(Table &tbl_SerializeFromObject_TD_13787_input, Table &tbl_Filter_TD_1246_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#3743))
    // Input: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13787_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3743 = tbl_SerializeFromObject_TD_13787_input.getInt32(i, 0);
        if (1) {
            int32_t _cs_sold_date_sk3743_t = tbl_SerializeFromObject_TD_13787_input.getInt32(i, 0);
            tbl_Filter_TD_1246_output.setInt32(r, 0, _cs_sold_date_sk3743_t);
            int32_t _cs_quantity3761_t = tbl_SerializeFromObject_TD_13787_input.getInt32(i, 1);
            tbl_Filter_TD_1246_output.setInt32(r, 1, _cs_quantity3761_t);
            int32_t _cs_list_price3763_t = tbl_SerializeFromObject_TD_13787_input.getInt32(i, 2);
            tbl_Filter_TD_1246_output.setInt32(r, 2, _cs_list_price3763_t);
            r++;
        }
    }
    tbl_Filter_TD_1246_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1246_output #Row: " << tbl_Filter_TD_1246_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12288(Table &tbl_SerializeFromObject_TD_13295_input, Table &tbl_Filter_TD_12288_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3721) AND ((d_year#3721 >= 1999) AND (d_year#3721 <= 2001))) AND isnotnull(d_date_sk#3715)))
    // Input: ListBuffer(d_date_sk#3715, d_year#3721)
    // Output: ListBuffer(d_date_sk#3715)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13295_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3721 = tbl_SerializeFromObject_TD_13295_input.getInt32(i, 1);
        int32_t _d_date_sk3715 = tbl_SerializeFromObject_TD_13295_input.getInt32(i, 0);
        if (((1) && ((_d_year3721 >= 1999) && (_d_year3721 <= 2001))) && (1)) {
            int32_t _d_date_sk3715_t = tbl_SerializeFromObject_TD_13295_input.getInt32(i, 0);
            tbl_Filter_TD_12288_output.setInt32(r, 0, _d_date_sk3715_t);
            r++;
        }
    }
    tbl_Filter_TD_12288_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12288_output #Row: " << tbl_Filter_TD_12288_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12208(Table &tbl_SerializeFromObject_TD_13340_input, Table &tbl_Filter_TD_12208_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#3692))
    // Input: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13340_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3692 = tbl_SerializeFromObject_TD_13340_input.getInt32(i, 0);
        if (1) {
            int32_t _ss_sold_date_sk3692_t = tbl_SerializeFromObject_TD_13340_input.getInt32(i, 0);
            tbl_Filter_TD_12208_output.setInt32(r, 0, _ss_sold_date_sk3692_t);
            int32_t _ss_quantity3702_t = tbl_SerializeFromObject_TD_13340_input.getInt32(i, 1);
            tbl_Filter_TD_12208_output.setInt32(r, 1, _ss_quantity3702_t);
            int32_t _ss_list_price3704_t = tbl_SerializeFromObject_TD_13340_input.getInt32(i, 2);
            tbl_Filter_TD_12208_output.setInt32(r, 2, _ss_list_price3704_t);
            r++;
        }
    }
    tbl_Filter_TD_12208_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12208_output #Row: " << tbl_Filter_TD_12208_output.getNumRow() << std::endl;
}

void SW_Project_TD_12240(Table &tbl_JOIN_INNER_TD_13804_output, Table &tbl_Project_TD_12240_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13804_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13804_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12240_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12240_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12240_output #Row: " << tbl_Project_TD_12240_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12696(Table &tbl_SerializeFromObject_TD_13881_input, Table &tbl_Filter_TD_12696_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3974))
    // Input: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Output: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13881_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3974 = tbl_SerializeFromObject_TD_13881_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3974_t = tbl_SerializeFromObject_TD_13881_input.getInt32(i, 0);
            tbl_Filter_TD_12696_output.setInt32(r, 0, _i_item_sk3974_t);
            int32_t _i_brand_id3981_t = tbl_SerializeFromObject_TD_13881_input.getInt32(i, 1);
            tbl_Filter_TD_12696_output.setInt32(r, 1, _i_brand_id3981_t);
            int32_t _i_class_id3983_t = tbl_SerializeFromObject_TD_13881_input.getInt32(i, 2);
            tbl_Filter_TD_12696_output.setInt32(r, 2, _i_class_id3983_t);
            int32_t _i_category_id3985_t = tbl_SerializeFromObject_TD_13881_input.getInt32(i, 3);
            tbl_Filter_TD_12696_output.setInt32(r, 3, _i_category_id3985_t);
            r++;
        }
    }
    tbl_Filter_TD_12696_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12696_output #Row: " << tbl_Filter_TD_12696_output.getNumRow() << std::endl;
}

void SW_Project_TD_12113(Table &tbl_JOIN_INNER_TD_13246_output, Table &tbl_Project_TD_12113_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13246_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13246_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12113_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12113_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12113_output #Row: " << tbl_Project_TD_12113_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12806(Table &tbl_SerializeFromObject_TD_1328_input, Table &tbl_Filter_TD_12806_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#3955) AND isnotnull(cs_sold_date_sk#3940)))
    // Input: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    // Output: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1328_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk3955 = tbl_SerializeFromObject_TD_1328_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk3940 = tbl_SerializeFromObject_TD_1328_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _cs_sold_date_sk3940_t = tbl_SerializeFromObject_TD_1328_input.getInt32(i, 0);
            tbl_Filter_TD_12806_output.setInt32(r, 0, _cs_sold_date_sk3940_t);
            int32_t _cs_item_sk3955_t = tbl_SerializeFromObject_TD_1328_input.getInt32(i, 1);
            tbl_Filter_TD_12806_output.setInt32(r, 1, _cs_item_sk3955_t);
            int32_t _cs_quantity3958_t = tbl_SerializeFromObject_TD_1328_input.getInt32(i, 2);
            tbl_Filter_TD_12806_output.setInt32(r, 2, _cs_quantity3958_t);
            int32_t _cs_list_price3960_t = tbl_SerializeFromObject_TD_1328_input.getInt32(i, 3);
            tbl_Filter_TD_12806_output.setInt32(r, 3, _cs_list_price3960_t);
            r++;
        }
    }
    tbl_Filter_TD_12806_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12806_output #Row: " << tbl_Filter_TD_12806_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12431(Table &tbl_SerializeFromObject_TD_13815_input, Table &tbl_Filter_TD_12431_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3845) AND ((d_year#3845 >= 1999) AND (d_year#3845 <= 2001))) AND isnotnull(d_date_sk#3839)))
    // Input: ListBuffer(d_date_sk#3839, d_year#3845)
    // Output: ListBuffer(d_date_sk#3839)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13815_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3845 = tbl_SerializeFromObject_TD_13815_input.getInt32(i, 1);
        int32_t _d_date_sk3839 = tbl_SerializeFromObject_TD_13815_input.getInt32(i, 0);
        if (((1) && ((_d_year3845 >= 1999) && (_d_year3845 <= 2001))) && (1)) {
            int32_t _d_date_sk3839_t = tbl_SerializeFromObject_TD_13815_input.getInt32(i, 0);
            tbl_Filter_TD_12431_output.setInt32(r, 0, _d_date_sk3839_t);
            r++;
        }
    }
    tbl_Filter_TD_12431_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12431_output #Row: " << tbl_Filter_TD_12431_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12738(Table &tbl_SerializeFromObject_TD_13181_input, Table &tbl_Filter_TD_12738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#3805))
    // Input: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13181_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk3805 = tbl_SerializeFromObject_TD_13181_input.getInt32(i, 0);
        if (1) {
            int32_t _ws_sold_date_sk3805_t = tbl_SerializeFromObject_TD_13181_input.getInt32(i, 0);
            tbl_Filter_TD_12738_output.setInt32(r, 0, _ws_sold_date_sk3805_t);
            int32_t _ws_quantity3823_t = tbl_SerializeFromObject_TD_13181_input.getInt32(i, 1);
            tbl_Filter_TD_12738_output.setInt32(r, 1, _ws_quantity3823_t);
            int32_t _ws_list_price3825_t = tbl_SerializeFromObject_TD_13181_input.getInt32(i, 2);
            tbl_Filter_TD_12738_output.setInt32(r, 2, _ws_list_price3825_t);
            r++;
        }
    }
    tbl_Filter_TD_12738_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12738_output #Row: " << tbl_Filter_TD_12738_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12284(Table &tbl_SerializeFromObject_TD_13495_input, Table &tbl_Filter_TD_12284_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3783) AND ((d_year#3783 >= 1999) AND (d_year#3783 <= 2001))) AND isnotnull(d_date_sk#3777)))
    // Input: ListBuffer(d_date_sk#3777, d_year#3783)
    // Output: ListBuffer(d_date_sk#3777)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13495_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3783 = tbl_SerializeFromObject_TD_13495_input.getInt32(i, 1);
        int32_t _d_date_sk3777 = tbl_SerializeFromObject_TD_13495_input.getInt32(i, 0);
        if (((1) && ((_d_year3783 >= 1999) && (_d_year3783 <= 2001))) && (1)) {
            int32_t _d_date_sk3777_t = tbl_SerializeFromObject_TD_13495_input.getInt32(i, 0);
            tbl_Filter_TD_12284_output.setInt32(r, 0, _d_date_sk3777_t);
            r++;
        }
    }
    tbl_Filter_TD_12284_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12284_output #Row: " << tbl_Filter_TD_12284_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12854(Table &tbl_SerializeFromObject_TD_13885_input, Table &tbl_Filter_TD_12854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#3743))
    // Input: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13885_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk3743 = tbl_SerializeFromObject_TD_13885_input.getInt32(i, 0);
        if (1) {
            int32_t _cs_sold_date_sk3743_t = tbl_SerializeFromObject_TD_13885_input.getInt32(i, 0);
            tbl_Filter_TD_12854_output.setInt32(r, 0, _cs_sold_date_sk3743_t);
            int32_t _cs_quantity3761_t = tbl_SerializeFromObject_TD_13885_input.getInt32(i, 1);
            tbl_Filter_TD_12854_output.setInt32(r, 1, _cs_quantity3761_t);
            int32_t _cs_list_price3763_t = tbl_SerializeFromObject_TD_13885_input.getInt32(i, 2);
            tbl_Filter_TD_12854_output.setInt32(r, 2, _cs_list_price3763_t);
            r++;
        }
    }
    tbl_Filter_TD_12854_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12854_output #Row: " << tbl_Filter_TD_12854_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1238(Table &tbl_SerializeFromObject_TD_13265_input, Table &tbl_Filter_TD_1238_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#3721) AND ((d_year#3721 >= 1999) AND (d_year#3721 <= 2001))) AND isnotnull(d_date_sk#3715)))
    // Input: ListBuffer(d_date_sk#3715, d_year#3721)
    // Output: ListBuffer(d_date_sk#3715)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13265_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3721 = tbl_SerializeFromObject_TD_13265_input.getInt32(i, 1);
        int32_t _d_date_sk3715 = tbl_SerializeFromObject_TD_13265_input.getInt32(i, 0);
        if (((1) && ((_d_year3721 >= 1999) && (_d_year3721 <= 2001))) && (1)) {
            int32_t _d_date_sk3715_t = tbl_SerializeFromObject_TD_13265_input.getInt32(i, 0);
            tbl_Filter_TD_1238_output.setInt32(r, 0, _d_date_sk3715_t);
            r++;
        }
    }
    tbl_Filter_TD_1238_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1238_output #Row: " << tbl_Filter_TD_1238_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12193(Table &tbl_SerializeFromObject_TD_13751_input, Table &tbl_Filter_TD_12193_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#3692))
    // Input: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13751_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk3692 = tbl_SerializeFromObject_TD_13751_input.getInt32(i, 0);
        if (1) {
            int32_t _ss_sold_date_sk3692_t = tbl_SerializeFromObject_TD_13751_input.getInt32(i, 0);
            tbl_Filter_TD_12193_output.setInt32(r, 0, _ss_sold_date_sk3692_t);
            int32_t _ss_quantity3702_t = tbl_SerializeFromObject_TD_13751_input.getInt32(i, 1);
            tbl_Filter_TD_12193_output.setInt32(r, 1, _ss_quantity3702_t);
            int32_t _ss_list_price3704_t = tbl_SerializeFromObject_TD_13751_input.getInt32(i, 2);
            tbl_Filter_TD_12193_output.setInt32(r, 2, _ss_list_price3704_t);
            r++;
        }
    }
    tbl_Filter_TD_12193_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12193_output #Row: " << tbl_Filter_TD_12193_output.getNumRow() << std::endl;
}

void SW_Project_TD_12509(Table &tbl_JOIN_INNER_TD_13959_output, Table &tbl_Project_TD_12509_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13959_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13959_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12509_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12509_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12509_output #Row: " << tbl_Project_TD_12509_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12274(Table &tbl_SerializeFromObject_TD_13804_input, Table &tbl_Filter_TD_12274_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#3890))
    // Input: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13804_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk3890 = tbl_SerializeFromObject_TD_13804_input.getInt32(i, 0);
        if (1) {
            int32_t _i_item_sk3890_t = tbl_SerializeFromObject_TD_13804_input.getInt32(i, 0);
            tbl_Filter_TD_12274_output.setInt32(r, 0, _i_item_sk3890_t);
            int32_t _i_brand_id3897_t = tbl_SerializeFromObject_TD_13804_input.getInt32(i, 1);
            tbl_Filter_TD_12274_output.setInt32(r, 1, _i_brand_id3897_t);
            int32_t _i_class_id3899_t = tbl_SerializeFromObject_TD_13804_input.getInt32(i, 2);
            tbl_Filter_TD_12274_output.setInt32(r, 2, _i_class_id3899_t);
            int32_t _i_category_id3901_t = tbl_SerializeFromObject_TD_13804_input.getInt32(i, 3);
            tbl_Filter_TD_12274_output.setInt32(r, 3, _i_category_id3901_t);
            r++;
        }
    }
    tbl_Filter_TD_12274_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12274_output #Row: " << tbl_Filter_TD_12274_output.getNumRow() << std::endl;
}

void SW_Project_TD_12622(Table &tbl_JOIN_INNER_TD_13775_output, Table &tbl_Project_TD_12622_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#3562)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#3562)
    int nrow1 = tbl_JOIN_INNER_TD_13775_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13775_output.getInt32(i, 0);
        int32_t _ss_item_sk3562 = _i_item_sk228;
        tbl_Project_TD_12622_output.setInt32(i, 0, _ss_item_sk3562);
    }
    tbl_Project_TD_12622_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12622_output #Row: " << tbl_Project_TD_12622_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12277(Table &tbl_SerializeFromObject_TD_13527_input, Table &tbl_Filter_TD_12277_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#3869) AND isnotnull(ss_sold_date_sk#3867)))
    // Input: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    // Output: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13527_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk3869 = tbl_SerializeFromObject_TD_13527_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk3867 = tbl_SerializeFromObject_TD_13527_input.getInt32(i, 0);
        if ((1) && (1)) {
            int32_t _ss_sold_date_sk3867_t = tbl_SerializeFromObject_TD_13527_input.getInt32(i, 0);
            tbl_Filter_TD_12277_output.setInt32(r, 0, _ss_sold_date_sk3867_t);
            int32_t _ss_item_sk3869_t = tbl_SerializeFromObject_TD_13527_input.getInt32(i, 1);
            tbl_Filter_TD_12277_output.setInt32(r, 1, _ss_item_sk3869_t);
            int32_t _ss_quantity3877_t = tbl_SerializeFromObject_TD_13527_input.getInt32(i, 2);
            tbl_Filter_TD_12277_output.setInt32(r, 2, _ss_quantity3877_t);
            int32_t _ss_list_price3879_t = tbl_SerializeFromObject_TD_13527_input.getInt32(i, 3);
            tbl_Filter_TD_12277_output.setInt32(r, 3, _ss_list_price3879_t);
            r++;
        }
    }
    tbl_Filter_TD_12277_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12277_output #Row: " << tbl_Filter_TD_12277_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11340_key_leftMajor {
    int32_t _ws_sold_date_sk3805;
    bool operator==(const SW_JOIN_INNER_TD_11340_key_leftMajor& other) const {
        return ((_ws_sold_date_sk3805 == other._ws_sold_date_sk3805));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11340_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11340_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk3805));
    }
};
}
struct SW_JOIN_INNER_TD_11340_payload_leftMajor {
    int32_t _ws_sold_date_sk3805;
    int32_t _ws_quantity3823;
    int32_t _ws_list_price3825;
};
struct SW_JOIN_INNER_TD_11340_key_rightMajor {
    int32_t _d_date_sk3839;
    bool operator==(const SW_JOIN_INNER_TD_11340_key_rightMajor& other) const {
        return ((_d_date_sk3839 == other._d_date_sk3839));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11340_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11340_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3839));
    }
};
}
struct SW_JOIN_INNER_TD_11340_payload_rightMajor {
    int32_t _d_date_sk3839;
};
void SW_JOIN_INNER_TD_11340(Table &tbl_Filter_TD_12943_output, Table &tbl_Filter_TD_12106_output, Table &tbl_JOIN_INNER_TD_11340_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#3805 = d_date_sk#3839))
    // Left Table: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Right Table: ListBuffer(d_date_sk#3839)
    // Output Table: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    int left_nrow = tbl_Filter_TD_12943_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12106_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11340_key_leftMajor, SW_JOIN_INNER_TD_11340_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12943_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk3805_k = tbl_Filter_TD_12943_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11340_key_leftMajor keyA{_ws_sold_date_sk3805_k};
            int32_t _ws_sold_date_sk3805 = tbl_Filter_TD_12943_output.getInt32(i, 0);
            int32_t _ws_quantity3823 = tbl_Filter_TD_12943_output.getInt32(i, 1);
            int32_t _ws_list_price3825 = tbl_Filter_TD_12943_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11340_payload_leftMajor payloadA{_ws_sold_date_sk3805, _ws_quantity3823, _ws_list_price3825};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12106_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3839_k = tbl_Filter_TD_12106_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11340_key_leftMajor{_d_date_sk3839_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk3805 = (it->second)._ws_sold_date_sk3805;
                int32_t _ws_quantity3823 = (it->second)._ws_quantity3823;
                int32_t _ws_list_price3825 = (it->second)._ws_list_price3825;
                int32_t _d_date_sk3839 = tbl_Filter_TD_12106_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11340_output.setInt32(r, 0, _ws_quantity3823);
                tbl_JOIN_INNER_TD_11340_output.setInt32(r, 1, _ws_list_price3825);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11340_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11340_key_rightMajor, SW_JOIN_INNER_TD_11340_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12106_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3839_k = tbl_Filter_TD_12106_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11340_key_rightMajor keyA{_d_date_sk3839_k};
            int32_t _d_date_sk3839 = tbl_Filter_TD_12106_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11340_payload_rightMajor payloadA{_d_date_sk3839};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12943_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk3805_k = tbl_Filter_TD_12943_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11340_key_rightMajor{_ws_sold_date_sk3805_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3839 = (it->second)._d_date_sk3839;
                int32_t _ws_sold_date_sk3805 = tbl_Filter_TD_12943_output.getInt32(i, 0);
                int32_t _ws_quantity3823 = tbl_Filter_TD_12943_output.getInt32(i, 1);
                int32_t _ws_list_price3825 = tbl_Filter_TD_12943_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11340_output.setInt32(r, 0, _ws_quantity3823);
                tbl_JOIN_INNER_TD_11340_output.setInt32(r, 1, _ws_list_price3825);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11340_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11340_output #Row: " << tbl_JOIN_INNER_TD_11340_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11729_key_leftMajor {
    int32_t _cs_sold_date_sk3743;
    bool operator==(const SW_JOIN_INNER_TD_11729_key_leftMajor& other) const {
        return ((_cs_sold_date_sk3743 == other._cs_sold_date_sk3743));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11729_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11729_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk3743));
    }
};
}
struct SW_JOIN_INNER_TD_11729_payload_leftMajor {
    int32_t _cs_sold_date_sk3743;
    int32_t _cs_quantity3761;
    int32_t _cs_list_price3763;
};
struct SW_JOIN_INNER_TD_11729_key_rightMajor {
    int32_t _d_date_sk3777;
    bool operator==(const SW_JOIN_INNER_TD_11729_key_rightMajor& other) const {
        return ((_d_date_sk3777 == other._d_date_sk3777));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11729_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11729_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3777));
    }
};
}
struct SW_JOIN_INNER_TD_11729_payload_rightMajor {
    int32_t _d_date_sk3777;
};
void SW_JOIN_INNER_TD_11729(Table &tbl_Filter_TD_12930_output, Table &tbl_Filter_TD_12813_output, Table &tbl_JOIN_INNER_TD_11729_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#3743 = d_date_sk#3777))
    // Left Table: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Right Table: ListBuffer(d_date_sk#3777)
    // Output Table: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    int left_nrow = tbl_Filter_TD_12930_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12813_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11729_key_leftMajor, SW_JOIN_INNER_TD_11729_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12930_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk3743_k = tbl_Filter_TD_12930_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11729_key_leftMajor keyA{_cs_sold_date_sk3743_k};
            int32_t _cs_sold_date_sk3743 = tbl_Filter_TD_12930_output.getInt32(i, 0);
            int32_t _cs_quantity3761 = tbl_Filter_TD_12930_output.getInt32(i, 1);
            int32_t _cs_list_price3763 = tbl_Filter_TD_12930_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11729_payload_leftMajor payloadA{_cs_sold_date_sk3743, _cs_quantity3761, _cs_list_price3763};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12813_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3777_k = tbl_Filter_TD_12813_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11729_key_leftMajor{_d_date_sk3777_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk3743 = (it->second)._cs_sold_date_sk3743;
                int32_t _cs_quantity3761 = (it->second)._cs_quantity3761;
                int32_t _cs_list_price3763 = (it->second)._cs_list_price3763;
                int32_t _d_date_sk3777 = tbl_Filter_TD_12813_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11729_output.setInt32(r, 0, _cs_quantity3761);
                tbl_JOIN_INNER_TD_11729_output.setInt32(r, 1, _cs_list_price3763);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11729_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11729_key_rightMajor, SW_JOIN_INNER_TD_11729_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12813_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3777_k = tbl_Filter_TD_12813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11729_key_rightMajor keyA{_d_date_sk3777_k};
            int32_t _d_date_sk3777 = tbl_Filter_TD_12813_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11729_payload_rightMajor payloadA{_d_date_sk3777};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12930_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk3743_k = tbl_Filter_TD_12930_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11729_key_rightMajor{_cs_sold_date_sk3743_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3777 = (it->second)._d_date_sk3777;
                int32_t _cs_sold_date_sk3743 = tbl_Filter_TD_12930_output.getInt32(i, 0);
                int32_t _cs_quantity3761 = tbl_Filter_TD_12930_output.getInt32(i, 1);
                int32_t _cs_list_price3763 = tbl_Filter_TD_12930_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11729_output.setInt32(r, 0, _cs_quantity3761);
                tbl_JOIN_INNER_TD_11729_output.setInt32(r, 1, _cs_list_price3763);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11729_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11729_output #Row: " << tbl_JOIN_INNER_TD_11729_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11535_key_leftMajor {
    int32_t _ss_sold_date_sk3692;
    bool operator==(const SW_JOIN_INNER_TD_11535_key_leftMajor& other) const {
        return ((_ss_sold_date_sk3692 == other._ss_sold_date_sk3692));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11535_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11535_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk3692));
    }
};
}
struct SW_JOIN_INNER_TD_11535_payload_leftMajor {
    int32_t _ss_sold_date_sk3692;
    int32_t _ss_quantity3702;
    int32_t _ss_list_price3704;
};
struct SW_JOIN_INNER_TD_11535_key_rightMajor {
    int32_t _d_date_sk3715;
    bool operator==(const SW_JOIN_INNER_TD_11535_key_rightMajor& other) const {
        return ((_d_date_sk3715 == other._d_date_sk3715));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11535_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11535_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3715));
    }
};
}
struct SW_JOIN_INNER_TD_11535_payload_rightMajor {
    int32_t _d_date_sk3715;
};
void SW_JOIN_INNER_TD_11535(Table &tbl_Filter_TD_12778_output, Table &tbl_Filter_TD_1224_output, Table &tbl_JOIN_INNER_TD_11535_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#3692 = d_date_sk#3715))
    // Left Table: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Right Table: ListBuffer(d_date_sk#3715)
    // Output Table: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    int left_nrow = tbl_Filter_TD_12778_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1224_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11535_key_leftMajor, SW_JOIN_INNER_TD_11535_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12778_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk3692_k = tbl_Filter_TD_12778_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11535_key_leftMajor keyA{_ss_sold_date_sk3692_k};
            int32_t _ss_sold_date_sk3692 = tbl_Filter_TD_12778_output.getInt32(i, 0);
            int32_t _ss_quantity3702 = tbl_Filter_TD_12778_output.getInt32(i, 1);
            int32_t _ss_list_price3704 = tbl_Filter_TD_12778_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11535_payload_leftMajor payloadA{_ss_sold_date_sk3692, _ss_quantity3702, _ss_list_price3704};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1224_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3715_k = tbl_Filter_TD_1224_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11535_key_leftMajor{_d_date_sk3715_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk3692 = (it->second)._ss_sold_date_sk3692;
                int32_t _ss_quantity3702 = (it->second)._ss_quantity3702;
                int32_t _ss_list_price3704 = (it->second)._ss_list_price3704;
                int32_t _d_date_sk3715 = tbl_Filter_TD_1224_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11535_output.setInt32(r, 0, _ss_quantity3702);
                tbl_JOIN_INNER_TD_11535_output.setInt32(r, 1, _ss_list_price3704);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11535_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11535_key_rightMajor, SW_JOIN_INNER_TD_11535_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1224_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3715_k = tbl_Filter_TD_1224_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11535_key_rightMajor keyA{_d_date_sk3715_k};
            int32_t _d_date_sk3715 = tbl_Filter_TD_1224_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11535_payload_rightMajor payloadA{_d_date_sk3715};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12778_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk3692_k = tbl_Filter_TD_12778_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11535_key_rightMajor{_ss_sold_date_sk3692_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3715 = (it->second)._d_date_sk3715;
                int32_t _ss_sold_date_sk3692 = tbl_Filter_TD_12778_output.getInt32(i, 0);
                int32_t _ss_quantity3702 = tbl_Filter_TD_12778_output.getInt32(i, 1);
                int32_t _ss_list_price3704 = tbl_Filter_TD_12778_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11535_output.setInt32(r, 0, _ss_quantity3702);
                tbl_JOIN_INNER_TD_11535_output.setInt32(r, 1, _ss_list_price3704);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11535_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11535_output #Row: " << tbl_JOIN_INNER_TD_11535_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11505_key_leftMajor {
    int32_t _i_item_sk4058;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11505_key_leftMajor& other) const {
        return ((_i_item_sk4058 == other._i_item_sk4058));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11505_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11505_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4058));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11505_payload_leftMajor {
    int32_t _i_item_sk4058;
    int32_t _i_brand_id4065;
    int32_t _i_class_id4067;
    int32_t _i_category_id4069;
};
struct SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor {
    int32_t _ss_item_sk3562;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor& other) const {
        return ((_ss_item_sk3562 == other._ss_item_sk3562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3562));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11505_payload_rightMajor {
    int32_t _ss_item_sk3562;
};
void SW_JOIN_LEFTSEMI_TD_11505(Table &tbl_Filter_TD_12493_output, Table &tbl_Project_TD_12309_output, Table &tbl_JOIN_LEFTSEMI_TD_11505_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_sk#4058 = ss_item_sk#3562))
    // Left Table: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Right Table: ListBuffer(ss_item_sk#3562)
    // Output Table: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int left_nrow = tbl_Filter_TD_12493_output.getNumRow();
    int right_nrow = tbl_Project_TD_12309_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11505_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12309_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12493_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3562_k = tbl_Project_TD_12309_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor keyA{_ss_item_sk3562_k};
            int32_t _ss_item_sk3562 = tbl_Project_TD_12309_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11505_payload_rightMajor payloadA{_ss_item_sk3562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4058_k = tbl_Filter_TD_12493_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11505_key_rightMajor{_i_item_sk4058_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk4058 = tbl_Filter_TD_12493_output.getInt32(i, 0);
                int32_t _i_brand_id4065 = tbl_Filter_TD_12493_output.getInt32(i, 1);
                int32_t _i_class_id4067 = tbl_Filter_TD_12493_output.getInt32(i, 2);
                int32_t _i_category_id4069 = tbl_Filter_TD_12493_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11505_output.setInt32(r, 0, _i_item_sk4058);
                tbl_JOIN_LEFTSEMI_TD_11505_output.setInt32(r, 1, _i_brand_id4065);
                tbl_JOIN_LEFTSEMI_TD_11505_output.setInt32(r, 2, _i_class_id4067);
                tbl_JOIN_LEFTSEMI_TD_11505_output.setInt32(r, 3, _i_category_id4069);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11505_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11505_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11505_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11860_key_leftMajor {
    int32_t _ws_item_sk4027;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11860_key_leftMajor& other) const {
        return ((_ws_item_sk4027 == other._ws_item_sk4027));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11860_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11860_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk4027));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11860_payload_leftMajor {
    int32_t _ws_sold_date_sk4024;
    int32_t _ws_item_sk4027;
    int32_t _ws_quantity4042;
    int32_t _ws_list_price4044;
};
struct SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor {
    int32_t _ss_item_sk3562;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor& other) const {
        return ((_ss_item_sk3562 == other._ss_item_sk3562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3562));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11860_payload_rightMajor {
    int32_t _ss_item_sk3562;
};
void SW_JOIN_LEFTSEMI_TD_11860(Table &tbl_Filter_TD_12571_output, Table &tbl_Project_TD_12573_output, Table &tbl_JOIN_LEFTSEMI_TD_11860_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ws_item_sk#4027 = ss_item_sk#3562))
    // Left Table: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    // Right Table: ListBuffer(ss_item_sk#3562)
    // Output Table: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    int left_nrow = tbl_Filter_TD_12571_output.getNumRow();
    int right_nrow = tbl_Project_TD_12573_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11860_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12573_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12571_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3562_k = tbl_Project_TD_12573_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor keyA{_ss_item_sk3562_k};
            int32_t _ss_item_sk3562 = tbl_Project_TD_12573_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11860_payload_rightMajor payloadA{_ss_item_sk3562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk4027_k = tbl_Filter_TD_12571_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11860_key_rightMajor{_ws_item_sk4027_k});
            if (it != ht1.end()) {
                int32_t _ws_sold_date_sk4024 = tbl_Filter_TD_12571_output.getInt32(i, 0);
                int32_t _ws_item_sk4027 = tbl_Filter_TD_12571_output.getInt32(i, 1);
                int32_t _ws_quantity4042 = tbl_Filter_TD_12571_output.getInt32(i, 2);
                int32_t _ws_list_price4044 = tbl_Filter_TD_12571_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11860_output.setInt32(r, 0, _ws_sold_date_sk4024);
                tbl_JOIN_LEFTSEMI_TD_11860_output.setInt32(r, 1, _ws_item_sk4027);
                tbl_JOIN_LEFTSEMI_TD_11860_output.setInt32(r, 2, _ws_quantity4042);
                tbl_JOIN_LEFTSEMI_TD_11860_output.setInt32(r, 3, _ws_list_price4044);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11860_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11860_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11860_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11779_key_leftMajor {
    int32_t _ws_sold_date_sk3805;
    bool operator==(const SW_JOIN_INNER_TD_11779_key_leftMajor& other) const {
        return ((_ws_sold_date_sk3805 == other._ws_sold_date_sk3805));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11779_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11779_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk3805));
    }
};
}
struct SW_JOIN_INNER_TD_11779_payload_leftMajor {
    int32_t _ws_sold_date_sk3805;
    int32_t _ws_quantity3823;
    int32_t _ws_list_price3825;
};
struct SW_JOIN_INNER_TD_11779_key_rightMajor {
    int32_t _d_date_sk3839;
    bool operator==(const SW_JOIN_INNER_TD_11779_key_rightMajor& other) const {
        return ((_d_date_sk3839 == other._d_date_sk3839));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11779_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11779_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3839));
    }
};
}
struct SW_JOIN_INNER_TD_11779_payload_rightMajor {
    int32_t _d_date_sk3839;
};
void SW_JOIN_INNER_TD_11779(Table &tbl_Filter_TD_12852_output, Table &tbl_Filter_TD_12105_output, Table &tbl_JOIN_INNER_TD_11779_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#3805 = d_date_sk#3839))
    // Left Table: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Right Table: ListBuffer(d_date_sk#3839)
    // Output Table: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    int left_nrow = tbl_Filter_TD_12852_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12105_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11779_key_leftMajor, SW_JOIN_INNER_TD_11779_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12852_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk3805_k = tbl_Filter_TD_12852_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11779_key_leftMajor keyA{_ws_sold_date_sk3805_k};
            int32_t _ws_sold_date_sk3805 = tbl_Filter_TD_12852_output.getInt32(i, 0);
            int32_t _ws_quantity3823 = tbl_Filter_TD_12852_output.getInt32(i, 1);
            int32_t _ws_list_price3825 = tbl_Filter_TD_12852_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11779_payload_leftMajor payloadA{_ws_sold_date_sk3805, _ws_quantity3823, _ws_list_price3825};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12105_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3839_k = tbl_Filter_TD_12105_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11779_key_leftMajor{_d_date_sk3839_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk3805 = (it->second)._ws_sold_date_sk3805;
                int32_t _ws_quantity3823 = (it->second)._ws_quantity3823;
                int32_t _ws_list_price3825 = (it->second)._ws_list_price3825;
                int32_t _d_date_sk3839 = tbl_Filter_TD_12105_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11779_output.setInt32(r, 0, _ws_quantity3823);
                tbl_JOIN_INNER_TD_11779_output.setInt32(r, 1, _ws_list_price3825);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11779_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11779_key_rightMajor, SW_JOIN_INNER_TD_11779_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12105_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3839_k = tbl_Filter_TD_12105_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11779_key_rightMajor keyA{_d_date_sk3839_k};
            int32_t _d_date_sk3839 = tbl_Filter_TD_12105_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11779_payload_rightMajor payloadA{_d_date_sk3839};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12852_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk3805_k = tbl_Filter_TD_12852_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11779_key_rightMajor{_ws_sold_date_sk3805_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3839 = (it->second)._d_date_sk3839;
                int32_t _ws_sold_date_sk3805 = tbl_Filter_TD_12852_output.getInt32(i, 0);
                int32_t _ws_quantity3823 = tbl_Filter_TD_12852_output.getInt32(i, 1);
                int32_t _ws_list_price3825 = tbl_Filter_TD_12852_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11779_output.setInt32(r, 0, _ws_quantity3823);
                tbl_JOIN_INNER_TD_11779_output.setInt32(r, 1, _ws_list_price3825);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11779_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11779_output #Row: " << tbl_JOIN_INNER_TD_11779_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11795_key_leftMajor {
    int32_t _cs_sold_date_sk3743;
    bool operator==(const SW_JOIN_INNER_TD_11795_key_leftMajor& other) const {
        return ((_cs_sold_date_sk3743 == other._cs_sold_date_sk3743));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11795_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11795_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk3743));
    }
};
}
struct SW_JOIN_INNER_TD_11795_payload_leftMajor {
    int32_t _cs_sold_date_sk3743;
    int32_t _cs_quantity3761;
    int32_t _cs_list_price3763;
};
struct SW_JOIN_INNER_TD_11795_key_rightMajor {
    int32_t _d_date_sk3777;
    bool operator==(const SW_JOIN_INNER_TD_11795_key_rightMajor& other) const {
        return ((_d_date_sk3777 == other._d_date_sk3777));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11795_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11795_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3777));
    }
};
}
struct SW_JOIN_INNER_TD_11795_payload_rightMajor {
    int32_t _d_date_sk3777;
};
void SW_JOIN_INNER_TD_11795(Table &tbl_Filter_TD_1246_output, Table &tbl_Filter_TD_1255_output, Table &tbl_JOIN_INNER_TD_11795_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#3743 = d_date_sk#3777))
    // Left Table: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Right Table: ListBuffer(d_date_sk#3777)
    // Output Table: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    int left_nrow = tbl_Filter_TD_1246_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1255_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11795_key_leftMajor, SW_JOIN_INNER_TD_11795_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1246_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk3743_k = tbl_Filter_TD_1246_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11795_key_leftMajor keyA{_cs_sold_date_sk3743_k};
            int32_t _cs_sold_date_sk3743 = tbl_Filter_TD_1246_output.getInt32(i, 0);
            int32_t _cs_quantity3761 = tbl_Filter_TD_1246_output.getInt32(i, 1);
            int32_t _cs_list_price3763 = tbl_Filter_TD_1246_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11795_payload_leftMajor payloadA{_cs_sold_date_sk3743, _cs_quantity3761, _cs_list_price3763};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1255_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3777_k = tbl_Filter_TD_1255_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11795_key_leftMajor{_d_date_sk3777_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk3743 = (it->second)._cs_sold_date_sk3743;
                int32_t _cs_quantity3761 = (it->second)._cs_quantity3761;
                int32_t _cs_list_price3763 = (it->second)._cs_list_price3763;
                int32_t _d_date_sk3777 = tbl_Filter_TD_1255_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11795_output.setInt32(r, 0, _cs_quantity3761);
                tbl_JOIN_INNER_TD_11795_output.setInt32(r, 1, _cs_list_price3763);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11795_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11795_key_rightMajor, SW_JOIN_INNER_TD_11795_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1255_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3777_k = tbl_Filter_TD_1255_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11795_key_rightMajor keyA{_d_date_sk3777_k};
            int32_t _d_date_sk3777 = tbl_Filter_TD_1255_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11795_payload_rightMajor payloadA{_d_date_sk3777};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1246_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk3743_k = tbl_Filter_TD_1246_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11795_key_rightMajor{_cs_sold_date_sk3743_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3777 = (it->second)._d_date_sk3777;
                int32_t _cs_sold_date_sk3743 = tbl_Filter_TD_1246_output.getInt32(i, 0);
                int32_t _cs_quantity3761 = tbl_Filter_TD_1246_output.getInt32(i, 1);
                int32_t _cs_list_price3763 = tbl_Filter_TD_1246_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11795_output.setInt32(r, 0, _cs_quantity3761);
                tbl_JOIN_INNER_TD_11795_output.setInt32(r, 1, _cs_list_price3763);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11795_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11795_output #Row: " << tbl_JOIN_INNER_TD_11795_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11983_key_leftMajor {
    int32_t _ss_sold_date_sk3692;
    bool operator==(const SW_JOIN_INNER_TD_11983_key_leftMajor& other) const {
        return ((_ss_sold_date_sk3692 == other._ss_sold_date_sk3692));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11983_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11983_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk3692));
    }
};
}
struct SW_JOIN_INNER_TD_11983_payload_leftMajor {
    int32_t _ss_sold_date_sk3692;
    int32_t _ss_quantity3702;
    int32_t _ss_list_price3704;
};
struct SW_JOIN_INNER_TD_11983_key_rightMajor {
    int32_t _d_date_sk3715;
    bool operator==(const SW_JOIN_INNER_TD_11983_key_rightMajor& other) const {
        return ((_d_date_sk3715 == other._d_date_sk3715));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11983_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11983_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3715));
    }
};
}
struct SW_JOIN_INNER_TD_11983_payload_rightMajor {
    int32_t _d_date_sk3715;
};
void SW_JOIN_INNER_TD_11983(Table &tbl_Filter_TD_12208_output, Table &tbl_Filter_TD_12288_output, Table &tbl_JOIN_INNER_TD_11983_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#3692 = d_date_sk#3715))
    // Left Table: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Right Table: ListBuffer(d_date_sk#3715)
    // Output Table: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    int left_nrow = tbl_Filter_TD_12208_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12288_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11983_key_leftMajor, SW_JOIN_INNER_TD_11983_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12208_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk3692_k = tbl_Filter_TD_12208_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11983_key_leftMajor keyA{_ss_sold_date_sk3692_k};
            int32_t _ss_sold_date_sk3692 = tbl_Filter_TD_12208_output.getInt32(i, 0);
            int32_t _ss_quantity3702 = tbl_Filter_TD_12208_output.getInt32(i, 1);
            int32_t _ss_list_price3704 = tbl_Filter_TD_12208_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11983_payload_leftMajor payloadA{_ss_sold_date_sk3692, _ss_quantity3702, _ss_list_price3704};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12288_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3715_k = tbl_Filter_TD_12288_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11983_key_leftMajor{_d_date_sk3715_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk3692 = (it->second)._ss_sold_date_sk3692;
                int32_t _ss_quantity3702 = (it->second)._ss_quantity3702;
                int32_t _ss_list_price3704 = (it->second)._ss_list_price3704;
                int32_t _d_date_sk3715 = tbl_Filter_TD_12288_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11983_output.setInt32(r, 0, _ss_quantity3702);
                tbl_JOIN_INNER_TD_11983_output.setInt32(r, 1, _ss_list_price3704);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11983_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11983_key_rightMajor, SW_JOIN_INNER_TD_11983_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12288_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3715_k = tbl_Filter_TD_12288_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11983_key_rightMajor keyA{_d_date_sk3715_k};
            int32_t _d_date_sk3715 = tbl_Filter_TD_12288_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11983_payload_rightMajor payloadA{_d_date_sk3715};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12208_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk3692_k = tbl_Filter_TD_12208_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11983_key_rightMajor{_ss_sold_date_sk3692_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3715 = (it->second)._d_date_sk3715;
                int32_t _ss_sold_date_sk3692 = tbl_Filter_TD_12208_output.getInt32(i, 0);
                int32_t _ss_quantity3702 = tbl_Filter_TD_12208_output.getInt32(i, 1);
                int32_t _ss_list_price3704 = tbl_Filter_TD_12208_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11983_output.setInt32(r, 0, _ss_quantity3702);
                tbl_JOIN_INNER_TD_11983_output.setInt32(r, 1, _ss_list_price3704);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11983_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11983_output #Row: " << tbl_JOIN_INNER_TD_11983_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11458_key_leftMajor {
    int32_t _i_item_sk3974;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11458_key_leftMajor& other) const {
        return ((_i_item_sk3974 == other._i_item_sk3974));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11458_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11458_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3974));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11458_payload_leftMajor {
    int32_t _i_item_sk3974;
    int32_t _i_brand_id3981;
    int32_t _i_class_id3983;
    int32_t _i_category_id3985;
};
struct SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor {
    int32_t _ss_item_sk3562;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor& other) const {
        return ((_ss_item_sk3562 == other._ss_item_sk3562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3562));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11458_payload_rightMajor {
    int32_t _ss_item_sk3562;
};
void SW_JOIN_LEFTSEMI_TD_11458(Table &tbl_Filter_TD_12696_output, Table &tbl_Project_TD_12240_output, Table &tbl_JOIN_LEFTSEMI_TD_11458_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_sk#3974 = ss_item_sk#3562))
    // Left Table: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Right Table: ListBuffer(ss_item_sk#3562)
    // Output Table: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int left_nrow = tbl_Filter_TD_12696_output.getNumRow();
    int right_nrow = tbl_Project_TD_12240_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11458_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12240_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12696_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3562_k = tbl_Project_TD_12240_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor keyA{_ss_item_sk3562_k};
            int32_t _ss_item_sk3562 = tbl_Project_TD_12240_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11458_payload_rightMajor payloadA{_ss_item_sk3562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3974_k = tbl_Filter_TD_12696_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11458_key_rightMajor{_i_item_sk3974_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3974 = tbl_Filter_TD_12696_output.getInt32(i, 0);
                int32_t _i_brand_id3981 = tbl_Filter_TD_12696_output.getInt32(i, 1);
                int32_t _i_class_id3983 = tbl_Filter_TD_12696_output.getInt32(i, 2);
                int32_t _i_category_id3985 = tbl_Filter_TD_12696_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11458_output.setInt32(r, 0, _i_item_sk3974);
                tbl_JOIN_LEFTSEMI_TD_11458_output.setInt32(r, 1, _i_brand_id3981);
                tbl_JOIN_LEFTSEMI_TD_11458_output.setInt32(r, 2, _i_class_id3983);
                tbl_JOIN_LEFTSEMI_TD_11458_output.setInt32(r, 3, _i_category_id3985);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11458_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11458_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11458_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11312_key_leftMajor {
    int32_t _cs_item_sk3955;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11312_key_leftMajor& other) const {
        return ((_cs_item_sk3955 == other._cs_item_sk3955));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11312_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11312_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk3955));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11312_payload_leftMajor {
    int32_t _cs_sold_date_sk3940;
    int32_t _cs_item_sk3955;
    int32_t _cs_quantity3958;
    int32_t _cs_list_price3960;
};
struct SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor {
    int32_t _ss_item_sk3562;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor& other) const {
        return ((_ss_item_sk3562 == other._ss_item_sk3562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3562));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11312_payload_rightMajor {
    int32_t _ss_item_sk3562;
};
void SW_JOIN_LEFTSEMI_TD_11312(Table &tbl_Filter_TD_12806_output, Table &tbl_Project_TD_12113_output, Table &tbl_JOIN_LEFTSEMI_TD_11312_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cs_item_sk#3955 = ss_item_sk#3562))
    // Left Table: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    // Right Table: ListBuffer(ss_item_sk#3562)
    // Output Table: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    int left_nrow = tbl_Filter_TD_12806_output.getNumRow();
    int right_nrow = tbl_Project_TD_12113_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11312_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12113_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12806_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3562_k = tbl_Project_TD_12113_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor keyA{_ss_item_sk3562_k};
            int32_t _ss_item_sk3562 = tbl_Project_TD_12113_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11312_payload_rightMajor payloadA{_ss_item_sk3562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk3955_k = tbl_Filter_TD_12806_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11312_key_rightMajor{_cs_item_sk3955_k});
            if (it != ht1.end()) {
                int32_t _cs_sold_date_sk3940 = tbl_Filter_TD_12806_output.getInt32(i, 0);
                int32_t _cs_item_sk3955 = tbl_Filter_TD_12806_output.getInt32(i, 1);
                int32_t _cs_quantity3958 = tbl_Filter_TD_12806_output.getInt32(i, 2);
                int32_t _cs_list_price3960 = tbl_Filter_TD_12806_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11312_output.setInt32(r, 0, _cs_sold_date_sk3940);
                tbl_JOIN_LEFTSEMI_TD_11312_output.setInt32(r, 1, _cs_item_sk3955);
                tbl_JOIN_LEFTSEMI_TD_11312_output.setInt32(r, 2, _cs_quantity3958);
                tbl_JOIN_LEFTSEMI_TD_11312_output.setInt32(r, 3, _cs_list_price3960);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11312_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11312_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11312_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11233_key_leftMajor {
    int32_t _ws_sold_date_sk3805;
    bool operator==(const SW_JOIN_INNER_TD_11233_key_leftMajor& other) const {
        return ((_ws_sold_date_sk3805 == other._ws_sold_date_sk3805));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11233_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11233_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk3805));
    }
};
}
struct SW_JOIN_INNER_TD_11233_payload_leftMajor {
    int32_t _ws_sold_date_sk3805;
    int32_t _ws_quantity3823;
    int32_t _ws_list_price3825;
};
struct SW_JOIN_INNER_TD_11233_key_rightMajor {
    int32_t _d_date_sk3839;
    bool operator==(const SW_JOIN_INNER_TD_11233_key_rightMajor& other) const {
        return ((_d_date_sk3839 == other._d_date_sk3839));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11233_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11233_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3839));
    }
};
}
struct SW_JOIN_INNER_TD_11233_payload_rightMajor {
    int32_t _d_date_sk3839;
};
void SW_JOIN_INNER_TD_11233(Table &tbl_Filter_TD_12738_output, Table &tbl_Filter_TD_12431_output, Table &tbl_JOIN_INNER_TD_11233_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#3805 = d_date_sk#3839))
    // Left Table: ListBuffer(ws_sold_date_sk#3805, ws_quantity#3823, ws_list_price#3825)
    // Right Table: ListBuffer(d_date_sk#3839)
    // Output Table: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    int left_nrow = tbl_Filter_TD_12738_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12431_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11233_key_leftMajor, SW_JOIN_INNER_TD_11233_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12738_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk3805_k = tbl_Filter_TD_12738_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11233_key_leftMajor keyA{_ws_sold_date_sk3805_k};
            int32_t _ws_sold_date_sk3805 = tbl_Filter_TD_12738_output.getInt32(i, 0);
            int32_t _ws_quantity3823 = tbl_Filter_TD_12738_output.getInt32(i, 1);
            int32_t _ws_list_price3825 = tbl_Filter_TD_12738_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11233_payload_leftMajor payloadA{_ws_sold_date_sk3805, _ws_quantity3823, _ws_list_price3825};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12431_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3839_k = tbl_Filter_TD_12431_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11233_key_leftMajor{_d_date_sk3839_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk3805 = (it->second)._ws_sold_date_sk3805;
                int32_t _ws_quantity3823 = (it->second)._ws_quantity3823;
                int32_t _ws_list_price3825 = (it->second)._ws_list_price3825;
                int32_t _d_date_sk3839 = tbl_Filter_TD_12431_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 0, _ws_quantity3823);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 1, _ws_list_price3825);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11233_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11233_key_rightMajor, SW_JOIN_INNER_TD_11233_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12431_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3839_k = tbl_Filter_TD_12431_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11233_key_rightMajor keyA{_d_date_sk3839_k};
            int32_t _d_date_sk3839 = tbl_Filter_TD_12431_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11233_payload_rightMajor payloadA{_d_date_sk3839};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12738_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk3805_k = tbl_Filter_TD_12738_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11233_key_rightMajor{_ws_sold_date_sk3805_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3839 = (it->second)._d_date_sk3839;
                int32_t _ws_sold_date_sk3805 = tbl_Filter_TD_12738_output.getInt32(i, 0);
                int32_t _ws_quantity3823 = tbl_Filter_TD_12738_output.getInt32(i, 1);
                int32_t _ws_list_price3825 = tbl_Filter_TD_12738_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 0, _ws_quantity3823);
                tbl_JOIN_INNER_TD_11233_output.setInt32(r, 1, _ws_list_price3825);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11233_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11233_output #Row: " << tbl_JOIN_INNER_TD_11233_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11454_key_leftMajor {
    int32_t _cs_sold_date_sk3743;
    bool operator==(const SW_JOIN_INNER_TD_11454_key_leftMajor& other) const {
        return ((_cs_sold_date_sk3743 == other._cs_sold_date_sk3743));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11454_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11454_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk3743));
    }
};
}
struct SW_JOIN_INNER_TD_11454_payload_leftMajor {
    int32_t _cs_sold_date_sk3743;
    int32_t _cs_quantity3761;
    int32_t _cs_list_price3763;
};
struct SW_JOIN_INNER_TD_11454_key_rightMajor {
    int32_t _d_date_sk3777;
    bool operator==(const SW_JOIN_INNER_TD_11454_key_rightMajor& other) const {
        return ((_d_date_sk3777 == other._d_date_sk3777));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11454_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11454_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3777));
    }
};
}
struct SW_JOIN_INNER_TD_11454_payload_rightMajor {
    int32_t _d_date_sk3777;
};
void SW_JOIN_INNER_TD_11454(Table &tbl_Filter_TD_12854_output, Table &tbl_Filter_TD_12284_output, Table &tbl_JOIN_INNER_TD_11454_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#3743 = d_date_sk#3777))
    // Left Table: ListBuffer(cs_sold_date_sk#3743, cs_quantity#3761, cs_list_price#3763)
    // Right Table: ListBuffer(d_date_sk#3777)
    // Output Table: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    int left_nrow = tbl_Filter_TD_12854_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12284_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11454_key_leftMajor, SW_JOIN_INNER_TD_11454_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12854_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk3743_k = tbl_Filter_TD_12854_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11454_key_leftMajor keyA{_cs_sold_date_sk3743_k};
            int32_t _cs_sold_date_sk3743 = tbl_Filter_TD_12854_output.getInt32(i, 0);
            int32_t _cs_quantity3761 = tbl_Filter_TD_12854_output.getInt32(i, 1);
            int32_t _cs_list_price3763 = tbl_Filter_TD_12854_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11454_payload_leftMajor payloadA{_cs_sold_date_sk3743, _cs_quantity3761, _cs_list_price3763};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12284_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3777_k = tbl_Filter_TD_12284_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11454_key_leftMajor{_d_date_sk3777_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk3743 = (it->second)._cs_sold_date_sk3743;
                int32_t _cs_quantity3761 = (it->second)._cs_quantity3761;
                int32_t _cs_list_price3763 = (it->second)._cs_list_price3763;
                int32_t _d_date_sk3777 = tbl_Filter_TD_12284_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11454_output.setInt32(r, 0, _cs_quantity3761);
                tbl_JOIN_INNER_TD_11454_output.setInt32(r, 1, _cs_list_price3763);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11454_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11454_key_rightMajor, SW_JOIN_INNER_TD_11454_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12284_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3777_k = tbl_Filter_TD_12284_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11454_key_rightMajor keyA{_d_date_sk3777_k};
            int32_t _d_date_sk3777 = tbl_Filter_TD_12284_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11454_payload_rightMajor payloadA{_d_date_sk3777};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12854_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk3743_k = tbl_Filter_TD_12854_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11454_key_rightMajor{_cs_sold_date_sk3743_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3777 = (it->second)._d_date_sk3777;
                int32_t _cs_sold_date_sk3743 = tbl_Filter_TD_12854_output.getInt32(i, 0);
                int32_t _cs_quantity3761 = tbl_Filter_TD_12854_output.getInt32(i, 1);
                int32_t _cs_list_price3763 = tbl_Filter_TD_12854_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11454_output.setInt32(r, 0, _cs_quantity3761);
                tbl_JOIN_INNER_TD_11454_output.setInt32(r, 1, _cs_list_price3763);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11454_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11454_output #Row: " << tbl_JOIN_INNER_TD_11454_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11160_key_leftMajor {
    int32_t _ss_sold_date_sk3692;
    bool operator==(const SW_JOIN_INNER_TD_11160_key_leftMajor& other) const {
        return ((_ss_sold_date_sk3692 == other._ss_sold_date_sk3692));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11160_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11160_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk3692));
    }
};
}
struct SW_JOIN_INNER_TD_11160_payload_leftMajor {
    int32_t _ss_sold_date_sk3692;
    int32_t _ss_quantity3702;
    int32_t _ss_list_price3704;
};
struct SW_JOIN_INNER_TD_11160_key_rightMajor {
    int32_t _d_date_sk3715;
    bool operator==(const SW_JOIN_INNER_TD_11160_key_rightMajor& other) const {
        return ((_d_date_sk3715 == other._d_date_sk3715));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11160_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11160_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3715));
    }
};
}
struct SW_JOIN_INNER_TD_11160_payload_rightMajor {
    int32_t _d_date_sk3715;
};
void SW_JOIN_INNER_TD_11160(Table &tbl_Filter_TD_12193_output, Table &tbl_Filter_TD_1238_output, Table &tbl_JOIN_INNER_TD_11160_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#3692 = d_date_sk#3715))
    // Left Table: ListBuffer(ss_sold_date_sk#3692, ss_quantity#3702, ss_list_price#3704)
    // Right Table: ListBuffer(d_date_sk#3715)
    // Output Table: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    int left_nrow = tbl_Filter_TD_12193_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1238_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11160_key_leftMajor, SW_JOIN_INNER_TD_11160_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12193_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk3692_k = tbl_Filter_TD_12193_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11160_key_leftMajor keyA{_ss_sold_date_sk3692_k};
            int32_t _ss_sold_date_sk3692 = tbl_Filter_TD_12193_output.getInt32(i, 0);
            int32_t _ss_quantity3702 = tbl_Filter_TD_12193_output.getInt32(i, 1);
            int32_t _ss_list_price3704 = tbl_Filter_TD_12193_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11160_payload_leftMajor payloadA{_ss_sold_date_sk3692, _ss_quantity3702, _ss_list_price3704};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1238_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3715_k = tbl_Filter_TD_1238_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11160_key_leftMajor{_d_date_sk3715_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk3692 = (it->second)._ss_sold_date_sk3692;
                int32_t _ss_quantity3702 = (it->second)._ss_quantity3702;
                int32_t _ss_list_price3704 = (it->second)._ss_list_price3704;
                int32_t _d_date_sk3715 = tbl_Filter_TD_1238_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11160_output.setInt32(r, 0, _ss_quantity3702);
                tbl_JOIN_INNER_TD_11160_output.setInt32(r, 1, _ss_list_price3704);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11160_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11160_key_rightMajor, SW_JOIN_INNER_TD_11160_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1238_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3715_k = tbl_Filter_TD_1238_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11160_key_rightMajor keyA{_d_date_sk3715_k};
            int32_t _d_date_sk3715 = tbl_Filter_TD_1238_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11160_payload_rightMajor payloadA{_d_date_sk3715};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12193_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk3692_k = tbl_Filter_TD_12193_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11160_key_rightMajor{_ss_sold_date_sk3692_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3715 = (it->second)._d_date_sk3715;
                int32_t _ss_sold_date_sk3692 = tbl_Filter_TD_12193_output.getInt32(i, 0);
                int32_t _ss_quantity3702 = tbl_Filter_TD_12193_output.getInt32(i, 1);
                int32_t _ss_list_price3704 = tbl_Filter_TD_12193_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11160_output.setInt32(r, 0, _ss_quantity3702);
                tbl_JOIN_INNER_TD_11160_output.setInt32(r, 1, _ss_list_price3704);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11160_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11160_output #Row: " << tbl_JOIN_INNER_TD_11160_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11793_key_leftMajor {
    int32_t _i_item_sk3890;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11793_key_leftMajor& other) const {
        return ((_i_item_sk3890 == other._i_item_sk3890));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11793_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11793_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3890));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11793_payload_leftMajor {
    int32_t _i_item_sk3890;
    int32_t _i_brand_id3897;
    int32_t _i_class_id3899;
    int32_t _i_category_id3901;
};
struct SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor {
    int32_t _ss_item_sk3562;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor& other) const {
        return ((_ss_item_sk3562 == other._ss_item_sk3562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3562));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11793_payload_rightMajor {
    int32_t _ss_item_sk3562;
};
void SW_JOIN_LEFTSEMI_TD_11793(Table &tbl_Filter_TD_12274_output, Table &tbl_Project_TD_12509_output, Table &tbl_JOIN_LEFTSEMI_TD_11793_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_sk#3890 = ss_item_sk#3562))
    // Left Table: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Right Table: ListBuffer(ss_item_sk#3562)
    // Output Table: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int left_nrow = tbl_Filter_TD_12274_output.getNumRow();
    int right_nrow = tbl_Project_TD_12509_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11793_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12509_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12274_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3562_k = tbl_Project_TD_12509_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor keyA{_ss_item_sk3562_k};
            int32_t _ss_item_sk3562 = tbl_Project_TD_12509_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11793_payload_rightMajor payloadA{_ss_item_sk3562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3890_k = tbl_Filter_TD_12274_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11793_key_rightMajor{_i_item_sk3890_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk3890 = tbl_Filter_TD_12274_output.getInt32(i, 0);
                int32_t _i_brand_id3897 = tbl_Filter_TD_12274_output.getInt32(i, 1);
                int32_t _i_class_id3899 = tbl_Filter_TD_12274_output.getInt32(i, 2);
                int32_t _i_category_id3901 = tbl_Filter_TD_12274_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11793_output.setInt32(r, 0, _i_item_sk3890);
                tbl_JOIN_LEFTSEMI_TD_11793_output.setInt32(r, 1, _i_brand_id3897);
                tbl_JOIN_LEFTSEMI_TD_11793_output.setInt32(r, 2, _i_class_id3899);
                tbl_JOIN_LEFTSEMI_TD_11793_output.setInt32(r, 3, _i_category_id3901);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11793_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11793_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11793_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1184_key_leftMajor {
    int32_t _ss_item_sk3869;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1184_key_leftMajor& other) const {
        return ((_ss_item_sk3869 == other._ss_item_sk3869));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1184_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1184_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3869));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1184_payload_leftMajor {
    int32_t _ss_sold_date_sk3867;
    int32_t _ss_item_sk3869;
    int32_t _ss_quantity3877;
    int32_t _ss_list_price3879;
};
struct SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor {
    int32_t _ss_item_sk3562;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor& other) const {
        return ((_ss_item_sk3562 == other._ss_item_sk3562));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3562));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1184_payload_rightMajor {
    int32_t _ss_item_sk3562;
};
void SW_JOIN_LEFTSEMI_TD_1184(Table &tbl_Filter_TD_12277_output, Table &tbl_Project_TD_12622_output, Table &tbl_JOIN_LEFTSEMI_TD_1184_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ss_item_sk#3869 = ss_item_sk#3562))
    // Left Table: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    // Right Table: ListBuffer(ss_item_sk#3562)
    // Output Table: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    int left_nrow = tbl_Filter_TD_12277_output.getNumRow();
    int right_nrow = tbl_Project_TD_12622_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1184_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12622_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12277_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3562_k = tbl_Project_TD_12622_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor keyA{_ss_item_sk3562_k};
            int32_t _ss_item_sk3562 = tbl_Project_TD_12622_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_1184_payload_rightMajor payloadA{_ss_item_sk3562};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk3869_k = tbl_Filter_TD_12277_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1184_key_rightMajor{_ss_item_sk3869_k});
            if (it != ht1.end()) {
                int32_t _ss_sold_date_sk3867 = tbl_Filter_TD_12277_output.getInt32(i, 0);
                int32_t _ss_item_sk3869 = tbl_Filter_TD_12277_output.getInt32(i, 1);
                int32_t _ss_quantity3877 = tbl_Filter_TD_12277_output.getInt32(i, 2);
                int32_t _ss_list_price3879 = tbl_Filter_TD_12277_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_1184_output.setInt32(r, 0, _ss_sold_date_sk3867);
                tbl_JOIN_LEFTSEMI_TD_1184_output.setInt32(r, 1, _ss_item_sk3869);
                tbl_JOIN_LEFTSEMI_TD_1184_output.setInt32(r, 2, _ss_quantity3877);
                tbl_JOIN_LEFTSEMI_TD_1184_output.setInt32(r, 3, _ss_list_price3879);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1184_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1184_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1184_output.getNumRow() << std::endl;
}

void SW_Project_TD_10208(Table &tbl_JOIN_INNER_TD_11340_output, Table &tbl_Project_TD_10208_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#3823 AS quantity#3567, ws_list_price#3825 AS list_price#3568)
    // Input: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(quantity#3567, list_price#3568)
    int nrow1 = tbl_JOIN_INNER_TD_11340_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity3823 = tbl_JOIN_INNER_TD_11340_output.getInt32(i, 0);
        int32_t _ws_list_price3825 = tbl_JOIN_INNER_TD_11340_output.getInt32(i, 1);
        int32_t _quantity3567 = _ws_quantity3823;
        tbl_Project_TD_10208_output.setInt32(i, 0, _quantity3567);
        int32_t _list_price3568 = _ws_list_price3825;
        tbl_Project_TD_10208_output.setInt32(i, 1, _list_price3568);
    }
    tbl_Project_TD_10208_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10208_output #Row: " << tbl_Project_TD_10208_output.getNumRow() << std::endl;
}

void SW_Project_TD_10206(Table &tbl_JOIN_INNER_TD_11729_output, Table &tbl_Project_TD_10206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#3761 AS quantity#3565, cs_list_price#3763 AS list_price#3566)
    // Input: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(quantity#3565, list_price#3566)
    int nrow1 = tbl_JOIN_INNER_TD_11729_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3761 = tbl_JOIN_INNER_TD_11729_output.getInt32(i, 0);
        int32_t _cs_list_price3763 = tbl_JOIN_INNER_TD_11729_output.getInt32(i, 1);
        int32_t _quantity3565 = _cs_quantity3761;
        tbl_Project_TD_10206_output.setInt32(i, 0, _quantity3565);
        int32_t _list_price3566 = _cs_list_price3763;
        tbl_Project_TD_10206_output.setInt32(i, 1, _list_price3566);
    }
    tbl_Project_TD_10206_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10206_output #Row: " << tbl_Project_TD_10206_output.getNumRow() << std::endl;
}

void SW_Project_TD_10562(Table &tbl_JOIN_INNER_TD_11535_output, Table &tbl_Project_TD_10562_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#3702 AS quantity#3563, ss_list_price#3704 AS list_price#3564)
    // Input: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(quantity#3563, list_price#3564)
    int nrow1 = tbl_JOIN_INNER_TD_11535_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3702 = tbl_JOIN_INNER_TD_11535_output.getInt32(i, 0);
        int32_t _ss_list_price3704 = tbl_JOIN_INNER_TD_11535_output.getInt32(i, 1);
        int32_t _quantity3563 = _ss_quantity3702;
        tbl_Project_TD_10562_output.setInt32(i, 0, _quantity3563);
        int32_t _list_price3564 = _ss_list_price3704;
        tbl_Project_TD_10562_output.setInt32(i, 1, _list_price3564);
    }
    tbl_Project_TD_10562_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10562_output #Row: " << tbl_Project_TD_10562_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10841(Table &tbl_SerializeFromObject_TD_11850_input, Table &tbl_Filter_TD_10841_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4086) AND isnotnull(d_moy#4088)) AND ((d_year#4086 = 2001) AND (d_moy#4088 = 11))) AND isnotnull(d_date_sk#4080)))
    // Input: ListBuffer(d_date_sk#4080, d_year#4086, d_moy#4088)
    // Output: ListBuffer(d_date_sk#4080)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11850_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4086 = tbl_SerializeFromObject_TD_11850_input.getInt32(i, 1);
        int32_t _d_moy4088 = tbl_SerializeFromObject_TD_11850_input.getInt32(i, 2);
        int32_t _d_date_sk4080 = tbl_SerializeFromObject_TD_11850_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_year4086 == 2001) && (_d_moy4088 == 11))) && (1)) {
            int32_t _d_date_sk4080_t = tbl_SerializeFromObject_TD_11850_input.getInt32(i, 0);
            tbl_Filter_TD_10841_output.setInt32(r, 0, _d_date_sk4080_t);
            r++;
        }
    }
    tbl_Filter_TD_10841_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10841_output #Row: " << tbl_Filter_TD_10841_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10276_key_leftMajor {
    int32_t _ws_item_sk4027;
    bool operator==(const SW_JOIN_INNER_TD_10276_key_leftMajor& other) const {
        return ((_ws_item_sk4027 == other._ws_item_sk4027));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10276_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10276_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk4027));
    }
};
}
struct SW_JOIN_INNER_TD_10276_payload_leftMajor {
    int32_t _ws_sold_date_sk4024;
    int32_t _ws_item_sk4027;
    int32_t _ws_quantity4042;
    int32_t _ws_list_price4044;
};
struct SW_JOIN_INNER_TD_10276_key_rightMajor {
    int32_t _i_item_sk4058;
    bool operator==(const SW_JOIN_INNER_TD_10276_key_rightMajor& other) const {
        return ((_i_item_sk4058 == other._i_item_sk4058));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10276_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10276_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk4058));
    }
};
}
struct SW_JOIN_INNER_TD_10276_payload_rightMajor {
    int32_t _i_item_sk4058;
    int32_t _i_brand_id4065;
    int32_t _i_class_id4067;
    int32_t _i_category_id4069;
};
void SW_JOIN_INNER_TD_10276(Table &tbl_JOIN_LEFTSEMI_TD_11860_output, Table &tbl_JOIN_LEFTSEMI_TD_11505_output, Table &tbl_JOIN_INNER_TD_10276_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#4027 = i_item_sk#4058))
    // Left Table: ListBuffer(ws_sold_date_sk#4024, ws_item_sk#4027, ws_quantity#4042, ws_list_price#4044)
    // Right Table: ListBuffer(i_item_sk#4058, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Output Table: ListBuffer(ws_sold_date_sk#4024, ws_quantity#4042, ws_list_price#4044, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_11860_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_11505_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10276_key_leftMajor, SW_JOIN_INNER_TD_10276_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11860_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk4027_k = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10276_key_leftMajor keyA{_ws_item_sk4027_k};
            int32_t _ws_sold_date_sk4024 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 0);
            int32_t _ws_item_sk4027 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 1);
            int32_t _ws_quantity4042 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 2);
            int32_t _ws_list_price4044 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10276_payload_leftMajor payloadA{_ws_sold_date_sk4024, _ws_item_sk4027, _ws_quantity4042, _ws_list_price4044};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11505_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk4058_k = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10276_key_leftMajor{_i_item_sk4058_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk4024 = (it->second)._ws_sold_date_sk4024;
                int32_t _ws_item_sk4027 = (it->second)._ws_item_sk4027;
                int32_t _ws_quantity4042 = (it->second)._ws_quantity4042;
                int32_t _ws_list_price4044 = (it->second)._ws_list_price4044;
                int32_t _i_item_sk4058 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 0);
                int32_t _i_brand_id4065 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 1);
                int32_t _i_class_id4067 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 2);
                int32_t _i_category_id4069 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 0, _ws_sold_date_sk4024);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 1, _ws_quantity4042);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 2, _ws_list_price4044);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 3, _i_brand_id4065);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 4, _i_class_id4067);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 5, _i_category_id4069);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10276_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10276_key_rightMajor, SW_JOIN_INNER_TD_10276_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11505_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk4058_k = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10276_key_rightMajor keyA{_i_item_sk4058_k};
            int32_t _i_item_sk4058 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 0);
            int32_t _i_brand_id4065 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 1);
            int32_t _i_class_id4067 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 2);
            int32_t _i_category_id4069 = tbl_JOIN_LEFTSEMI_TD_11505_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10276_payload_rightMajor payloadA{_i_item_sk4058, _i_brand_id4065, _i_class_id4067, _i_category_id4069};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11860_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk4027_k = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10276_key_rightMajor{_ws_item_sk4027_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk4058 = (it->second)._i_item_sk4058;
                int32_t _i_brand_id4065 = (it->second)._i_brand_id4065;
                int32_t _i_class_id4067 = (it->second)._i_class_id4067;
                int32_t _i_category_id4069 = (it->second)._i_category_id4069;
                int32_t _ws_sold_date_sk4024 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 0);
                int32_t _ws_item_sk4027 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 1);
                int32_t _ws_quantity4042 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 2);
                int32_t _ws_list_price4044 = tbl_JOIN_LEFTSEMI_TD_11860_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 3, _i_brand_id4065);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 4, _i_class_id4067);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 5, _i_category_id4069);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 0, _ws_sold_date_sk4024);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 1, _ws_quantity4042);
                tbl_JOIN_INNER_TD_10276_output.setInt32(r, 2, _ws_list_price4044);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10276_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10276_output #Row: " << tbl_JOIN_INNER_TD_10276_output.getNumRow() << std::endl;
}

void SW_Project_TD_10407(Table &tbl_JOIN_INNER_TD_11779_output, Table &tbl_Project_TD_10407_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#3823 AS quantity#3567, ws_list_price#3825 AS list_price#3568)
    // Input: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(quantity#3567, list_price#3568)
    int nrow1 = tbl_JOIN_INNER_TD_11779_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity3823 = tbl_JOIN_INNER_TD_11779_output.getInt32(i, 0);
        int32_t _ws_list_price3825 = tbl_JOIN_INNER_TD_11779_output.getInt32(i, 1);
        int32_t _quantity3567 = _ws_quantity3823;
        tbl_Project_TD_10407_output.setInt32(i, 0, _quantity3567);
        int32_t _list_price3568 = _ws_list_price3825;
        tbl_Project_TD_10407_output.setInt32(i, 1, _list_price3568);
    }
    tbl_Project_TD_10407_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10407_output #Row: " << tbl_Project_TD_10407_output.getNumRow() << std::endl;
}

void SW_Project_TD_1059(Table &tbl_JOIN_INNER_TD_11795_output, Table &tbl_Project_TD_1059_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#3761 AS quantity#3565, cs_list_price#3763 AS list_price#3566)
    // Input: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(quantity#3565, list_price#3566)
    int nrow1 = tbl_JOIN_INNER_TD_11795_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3761 = tbl_JOIN_INNER_TD_11795_output.getInt32(i, 0);
        int32_t _cs_list_price3763 = tbl_JOIN_INNER_TD_11795_output.getInt32(i, 1);
        int32_t _quantity3565 = _cs_quantity3761;
        tbl_Project_TD_1059_output.setInt32(i, 0, _quantity3565);
        int32_t _list_price3566 = _cs_list_price3763;
        tbl_Project_TD_1059_output.setInt32(i, 1, _list_price3566);
    }
    tbl_Project_TD_1059_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1059_output #Row: " << tbl_Project_TD_1059_output.getNumRow() << std::endl;
}

void SW_Project_TD_10543(Table &tbl_JOIN_INNER_TD_11983_output, Table &tbl_Project_TD_10543_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#3702 AS quantity#3563, ss_list_price#3704 AS list_price#3564)
    // Input: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(quantity#3563, list_price#3564)
    int nrow1 = tbl_JOIN_INNER_TD_11983_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3702 = tbl_JOIN_INNER_TD_11983_output.getInt32(i, 0);
        int32_t _ss_list_price3704 = tbl_JOIN_INNER_TD_11983_output.getInt32(i, 1);
        int32_t _quantity3563 = _ss_quantity3702;
        tbl_Project_TD_10543_output.setInt32(i, 0, _quantity3563);
        int32_t _list_price3564 = _ss_list_price3704;
        tbl_Project_TD_10543_output.setInt32(i, 1, _list_price3564);
    }
    tbl_Project_TD_10543_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10543_output #Row: " << tbl_Project_TD_10543_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10831(Table &tbl_SerializeFromObject_TD_11106_input, Table &tbl_Filter_TD_10831_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#4002) AND isnotnull(d_moy#4004)) AND ((d_year#4002 = 2001) AND (d_moy#4004 = 11))) AND isnotnull(d_date_sk#3996)))
    // Input: ListBuffer(d_date_sk#3996, d_year#4002, d_moy#4004)
    // Output: ListBuffer(d_date_sk#3996)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11106_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year4002 = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 1);
        int32_t _d_moy4004 = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 2);
        int32_t _d_date_sk3996 = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_year4002 == 2001) && (_d_moy4004 == 11))) && (1)) {
            int32_t _d_date_sk3996_t = tbl_SerializeFromObject_TD_11106_input.getInt32(i, 0);
            tbl_Filter_TD_10831_output.setInt32(r, 0, _d_date_sk3996_t);
            r++;
        }
    }
    tbl_Filter_TD_10831_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10831_output #Row: " << tbl_Filter_TD_10831_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10887_key_leftMajor {
    int32_t _cs_item_sk3955;
    bool operator==(const SW_JOIN_INNER_TD_10887_key_leftMajor& other) const {
        return ((_cs_item_sk3955 == other._cs_item_sk3955));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10887_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10887_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk3955));
    }
};
}
struct SW_JOIN_INNER_TD_10887_payload_leftMajor {
    int32_t _cs_sold_date_sk3940;
    int32_t _cs_item_sk3955;
    int32_t _cs_quantity3958;
    int32_t _cs_list_price3960;
};
struct SW_JOIN_INNER_TD_10887_key_rightMajor {
    int32_t _i_item_sk3974;
    bool operator==(const SW_JOIN_INNER_TD_10887_key_rightMajor& other) const {
        return ((_i_item_sk3974 == other._i_item_sk3974));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10887_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10887_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3974));
    }
};
}
struct SW_JOIN_INNER_TD_10887_payload_rightMajor {
    int32_t _i_item_sk3974;
    int32_t _i_brand_id3981;
    int32_t _i_class_id3983;
    int32_t _i_category_id3985;
};
void SW_JOIN_INNER_TD_10887(Table &tbl_JOIN_LEFTSEMI_TD_11312_output, Table &tbl_JOIN_LEFTSEMI_TD_11458_output, Table &tbl_JOIN_INNER_TD_10887_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#3955 = i_item_sk#3974))
    // Left Table: ListBuffer(cs_sold_date_sk#3940, cs_item_sk#3955, cs_quantity#3958, cs_list_price#3960)
    // Right Table: ListBuffer(i_item_sk#3974, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Output Table: ListBuffer(cs_sold_date_sk#3940, cs_quantity#3958, cs_list_price#3960, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_11312_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_11458_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10887_key_leftMajor, SW_JOIN_INNER_TD_10887_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11312_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk3955_k = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10887_key_leftMajor keyA{_cs_item_sk3955_k};
            int32_t _cs_sold_date_sk3940 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 0);
            int32_t _cs_item_sk3955 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 1);
            int32_t _cs_quantity3958 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 2);
            int32_t _cs_list_price3960 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10887_payload_leftMajor payloadA{_cs_sold_date_sk3940, _cs_item_sk3955, _cs_quantity3958, _cs_list_price3960};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11458_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3974_k = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10887_key_leftMajor{_i_item_sk3974_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk3940 = (it->second)._cs_sold_date_sk3940;
                int32_t _cs_item_sk3955 = (it->second)._cs_item_sk3955;
                int32_t _cs_quantity3958 = (it->second)._cs_quantity3958;
                int32_t _cs_list_price3960 = (it->second)._cs_list_price3960;
                int32_t _i_item_sk3974 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 0);
                int32_t _i_brand_id3981 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 1);
                int32_t _i_class_id3983 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 2);
                int32_t _i_category_id3985 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 0, _cs_sold_date_sk3940);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 1, _cs_quantity3958);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 2, _cs_list_price3960);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 3, _i_brand_id3981);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 4, _i_class_id3983);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 5, _i_category_id3985);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10887_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10887_key_rightMajor, SW_JOIN_INNER_TD_10887_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11458_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3974_k = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10887_key_rightMajor keyA{_i_item_sk3974_k};
            int32_t _i_item_sk3974 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 0);
            int32_t _i_brand_id3981 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 1);
            int32_t _i_class_id3983 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 2);
            int32_t _i_category_id3985 = tbl_JOIN_LEFTSEMI_TD_11458_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10887_payload_rightMajor payloadA{_i_item_sk3974, _i_brand_id3981, _i_class_id3983, _i_category_id3985};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11312_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk3955_k = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10887_key_rightMajor{_cs_item_sk3955_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3974 = (it->second)._i_item_sk3974;
                int32_t _i_brand_id3981 = (it->second)._i_brand_id3981;
                int32_t _i_class_id3983 = (it->second)._i_class_id3983;
                int32_t _i_category_id3985 = (it->second)._i_category_id3985;
                int32_t _cs_sold_date_sk3940 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 0);
                int32_t _cs_item_sk3955 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 1);
                int32_t _cs_quantity3958 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 2);
                int32_t _cs_list_price3960 = tbl_JOIN_LEFTSEMI_TD_11312_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 3, _i_brand_id3981);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 4, _i_class_id3983);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 5, _i_category_id3985);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 0, _cs_sold_date_sk3940);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 1, _cs_quantity3958);
                tbl_JOIN_INNER_TD_10887_output.setInt32(r, 2, _cs_list_price3960);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10887_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10887_output #Row: " << tbl_JOIN_INNER_TD_10887_output.getNumRow() << std::endl;
}

void SW_Project_TD_10270(Table &tbl_JOIN_INNER_TD_11233_output, Table &tbl_Project_TD_10270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#3823 AS quantity#3567, ws_list_price#3825 AS list_price#3568)
    // Input: ListBuffer(ws_quantity#3823, ws_list_price#3825)
    // Output: ListBuffer(quantity#3567, list_price#3568)
    int nrow1 = tbl_JOIN_INNER_TD_11233_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity3823 = tbl_JOIN_INNER_TD_11233_output.getInt32(i, 0);
        int32_t _ws_list_price3825 = tbl_JOIN_INNER_TD_11233_output.getInt32(i, 1);
        int32_t _quantity3567 = _ws_quantity3823;
        tbl_Project_TD_10270_output.setInt32(i, 0, _quantity3567);
        int32_t _list_price3568 = _ws_list_price3825;
        tbl_Project_TD_10270_output.setInt32(i, 1, _list_price3568);
    }
    tbl_Project_TD_10270_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10270_output #Row: " << tbl_Project_TD_10270_output.getNumRow() << std::endl;
}

void SW_Project_TD_1066(Table &tbl_JOIN_INNER_TD_11454_output, Table &tbl_Project_TD_1066_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#3761 AS quantity#3565, cs_list_price#3763 AS list_price#3566)
    // Input: ListBuffer(cs_quantity#3761, cs_list_price#3763)
    // Output: ListBuffer(quantity#3565, list_price#3566)
    int nrow1 = tbl_JOIN_INNER_TD_11454_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3761 = tbl_JOIN_INNER_TD_11454_output.getInt32(i, 0);
        int32_t _cs_list_price3763 = tbl_JOIN_INNER_TD_11454_output.getInt32(i, 1);
        int32_t _quantity3565 = _cs_quantity3761;
        tbl_Project_TD_1066_output.setInt32(i, 0, _quantity3565);
        int32_t _list_price3566 = _cs_list_price3763;
        tbl_Project_TD_1066_output.setInt32(i, 1, _list_price3566);
    }
    tbl_Project_TD_1066_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1066_output #Row: " << tbl_Project_TD_1066_output.getNumRow() << std::endl;
}

void SW_Project_TD_10872(Table &tbl_JOIN_INNER_TD_11160_output, Table &tbl_Project_TD_10872_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#3702 AS quantity#3563, ss_list_price#3704 AS list_price#3564)
    // Input: ListBuffer(ss_quantity#3702, ss_list_price#3704)
    // Output: ListBuffer(quantity#3563, list_price#3564)
    int nrow1 = tbl_JOIN_INNER_TD_11160_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3702 = tbl_JOIN_INNER_TD_11160_output.getInt32(i, 0);
        int32_t _ss_list_price3704 = tbl_JOIN_INNER_TD_11160_output.getInt32(i, 1);
        int32_t _quantity3563 = _ss_quantity3702;
        tbl_Project_TD_10872_output.setInt32(i, 0, _quantity3563);
        int32_t _list_price3564 = _ss_list_price3704;
        tbl_Project_TD_10872_output.setInt32(i, 1, _list_price3564);
    }
    tbl_Project_TD_10872_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10872_output #Row: " << tbl_Project_TD_10872_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1011(Table &tbl_SerializeFromObject_TD_11169_input, Table &tbl_Filter_TD_1011_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#3918) AND isnotnull(d_moy#3920)) AND ((d_year#3918 = 2001) AND (d_moy#3920 = 11))) AND isnotnull(d_date_sk#3912)))
    // Input: ListBuffer(d_date_sk#3912, d_year#3918, d_moy#3920)
    // Output: ListBuffer(d_date_sk#3912)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11169_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year3918 = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 1);
        int32_t _d_moy3920 = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 2);
        int32_t _d_date_sk3912 = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 0);
        if ((((1) && (1)) && ((_d_year3918 == 2001) && (_d_moy3920 == 11))) && (1)) {
            int32_t _d_date_sk3912_t = tbl_SerializeFromObject_TD_11169_input.getInt32(i, 0);
            tbl_Filter_TD_1011_output.setInt32(r, 0, _d_date_sk3912_t);
            r++;
        }
    }
    tbl_Filter_TD_1011_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1011_output #Row: " << tbl_Filter_TD_1011_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10331_key_leftMajor {
    int32_t _ss_item_sk3869;
    bool operator==(const SW_JOIN_INNER_TD_10331_key_leftMajor& other) const {
        return ((_ss_item_sk3869 == other._ss_item_sk3869));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10331_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10331_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk3869));
    }
};
}
struct SW_JOIN_INNER_TD_10331_payload_leftMajor {
    int32_t _ss_sold_date_sk3867;
    int32_t _ss_item_sk3869;
    int32_t _ss_quantity3877;
    int32_t _ss_list_price3879;
};
struct SW_JOIN_INNER_TD_10331_key_rightMajor {
    int32_t _i_item_sk3890;
    bool operator==(const SW_JOIN_INNER_TD_10331_key_rightMajor& other) const {
        return ((_i_item_sk3890 == other._i_item_sk3890));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10331_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10331_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk3890));
    }
};
}
struct SW_JOIN_INNER_TD_10331_payload_rightMajor {
    int32_t _i_item_sk3890;
    int32_t _i_brand_id3897;
    int32_t _i_class_id3899;
    int32_t _i_category_id3901;
};
void SW_JOIN_INNER_TD_10331(Table &tbl_JOIN_LEFTSEMI_TD_1184_output, Table &tbl_JOIN_LEFTSEMI_TD_11793_output, Table &tbl_JOIN_INNER_TD_10331_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#3869 = i_item_sk#3890))
    // Left Table: ListBuffer(ss_sold_date_sk#3867, ss_item_sk#3869, ss_quantity#3877, ss_list_price#3879)
    // Right Table: ListBuffer(i_item_sk#3890, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output Table: ListBuffer(ss_sold_date_sk#3867, ss_quantity#3877, ss_list_price#3879, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_1184_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_11793_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10331_key_leftMajor, SW_JOIN_INNER_TD_10331_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_1184_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk3869_k = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10331_key_leftMajor keyA{_ss_item_sk3869_k};
            int32_t _ss_sold_date_sk3867 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 0);
            int32_t _ss_item_sk3869 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 1);
            int32_t _ss_quantity3877 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 2);
            int32_t _ss_list_price3879 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10331_payload_leftMajor payloadA{_ss_sold_date_sk3867, _ss_item_sk3869, _ss_quantity3877, _ss_list_price3879};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11793_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk3890_k = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10331_key_leftMajor{_i_item_sk3890_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk3867 = (it->second)._ss_sold_date_sk3867;
                int32_t _ss_item_sk3869 = (it->second)._ss_item_sk3869;
                int32_t _ss_quantity3877 = (it->second)._ss_quantity3877;
                int32_t _ss_list_price3879 = (it->second)._ss_list_price3879;
                int32_t _i_item_sk3890 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 0);
                int32_t _i_brand_id3897 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 1);
                int32_t _i_class_id3899 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 2);
                int32_t _i_category_id3901 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 0, _ss_sold_date_sk3867);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 1, _ss_quantity3877);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 2, _ss_list_price3879);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 3, _i_brand_id3897);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 4, _i_class_id3899);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 5, _i_category_id3901);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10331_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10331_key_rightMajor, SW_JOIN_INNER_TD_10331_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11793_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk3890_k = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10331_key_rightMajor keyA{_i_item_sk3890_k};
            int32_t _i_item_sk3890 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 0);
            int32_t _i_brand_id3897 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 1);
            int32_t _i_class_id3899 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 2);
            int32_t _i_category_id3901 = tbl_JOIN_LEFTSEMI_TD_11793_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10331_payload_rightMajor payloadA{_i_item_sk3890, _i_brand_id3897, _i_class_id3899, _i_category_id3901};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_1184_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk3869_k = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10331_key_rightMajor{_ss_item_sk3869_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk3890 = (it->second)._i_item_sk3890;
                int32_t _i_brand_id3897 = (it->second)._i_brand_id3897;
                int32_t _i_class_id3899 = (it->second)._i_class_id3899;
                int32_t _i_category_id3901 = (it->second)._i_category_id3901;
                int32_t _ss_sold_date_sk3867 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 0);
                int32_t _ss_item_sk3869 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 1);
                int32_t _ss_quantity3877 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 2);
                int32_t _ss_list_price3879 = tbl_JOIN_LEFTSEMI_TD_1184_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 3, _i_brand_id3897);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 4, _i_class_id3899);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 5, _i_category_id3901);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 0, _ss_sold_date_sk3867);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 1, _ss_quantity3877);
                tbl_JOIN_INNER_TD_10331_output.setInt32(r, 2, _ss_list_price3879);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10331_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10331_output #Row: " << tbl_JOIN_INNER_TD_10331_output.getNumRow() << std::endl;
}

void SW_Union_TD_9511(Table &tbl_Project_TD_10562_output, Table &tbl_Project_TD_10206_output, Table &tbl_Project_TD_10208_output, Table &tbl_Union_TD_9511_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#3563, list_price#3564)
    int r = 0;
    int row0 = tbl_Project_TD_10562_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9511_output.setInt32(r, 0, tbl_Project_TD_10562_output.getInt32(i, 0));
        tbl_Union_TD_9511_output.setInt32(r, 1, tbl_Project_TD_10562_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10206_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9511_output.setInt32(r, 0, tbl_Project_TD_10206_output.getInt32(i, 0));
        tbl_Union_TD_9511_output.setInt32(r, 1, tbl_Project_TD_10206_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10208_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9511_output.setInt32(r, 0, tbl_Project_TD_10208_output.getInt32(i, 0));
        tbl_Union_TD_9511_output.setInt32(r, 1, tbl_Project_TD_10208_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_9511_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9511_output #Row: " << tbl_Union_TD_9511_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9385_key_leftMajor {
    int32_t _ws_sold_date_sk4024;
    bool operator==(const SW_JOIN_INNER_TD_9385_key_leftMajor& other) const {
        return ((_ws_sold_date_sk4024 == other._ws_sold_date_sk4024));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9385_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9385_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk4024));
    }
};
}
struct SW_JOIN_INNER_TD_9385_payload_leftMajor {
    int32_t _ws_sold_date_sk4024;
    int32_t _ws_quantity4042;
    int32_t _ws_list_price4044;
    int32_t _i_brand_id4065;
    int32_t _i_class_id4067;
    int32_t _i_category_id4069;
};
struct SW_JOIN_INNER_TD_9385_key_rightMajor {
    int32_t _d_date_sk4080;
    bool operator==(const SW_JOIN_INNER_TD_9385_key_rightMajor& other) const {
        return ((_d_date_sk4080 == other._d_date_sk4080));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9385_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9385_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk4080));
    }
};
}
struct SW_JOIN_INNER_TD_9385_payload_rightMajor {
    int32_t _d_date_sk4080;
};
void SW_JOIN_INNER_TD_9385(Table &tbl_JOIN_INNER_TD_10276_output, Table &tbl_Filter_TD_10841_output, Table &tbl_JOIN_INNER_TD_9385_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#4024 = d_date_sk#4080))
    // Left Table: ListBuffer(ws_sold_date_sk#4024, ws_quantity#4042, ws_list_price#4044, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Right Table: ListBuffer(d_date_sk#4080)
    // Output Table: ListBuffer(ws_quantity#4042, ws_list_price#4044, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int left_nrow = tbl_JOIN_INNER_TD_10276_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10841_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9385_key_leftMajor, SW_JOIN_INNER_TD_9385_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10276_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk4024_k = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9385_key_leftMajor keyA{_ws_sold_date_sk4024_k};
            int32_t _ws_sold_date_sk4024 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 0);
            int32_t _ws_quantity4042 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 1);
            int32_t _ws_list_price4044 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 2);
            int32_t _i_brand_id4065 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 3);
            int32_t _i_class_id4067 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 4);
            int32_t _i_category_id4069 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9385_payload_leftMajor payloadA{_ws_sold_date_sk4024, _ws_quantity4042, _ws_list_price4044, _i_brand_id4065, _i_class_id4067, _i_category_id4069};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10841_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk4080_k = tbl_Filter_TD_10841_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9385_key_leftMajor{_d_date_sk4080_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk4024 = (it->second)._ws_sold_date_sk4024;
                int32_t _ws_quantity4042 = (it->second)._ws_quantity4042;
                int32_t _ws_list_price4044 = (it->second)._ws_list_price4044;
                int32_t _i_brand_id4065 = (it->second)._i_brand_id4065;
                int32_t _i_class_id4067 = (it->second)._i_class_id4067;
                int32_t _i_category_id4069 = (it->second)._i_category_id4069;
                int32_t _d_date_sk4080 = tbl_Filter_TD_10841_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 0, _ws_quantity4042);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 1, _ws_list_price4044);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 2, _i_brand_id4065);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 3, _i_class_id4067);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 4, _i_category_id4069);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9385_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9385_key_rightMajor, SW_JOIN_INNER_TD_9385_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10841_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk4080_k = tbl_Filter_TD_10841_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9385_key_rightMajor keyA{_d_date_sk4080_k};
            int32_t _d_date_sk4080 = tbl_Filter_TD_10841_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9385_payload_rightMajor payloadA{_d_date_sk4080};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10276_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk4024_k = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9385_key_rightMajor{_ws_sold_date_sk4024_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk4080 = (it->second)._d_date_sk4080;
                int32_t _ws_sold_date_sk4024 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 0);
                int32_t _ws_quantity4042 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 1);
                int32_t _ws_list_price4044 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 2);
                int32_t _i_brand_id4065 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 3);
                int32_t _i_class_id4067 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 4);
                int32_t _i_category_id4069 = tbl_JOIN_INNER_TD_10276_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 0, _ws_quantity4042);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 1, _ws_list_price4044);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 2, _i_brand_id4065);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 3, _i_class_id4067);
                tbl_JOIN_INNER_TD_9385_output.setInt32(r, 4, _i_category_id4069);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9385_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9385_output #Row: " << tbl_JOIN_INNER_TD_9385_output.getNumRow() << std::endl;
}

void SW_Union_TD_951(Table &tbl_Project_TD_10543_output, Table &tbl_Project_TD_1059_output, Table &tbl_Project_TD_10407_output, Table &tbl_Union_TD_951_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#3563, list_price#3564)
    int r = 0;
    int row0 = tbl_Project_TD_10543_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_951_output.setInt32(r, 0, tbl_Project_TD_10543_output.getInt32(i, 0));
        tbl_Union_TD_951_output.setInt32(r, 1, tbl_Project_TD_10543_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_1059_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_951_output.setInt32(r, 0, tbl_Project_TD_1059_output.getInt32(i, 0));
        tbl_Union_TD_951_output.setInt32(r, 1, tbl_Project_TD_1059_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10407_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_951_output.setInt32(r, 0, tbl_Project_TD_10407_output.getInt32(i, 0));
        tbl_Union_TD_951_output.setInt32(r, 1, tbl_Project_TD_10407_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_951_output.setNumRow(r);
    std::cout << "tbl_Union_TD_951_output #Row: " << tbl_Union_TD_951_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9517_key_leftMajor {
    int32_t _cs_sold_date_sk3940;
    bool operator==(const SW_JOIN_INNER_TD_9517_key_leftMajor& other) const {
        return ((_cs_sold_date_sk3940 == other._cs_sold_date_sk3940));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9517_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9517_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk3940));
    }
};
}
struct SW_JOIN_INNER_TD_9517_payload_leftMajor {
    int32_t _cs_sold_date_sk3940;
    int32_t _cs_quantity3958;
    int32_t _cs_list_price3960;
    int32_t _i_brand_id3981;
    int32_t _i_class_id3983;
    int32_t _i_category_id3985;
};
struct SW_JOIN_INNER_TD_9517_key_rightMajor {
    int32_t _d_date_sk3996;
    bool operator==(const SW_JOIN_INNER_TD_9517_key_rightMajor& other) const {
        return ((_d_date_sk3996 == other._d_date_sk3996));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9517_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9517_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3996));
    }
};
}
struct SW_JOIN_INNER_TD_9517_payload_rightMajor {
    int32_t _d_date_sk3996;
};
void SW_JOIN_INNER_TD_9517(Table &tbl_JOIN_INNER_TD_10887_output, Table &tbl_Filter_TD_10831_output, Table &tbl_JOIN_INNER_TD_9517_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#3940 = d_date_sk#3996))
    // Left Table: ListBuffer(cs_sold_date_sk#3940, cs_quantity#3958, cs_list_price#3960, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Right Table: ListBuffer(d_date_sk#3996)
    // Output Table: ListBuffer(cs_quantity#3958, cs_list_price#3960, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int left_nrow = tbl_JOIN_INNER_TD_10887_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10831_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9517_key_leftMajor, SW_JOIN_INNER_TD_9517_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10887_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk3940_k = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9517_key_leftMajor keyA{_cs_sold_date_sk3940_k};
            int32_t _cs_sold_date_sk3940 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 0);
            int32_t _cs_quantity3958 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 1);
            int32_t _cs_list_price3960 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 2);
            int32_t _i_brand_id3981 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 3);
            int32_t _i_class_id3983 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 4);
            int32_t _i_category_id3985 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9517_payload_leftMajor payloadA{_cs_sold_date_sk3940, _cs_quantity3958, _cs_list_price3960, _i_brand_id3981, _i_class_id3983, _i_category_id3985};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10831_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3996_k = tbl_Filter_TD_10831_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9517_key_leftMajor{_d_date_sk3996_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk3940 = (it->second)._cs_sold_date_sk3940;
                int32_t _cs_quantity3958 = (it->second)._cs_quantity3958;
                int32_t _cs_list_price3960 = (it->second)._cs_list_price3960;
                int32_t _i_brand_id3981 = (it->second)._i_brand_id3981;
                int32_t _i_class_id3983 = (it->second)._i_class_id3983;
                int32_t _i_category_id3985 = (it->second)._i_category_id3985;
                int32_t _d_date_sk3996 = tbl_Filter_TD_10831_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 0, _cs_quantity3958);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 1, _cs_list_price3960);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 2, _i_brand_id3981);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 3, _i_class_id3983);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 4, _i_category_id3985);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9517_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9517_key_rightMajor, SW_JOIN_INNER_TD_9517_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10831_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3996_k = tbl_Filter_TD_10831_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9517_key_rightMajor keyA{_d_date_sk3996_k};
            int32_t _d_date_sk3996 = tbl_Filter_TD_10831_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9517_payload_rightMajor payloadA{_d_date_sk3996};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10887_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk3940_k = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9517_key_rightMajor{_cs_sold_date_sk3940_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3996 = (it->second)._d_date_sk3996;
                int32_t _cs_sold_date_sk3940 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 0);
                int32_t _cs_quantity3958 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 1);
                int32_t _cs_list_price3960 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 2);
                int32_t _i_brand_id3981 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 3);
                int32_t _i_class_id3983 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 4);
                int32_t _i_category_id3985 = tbl_JOIN_INNER_TD_10887_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 0, _cs_quantity3958);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 1, _cs_list_price3960);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 2, _i_brand_id3981);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 3, _i_class_id3983);
                tbl_JOIN_INNER_TD_9517_output.setInt32(r, 4, _i_category_id3985);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9517_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9517_output #Row: " << tbl_JOIN_INNER_TD_9517_output.getNumRow() << std::endl;
}

void SW_Union_TD_9383(Table &tbl_Project_TD_10872_output, Table &tbl_Project_TD_1066_output, Table &tbl_Project_TD_10270_output, Table &tbl_Union_TD_9383_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#3563, list_price#3564)
    int r = 0;
    int row0 = tbl_Project_TD_10872_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9383_output.setInt32(r, 0, tbl_Project_TD_10872_output.getInt32(i, 0));
        tbl_Union_TD_9383_output.setInt32(r, 1, tbl_Project_TD_10872_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_1066_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9383_output.setInt32(r, 0, tbl_Project_TD_1066_output.getInt32(i, 0));
        tbl_Union_TD_9383_output.setInt32(r, 1, tbl_Project_TD_1066_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10270_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9383_output.setInt32(r, 0, tbl_Project_TD_10270_output.getInt32(i, 0));
        tbl_Union_TD_9383_output.setInt32(r, 1, tbl_Project_TD_10270_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_9383_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9383_output #Row: " << tbl_Union_TD_9383_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9536_key_leftMajor {
    int32_t _ss_sold_date_sk3867;
    bool operator==(const SW_JOIN_INNER_TD_9536_key_leftMajor& other) const {
        return ((_ss_sold_date_sk3867 == other._ss_sold_date_sk3867));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9536_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9536_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk3867));
    }
};
}
struct SW_JOIN_INNER_TD_9536_payload_leftMajor {
    int32_t _ss_sold_date_sk3867;
    int32_t _ss_quantity3877;
    int32_t _ss_list_price3879;
    int32_t _i_brand_id3897;
    int32_t _i_class_id3899;
    int32_t _i_category_id3901;
};
struct SW_JOIN_INNER_TD_9536_key_rightMajor {
    int32_t _d_date_sk3912;
    bool operator==(const SW_JOIN_INNER_TD_9536_key_rightMajor& other) const {
        return ((_d_date_sk3912 == other._d_date_sk3912));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9536_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9536_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk3912));
    }
};
}
struct SW_JOIN_INNER_TD_9536_payload_rightMajor {
    int32_t _d_date_sk3912;
};
void SW_JOIN_INNER_TD_9536(Table &tbl_JOIN_INNER_TD_10331_output, Table &tbl_Filter_TD_1011_output, Table &tbl_JOIN_INNER_TD_9536_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#3867 = d_date_sk#3912))
    // Left Table: ListBuffer(ss_sold_date_sk#3867, ss_quantity#3877, ss_list_price#3879, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Right Table: ListBuffer(d_date_sk#3912)
    // Output Table: ListBuffer(ss_quantity#3877, ss_list_price#3879, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int left_nrow = tbl_JOIN_INNER_TD_10331_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1011_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9536_key_leftMajor, SW_JOIN_INNER_TD_9536_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10331_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk3867_k = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9536_key_leftMajor keyA{_ss_sold_date_sk3867_k};
            int32_t _ss_sold_date_sk3867 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 0);
            int32_t _ss_quantity3877 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 1);
            int32_t _ss_list_price3879 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 2);
            int32_t _i_brand_id3897 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 3);
            int32_t _i_class_id3899 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 4);
            int32_t _i_category_id3901 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9536_payload_leftMajor payloadA{_ss_sold_date_sk3867, _ss_quantity3877, _ss_list_price3879, _i_brand_id3897, _i_class_id3899, _i_category_id3901};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1011_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk3912_k = tbl_Filter_TD_1011_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9536_key_leftMajor{_d_date_sk3912_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk3867 = (it->second)._ss_sold_date_sk3867;
                int32_t _ss_quantity3877 = (it->second)._ss_quantity3877;
                int32_t _ss_list_price3879 = (it->second)._ss_list_price3879;
                int32_t _i_brand_id3897 = (it->second)._i_brand_id3897;
                int32_t _i_class_id3899 = (it->second)._i_class_id3899;
                int32_t _i_category_id3901 = (it->second)._i_category_id3901;
                int32_t _d_date_sk3912 = tbl_Filter_TD_1011_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 0, _ss_quantity3877);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 1, _ss_list_price3879);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 2, _i_brand_id3897);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 3, _i_class_id3899);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 4, _i_category_id3901);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9536_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9536_key_rightMajor, SW_JOIN_INNER_TD_9536_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1011_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk3912_k = tbl_Filter_TD_1011_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9536_key_rightMajor keyA{_d_date_sk3912_k};
            int32_t _d_date_sk3912 = tbl_Filter_TD_1011_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9536_payload_rightMajor payloadA{_d_date_sk3912};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10331_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk3867_k = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9536_key_rightMajor{_ss_sold_date_sk3867_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk3912 = (it->second)._d_date_sk3912;
                int32_t _ss_sold_date_sk3867 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 0);
                int32_t _ss_quantity3877 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 1);
                int32_t _ss_list_price3879 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 2);
                int32_t _i_brand_id3897 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 3);
                int32_t _i_class_id3899 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 4);
                int32_t _i_category_id3901 = tbl_JOIN_INNER_TD_10331_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 0, _ss_quantity3877);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 1, _ss_list_price3879);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 2, _i_brand_id3897);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 3, _i_class_id3899);
                tbl_JOIN_INNER_TD_9536_output.setInt32(r, 4, _i_category_id3901);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9536_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9536_output #Row: " << tbl_JOIN_INNER_TD_9536_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8527(Table &tbl_Union_TD_9511_output, Table &tbl_Aggregate_TD_8527_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#3563 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#3564 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#3569)
    // Input: ListBuffer(quantity#3563, list_price#3564)
    // Output: ListBuffer(average_sales#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9511_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity3563 = tbl_Union_TD_9511_output.getInt32(i, 0);
        int32_t _list_price3564 = tbl_Union_TD_9511_output.getInt32(i, 1);
        int64_t _average_sales3569_avg_0 = (_quantity3563 * _list_price3564);
        avg_0 = (avg_0 + _average_sales3569_avg_0);
    }
    int r = 0;
    int32_t _average_sales3569 = avg_0 / nrow1;
    tbl_Aggregate_TD_8527_output.setInt32(r++, 0, _average_sales3569);
    tbl_Aggregate_TD_8527_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8527_output #Row: " << tbl_Aggregate_TD_8527_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8247_key {
    int32_t _i_brand_id4065;
    int32_t _i_class_id4067;
    int32_t _i_category_id4069;
    bool operator==(const SW_Aggregate_TD_8247_key& other) const { return (_i_brand_id4065 == other._i_brand_id4065) && (_i_class_id4067 == other._i_class_id4067) && (_i_category_id4069 == other._i_category_id4069); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8247_key> {
    std::size_t operator() (const SW_Aggregate_TD_8247_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id4065)) + (hash<int32_t>()(k._i_class_id4067)) + (hash<int32_t>()(k._i_category_id4069));
    }
};
}
struct SW_Aggregate_TD_8247_payload {
    int32_t _sales3555_sum_0;
    int64_t _number_sales3556L_count_1;
};
void SW_Aggregate_TD_8247(Table &tbl_JOIN_INNER_TD_9385_output, Table &tbl_Aggregate_TD_8247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand_id#4065, i_class_id#4067, i_category_id#4069, sum(CheckOverflow((promote_precision(cast(cast(ws_quantity#4042 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ws_list_price#4044 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#3555, count(1) AS number_sales#3556L)
    // Input: ListBuffer(ws_quantity#4042, ws_list_price#4044, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Output: ListBuffer(i_brand_id#4065, i_class_id#4067, i_category_id#4069, sales#3555, number_sales#3556L)
    std::unordered_map<SW_Aggregate_TD_8247_key, SW_Aggregate_TD_8247_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9385_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity4042 = tbl_JOIN_INNER_TD_9385_output.getInt32(i, 0);
        int32_t _ws_list_price4044 = tbl_JOIN_INNER_TD_9385_output.getInt32(i, 1);
        int32_t _i_brand_id4065 = tbl_JOIN_INNER_TD_9385_output.getInt32(i, 2);
        int32_t _i_class_id4067 = tbl_JOIN_INNER_TD_9385_output.getInt32(i, 3);
        int32_t _i_category_id4069 = tbl_JOIN_INNER_TD_9385_output.getInt32(i, 4);
        SW_Aggregate_TD_8247_key k{_i_brand_id4065, _i_class_id4067, _i_category_id4069};
        int64_t _sales3555_sum_0 = (_ws_quantity4042 * _ws_list_price4044);
        int64_t _number_sales3556L_count_1 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_8247_payload p{_sales3555_sum_0, _number_sales3556L_count_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales3555_sum_0 + _sales3555_sum_0;
            p._sales3555_sum_0 = sum_0;
            int64_t count_1 = (it->second)._number_sales3556L_count_1 + _number_sales3556L_count_1;
            p._number_sales3556L_count_1 = count_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8247_output.setInt32(r, 0, (it.first)._i_brand_id4065);
        tbl_Aggregate_TD_8247_output.setInt32(r, 1, (it.first)._i_class_id4067);
        tbl_Aggregate_TD_8247_output.setInt32(r, 2, (it.first)._i_category_id4069);
        int32_t _sales3555 = (it.second)._sales3555_sum_0;
        tbl_Aggregate_TD_8247_output.setInt32(r, 3, _sales3555);
        int64_t _number_sales3556L = (it.second)._number_sales3556L_count_1;
        tbl_Aggregate_TD_8247_output.setInt64(r, 4, _number_sales3556L);
        ++r;
    }
    tbl_Aggregate_TD_8247_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8247_output #Row: " << tbl_Aggregate_TD_8247_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8113(Table &tbl_Union_TD_951_output, Table &tbl_Aggregate_TD_8113_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#3563 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#3564 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#3569)
    // Input: ListBuffer(quantity#3563, list_price#3564)
    // Output: ListBuffer(average_sales#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_951_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity3563 = tbl_Union_TD_951_output.getInt32(i, 0);
        int32_t _list_price3564 = tbl_Union_TD_951_output.getInt32(i, 1);
        int64_t _average_sales3569_avg_0 = (_quantity3563 * _list_price3564);
        avg_0 = (avg_0 + _average_sales3569_avg_0);
    }
    int r = 0;
    int32_t _average_sales3569 = avg_0 / nrow1;
    tbl_Aggregate_TD_8113_output.setInt32(r++, 0, _average_sales3569);
    tbl_Aggregate_TD_8113_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8113_output #Row: " << tbl_Aggregate_TD_8113_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8690_key {
    int32_t _i_brand_id3981;
    int32_t _i_class_id3983;
    int32_t _i_category_id3985;
    bool operator==(const SW_Aggregate_TD_8690_key& other) const { return (_i_brand_id3981 == other._i_brand_id3981) && (_i_class_id3983 == other._i_class_id3983) && (_i_category_id3985 == other._i_category_id3985); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8690_key> {
    std::size_t operator() (const SW_Aggregate_TD_8690_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3981)) + (hash<int32_t>()(k._i_class_id3983)) + (hash<int32_t>()(k._i_category_id3985));
    }
};
}
struct SW_Aggregate_TD_8690_payload {
    int32_t _sales3550_sum_0;
    int64_t _number_sales3551L_count_1;
};
void SW_Aggregate_TD_8690(Table &tbl_JOIN_INNER_TD_9517_output, Table &tbl_Aggregate_TD_8690_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand_id#3981, i_class_id#3983, i_category_id#3985, sum(CheckOverflow((promote_precision(cast(cast(cs_quantity#3958 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(cs_list_price#3960 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#3550, count(1) AS number_sales#3551L)
    // Input: ListBuffer(cs_quantity#3958, cs_list_price#3960, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Output: ListBuffer(i_brand_id#3981, i_class_id#3983, i_category_id#3985, sales#3550, number_sales#3551L)
    std::unordered_map<SW_Aggregate_TD_8690_key, SW_Aggregate_TD_8690_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9517_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity3958 = tbl_JOIN_INNER_TD_9517_output.getInt32(i, 0);
        int32_t _cs_list_price3960 = tbl_JOIN_INNER_TD_9517_output.getInt32(i, 1);
        int32_t _i_brand_id3981 = tbl_JOIN_INNER_TD_9517_output.getInt32(i, 2);
        int32_t _i_class_id3983 = tbl_JOIN_INNER_TD_9517_output.getInt32(i, 3);
        int32_t _i_category_id3985 = tbl_JOIN_INNER_TD_9517_output.getInt32(i, 4);
        SW_Aggregate_TD_8690_key k{_i_brand_id3981, _i_class_id3983, _i_category_id3985};
        int64_t _sales3550_sum_0 = (_cs_quantity3958 * _cs_list_price3960);
        int64_t _number_sales3551L_count_1 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_8690_payload p{_sales3550_sum_0, _number_sales3551L_count_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales3550_sum_0 + _sales3550_sum_0;
            p._sales3550_sum_0 = sum_0;
            int64_t count_1 = (it->second)._number_sales3551L_count_1 + _number_sales3551L_count_1;
            p._number_sales3551L_count_1 = count_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8690_output.setInt32(r, 0, (it.first)._i_brand_id3981);
        tbl_Aggregate_TD_8690_output.setInt32(r, 1, (it.first)._i_class_id3983);
        tbl_Aggregate_TD_8690_output.setInt32(r, 2, (it.first)._i_category_id3985);
        int32_t _sales3550 = (it.second)._sales3550_sum_0;
        tbl_Aggregate_TD_8690_output.setInt32(r, 3, _sales3550);
        int64_t _number_sales3551L = (it.second)._number_sales3551L_count_1;
        tbl_Aggregate_TD_8690_output.setInt64(r, 4, _number_sales3551L);
        ++r;
    }
    tbl_Aggregate_TD_8690_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8690_output #Row: " << tbl_Aggregate_TD_8690_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8754(Table &tbl_Union_TD_9383_output, Table &tbl_Aggregate_TD_8754_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#3563 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#3564 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#3569)
    // Input: ListBuffer(quantity#3563, list_price#3564)
    // Output: ListBuffer(average_sales#3569)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9383_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity3563 = tbl_Union_TD_9383_output.getInt32(i, 0);
        int32_t _list_price3564 = tbl_Union_TD_9383_output.getInt32(i, 1);
        int64_t _average_sales3569_avg_0 = (_quantity3563 * _list_price3564);
        avg_0 = (avg_0 + _average_sales3569_avg_0);
    }
    int r = 0;
    int32_t _average_sales3569 = avg_0 / nrow1;
    tbl_Aggregate_TD_8754_output.setInt32(r++, 0, _average_sales3569);
    tbl_Aggregate_TD_8754_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8754_output #Row: " << tbl_Aggregate_TD_8754_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_821_key {
    int32_t _i_brand_id3897;
    int32_t _i_class_id3899;
    int32_t _i_category_id3901;
    bool operator==(const SW_Aggregate_TD_821_key& other) const { return (_i_brand_id3897 == other._i_brand_id3897) && (_i_class_id3899 == other._i_class_id3899) && (_i_category_id3901 == other._i_category_id3901); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_821_key> {
    std::size_t operator() (const SW_Aggregate_TD_821_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id3897)) + (hash<int32_t>()(k._i_class_id3899)) + (hash<int32_t>()(k._i_category_id3901));
    }
};
}
struct SW_Aggregate_TD_821_payload {
    int32_t _sales3545_sum_0;
    int64_t _number_sales3546L_count_1;
};
void SW_Aggregate_TD_821(Table &tbl_JOIN_INNER_TD_9536_output, Table &tbl_Aggregate_TD_821_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand_id#3897, i_class_id#3899, i_category_id#3901, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#3877 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_list_price#3879 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#3545, count(1) AS number_sales#3546L)
    // Input: ListBuffer(ss_quantity#3877, ss_list_price#3879, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output: ListBuffer(i_brand_id#3897, i_class_id#3899, i_category_id#3901, sales#3545, number_sales#3546L)
    std::unordered_map<SW_Aggregate_TD_821_key, SW_Aggregate_TD_821_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9536_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity3877 = tbl_JOIN_INNER_TD_9536_output.getInt32(i, 0);
        int32_t _ss_list_price3879 = tbl_JOIN_INNER_TD_9536_output.getInt32(i, 1);
        int32_t _i_brand_id3897 = tbl_JOIN_INNER_TD_9536_output.getInt32(i, 2);
        int32_t _i_class_id3899 = tbl_JOIN_INNER_TD_9536_output.getInt32(i, 3);
        int32_t _i_category_id3901 = tbl_JOIN_INNER_TD_9536_output.getInt32(i, 4);
        SW_Aggregate_TD_821_key k{_i_brand_id3897, _i_class_id3899, _i_category_id3901};
        int64_t _sales3545_sum_0 = (_ss_quantity3877 * _ss_list_price3879);
        int64_t _number_sales3546L_count_1 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_821_payload p{_sales3545_sum_0, _number_sales3546L_count_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales3545_sum_0 + _sales3545_sum_0;
            p._sales3545_sum_0 = sum_0;
            int64_t count_1 = (it->second)._number_sales3546L_count_1 + _number_sales3546L_count_1;
            p._number_sales3546L_count_1 = count_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_821_output.setInt32(r, 0, (it.first)._i_brand_id3897);
        tbl_Aggregate_TD_821_output.setInt32(r, 1, (it.first)._i_class_id3899);
        tbl_Aggregate_TD_821_output.setInt32(r, 2, (it.first)._i_category_id3901);
        int32_t _sales3545 = (it.second)._sales3545_sum_0;
        tbl_Aggregate_TD_821_output.setInt32(r, 3, _sales3545);
        int64_t _number_sales3546L = (it.second)._number_sales3546L_count_1;
        tbl_Aggregate_TD_821_output.setInt64(r, 4, _number_sales3546L);
        ++r;
    }
    tbl_Aggregate_TD_821_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_821_output #Row: " << tbl_Aggregate_TD_821_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7573(Table &tbl_Aggregate_TD_8247_output, Table &tbl_Aggregate_TD_8527_output, Table &tbl_Filter_TD_7573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#3555) AND (cast(sales#3555 as decimal(32,6)) > cast(scalar-subquery#3558 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#4065, i_class_id#4067, i_category_id#4069, sales#3555, number_sales#3556L)
    // Output: ListBuffer(sales#3555, number_sales#3556L, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8247_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales3555 = tbl_Aggregate_TD_8247_output.getInt32(i, 3);
        if ((1) && (_sales3555 > tbl_Aggregate_TD_8527_output.getInt32(0, 0))) {
            int32_t _sales3555_t = tbl_Aggregate_TD_8247_output.getInt32(i, 3);
            tbl_Filter_TD_7573_output.setInt32(r, 0, _sales3555_t);
            int64_t _number_sales3556L_t = tbl_Aggregate_TD_8247_output.getInt64(i, 4);
            tbl_Filter_TD_7573_output.setInt64(r, 1, _number_sales3556L_t);
            int32_t _i_brand_id4065_t = tbl_Aggregate_TD_8247_output.getInt32(i, 0);
            tbl_Filter_TD_7573_output.setInt32(r, 2, _i_brand_id4065_t);
            int32_t _i_class_id4067_t = tbl_Aggregate_TD_8247_output.getInt32(i, 1);
            tbl_Filter_TD_7573_output.setInt32(r, 3, _i_class_id4067_t);
            int32_t _i_category_id4069_t = tbl_Aggregate_TD_8247_output.getInt32(i, 2);
            tbl_Filter_TD_7573_output.setInt32(r, 4, _i_category_id4069_t);
            r++;
        }
    }
    tbl_Filter_TD_7573_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7573_output #Row: " << tbl_Filter_TD_7573_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7421(Table &tbl_Aggregate_TD_8690_output, Table &tbl_Aggregate_TD_8113_output, Table &tbl_Filter_TD_7421_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#3550) AND (cast(sales#3550 as decimal(32,6)) > cast(scalar-subquery#3553 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#3981, i_class_id#3983, i_category_id#3985, sales#3550, number_sales#3551L)
    // Output: ListBuffer(sales#3550, number_sales#3551L, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8690_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales3550 = tbl_Aggregate_TD_8690_output.getInt32(i, 3);
        if ((1) && (_sales3550 > tbl_Aggregate_TD_8113_output.getInt32(0, 0))) {
            int32_t _sales3550_t = tbl_Aggregate_TD_8690_output.getInt32(i, 3);
            tbl_Filter_TD_7421_output.setInt32(r, 0, _sales3550_t);
            int64_t _number_sales3551L_t = tbl_Aggregate_TD_8690_output.getInt64(i, 4);
            tbl_Filter_TD_7421_output.setInt64(r, 1, _number_sales3551L_t);
            int32_t _i_brand_id3981_t = tbl_Aggregate_TD_8690_output.getInt32(i, 0);
            tbl_Filter_TD_7421_output.setInt32(r, 2, _i_brand_id3981_t);
            int32_t _i_class_id3983_t = tbl_Aggregate_TD_8690_output.getInt32(i, 1);
            tbl_Filter_TD_7421_output.setInt32(r, 3, _i_class_id3983_t);
            int32_t _i_category_id3985_t = tbl_Aggregate_TD_8690_output.getInt32(i, 2);
            tbl_Filter_TD_7421_output.setInt32(r, 4, _i_category_id3985_t);
            r++;
        }
    }
    tbl_Filter_TD_7421_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7421_output #Row: " << tbl_Filter_TD_7421_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7267(Table &tbl_Aggregate_TD_821_output, Table &tbl_Aggregate_TD_8754_output, Table &tbl_Filter_TD_7267_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#3545) AND (cast(sales#3545 as decimal(32,6)) > cast(scalar-subquery#3548 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#3897, i_class_id#3899, i_category_id#3901, sales#3545, number_sales#3546L)
    // Output: ListBuffer(sales#3545, number_sales#3546L, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_821_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales3545 = tbl_Aggregate_TD_821_output.getInt32(i, 3);
        if ((1) && (_sales3545 > tbl_Aggregate_TD_8754_output.getInt32(0, 0))) {
            int32_t _sales3545_t = tbl_Aggregate_TD_821_output.getInt32(i, 3);
            tbl_Filter_TD_7267_output.setInt32(r, 0, _sales3545_t);
            int64_t _number_sales3546L_t = tbl_Aggregate_TD_821_output.getInt64(i, 4);
            tbl_Filter_TD_7267_output.setInt64(r, 1, _number_sales3546L_t);
            int32_t _i_brand_id3897_t = tbl_Aggregate_TD_821_output.getInt32(i, 0);
            tbl_Filter_TD_7267_output.setInt32(r, 2, _i_brand_id3897_t);
            int32_t _i_class_id3899_t = tbl_Aggregate_TD_821_output.getInt32(i, 1);
            tbl_Filter_TD_7267_output.setInt32(r, 3, _i_class_id3899_t);
            int32_t _i_category_id3901_t = tbl_Aggregate_TD_821_output.getInt32(i, 2);
            tbl_Filter_TD_7267_output.setInt32(r, 4, _i_category_id3901_t);
            r++;
        }
    }
    tbl_Filter_TD_7267_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7267_output #Row: " << tbl_Filter_TD_7267_output.getNumRow() << std::endl;
}

void SW_Project_TD_6549(Table &tbl_Filter_TD_7573_output, Table &tbl_Project_TD_6549_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#4549)
    // Input: ListBuffer(sales#3555, number_sales#3556L, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    // Output: ListBuffer(sales#3555, number_sales#3556L, channel#4549, i_brand_id#4065, i_class_id#4067, i_category_id#4069)
    int nrow1 = tbl_Filter_TD_7573_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales3555 = tbl_Filter_TD_7573_output.getInt32(i, 0);
        int64_t _number_sales3556L = tbl_Filter_TD_7573_output.getInt64(i, 1);
        int32_t _i_brand_id4065 = tbl_Filter_TD_7573_output.getInt32(i, 2);
        int32_t _i_class_id4067 = tbl_Filter_TD_7573_output.getInt32(i, 3);
        int32_t _i_category_id4069 = tbl_Filter_TD_7573_output.getInt32(i, 4);
        std::string _channel4549_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel4549{};
        memcpy(_channel4549.data(), _channel4549_str.data(), (_channel4549_str).length());
        tbl_Project_TD_6549_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel4549);
        tbl_Project_TD_6549_output.setInt32(i, 0, _sales3555);
        tbl_Project_TD_6549_output.setInt64(i, 1, _number_sales3556L);
        tbl_Project_TD_6549_output.setInt32(i, 3, _i_brand_id4065);
        tbl_Project_TD_6549_output.setInt32(i, 4, _i_class_id4067);
        tbl_Project_TD_6549_output.setInt32(i, 5, _i_category_id4069);
    }
    tbl_Project_TD_6549_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6549_output #Row: " << tbl_Project_TD_6549_output.getNumRow() << std::endl;
}

void SW_Project_TD_6593(Table &tbl_Filter_TD_7421_output, Table &tbl_Project_TD_6593_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#4545)
    // Input: ListBuffer(sales#3550, number_sales#3551L, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    // Output: ListBuffer(sales#3550, number_sales#3551L, channel#4545, i_brand_id#3981, i_class_id#3983, i_category_id#3985)
    int nrow1 = tbl_Filter_TD_7421_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales3550 = tbl_Filter_TD_7421_output.getInt32(i, 0);
        int64_t _number_sales3551L = tbl_Filter_TD_7421_output.getInt64(i, 1);
        int32_t _i_brand_id3981 = tbl_Filter_TD_7421_output.getInt32(i, 2);
        int32_t _i_class_id3983 = tbl_Filter_TD_7421_output.getInt32(i, 3);
        int32_t _i_category_id3985 = tbl_Filter_TD_7421_output.getInt32(i, 4);
        std::string _channel4545_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel4545{};
        memcpy(_channel4545.data(), _channel4545_str.data(), (_channel4545_str).length());
        tbl_Project_TD_6593_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel4545);
        tbl_Project_TD_6593_output.setInt32(i, 0, _sales3550);
        tbl_Project_TD_6593_output.setInt64(i, 1, _number_sales3551L);
        tbl_Project_TD_6593_output.setInt32(i, 3, _i_brand_id3981);
        tbl_Project_TD_6593_output.setInt32(i, 4, _i_class_id3983);
        tbl_Project_TD_6593_output.setInt32(i, 5, _i_category_id3985);
    }
    tbl_Project_TD_6593_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6593_output #Row: " << tbl_Project_TD_6593_output.getNumRow() << std::endl;
}

void SW_Project_TD_6918(Table &tbl_Filter_TD_7267_output, Table &tbl_Project_TD_6918_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#4134)
    // Input: ListBuffer(sales#3545, number_sales#3546L, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    // Output: ListBuffer(sales#3545, number_sales#3546L, channel#4134, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int nrow1 = tbl_Filter_TD_7267_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales3545 = tbl_Filter_TD_7267_output.getInt32(i, 0);
        int64_t _number_sales3546L = tbl_Filter_TD_7267_output.getInt64(i, 1);
        int32_t _i_brand_id3897 = tbl_Filter_TD_7267_output.getInt32(i, 2);
        int32_t _i_class_id3899 = tbl_Filter_TD_7267_output.getInt32(i, 3);
        int32_t _i_category_id3901 = tbl_Filter_TD_7267_output.getInt32(i, 4);
        std::string _channel4134_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel4134{};
        memcpy(_channel4134.data(), _channel4134_str.data(), (_channel4134_str).length());
        tbl_Project_TD_6918_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel4134);
        tbl_Project_TD_6918_output.setInt32(i, 0, _sales3545);
        tbl_Project_TD_6918_output.setInt64(i, 1, _number_sales3546L);
        tbl_Project_TD_6918_output.setInt32(i, 3, _i_brand_id3897);
        tbl_Project_TD_6918_output.setInt32(i, 4, _i_class_id3899);
        tbl_Project_TD_6918_output.setInt32(i, 5, _i_category_id3901);
    }
    tbl_Project_TD_6918_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6918_output #Row: " << tbl_Project_TD_6918_output.getNumRow() << std::endl;
}

void SW_Union_TD_5991(Table &tbl_Project_TD_6918_output, Table &tbl_Project_TD_6593_output, Table &tbl_Project_TD_6549_output, Table &tbl_Union_TD_5991_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#3545, number_sales#3546L, channel#4134, i_brand_id#3897, i_class_id#3899, i_category_id#3901)
    int r = 0;
    int row0 = tbl_Project_TD_6918_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5991_output.setInt32(r, 0, tbl_Project_TD_6918_output.getInt32(i, 0));
        tbl_Union_TD_5991_output.setInt32(r, 1, tbl_Project_TD_6918_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel4134_n = tbl_Union_TD_5991_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5991_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel4134_n);
        tbl_Union_TD_5991_output.setInt32(r, 3, tbl_Project_TD_6918_output.getInt32(i, 3));
        tbl_Union_TD_5991_output.setInt32(r, 4, tbl_Project_TD_6918_output.getInt32(i, 4));
        tbl_Union_TD_5991_output.setInt32(r, 5, tbl_Project_TD_6918_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_6593_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5991_output.setInt32(r, 0, tbl_Project_TD_6593_output.getInt32(i, 0));
        tbl_Union_TD_5991_output.setInt32(r, 1, tbl_Project_TD_6593_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel4545_n = tbl_Union_TD_5991_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5991_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel4545_n);
        tbl_Union_TD_5991_output.setInt32(r, 3, tbl_Project_TD_6593_output.getInt32(i, 3));
        tbl_Union_TD_5991_output.setInt32(r, 4, tbl_Project_TD_6593_output.getInt32(i, 4));
        tbl_Union_TD_5991_output.setInt32(r, 5, tbl_Project_TD_6593_output.getInt32(i, 5));
        ++r;
    }
    int row2 = tbl_Project_TD_6549_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5991_output.setInt32(r, 0, tbl_Project_TD_6549_output.getInt32(i, 0));
        tbl_Union_TD_5991_output.setInt32(r, 1, tbl_Project_TD_6549_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel4549_n = tbl_Union_TD_5991_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5991_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel4549_n);
        tbl_Union_TD_5991_output.setInt32(r, 3, tbl_Project_TD_6549_output.getInt32(i, 3));
        tbl_Union_TD_5991_output.setInt32(r, 4, tbl_Project_TD_6549_output.getInt32(i, 4));
        tbl_Union_TD_5991_output.setInt32(r, 5, tbl_Project_TD_6549_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_5991_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5991_output #Row: " << tbl_Union_TD_5991_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3478_key {
    std::string _channel4139;
    int32_t _i_brand_id4140;
    int32_t _i_class_id4141;
    int32_t _i_category_id4142;
    int64_t _spark_grouping_id4138L;
    bool operator==(const SW_Aggregate_TD_3478_key& other) const { return (_channel4139 == other._channel4139) && (_i_brand_id4140 == other._i_brand_id4140) && (_i_class_id4141 == other._i_class_id4141) && (_i_category_id4142 == other._i_category_id4142) && (_spark_grouping_id4138L == other._spark_grouping_id4138L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3478_key> {
    std::size_t operator() (const SW_Aggregate_TD_3478_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel4139)) + (hash<int32_t>()(k._i_brand_id4140)) + (hash<int32_t>()(k._i_class_id4141)) + (hash<int32_t>()(k._i_category_id4142)) + (hash<int64_t>()(k._spark_grouping_id4138L));
    }
};
}
struct SW_Aggregate_TD_3478_payload {
    int32_t _sumsales4129_sum_0;
    int64_t _sumnumber_sales4130L_sum_1;
};
void SW_Aggregate_TD_3478(Table &NULL, Table &tbl_Aggregate_TD_3478_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, spark_grouping_id#4138L, sum(sales#3545) AS sum(sales)#4129, sum(number_sales#3546L) AS sum(number_sales)#4130L)
    // Input: ListBuffer()
    // Output: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    std::unordered_map<SW_Aggregate_TD_3478_key, SW_Aggregate_TD_3478_payload> ht1;
    int nrow1 = NULL.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        SW_Aggregate_TD_3478_key k{std::string(_channel4139.data()), _i_brand_id4140, _i_class_id4141, _i_category_id4142, _spark_grouping_id4138L};
        int64_t _sumsales4129_sum_0 = _sales3545;
        int64_t _sumnumber_sales4130L_sum_1 = _number_sales3546L;
        SW_Aggregate_TD_3478_payload p{_sumsales4129_sum_0, _sumnumber_sales4130L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sumsales4129_sum_0 + _sumsales4129_sum_0;
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
        tbl_Aggregate_TD_3478_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel4139);
        tbl_Aggregate_TD_3478_output.setInt32(r, 1, (it.first)._i_brand_id4140);
        tbl_Aggregate_TD_3478_output.setInt32(r, 2, (it.first)._i_class_id4141);
        tbl_Aggregate_TD_3478_output.setInt32(r, 3, (it.first)._i_category_id4142);
        // _spark_grouping_id4138L not required in the output table
        int32_t _sumsales4129 = (it.second)._sumsales4129_sum_0;
        tbl_Aggregate_TD_3478_output.setInt32(r, 4, _sumsales4129);
        int64_t _sumnumber_sales4130L = (it.second)._sumnumber_sales4130L_sum_1;
        tbl_Aggregate_TD_3478_output.setInt64(r, 5, _sumnumber_sales4130L);
        ++r;
    }
    tbl_Aggregate_TD_3478_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3478_output #Row: " << tbl_Aggregate_TD_3478_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2427(Table &tbl_Aggregate_TD_3478_output, Table &tbl_Sort_TD_2427_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#4139 ASC NULLS FIRST, i_brand_id#4140 ASC NULLS FIRST, i_class_id#4141 ASC NULLS FIRST, i_category_id#4142 ASC NULLS FIRST)
    // Input: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    // Output: ListBuffer(channel#4139, i_brand_id#4140, i_class_id#4141, i_category_id#4142, sum(sales)#4129, sum(number_sales)#4130L)
    struct SW_Sort_TD_2427Row {
        std::string _channel4139;
        int32_t _i_brand_id4140;
        int32_t _i_class_id4141;
        int32_t _i_category_id4142;
        int32_t _sumsales4129;
        int64_t _sumnumber_sales4130L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2427Row& a, const SW_Sort_TD_2427Row& b) const { return 
 (a._channel4139 < b._channel4139) || 
 ((a._channel4139 == b._channel4139) && (a._i_brand_id4140 < b._i_brand_id4140)) || 
 ((a._channel4139 == b._channel4139) && (a._i_brand_id4140 == b._i_brand_id4140) && (a._i_class_id4141 < b._i_class_id4141)) || 
 ((a._channel4139 == b._channel4139) && (a._i_brand_id4140 == b._i_brand_id4140) && (a._i_class_id4141 == b._i_class_id4141) && (a._i_category_id4142 < b._i_category_id4142)); 
}
    }SW_Sort_TD_2427_order; 

    int nrow1 = tbl_Aggregate_TD_3478_output.getNumRow();
    std::vector<SW_Sort_TD_2427Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139 = tbl_Aggregate_TD_3478_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _i_brand_id4140 = tbl_Aggregate_TD_3478_output.getInt32(i, 1);
        int32_t _i_class_id4141 = tbl_Aggregate_TD_3478_output.getInt32(i, 2);
        int32_t _i_category_id4142 = tbl_Aggregate_TD_3478_output.getInt32(i, 3);
        int32_t _sumsales4129 = tbl_Aggregate_TD_3478_output.getInt32(i, 4);
        int64_t _sumnumber_sales4130L = tbl_Aggregate_TD_3478_output.getInt64(i, 5);
        SW_Sort_TD_2427Row t = {std::string(_channel4139.data()),_i_brand_id4140,_i_class_id4141,_i_category_id4142,_sumsales4129,_sumnumber_sales4130L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2427_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel4139{};
        memcpy(_channel4139.data(), (it._channel4139).data(), (it._channel4139).length());
        tbl_Sort_TD_2427_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel4139);
        tbl_Sort_TD_2427_output.setInt32(r, 1, it._i_brand_id4140);
        tbl_Sort_TD_2427_output.setInt32(r, 2, it._i_class_id4141);
        tbl_Sort_TD_2427_output.setInt32(r, 3, it._i_category_id4142);
        tbl_Sort_TD_2427_output.setInt32(r, 4, it._sumsales4129);
        tbl_Sort_TD_2427_output.setInt64(r, 5, it._sumnumber_sales4130L);
        ++r;
    }
    tbl_Sort_TD_2427_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2427_output #Row: " << tbl_Sort_TD_2427_output.getNumRow() << std::endl;
}

