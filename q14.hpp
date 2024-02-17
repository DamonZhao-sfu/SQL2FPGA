#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_23797(Table &tbl_SerializeFromObject_TD_24844_input, Table &tbl_Filter_TD_23797_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12360))
    // Input: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24844_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12360 = tbl_SerializeFromObject_TD_24844_input.getInt32(i, 0);
        if (_i_item_sk12360!= 0) {
            int32_t _i_item_sk12360_t = tbl_SerializeFromObject_TD_24844_input.getInt32(i, 0);
            tbl_Filter_TD_23797_output.setInt32(r, 0, _i_item_sk12360_t);
            int32_t _i_brand_id12367_t = tbl_SerializeFromObject_TD_24844_input.getInt32(i, 1);
            tbl_Filter_TD_23797_output.setInt32(r, 1, _i_brand_id12367_t);
            int32_t _i_class_id12369_t = tbl_SerializeFromObject_TD_24844_input.getInt32(i, 2);
            tbl_Filter_TD_23797_output.setInt32(r, 2, _i_class_id12369_t);
            int32_t _i_category_id12371_t = tbl_SerializeFromObject_TD_24844_input.getInt32(i, 3);
            tbl_Filter_TD_23797_output.setInt32(r, 3, _i_category_id12371_t);
            r++;
        }
    }
    tbl_Filter_TD_23797_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23797_output #Row: " << tbl_Filter_TD_23797_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23647(Table &tbl_SerializeFromObject_TD_24320_input, Table &tbl_Filter_TD_23647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24320_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24320_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24320_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24320_input.getInt32(i, 0);
            tbl_Filter_TD_23647_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24320_input.getInt32(i, 1);
            tbl_Filter_TD_23647_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23647_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23647_output #Row: " << tbl_Filter_TD_23647_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23719(Table &tbl_SerializeFromObject_TD_24745_input, Table &tbl_Filter_TD_23719_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12360))
    // Input: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24745_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12360 = tbl_SerializeFromObject_TD_24745_input.getInt32(i, 0);
        if (_i_item_sk12360!= 0) {
            int32_t _i_item_sk12360_t = tbl_SerializeFromObject_TD_24745_input.getInt32(i, 0);
            tbl_Filter_TD_23719_output.setInt32(r, 0, _i_item_sk12360_t);
            int32_t _i_brand_id12367_t = tbl_SerializeFromObject_TD_24745_input.getInt32(i, 1);
            tbl_Filter_TD_23719_output.setInt32(r, 1, _i_brand_id12367_t);
            int32_t _i_class_id12369_t = tbl_SerializeFromObject_TD_24745_input.getInt32(i, 2);
            tbl_Filter_TD_23719_output.setInt32(r, 2, _i_class_id12369_t);
            int32_t _i_category_id12371_t = tbl_SerializeFromObject_TD_24745_input.getInt32(i, 3);
            tbl_Filter_TD_23719_output.setInt32(r, 3, _i_category_id12371_t);
            r++;
        }
    }
    tbl_Filter_TD_23719_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23719_output #Row: " << tbl_Filter_TD_23719_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23247(Table &tbl_SerializeFromObject_TD_24658_input, Table &tbl_Filter_TD_23247_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24658_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24658_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24658_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24658_input.getInt32(i, 0);
            tbl_Filter_TD_23247_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24658_input.getInt32(i, 1);
            tbl_Filter_TD_23247_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23247_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23247_output #Row: " << tbl_Filter_TD_23247_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23629(Table &tbl_SerializeFromObject_TD_24834_input, Table &tbl_Filter_TD_23629_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12360))
    // Input: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24834_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12360 = tbl_SerializeFromObject_TD_24834_input.getInt32(i, 0);
        if (_i_item_sk12360!= 0) {
            int32_t _i_item_sk12360_t = tbl_SerializeFromObject_TD_24834_input.getInt32(i, 0);
            tbl_Filter_TD_23629_output.setInt32(r, 0, _i_item_sk12360_t);
            int32_t _i_brand_id12367_t = tbl_SerializeFromObject_TD_24834_input.getInt32(i, 1);
            tbl_Filter_TD_23629_output.setInt32(r, 1, _i_brand_id12367_t);
            int32_t _i_class_id12369_t = tbl_SerializeFromObject_TD_24834_input.getInt32(i, 2);
            tbl_Filter_TD_23629_output.setInt32(r, 2, _i_class_id12369_t);
            int32_t _i_category_id12371_t = tbl_SerializeFromObject_TD_24834_input.getInt32(i, 3);
            tbl_Filter_TD_23629_output.setInt32(r, 3, _i_category_id12371_t);
            r++;
        }
    }
    tbl_Filter_TD_23629_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23629_output #Row: " << tbl_Filter_TD_23629_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23503(Table &tbl_SerializeFromObject_TD_24286_input, Table &tbl_Filter_TD_23503_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24286_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24286_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24286_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24286_input.getInt32(i, 0);
            tbl_Filter_TD_23503_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24286_input.getInt32(i, 1);
            tbl_Filter_TD_23503_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23503_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23503_output #Row: " << tbl_Filter_TD_23503_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23135(Table &tbl_SerializeFromObject_TD_2459_input, Table &tbl_Filter_TD_23135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12360))
    // Input: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2459_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12360 = tbl_SerializeFromObject_TD_2459_input.getInt32(i, 0);
        if (_i_item_sk12360!= 0) {
            int32_t _i_item_sk12360_t = tbl_SerializeFromObject_TD_2459_input.getInt32(i, 0);
            tbl_Filter_TD_23135_output.setInt32(r, 0, _i_item_sk12360_t);
            int32_t _i_brand_id12367_t = tbl_SerializeFromObject_TD_2459_input.getInt32(i, 1);
            tbl_Filter_TD_23135_output.setInt32(r, 1, _i_brand_id12367_t);
            int32_t _i_class_id12369_t = tbl_SerializeFromObject_TD_2459_input.getInt32(i, 2);
            tbl_Filter_TD_23135_output.setInt32(r, 2, _i_class_id12369_t);
            int32_t _i_category_id12371_t = tbl_SerializeFromObject_TD_2459_input.getInt32(i, 3);
            tbl_Filter_TD_23135_output.setInt32(r, 3, _i_category_id12371_t);
            r++;
        }
    }
    tbl_Filter_TD_23135_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23135_output #Row: " << tbl_Filter_TD_23135_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23206(Table &tbl_SerializeFromObject_TD_24311_input, Table &tbl_Filter_TD_23206_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24311_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24311_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24311_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24311_input.getInt32(i, 0);
            tbl_Filter_TD_23206_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24311_input.getInt32(i, 1);
            tbl_Filter_TD_23206_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23206_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23206_output #Row: " << tbl_Filter_TD_23206_output.getNumRow() << std::endl;
}

void SW_Filter_TD_239(Table &tbl_SerializeFromObject_TD_24623_input, Table &tbl_Filter_TD_239_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12360))
    // Input: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24623_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12360 = tbl_SerializeFromObject_TD_24623_input.getInt32(i, 0);
        if (_i_item_sk12360!= 0) {
            int32_t _i_item_sk12360_t = tbl_SerializeFromObject_TD_24623_input.getInt32(i, 0);
            tbl_Filter_TD_239_output.setInt32(r, 0, _i_item_sk12360_t);
            int32_t _i_brand_id12367_t = tbl_SerializeFromObject_TD_24623_input.getInt32(i, 1);
            tbl_Filter_TD_239_output.setInt32(r, 1, _i_brand_id12367_t);
            int32_t _i_class_id12369_t = tbl_SerializeFromObject_TD_24623_input.getInt32(i, 2);
            tbl_Filter_TD_239_output.setInt32(r, 2, _i_class_id12369_t);
            int32_t _i_category_id12371_t = tbl_SerializeFromObject_TD_24623_input.getInt32(i, 3);
            tbl_Filter_TD_239_output.setInt32(r, 3, _i_category_id12371_t);
            r++;
        }
    }
    tbl_Filter_TD_239_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_239_output #Row: " << tbl_Filter_TD_239_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23757(Table &tbl_SerializeFromObject_TD_24801_input, Table &tbl_Filter_TD_23757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24801_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24801_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24801_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24801_input.getInt32(i, 0);
            tbl_Filter_TD_23757_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24801_input.getInt32(i, 1);
            tbl_Filter_TD_23757_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23757_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23757_output #Row: " << tbl_Filter_TD_23757_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23866(Table &tbl_SerializeFromObject_TD_24922_input, Table &tbl_Filter_TD_23866_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12360))
    // Input: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24922_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12360 = tbl_SerializeFromObject_TD_24922_input.getInt32(i, 0);
        if (_i_item_sk12360!= 0) {
            int32_t _i_item_sk12360_t = tbl_SerializeFromObject_TD_24922_input.getInt32(i, 0);
            tbl_Filter_TD_23866_output.setInt32(r, 0, _i_item_sk12360_t);
            int32_t _i_brand_id12367_t = tbl_SerializeFromObject_TD_24922_input.getInt32(i, 1);
            tbl_Filter_TD_23866_output.setInt32(r, 1, _i_brand_id12367_t);
            int32_t _i_class_id12369_t = tbl_SerializeFromObject_TD_24922_input.getInt32(i, 2);
            tbl_Filter_TD_23866_output.setInt32(r, 2, _i_class_id12369_t);
            int32_t _i_category_id12371_t = tbl_SerializeFromObject_TD_24922_input.getInt32(i, 3);
            tbl_Filter_TD_23866_output.setInt32(r, 3, _i_category_id12371_t);
            r++;
        }
    }
    tbl_Filter_TD_23866_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23866_output #Row: " << tbl_Filter_TD_23866_output.getNumRow() << std::endl;
}

void SW_Filter_TD_23657(Table &tbl_SerializeFromObject_TD_24127_input, Table &tbl_Filter_TD_23657_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#1119) AND isnotnull(cs_sold_date_sk#1104)))
    // Input: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Output: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_24127_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk1119 = tbl_SerializeFromObject_TD_24127_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk1104 = tbl_SerializeFromObject_TD_24127_input.getInt32(i, 0);
        if ((_cs_item_sk1119!= 0) && (_cs_sold_date_sk1104!= 0)) {
            int32_t _cs_sold_date_sk1104_t = tbl_SerializeFromObject_TD_24127_input.getInt32(i, 0);
            tbl_Filter_TD_23657_output.setInt32(r, 0, _cs_sold_date_sk1104_t);
            int32_t _cs_item_sk1119_t = tbl_SerializeFromObject_TD_24127_input.getInt32(i, 1);
            tbl_Filter_TD_23657_output.setInt32(r, 1, _cs_item_sk1119_t);
            r++;
        }
    }
    tbl_Filter_TD_23657_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_23657_output #Row: " << tbl_Filter_TD_23657_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22493(Table &tbl_SerializeFromObject_TD_23674_input, Table &tbl_Filter_TD_22493_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12388) AND ((d_year#12388 >= 1999) AND (d_year#12388 <= 2001))) AND isnotnull(d_date_sk#12382)))
    // Input: ListBuffer(d_date_sk#12382, d_year#12388)
    // Output: ListBuffer(d_date_sk#12382)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23674_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12388 = tbl_SerializeFromObject_TD_23674_input.getInt32(i, 1);
        int32_t _d_date_sk12382 = tbl_SerializeFromObject_TD_23674_input.getInt32(i, 0);
        if (((_d_year12388!= 0) && ((_d_year12388 >= 1999) && (_d_year12388 <= 2001))) && (_d_date_sk12382!= 0)) {
            int32_t _d_date_sk12382_t = tbl_SerializeFromObject_TD_23674_input.getInt32(i, 0);
            tbl_Filter_TD_22493_output.setInt32(r, 0, _d_date_sk12382_t);
            r++;
        }
    }
    tbl_Filter_TD_22493_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22493_output #Row: " << tbl_Filter_TD_22493_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22808_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22808_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22808_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22808_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22808_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22808_key_rightMajor {
    int32_t _i_item_sk12360;
    bool operator==(const SW_JOIN_INNER_TD_22808_key_rightMajor& other) const {
        return ((_i_item_sk12360 == other._i_item_sk12360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22808_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22808_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12360));
    }
};
}
struct SW_JOIN_INNER_TD_22808_payload_rightMajor {
    int32_t _i_item_sk12360;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_INNER_TD_22808(Table &tbl_Filter_TD_23647_output, Table &tbl_Filter_TD_23797_output, Table &tbl_JOIN_INNER_TD_22808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#12360))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_Filter_TD_23647_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23797_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22808_key_leftMajor, SW_JOIN_INNER_TD_22808_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23647_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23647_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22808_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23647_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23647_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22808_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23797_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23797_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22808_key_leftMajor{_i_item_sk12360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk12360 = tbl_Filter_TD_23797_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_Filter_TD_23797_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_Filter_TD_23797_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_Filter_TD_23797_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 3, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22808_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22808_key_rightMajor, SW_JOIN_INNER_TD_22808_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23797_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23797_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22808_key_rightMajor keyA{_i_item_sk12360_k};
            int32_t _i_item_sk12360 = tbl_Filter_TD_23797_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_Filter_TD_23797_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_Filter_TD_23797_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_Filter_TD_23797_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22808_payload_rightMajor payloadA{_i_item_sk12360, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23647_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23647_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22808_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12360 = (it->second)._i_item_sk12360;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23647_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23647_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 3, _i_category_id12371);
                tbl_JOIN_INNER_TD_22808_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22808_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22808_output #Row: " << tbl_JOIN_INNER_TD_22808_output.getNumRow() << std::endl;
}

void SW_Filter_TD_222(Table &tbl_SerializeFromObject_TD_2339_input, Table &tbl_Filter_TD_222_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12388) AND ((d_year#12388 >= 1999) AND (d_year#12388 <= 2001))) AND isnotnull(d_date_sk#12382)))
    // Input: ListBuffer(d_date_sk#12382, d_year#12388)
    // Output: ListBuffer(d_date_sk#12382)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2339_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12388 = tbl_SerializeFromObject_TD_2339_input.getInt32(i, 1);
        int32_t _d_date_sk12382 = tbl_SerializeFromObject_TD_2339_input.getInt32(i, 0);
        if (((_d_year12388!= 0) && ((_d_year12388 >= 1999) && (_d_year12388 <= 2001))) && (_d_date_sk12382!= 0)) {
            int32_t _d_date_sk12382_t = tbl_SerializeFromObject_TD_2339_input.getInt32(i, 0);
            tbl_Filter_TD_222_output.setInt32(r, 0, _d_date_sk12382_t);
            r++;
        }
    }
    tbl_Filter_TD_222_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_222_output #Row: " << tbl_Filter_TD_222_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22665_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22665_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22665_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22665_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22665_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22665_key_rightMajor {
    int32_t _i_item_sk12360;
    bool operator==(const SW_JOIN_INNER_TD_22665_key_rightMajor& other) const {
        return ((_i_item_sk12360 == other._i_item_sk12360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22665_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22665_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12360));
    }
};
}
struct SW_JOIN_INNER_TD_22665_payload_rightMajor {
    int32_t _i_item_sk12360;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_INNER_TD_22665(Table &tbl_Filter_TD_23247_output, Table &tbl_Filter_TD_23719_output, Table &tbl_JOIN_INNER_TD_22665_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#12360))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_Filter_TD_23247_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23719_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22665_key_leftMajor, SW_JOIN_INNER_TD_22665_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23247_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23247_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22665_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23247_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23247_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22665_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23719_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23719_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22665_key_leftMajor{_i_item_sk12360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk12360 = tbl_Filter_TD_23719_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_Filter_TD_23719_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_Filter_TD_23719_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_Filter_TD_23719_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 3, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22665_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22665_key_rightMajor, SW_JOIN_INNER_TD_22665_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23719_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23719_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22665_key_rightMajor keyA{_i_item_sk12360_k};
            int32_t _i_item_sk12360 = tbl_Filter_TD_23719_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_Filter_TD_23719_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_Filter_TD_23719_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_Filter_TD_23719_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22665_payload_rightMajor payloadA{_i_item_sk12360, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23247_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23247_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22665_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12360 = (it->second)._i_item_sk12360;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23247_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23247_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 3, _i_category_id12371);
                tbl_JOIN_INNER_TD_22665_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22665_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22665_output #Row: " << tbl_JOIN_INNER_TD_22665_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22285(Table &tbl_SerializeFromObject_TD_23652_input, Table &tbl_Filter_TD_22285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12388) AND ((d_year#12388 >= 1999) AND (d_year#12388 <= 2001))) AND isnotnull(d_date_sk#12382)))
    // Input: ListBuffer(d_date_sk#12382, d_year#12388)
    // Output: ListBuffer(d_date_sk#12382)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23652_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12388 = tbl_SerializeFromObject_TD_23652_input.getInt32(i, 1);
        int32_t _d_date_sk12382 = tbl_SerializeFromObject_TD_23652_input.getInt32(i, 0);
        if (((_d_year12388!= 0) && ((_d_year12388 >= 1999) && (_d_year12388 <= 2001))) && (_d_date_sk12382!= 0)) {
            int32_t _d_date_sk12382_t = tbl_SerializeFromObject_TD_23652_input.getInt32(i, 0);
            tbl_Filter_TD_22285_output.setInt32(r, 0, _d_date_sk12382_t);
            r++;
        }
    }
    tbl_Filter_TD_22285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22285_output #Row: " << tbl_Filter_TD_22285_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22932_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22932_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22932_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22932_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22932_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22932_key_rightMajor {
    int32_t _i_item_sk12360;
    bool operator==(const SW_JOIN_INNER_TD_22932_key_rightMajor& other) const {
        return ((_i_item_sk12360 == other._i_item_sk12360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22932_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22932_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12360));
    }
};
}
struct SW_JOIN_INNER_TD_22932_payload_rightMajor {
    int32_t _i_item_sk12360;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_INNER_TD_22932(Table &tbl_Filter_TD_23503_output, Table &tbl_Filter_TD_23629_output, Table &tbl_JOIN_INNER_TD_22932_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#12360))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_Filter_TD_23503_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23629_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22932_key_leftMajor, SW_JOIN_INNER_TD_22932_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23503_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23503_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22932_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23503_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23503_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22932_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23629_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23629_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22932_key_leftMajor{_i_item_sk12360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk12360 = tbl_Filter_TD_23629_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_Filter_TD_23629_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_Filter_TD_23629_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_Filter_TD_23629_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 3, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22932_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22932_key_rightMajor, SW_JOIN_INNER_TD_22932_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23629_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23629_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22932_key_rightMajor keyA{_i_item_sk12360_k};
            int32_t _i_item_sk12360 = tbl_Filter_TD_23629_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_Filter_TD_23629_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_Filter_TD_23629_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_Filter_TD_23629_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22932_payload_rightMajor payloadA{_i_item_sk12360, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23503_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23503_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22932_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12360 = (it->second)._i_item_sk12360;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23503_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23503_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 3, _i_category_id12371);
                tbl_JOIN_INNER_TD_22932_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22932_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22932_output #Row: " << tbl_JOIN_INNER_TD_22932_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22770(Table &tbl_SerializeFromObject_TD_23360_input, Table &tbl_Filter_TD_22770_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12388) AND ((d_year#12388 >= 1999) AND (d_year#12388 <= 2001))) AND isnotnull(d_date_sk#12382)))
    // Input: ListBuffer(d_date_sk#12382, d_year#12388)
    // Output: ListBuffer(d_date_sk#12382)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23360_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12388 = tbl_SerializeFromObject_TD_23360_input.getInt32(i, 1);
        int32_t _d_date_sk12382 = tbl_SerializeFromObject_TD_23360_input.getInt32(i, 0);
        if (((_d_year12388!= 0) && ((_d_year12388 >= 1999) && (_d_year12388 <= 2001))) && (_d_date_sk12382!= 0)) {
            int32_t _d_date_sk12382_t = tbl_SerializeFromObject_TD_23360_input.getInt32(i, 0);
            tbl_Filter_TD_22770_output.setInt32(r, 0, _d_date_sk12382_t);
            r++;
        }
    }
    tbl_Filter_TD_22770_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22770_output #Row: " << tbl_Filter_TD_22770_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22180_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22180_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22180_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22180_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22180_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22180_key_rightMajor {
    int32_t _i_item_sk12360;
    bool operator==(const SW_JOIN_INNER_TD_22180_key_rightMajor& other) const {
        return ((_i_item_sk12360 == other._i_item_sk12360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22180_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22180_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12360));
    }
};
}
struct SW_JOIN_INNER_TD_22180_payload_rightMajor {
    int32_t _i_item_sk12360;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_INNER_TD_22180(Table &tbl_Filter_TD_23206_output, Table &tbl_Filter_TD_23135_output, Table &tbl_JOIN_INNER_TD_22180_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#12360))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_Filter_TD_23206_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23135_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22180_key_leftMajor, SW_JOIN_INNER_TD_22180_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23206_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23206_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22180_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23206_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23206_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22180_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23135_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23135_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22180_key_leftMajor{_i_item_sk12360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk12360 = tbl_Filter_TD_23135_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_Filter_TD_23135_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_Filter_TD_23135_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_Filter_TD_23135_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 3, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22180_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22180_key_rightMajor, SW_JOIN_INNER_TD_22180_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23135_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23135_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22180_key_rightMajor keyA{_i_item_sk12360_k};
            int32_t _i_item_sk12360 = tbl_Filter_TD_23135_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_Filter_TD_23135_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_Filter_TD_23135_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_Filter_TD_23135_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22180_payload_rightMajor payloadA{_i_item_sk12360, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23206_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23206_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22180_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12360 = (it->second)._i_item_sk12360;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23206_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23206_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 3, _i_category_id12371);
                tbl_JOIN_INNER_TD_22180_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22180_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22180_output #Row: " << tbl_JOIN_INNER_TD_22180_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22149(Table &tbl_SerializeFromObject_TD_23287_input, Table &tbl_Filter_TD_22149_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12388) AND ((d_year#12388 >= 1999) AND (d_year#12388 <= 2001))) AND isnotnull(d_date_sk#12382)))
    // Input: ListBuffer(d_date_sk#12382, d_year#12388)
    // Output: ListBuffer(d_date_sk#12382)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_23287_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12388 = tbl_SerializeFromObject_TD_23287_input.getInt32(i, 1);
        int32_t _d_date_sk12382 = tbl_SerializeFromObject_TD_23287_input.getInt32(i, 0);
        if (((_d_year12388!= 0) && ((_d_year12388 >= 1999) && (_d_year12388 <= 2001))) && (_d_date_sk12382!= 0)) {
            int32_t _d_date_sk12382_t = tbl_SerializeFromObject_TD_23287_input.getInt32(i, 0);
            tbl_Filter_TD_22149_output.setInt32(r, 0, _d_date_sk12382_t);
            r++;
        }
    }
    tbl_Filter_TD_22149_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22149_output #Row: " << tbl_Filter_TD_22149_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22320_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22320_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22320_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22320_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22320_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22320_key_rightMajor {
    int32_t _i_item_sk12360;
    bool operator==(const SW_JOIN_INNER_TD_22320_key_rightMajor& other) const {
        return ((_i_item_sk12360 == other._i_item_sk12360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22320_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22320_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12360));
    }
};
}
struct SW_JOIN_INNER_TD_22320_payload_rightMajor {
    int32_t _i_item_sk12360;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_INNER_TD_22320(Table &tbl_Filter_TD_23757_output, Table &tbl_Filter_TD_239_output, Table &tbl_JOIN_INNER_TD_22320_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#12360))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_Filter_TD_23757_output.getNumRow();
    int right_nrow = tbl_Filter_TD_239_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22320_key_leftMajor, SW_JOIN_INNER_TD_22320_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23757_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23757_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22320_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23757_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23757_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22320_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_239_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_239_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22320_key_leftMajor{_i_item_sk12360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk12360 = tbl_Filter_TD_239_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_Filter_TD_239_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_Filter_TD_239_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_Filter_TD_239_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 3, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22320_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22320_key_rightMajor, SW_JOIN_INNER_TD_22320_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_239_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_239_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22320_key_rightMajor keyA{_i_item_sk12360_k};
            int32_t _i_item_sk12360 = tbl_Filter_TD_239_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_Filter_TD_239_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_Filter_TD_239_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_Filter_TD_239_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22320_payload_rightMajor payloadA{_i_item_sk12360, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23757_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23757_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22320_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12360 = (it->second)._i_item_sk12360;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23757_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23757_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 3, _i_category_id12371);
                tbl_JOIN_INNER_TD_22320_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22320_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22320_output #Row: " << tbl_JOIN_INNER_TD_22320_output.getNumRow() << std::endl;
}

void SW_Filter_TD_22347(Table &tbl_SerializeFromObject_TD_2377_input, Table &tbl_Filter_TD_22347_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12388) AND ((d_year#12388 >= 1999) AND (d_year#12388 <= 2001))) AND isnotnull(d_date_sk#12382)))
    // Input: ListBuffer(d_date_sk#12382, d_year#12388)
    // Output: ListBuffer(d_date_sk#12382)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2377_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12388 = tbl_SerializeFromObject_TD_2377_input.getInt32(i, 1);
        int32_t _d_date_sk12382 = tbl_SerializeFromObject_TD_2377_input.getInt32(i, 0);
        if (((_d_year12388!= 0) && ((_d_year12388 >= 1999) && (_d_year12388 <= 2001))) && (_d_date_sk12382!= 0)) {
            int32_t _d_date_sk12382_t = tbl_SerializeFromObject_TD_2377_input.getInt32(i, 0);
            tbl_Filter_TD_22347_output.setInt32(r, 0, _d_date_sk12382_t);
            r++;
        }
    }
    tbl_Filter_TD_22347_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_22347_output #Row: " << tbl_Filter_TD_22347_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_22328_key_leftMajor {
    int32_t _cs_item_sk1119;
    bool operator==(const SW_JOIN_INNER_TD_22328_key_leftMajor& other) const {
        return ((_cs_item_sk1119 == other._cs_item_sk1119));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22328_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22328_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk1119));
    }
};
}
struct SW_JOIN_INNER_TD_22328_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _cs_item_sk1119;
};
struct SW_JOIN_INNER_TD_22328_key_rightMajor {
    int32_t _i_item_sk12360;
    bool operator==(const SW_JOIN_INNER_TD_22328_key_rightMajor& other) const {
        return ((_i_item_sk12360 == other._i_item_sk12360));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_22328_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_22328_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12360));
    }
};
}
struct SW_JOIN_INNER_TD_22328_payload_rightMajor {
    int32_t _i_item_sk12360;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_INNER_TD_22328(Table &tbl_Filter_TD_23657_output, Table &tbl_Filter_TD_23866_output, Table &tbl_JOIN_INNER_TD_22328_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#1119 = i_item_sk#12360))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, cs_item_sk#1119)
    // Right Table: ListBuffer(i_item_sk#12360, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_Filter_TD_23657_output.getNumRow();
    int right_nrow = tbl_Filter_TD_23866_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22328_key_leftMajor, SW_JOIN_INNER_TD_22328_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_23657_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23657_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22328_key_leftMajor keyA{_cs_item_sk1119_k};
            int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23657_output.getInt32(i, 0);
            int32_t _cs_item_sk1119 = tbl_Filter_TD_23657_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_22328_payload_leftMajor payloadA{_cs_sold_date_sk1104, _cs_item_sk1119};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23866_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23866_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22328_key_leftMajor{_i_item_sk12360_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _cs_item_sk1119 = (it->second)._cs_item_sk1119;
                int32_t _i_item_sk12360 = tbl_Filter_TD_23866_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_Filter_TD_23866_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_Filter_TD_23866_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_Filter_TD_23866_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 0, _cs_sold_date_sk1104);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 3, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22328_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_22328_key_rightMajor, SW_JOIN_INNER_TD_22328_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_23866_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12360_k = tbl_Filter_TD_23866_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_22328_key_rightMajor keyA{_i_item_sk12360_k};
            int32_t _i_item_sk12360 = tbl_Filter_TD_23866_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_Filter_TD_23866_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_Filter_TD_23866_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_Filter_TD_23866_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_22328_payload_rightMajor payloadA{_i_item_sk12360, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_23657_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk1119_k = tbl_Filter_TD_23657_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_22328_key_rightMajor{_cs_item_sk1119_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12360 = (it->second)._i_item_sk12360;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _cs_sold_date_sk1104 = tbl_Filter_TD_23657_output.getInt32(i, 0);
                int32_t _cs_item_sk1119 = tbl_Filter_TD_23657_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 1, _i_brand_id12367);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 2, _i_class_id12369);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 3, _i_category_id12371);
                tbl_JOIN_INNER_TD_22328_output.setInt32(r, 0, _cs_sold_date_sk1104);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_22328_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_22328_output #Row: " << tbl_JOIN_INNER_TD_22328_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21555_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21555_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21555_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21555_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21555_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
struct SW_JOIN_INNER_TD_21555_key_rightMajor {
    int32_t _d_date_sk12382;
    bool operator==(const SW_JOIN_INNER_TD_21555_key_rightMajor& other) const {
        return ((_d_date_sk12382 == other._d_date_sk12382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21555_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21555_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12382));
    }
};
}
struct SW_JOIN_INNER_TD_21555_payload_rightMajor {
    int32_t _d_date_sk12382;
};
void SW_JOIN_INNER_TD_21555(Table &tbl_JOIN_INNER_TD_22808_output, Table &tbl_Filter_TD_22493_output, Table &tbl_JOIN_INNER_TD_21555_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#12382))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Right Table: ListBuffer(d_date_sk#12382)
    // Output Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_JOIN_INNER_TD_22808_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22493_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21555_key_leftMajor, SW_JOIN_INNER_TD_21555_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22808_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21555_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21555_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22493_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22493_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21555_key_leftMajor{_d_date_sk12382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _d_date_sk12382 = tbl_Filter_TD_22493_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21555_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21555_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21555_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21555_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21555_key_rightMajor, SW_JOIN_INNER_TD_21555_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22493_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22493_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21555_key_rightMajor keyA{_d_date_sk12382_k};
            int32_t _d_date_sk12382 = tbl_Filter_TD_22493_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21555_payload_rightMajor payloadA{_d_date_sk12382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22808_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21555_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12382 = (it->second)._d_date_sk12382;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22808_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21555_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21555_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21555_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21555_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21555_output #Row: " << tbl_JOIN_INNER_TD_21555_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21573(Table &tbl_SerializeFromObject_TD_22316_input, Table &tbl_Filter_TD_21573_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#12338) AND ((isnotnull(i_brand_id#12345) AND isnotnull(i_class_id#12347)) AND isnotnull(i_category_id#12349))))
    // Input: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22316_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12338 = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 0);
        int32_t _i_brand_id12345 = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 1);
        int32_t _i_class_id12347 = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 2);
        int32_t _i_category_id12349 = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 3);
        if ((_i_item_sk12338!= 0) && (((_i_brand_id12345!= 0) && (_i_class_id12347!= 0)) && (_i_category_id12349!= 0))) {
            int32_t _i_item_sk12338_t = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 0);
            tbl_Filter_TD_21573_output.setInt32(r, 0, _i_item_sk12338_t);
            int32_t _i_brand_id12345_t = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 1);
            tbl_Filter_TD_21573_output.setInt32(r, 1, _i_brand_id12345_t);
            int32_t _i_class_id12347_t = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 2);
            tbl_Filter_TD_21573_output.setInt32(r, 2, _i_class_id12347_t);
            int32_t _i_category_id12349_t = tbl_SerializeFromObject_TD_22316_input.getInt32(i, 3);
            tbl_Filter_TD_21573_output.setInt32(r, 3, _i_category_id12349_t);
            r++;
        }
    }
    tbl_Filter_TD_21573_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21573_output #Row: " << tbl_Filter_TD_21573_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21129_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21129_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21129_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21129_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21129_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
struct SW_JOIN_INNER_TD_21129_key_rightMajor {
    int32_t _d_date_sk12382;
    bool operator==(const SW_JOIN_INNER_TD_21129_key_rightMajor& other) const {
        return ((_d_date_sk12382 == other._d_date_sk12382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21129_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21129_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12382));
    }
};
}
struct SW_JOIN_INNER_TD_21129_payload_rightMajor {
    int32_t _d_date_sk12382;
};
void SW_JOIN_INNER_TD_21129(Table &tbl_JOIN_INNER_TD_22665_output, Table &tbl_Filter_TD_222_output, Table &tbl_JOIN_INNER_TD_21129_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#12382))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Right Table: ListBuffer(d_date_sk#12382)
    // Output Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_JOIN_INNER_TD_22665_output.getNumRow();
    int right_nrow = tbl_Filter_TD_222_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21129_key_leftMajor, SW_JOIN_INNER_TD_21129_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22665_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21129_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21129_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_222_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_222_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21129_key_leftMajor{_d_date_sk12382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _d_date_sk12382 = tbl_Filter_TD_222_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21129_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21129_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21129_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21129_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21129_key_rightMajor, SW_JOIN_INNER_TD_21129_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_222_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_222_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21129_key_rightMajor keyA{_d_date_sk12382_k};
            int32_t _d_date_sk12382 = tbl_Filter_TD_222_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21129_payload_rightMajor payloadA{_d_date_sk12382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22665_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21129_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12382 = (it->second)._d_date_sk12382;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22665_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21129_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21129_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21129_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21129_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21129_output #Row: " << tbl_JOIN_INNER_TD_21129_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21302(Table &tbl_SerializeFromObject_TD_22108_input, Table &tbl_Filter_TD_21302_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#12338) AND ((isnotnull(i_brand_id#12345) AND isnotnull(i_class_id#12347)) AND isnotnull(i_category_id#12349))))
    // Input: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22108_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12338 = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 0);
        int32_t _i_brand_id12345 = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 1);
        int32_t _i_class_id12347 = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 2);
        int32_t _i_category_id12349 = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 3);
        if ((_i_item_sk12338!= 0) && (((_i_brand_id12345!= 0) && (_i_class_id12347!= 0)) && (_i_category_id12349!= 0))) {
            int32_t _i_item_sk12338_t = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 0);
            tbl_Filter_TD_21302_output.setInt32(r, 0, _i_item_sk12338_t);
            int32_t _i_brand_id12345_t = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 1);
            tbl_Filter_TD_21302_output.setInt32(r, 1, _i_brand_id12345_t);
            int32_t _i_class_id12347_t = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 2);
            tbl_Filter_TD_21302_output.setInt32(r, 2, _i_class_id12347_t);
            int32_t _i_category_id12349_t = tbl_SerializeFromObject_TD_22108_input.getInt32(i, 3);
            tbl_Filter_TD_21302_output.setInt32(r, 3, _i_category_id12349_t);
            r++;
        }
    }
    tbl_Filter_TD_21302_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21302_output #Row: " << tbl_Filter_TD_21302_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2135_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_2135_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2135_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2135_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_2135_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
struct SW_JOIN_INNER_TD_2135_key_rightMajor {
    int32_t _d_date_sk12382;
    bool operator==(const SW_JOIN_INNER_TD_2135_key_rightMajor& other) const {
        return ((_d_date_sk12382 == other._d_date_sk12382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2135_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2135_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12382));
    }
};
}
struct SW_JOIN_INNER_TD_2135_payload_rightMajor {
    int32_t _d_date_sk12382;
};
void SW_JOIN_INNER_TD_2135(Table &tbl_JOIN_INNER_TD_22932_output, Table &tbl_Filter_TD_22285_output, Table &tbl_JOIN_INNER_TD_2135_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#12382))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Right Table: ListBuffer(d_date_sk#12382)
    // Output Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_JOIN_INNER_TD_22932_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22285_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2135_key_leftMajor, SW_JOIN_INNER_TD_2135_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22932_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2135_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_2135_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2135_key_leftMajor{_d_date_sk12382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _d_date_sk12382 = tbl_Filter_TD_22285_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2135_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_2135_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_2135_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2135_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2135_key_rightMajor, SW_JOIN_INNER_TD_2135_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2135_key_rightMajor keyA{_d_date_sk12382_k};
            int32_t _d_date_sk12382 = tbl_Filter_TD_22285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2135_payload_rightMajor payloadA{_d_date_sk12382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22932_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2135_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12382 = (it->second)._d_date_sk12382;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22932_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_2135_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_2135_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_2135_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2135_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2135_output #Row: " << tbl_JOIN_INNER_TD_2135_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21378(Table &tbl_SerializeFromObject_TD_22537_input, Table &tbl_Filter_TD_21378_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#12338) AND ((isnotnull(i_brand_id#12345) AND isnotnull(i_class_id#12347)) AND isnotnull(i_category_id#12349))))
    // Input: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22537_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12338 = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 0);
        int32_t _i_brand_id12345 = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 1);
        int32_t _i_class_id12347 = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 2);
        int32_t _i_category_id12349 = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 3);
        if ((_i_item_sk12338!= 0) && (((_i_brand_id12345!= 0) && (_i_class_id12347!= 0)) && (_i_category_id12349!= 0))) {
            int32_t _i_item_sk12338_t = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 0);
            tbl_Filter_TD_21378_output.setInt32(r, 0, _i_item_sk12338_t);
            int32_t _i_brand_id12345_t = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 1);
            tbl_Filter_TD_21378_output.setInt32(r, 1, _i_brand_id12345_t);
            int32_t _i_class_id12347_t = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 2);
            tbl_Filter_TD_21378_output.setInt32(r, 2, _i_class_id12347_t);
            int32_t _i_category_id12349_t = tbl_SerializeFromObject_TD_22537_input.getInt32(i, 3);
            tbl_Filter_TD_21378_output.setInt32(r, 3, _i_category_id12349_t);
            r++;
        }
    }
    tbl_Filter_TD_21378_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21378_output #Row: " << tbl_Filter_TD_21378_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21864_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21864_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21864_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21864_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21864_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
struct SW_JOIN_INNER_TD_21864_key_rightMajor {
    int32_t _d_date_sk12382;
    bool operator==(const SW_JOIN_INNER_TD_21864_key_rightMajor& other) const {
        return ((_d_date_sk12382 == other._d_date_sk12382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21864_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21864_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12382));
    }
};
}
struct SW_JOIN_INNER_TD_21864_payload_rightMajor {
    int32_t _d_date_sk12382;
};
void SW_JOIN_INNER_TD_21864(Table &tbl_JOIN_INNER_TD_22180_output, Table &tbl_Filter_TD_22770_output, Table &tbl_JOIN_INNER_TD_21864_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#12382))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Right Table: ListBuffer(d_date_sk#12382)
    // Output Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_JOIN_INNER_TD_22180_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22770_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21864_key_leftMajor, SW_JOIN_INNER_TD_21864_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22180_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21864_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21864_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22770_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22770_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21864_key_leftMajor{_d_date_sk12382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _d_date_sk12382 = tbl_Filter_TD_22770_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21864_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21864_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21864_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21864_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21864_key_rightMajor, SW_JOIN_INNER_TD_21864_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22770_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22770_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21864_key_rightMajor keyA{_d_date_sk12382_k};
            int32_t _d_date_sk12382 = tbl_Filter_TD_22770_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21864_payload_rightMajor payloadA{_d_date_sk12382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22180_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21864_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12382 = (it->second)._d_date_sk12382;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22180_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21864_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21864_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21864_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21864_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21864_output #Row: " << tbl_JOIN_INNER_TD_21864_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21526(Table &tbl_SerializeFromObject_TD_22568_input, Table &tbl_Filter_TD_21526_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#12338) AND ((isnotnull(i_brand_id#12345) AND isnotnull(i_class_id#12347)) AND isnotnull(i_category_id#12349))))
    // Input: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22568_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12338 = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 0);
        int32_t _i_brand_id12345 = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 1);
        int32_t _i_class_id12347 = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 2);
        int32_t _i_category_id12349 = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 3);
        if ((_i_item_sk12338!= 0) && (((_i_brand_id12345!= 0) && (_i_class_id12347!= 0)) && (_i_category_id12349!= 0))) {
            int32_t _i_item_sk12338_t = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 0);
            tbl_Filter_TD_21526_output.setInt32(r, 0, _i_item_sk12338_t);
            int32_t _i_brand_id12345_t = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 1);
            tbl_Filter_TD_21526_output.setInt32(r, 1, _i_brand_id12345_t);
            int32_t _i_class_id12347_t = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 2);
            tbl_Filter_TD_21526_output.setInt32(r, 2, _i_class_id12347_t);
            int32_t _i_category_id12349_t = tbl_SerializeFromObject_TD_22568_input.getInt32(i, 3);
            tbl_Filter_TD_21526_output.setInt32(r, 3, _i_category_id12349_t);
            r++;
        }
    }
    tbl_Filter_TD_21526_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21526_output #Row: " << tbl_Filter_TD_21526_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_21649_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_21649_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21649_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21649_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_21649_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
struct SW_JOIN_INNER_TD_21649_key_rightMajor {
    int32_t _d_date_sk12382;
    bool operator==(const SW_JOIN_INNER_TD_21649_key_rightMajor& other) const {
        return ((_d_date_sk12382 == other._d_date_sk12382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_21649_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_21649_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12382));
    }
};
}
struct SW_JOIN_INNER_TD_21649_payload_rightMajor {
    int32_t _d_date_sk12382;
};
void SW_JOIN_INNER_TD_21649(Table &tbl_JOIN_INNER_TD_22320_output, Table &tbl_Filter_TD_22149_output, Table &tbl_JOIN_INNER_TD_21649_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#12382))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Right Table: ListBuffer(d_date_sk#12382)
    // Output Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_JOIN_INNER_TD_22320_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22149_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21649_key_leftMajor, SW_JOIN_INNER_TD_21649_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22320_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21649_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_21649_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22149_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22149_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21649_key_leftMajor{_d_date_sk12382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _d_date_sk12382 = tbl_Filter_TD_22149_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_21649_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21649_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21649_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21649_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_21649_key_rightMajor, SW_JOIN_INNER_TD_21649_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22149_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22149_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21649_key_rightMajor keyA{_d_date_sk12382_k};
            int32_t _d_date_sk12382 = tbl_Filter_TD_22149_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_21649_payload_rightMajor payloadA{_d_date_sk12382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22320_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_21649_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12382 = (it->second)._d_date_sk12382;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22320_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_21649_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_21649_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_21649_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_21649_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_21649_output #Row: " << tbl_JOIN_INNER_TD_21649_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21569(Table &tbl_SerializeFromObject_TD_22265_input, Table &tbl_Filter_TD_21569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#12338) AND ((isnotnull(i_brand_id#12345) AND isnotnull(i_class_id#12347)) AND isnotnull(i_category_id#12349))))
    // Input: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_22265_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12338 = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 0);
        int32_t _i_brand_id12345 = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 1);
        int32_t _i_class_id12347 = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 2);
        int32_t _i_category_id12349 = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 3);
        if ((_i_item_sk12338!= 0) && (((_i_brand_id12345!= 0) && (_i_class_id12347!= 0)) && (_i_category_id12349!= 0))) {
            int32_t _i_item_sk12338_t = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 0);
            tbl_Filter_TD_21569_output.setInt32(r, 0, _i_item_sk12338_t);
            int32_t _i_brand_id12345_t = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 1);
            tbl_Filter_TD_21569_output.setInt32(r, 1, _i_brand_id12345_t);
            int32_t _i_class_id12347_t = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 2);
            tbl_Filter_TD_21569_output.setInt32(r, 2, _i_class_id12347_t);
            int32_t _i_category_id12349_t = tbl_SerializeFromObject_TD_22265_input.getInt32(i, 3);
            tbl_Filter_TD_21569_output.setInt32(r, 3, _i_category_id12349_t);
            r++;
        }
    }
    tbl_Filter_TD_21569_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21569_output #Row: " << tbl_Filter_TD_21569_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_2148_key_leftMajor {
    int32_t _cs_sold_date_sk1104;
    bool operator==(const SW_JOIN_INNER_TD_2148_key_leftMajor& other) const {
        return ((_cs_sold_date_sk1104 == other._cs_sold_date_sk1104));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2148_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2148_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk1104));
    }
};
}
struct SW_JOIN_INNER_TD_2148_payload_leftMajor {
    int32_t _cs_sold_date_sk1104;
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
struct SW_JOIN_INNER_TD_2148_key_rightMajor {
    int32_t _d_date_sk12382;
    bool operator==(const SW_JOIN_INNER_TD_2148_key_rightMajor& other) const {
        return ((_d_date_sk12382 == other._d_date_sk12382));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_2148_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_2148_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12382));
    }
};
}
struct SW_JOIN_INNER_TD_2148_payload_rightMajor {
    int32_t _d_date_sk12382;
};
void SW_JOIN_INNER_TD_2148(Table &tbl_JOIN_INNER_TD_22328_output, Table &tbl_Filter_TD_22347_output, Table &tbl_JOIN_INNER_TD_2148_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#1104 = d_date_sk#12382))
    // Left Table: ListBuffer(cs_sold_date_sk#1104, i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Right Table: ListBuffer(d_date_sk#12382)
    // Output Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    int left_nrow = tbl_JOIN_INNER_TD_22328_output.getNumRow();
    int right_nrow = tbl_Filter_TD_22347_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2148_key_leftMajor, SW_JOIN_INNER_TD_2148_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_22328_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2148_key_leftMajor keyA{_cs_sold_date_sk1104_k};
            int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 0);
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 1);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 2);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_2148_payload_leftMajor payloadA{_cs_sold_date_sk1104, _i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_22347_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22347_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2148_key_leftMajor{_d_date_sk12382_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk1104 = (it->second)._cs_sold_date_sk1104;
                int32_t _i_brand_id12367 = (it->second)._i_brand_id12367;
                int32_t _i_class_id12369 = (it->second)._i_class_id12369;
                int32_t _i_category_id12371 = (it->second)._i_category_id12371;
                int32_t _d_date_sk12382 = tbl_Filter_TD_22347_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_2148_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_2148_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_2148_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2148_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_2148_key_rightMajor, SW_JOIN_INNER_TD_2148_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_22347_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12382_k = tbl_Filter_TD_22347_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2148_key_rightMajor keyA{_d_date_sk12382_k};
            int32_t _d_date_sk12382 = tbl_Filter_TD_22347_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_2148_payload_rightMajor payloadA{_d_date_sk12382};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_22328_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk1104_k = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_2148_key_rightMajor{_cs_sold_date_sk1104_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12382 = (it->second)._d_date_sk12382;
                int32_t _cs_sold_date_sk1104 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 0);
                int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 1);
                int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 2);
                int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_22328_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_2148_output.setInt32(r, 0, _i_brand_id12367);
                tbl_JOIN_INNER_TD_2148_output.setInt32(r, 1, _i_class_id12369);
                tbl_JOIN_INNER_TD_2148_output.setInt32(r, 2, _i_category_id12371);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_2148_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_2148_output #Row: " << tbl_JOIN_INNER_TD_2148_output.getNumRow() << std::endl;
}

void SW_Filter_TD_21385(Table &tbl_SerializeFromObject_TD_224_input, Table &tbl_Filter_TD_21385_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(i_item_sk#12338) AND ((isnotnull(i_brand_id#12345) AND isnotnull(i_class_id#12347)) AND isnotnull(i_category_id#12349))))
    // Input: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_224_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12338 = tbl_SerializeFromObject_TD_224_input.getInt32(i, 0);
        int32_t _i_brand_id12345 = tbl_SerializeFromObject_TD_224_input.getInt32(i, 1);
        int32_t _i_class_id12347 = tbl_SerializeFromObject_TD_224_input.getInt32(i, 2);
        int32_t _i_category_id12349 = tbl_SerializeFromObject_TD_224_input.getInt32(i, 3);
        if ((_i_item_sk12338!= 0) && (((_i_brand_id12345!= 0) && (_i_class_id12347!= 0)) && (_i_category_id12349!= 0))) {
            int32_t _i_item_sk12338_t = tbl_SerializeFromObject_TD_224_input.getInt32(i, 0);
            tbl_Filter_TD_21385_output.setInt32(r, 0, _i_item_sk12338_t);
            int32_t _i_brand_id12345_t = tbl_SerializeFromObject_TD_224_input.getInt32(i, 1);
            tbl_Filter_TD_21385_output.setInt32(r, 1, _i_brand_id12345_t);
            int32_t _i_class_id12347_t = tbl_SerializeFromObject_TD_224_input.getInt32(i, 2);
            tbl_Filter_TD_21385_output.setInt32(r, 2, _i_class_id12347_t);
            int32_t _i_category_id12349_t = tbl_SerializeFromObject_TD_224_input.getInt32(i, 3);
            tbl_Filter_TD_21385_output.setInt32(r, 3, _i_category_id12349_t);
            r++;
        }
    }
    tbl_Filter_TD_21385_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_21385_output #Row: " << tbl_Filter_TD_21385_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20666_key_leftMajor {
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20666_key_leftMajor& other) const {
        return ((_i_brand_id12345 == other._i_brand_id12345) && (_i_class_id12347 == other._i_class_id12347) && (_i_category_id12349 == other._i_category_id12349));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20666_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20666_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12345)) + (hash<int32_t>()(k._i_class_id12347)) + (hash<int32_t>()(k._i_category_id12349));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20666_payload_leftMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor& other) const {
        return ((_i_brand_id12367 == other._i_brand_id12367) && (_i_class_id12369 == other._i_class_id12369) && (_i_category_id12371 == other._i_category_id12371));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12367)) + (hash<int32_t>()(k._i_class_id12369)) + (hash<int32_t>()(k._i_category_id12371));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20666_payload_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_LEFTSEMI_TD_20666(Table &tbl_Filter_TD_21573_output, Table &tbl_JOIN_INNER_TD_21555_output, Table &tbl_JOIN_LEFTSEMI_TD_20666_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#12345 <=> i_brand_id#12367) AND (i_class_id#12347 <=> i_class_id#12369)) AND (i_category_id#12349 <=> i_category_id#12371)))
    // Left Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_21573_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21555_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20666_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21555_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21573_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12367_k = tbl_JOIN_INNER_TD_21555_output.getInt32(i, 0);
            int32_t _i_class_id12369_k = tbl_JOIN_INNER_TD_21555_output.getInt32(i, 1);
            int32_t _i_category_id12371_k = tbl_JOIN_INNER_TD_21555_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor keyA{_i_brand_id12367_k, _i_class_id12369_k, _i_category_id12371_k};
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_21555_output.getInt32(i, 0);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_21555_output.getInt32(i, 1);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_21555_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20666_payload_rightMajor payloadA{_i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id12345_k = tbl_Filter_TD_21573_output.getInt32(i, 1);
            int32_t _i_class_id12347_k = tbl_Filter_TD_21573_output.getInt32(i, 2);
            int32_t _i_category_id12349_k = tbl_Filter_TD_21573_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20666_key_rightMajor{_i_brand_id12345_k, _i_class_id12347_k, _i_category_id12349_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12338 = tbl_Filter_TD_21573_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_Filter_TD_21573_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_Filter_TD_21573_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_Filter_TD_21573_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20666_output.setInt32(r, 0, _i_item_sk12338);
                tbl_JOIN_LEFTSEMI_TD_20666_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_LEFTSEMI_TD_20666_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_LEFTSEMI_TD_20666_output.setInt32(r, 3, _i_category_id12349);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20666_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20666_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20666_output.getNumRow() << std::endl;
}

void SW_Filter_TD_2078(Table &tbl_SerializeFromObject_TD_21976_input, Table &tbl_Filter_TD_2078_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21976_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21976_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21976_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21976_input.getInt32(i, 0);
            tbl_Filter_TD_2078_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21976_input.getInt32(i, 1);
            tbl_Filter_TD_2078_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_2078_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_2078_output #Row: " << tbl_Filter_TD_2078_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20478_key_leftMajor {
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20478_key_leftMajor& other) const {
        return ((_i_brand_id12345 == other._i_brand_id12345) && (_i_class_id12347 == other._i_class_id12347) && (_i_category_id12349 == other._i_category_id12349));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20478_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20478_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12345)) + (hash<int32_t>()(k._i_class_id12347)) + (hash<int32_t>()(k._i_category_id12349));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20478_payload_leftMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor& other) const {
        return ((_i_brand_id12367 == other._i_brand_id12367) && (_i_class_id12369 == other._i_class_id12369) && (_i_category_id12371 == other._i_category_id12371));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12367)) + (hash<int32_t>()(k._i_class_id12369)) + (hash<int32_t>()(k._i_category_id12371));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20478_payload_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_LEFTSEMI_TD_20478(Table &tbl_Filter_TD_21302_output, Table &tbl_JOIN_INNER_TD_21129_output, Table &tbl_JOIN_LEFTSEMI_TD_20478_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#12345 <=> i_brand_id#12367) AND (i_class_id#12347 <=> i_class_id#12369)) AND (i_category_id#12349 <=> i_category_id#12371)))
    // Left Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_21302_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21129_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20478_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21129_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21302_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12367_k = tbl_JOIN_INNER_TD_21129_output.getInt32(i, 0);
            int32_t _i_class_id12369_k = tbl_JOIN_INNER_TD_21129_output.getInt32(i, 1);
            int32_t _i_category_id12371_k = tbl_JOIN_INNER_TD_21129_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor keyA{_i_brand_id12367_k, _i_class_id12369_k, _i_category_id12371_k};
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_21129_output.getInt32(i, 0);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_21129_output.getInt32(i, 1);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_21129_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20478_payload_rightMajor payloadA{_i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id12345_k = tbl_Filter_TD_21302_output.getInt32(i, 1);
            int32_t _i_class_id12347_k = tbl_Filter_TD_21302_output.getInt32(i, 2);
            int32_t _i_category_id12349_k = tbl_Filter_TD_21302_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20478_key_rightMajor{_i_brand_id12345_k, _i_class_id12347_k, _i_category_id12349_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12338 = tbl_Filter_TD_21302_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_Filter_TD_21302_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_Filter_TD_21302_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_Filter_TD_21302_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20478_output.setInt32(r, 0, _i_item_sk12338);
                tbl_JOIN_LEFTSEMI_TD_20478_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_LEFTSEMI_TD_20478_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_LEFTSEMI_TD_20478_output.setInt32(r, 3, _i_category_id12349);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20478_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20478_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20478_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20607(Table &tbl_SerializeFromObject_TD_21378_input, Table &tbl_Filter_TD_20607_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21378_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21378_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21378_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21378_input.getInt32(i, 0);
            tbl_Filter_TD_20607_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21378_input.getInt32(i, 1);
            tbl_Filter_TD_20607_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20607_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20607_output #Row: " << tbl_Filter_TD_20607_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20380_key_leftMajor {
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20380_key_leftMajor& other) const {
        return ((_i_brand_id12345 == other._i_brand_id12345) && (_i_class_id12347 == other._i_class_id12347) && (_i_category_id12349 == other._i_category_id12349));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20380_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20380_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12345)) + (hash<int32_t>()(k._i_class_id12347)) + (hash<int32_t>()(k._i_category_id12349));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20380_payload_leftMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor& other) const {
        return ((_i_brand_id12367 == other._i_brand_id12367) && (_i_class_id12369 == other._i_class_id12369) && (_i_category_id12371 == other._i_category_id12371));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12367)) + (hash<int32_t>()(k._i_class_id12369)) + (hash<int32_t>()(k._i_category_id12371));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20380_payload_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_LEFTSEMI_TD_20380(Table &tbl_Filter_TD_21378_output, Table &tbl_JOIN_INNER_TD_2135_output, Table &tbl_JOIN_LEFTSEMI_TD_20380_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#12345 <=> i_brand_id#12367) AND (i_class_id#12347 <=> i_class_id#12369)) AND (i_category_id#12349 <=> i_category_id#12371)))
    // Left Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_21378_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_2135_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20380_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2135_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21378_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12367_k = tbl_JOIN_INNER_TD_2135_output.getInt32(i, 0);
            int32_t _i_class_id12369_k = tbl_JOIN_INNER_TD_2135_output.getInt32(i, 1);
            int32_t _i_category_id12371_k = tbl_JOIN_INNER_TD_2135_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor keyA{_i_brand_id12367_k, _i_class_id12369_k, _i_category_id12371_k};
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_2135_output.getInt32(i, 0);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_2135_output.getInt32(i, 1);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_2135_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20380_payload_rightMajor payloadA{_i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id12345_k = tbl_Filter_TD_21378_output.getInt32(i, 1);
            int32_t _i_class_id12347_k = tbl_Filter_TD_21378_output.getInt32(i, 2);
            int32_t _i_category_id12349_k = tbl_Filter_TD_21378_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20380_key_rightMajor{_i_brand_id12345_k, _i_class_id12347_k, _i_category_id12349_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12338 = tbl_Filter_TD_21378_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_Filter_TD_21378_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_Filter_TD_21378_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_Filter_TD_21378_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20380_output.setInt32(r, 0, _i_item_sk12338);
                tbl_JOIN_LEFTSEMI_TD_20380_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_LEFTSEMI_TD_20380_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_LEFTSEMI_TD_20380_output.setInt32(r, 3, _i_category_id12349);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20380_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20380_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20380_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20155(Table &tbl_SerializeFromObject_TD_21438_input, Table &tbl_Filter_TD_20155_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21438_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21438_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21438_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21438_input.getInt32(i, 0);
            tbl_Filter_TD_20155_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21438_input.getInt32(i, 1);
            tbl_Filter_TD_20155_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20155_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20155_output #Row: " << tbl_Filter_TD_20155_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20114_key_leftMajor {
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20114_key_leftMajor& other) const {
        return ((_i_brand_id12345 == other._i_brand_id12345) && (_i_class_id12347 == other._i_class_id12347) && (_i_category_id12349 == other._i_category_id12349));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20114_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20114_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12345)) + (hash<int32_t>()(k._i_class_id12347)) + (hash<int32_t>()(k._i_category_id12349));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20114_payload_leftMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor& other) const {
        return ((_i_brand_id12367 == other._i_brand_id12367) && (_i_class_id12369 == other._i_class_id12369) && (_i_category_id12371 == other._i_category_id12371));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12367)) + (hash<int32_t>()(k._i_class_id12369)) + (hash<int32_t>()(k._i_category_id12371));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20114_payload_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_LEFTSEMI_TD_20114(Table &tbl_Filter_TD_21526_output, Table &tbl_JOIN_INNER_TD_21864_output, Table &tbl_JOIN_LEFTSEMI_TD_20114_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#12345 <=> i_brand_id#12367) AND (i_class_id#12347 <=> i_class_id#12369)) AND (i_category_id#12349 <=> i_category_id#12371)))
    // Left Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_21526_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21864_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20114_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21864_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21526_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12367_k = tbl_JOIN_INNER_TD_21864_output.getInt32(i, 0);
            int32_t _i_class_id12369_k = tbl_JOIN_INNER_TD_21864_output.getInt32(i, 1);
            int32_t _i_category_id12371_k = tbl_JOIN_INNER_TD_21864_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor keyA{_i_brand_id12367_k, _i_class_id12369_k, _i_category_id12371_k};
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_21864_output.getInt32(i, 0);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_21864_output.getInt32(i, 1);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_21864_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20114_payload_rightMajor payloadA{_i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id12345_k = tbl_Filter_TD_21526_output.getInt32(i, 1);
            int32_t _i_class_id12347_k = tbl_Filter_TD_21526_output.getInt32(i, 2);
            int32_t _i_category_id12349_k = tbl_Filter_TD_21526_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20114_key_rightMajor{_i_brand_id12345_k, _i_class_id12347_k, _i_category_id12349_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12338 = tbl_Filter_TD_21526_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_Filter_TD_21526_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_Filter_TD_21526_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_Filter_TD_21526_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20114_output.setInt32(r, 0, _i_item_sk12338);
                tbl_JOIN_LEFTSEMI_TD_20114_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_LEFTSEMI_TD_20114_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_LEFTSEMI_TD_20114_output.setInt32(r, 3, _i_category_id12349);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20114_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20114_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20114_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20241(Table &tbl_SerializeFromObject_TD_21666_input, Table &tbl_Filter_TD_20241_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21666_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21666_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21666_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21666_input.getInt32(i, 0);
            tbl_Filter_TD_20241_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21666_input.getInt32(i, 1);
            tbl_Filter_TD_20241_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20241_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20241_output #Row: " << tbl_Filter_TD_20241_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20292_key_leftMajor {
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20292_key_leftMajor& other) const {
        return ((_i_brand_id12345 == other._i_brand_id12345) && (_i_class_id12347 == other._i_class_id12347) && (_i_category_id12349 == other._i_category_id12349));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20292_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20292_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12345)) + (hash<int32_t>()(k._i_class_id12347)) + (hash<int32_t>()(k._i_category_id12349));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20292_payload_leftMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor& other) const {
        return ((_i_brand_id12367 == other._i_brand_id12367) && (_i_class_id12369 == other._i_class_id12369) && (_i_category_id12371 == other._i_category_id12371));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12367)) + (hash<int32_t>()(k._i_class_id12369)) + (hash<int32_t>()(k._i_category_id12371));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20292_payload_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_LEFTSEMI_TD_20292(Table &tbl_Filter_TD_21569_output, Table &tbl_JOIN_INNER_TD_21649_output, Table &tbl_JOIN_LEFTSEMI_TD_20292_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#12345 <=> i_brand_id#12367) AND (i_class_id#12347 <=> i_class_id#12369)) AND (i_category_id#12349 <=> i_category_id#12371)))
    // Left Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_21569_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_21649_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20292_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_21649_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21569_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12367_k = tbl_JOIN_INNER_TD_21649_output.getInt32(i, 0);
            int32_t _i_class_id12369_k = tbl_JOIN_INNER_TD_21649_output.getInt32(i, 1);
            int32_t _i_category_id12371_k = tbl_JOIN_INNER_TD_21649_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor keyA{_i_brand_id12367_k, _i_class_id12369_k, _i_category_id12371_k};
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_21649_output.getInt32(i, 0);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_21649_output.getInt32(i, 1);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_21649_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20292_payload_rightMajor payloadA{_i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id12345_k = tbl_Filter_TD_21569_output.getInt32(i, 1);
            int32_t _i_class_id12347_k = tbl_Filter_TD_21569_output.getInt32(i, 2);
            int32_t _i_category_id12349_k = tbl_Filter_TD_21569_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20292_key_rightMajor{_i_brand_id12345_k, _i_class_id12347_k, _i_category_id12349_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12338 = tbl_Filter_TD_21569_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_Filter_TD_21569_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_Filter_TD_21569_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_Filter_TD_21569_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20292_output.setInt32(r, 0, _i_item_sk12338);
                tbl_JOIN_LEFTSEMI_TD_20292_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_LEFTSEMI_TD_20292_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_LEFTSEMI_TD_20292_output.setInt32(r, 3, _i_category_id12349);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20292_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20292_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20292_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20507(Table &tbl_SerializeFromObject_TD_21637_input, Table &tbl_Filter_TD_20507_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21637_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21637_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21637_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21637_input.getInt32(i, 0);
            tbl_Filter_TD_20507_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21637_input.getInt32(i, 1);
            tbl_Filter_TD_20507_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20507_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20507_output #Row: " << tbl_Filter_TD_20507_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_20128_key_leftMajor {
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20128_key_leftMajor& other) const {
        return ((_i_brand_id12345 == other._i_brand_id12345) && (_i_class_id12347 == other._i_class_id12347) && (_i_category_id12349 == other._i_category_id12349));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20128_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20128_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12345)) + (hash<int32_t>()(k._i_class_id12347)) + (hash<int32_t>()(k._i_category_id12349));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20128_payload_leftMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor& other) const {
        return ((_i_brand_id12367 == other._i_brand_id12367) && (_i_class_id12369 == other._i_class_id12369) && (_i_category_id12371 == other._i_category_id12371));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12367)) + (hash<int32_t>()(k._i_class_id12369)) + (hash<int32_t>()(k._i_category_id12371));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_20128_payload_rightMajor {
    int32_t _i_brand_id12367;
    int32_t _i_class_id12369;
    int32_t _i_category_id12371;
};
void SW_JOIN_LEFTSEMI_TD_20128(Table &tbl_Filter_TD_21385_output, Table &tbl_JOIN_INNER_TD_2148_output, Table &tbl_JOIN_LEFTSEMI_TD_20128_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((i_brand_id#12345 <=> i_brand_id#12367) AND (i_class_id#12347 <=> i_class_id#12369)) AND (i_category_id#12349 <=> i_category_id#12371)))
    // Left Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(i_brand_id#12367, i_class_id#12369, i_category_id#12371)
    // Output Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_21385_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_2148_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor, SW_JOIN_LEFTSEMI_TD_20128_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_2148_output.getNumRow();
        int nrow2 = tbl_Filter_TD_21385_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12367_k = tbl_JOIN_INNER_TD_2148_output.getInt32(i, 0);
            int32_t _i_class_id12369_k = tbl_JOIN_INNER_TD_2148_output.getInt32(i, 1);
            int32_t _i_category_id12371_k = tbl_JOIN_INNER_TD_2148_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor keyA{_i_brand_id12367_k, _i_class_id12369_k, _i_category_id12371_k};
            int32_t _i_brand_id12367 = tbl_JOIN_INNER_TD_2148_output.getInt32(i, 0);
            int32_t _i_class_id12369 = tbl_JOIN_INNER_TD_2148_output.getInt32(i, 1);
            int32_t _i_category_id12371 = tbl_JOIN_INNER_TD_2148_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_20128_payload_rightMajor payloadA{_i_brand_id12367, _i_class_id12369, _i_category_id12371};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id12345_k = tbl_Filter_TD_21385_output.getInt32(i, 1);
            int32_t _i_class_id12347_k = tbl_Filter_TD_21385_output.getInt32(i, 2);
            int32_t _i_category_id12349_k = tbl_Filter_TD_21385_output.getInt32(i, 3);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_20128_key_rightMajor{_i_brand_id12345_k, _i_class_id12347_k, _i_category_id12349_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12338 = tbl_Filter_TD_21385_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_Filter_TD_21385_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_Filter_TD_21385_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_Filter_TD_21385_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_20128_output.setInt32(r, 0, _i_item_sk12338);
                tbl_JOIN_LEFTSEMI_TD_20128_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_LEFTSEMI_TD_20128_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_LEFTSEMI_TD_20128_output.setInt32(r, 3, _i_category_id12349);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_20128_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_20128_output #Row: " << tbl_JOIN_LEFTSEMI_TD_20128_output.getNumRow() << std::endl;
}

void SW_Filter_TD_20859(Table &tbl_SerializeFromObject_TD_21233_input, Table &tbl_Filter_TD_20859_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#1208) AND isnotnull(ss_sold_date_sk#1206)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_21233_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk1208 = tbl_SerializeFromObject_TD_21233_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_21233_input.getInt32(i, 0);
        if ((_ss_item_sk1208!= 0) && (_ss_sold_date_sk1206!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_21233_input.getInt32(i, 0);
            tbl_Filter_TD_20859_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_item_sk1208_t = tbl_SerializeFromObject_TD_21233_input.getInt32(i, 1);
            tbl_Filter_TD_20859_output.setInt32(r, 1, _ss_item_sk1208_t);
            r++;
        }
    }
    tbl_Filter_TD_20859_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_20859_output #Row: " << tbl_Filter_TD_20859_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19645(Table &tbl_SerializeFromObject_TD_20407_input, Table &tbl_Filter_TD_19645_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20407_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20407_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20407_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20407_input.getInt32(i, 0);
            tbl_Filter_TD_19645_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19645_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19645_output #Row: " << tbl_Filter_TD_19645_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19988_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19988_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19988_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19988_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19988_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19988_key_rightMajor {
    int32_t _i_item_sk12338;
    bool operator==(const SW_JOIN_INNER_TD_19988_key_rightMajor& other) const {
        return ((_i_item_sk12338 == other._i_item_sk12338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19988_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19988_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12338));
    }
};
}
struct SW_JOIN_INNER_TD_19988_payload_rightMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
void SW_JOIN_INNER_TD_19988(Table &tbl_Filter_TD_2078_output, Table &tbl_JOIN_LEFTSEMI_TD_20666_output, Table &tbl_JOIN_INNER_TD_19988_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#12338))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_2078_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20666_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19988_key_leftMajor, SW_JOIN_INNER_TD_19988_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_2078_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_2078_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19988_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_2078_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_2078_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19988_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20666_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19988_key_leftMajor{_i_item_sk12338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 3, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19988_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19988_key_rightMajor, SW_JOIN_INNER_TD_19988_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20666_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19988_key_rightMajor keyA{_i_item_sk12338_k};
            int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20666_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19988_payload_rightMajor payloadA{_i_item_sk12338, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_2078_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_2078_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19988_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12338 = (it->second)._i_item_sk12338;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_2078_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_2078_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 3, _i_category_id12349);
                tbl_JOIN_INNER_TD_19988_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19988_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19988_output #Row: " << tbl_JOIN_INNER_TD_19988_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19593(Table &tbl_SerializeFromObject_TD_205_input, Table &tbl_Filter_TD_19593_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_205_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_205_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_205_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_205_input.getInt32(i, 0);
            tbl_Filter_TD_19593_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19593_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19593_output #Row: " << tbl_Filter_TD_19593_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19987_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19987_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19987_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19987_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19987_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19987_key_rightMajor {
    int32_t _i_item_sk12338;
    bool operator==(const SW_JOIN_INNER_TD_19987_key_rightMajor& other) const {
        return ((_i_item_sk12338 == other._i_item_sk12338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19987_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19987_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12338));
    }
};
}
struct SW_JOIN_INNER_TD_19987_payload_rightMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
void SW_JOIN_INNER_TD_19987(Table &tbl_Filter_TD_20607_output, Table &tbl_JOIN_LEFTSEMI_TD_20478_output, Table &tbl_JOIN_INNER_TD_19987_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#12338))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_20607_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20478_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19987_key_leftMajor, SW_JOIN_INNER_TD_19987_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20607_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20607_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19987_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20607_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20607_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19987_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20478_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19987_key_leftMajor{_i_item_sk12338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 3, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19987_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19987_key_rightMajor, SW_JOIN_INNER_TD_19987_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20478_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19987_key_rightMajor keyA{_i_item_sk12338_k};
            int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20478_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19987_payload_rightMajor payloadA{_i_item_sk12338, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20607_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20607_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19987_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12338 = (it->second)._i_item_sk12338;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20607_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20607_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 3, _i_category_id12349);
                tbl_JOIN_INNER_TD_19987_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19987_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19987_output #Row: " << tbl_JOIN_INNER_TD_19987_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19734(Table &tbl_SerializeFromObject_TD_20230_input, Table &tbl_Filter_TD_19734_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20230_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20230_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20230_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20230_input.getInt32(i, 0);
            tbl_Filter_TD_19734_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19734_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19734_output #Row: " << tbl_Filter_TD_19734_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19510_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19510_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19510_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19510_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19510_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19510_key_rightMajor {
    int32_t _i_item_sk12338;
    bool operator==(const SW_JOIN_INNER_TD_19510_key_rightMajor& other) const {
        return ((_i_item_sk12338 == other._i_item_sk12338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19510_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19510_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12338));
    }
};
}
struct SW_JOIN_INNER_TD_19510_payload_rightMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
void SW_JOIN_INNER_TD_19510(Table &tbl_Filter_TD_20155_output, Table &tbl_JOIN_LEFTSEMI_TD_20380_output, Table &tbl_JOIN_INNER_TD_19510_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#12338))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_20155_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20380_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19510_key_leftMajor, SW_JOIN_INNER_TD_19510_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20155_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20155_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19510_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20155_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20155_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19510_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20380_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19510_key_leftMajor{_i_item_sk12338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 3, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19510_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19510_key_rightMajor, SW_JOIN_INNER_TD_19510_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20380_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19510_key_rightMajor keyA{_i_item_sk12338_k};
            int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20380_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19510_payload_rightMajor payloadA{_i_item_sk12338, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20155_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20155_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19510_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12338 = (it->second)._i_item_sk12338;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20155_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20155_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 3, _i_category_id12349);
                tbl_JOIN_INNER_TD_19510_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19510_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19510_output #Row: " << tbl_JOIN_INNER_TD_19510_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19755(Table &tbl_SerializeFromObject_TD_2029_input, Table &tbl_Filter_TD_19755_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_2029_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_2029_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_2029_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_2029_input.getInt32(i, 0);
            tbl_Filter_TD_19755_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19755_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19755_output #Row: " << tbl_Filter_TD_19755_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_199_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_199_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_199_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_199_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_199_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_199_key_rightMajor {
    int32_t _i_item_sk12338;
    bool operator==(const SW_JOIN_INNER_TD_199_key_rightMajor& other) const {
        return ((_i_item_sk12338 == other._i_item_sk12338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_199_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_199_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12338));
    }
};
}
struct SW_JOIN_INNER_TD_199_payload_rightMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
void SW_JOIN_INNER_TD_199(Table &tbl_Filter_TD_20241_output, Table &tbl_JOIN_LEFTSEMI_TD_20114_output, Table &tbl_JOIN_INNER_TD_199_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#12338))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_20241_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20114_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_199_key_leftMajor, SW_JOIN_INNER_TD_199_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20241_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20241_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_199_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20241_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20241_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_199_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20114_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_199_key_leftMajor{_i_item_sk12338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 3, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_199_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_199_key_rightMajor, SW_JOIN_INNER_TD_199_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20114_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_199_key_rightMajor keyA{_i_item_sk12338_k};
            int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20114_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_199_payload_rightMajor payloadA{_i_item_sk12338, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20241_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20241_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_199_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12338 = (it->second)._i_item_sk12338;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20241_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20241_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 3, _i_category_id12349);
                tbl_JOIN_INNER_TD_199_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_199_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_199_output #Row: " << tbl_JOIN_INNER_TD_199_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19305(Table &tbl_SerializeFromObject_TD_20463_input, Table &tbl_Filter_TD_19305_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20463_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20463_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20463_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20463_input.getInt32(i, 0);
            tbl_Filter_TD_19305_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19305_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19305_output #Row: " << tbl_Filter_TD_19305_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19789_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19789_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19789_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19789_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19789_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19789_key_rightMajor {
    int32_t _i_item_sk12338;
    bool operator==(const SW_JOIN_INNER_TD_19789_key_rightMajor& other) const {
        return ((_i_item_sk12338 == other._i_item_sk12338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19789_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19789_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12338));
    }
};
}
struct SW_JOIN_INNER_TD_19789_payload_rightMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
void SW_JOIN_INNER_TD_19789(Table &tbl_Filter_TD_20507_output, Table &tbl_JOIN_LEFTSEMI_TD_20292_output, Table &tbl_JOIN_INNER_TD_19789_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#12338))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_20507_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20292_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19789_key_leftMajor, SW_JOIN_INNER_TD_19789_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20507_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20507_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19789_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20507_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20507_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19789_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20292_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19789_key_leftMajor{_i_item_sk12338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 3, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19789_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19789_key_rightMajor, SW_JOIN_INNER_TD_19789_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20292_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19789_key_rightMajor keyA{_i_item_sk12338_k};
            int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20292_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19789_payload_rightMajor payloadA{_i_item_sk12338, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20507_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20507_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19789_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12338 = (it->second)._i_item_sk12338;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20507_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20507_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 3, _i_category_id12349);
                tbl_JOIN_INNER_TD_19789_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19789_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19789_output #Row: " << tbl_JOIN_INNER_TD_19789_output.getNumRow() << std::endl;
}

void SW_Filter_TD_19161(Table &tbl_SerializeFromObject_TD_20126_input, Table &tbl_Filter_TD_19161_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#126) AND ((d_year#126 >= 1999) AND (d_year#126 <= 2001))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_20126_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year126 = tbl_SerializeFromObject_TD_20126_input.getInt32(i, 1);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_20126_input.getInt32(i, 0);
        if (((_d_year126!= 0) && ((_d_year126 >= 1999) && (_d_year126 <= 2001))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_20126_input.getInt32(i, 0);
            tbl_Filter_TD_19161_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_19161_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_19161_output #Row: " << tbl_Filter_TD_19161_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_19746_key_leftMajor {
    int32_t _ss_item_sk1208;
    bool operator==(const SW_JOIN_INNER_TD_19746_key_leftMajor& other) const {
        return ((_ss_item_sk1208 == other._ss_item_sk1208));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19746_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19746_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk1208));
    }
};
}
struct SW_JOIN_INNER_TD_19746_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _ss_item_sk1208;
};
struct SW_JOIN_INNER_TD_19746_key_rightMajor {
    int32_t _i_item_sk12338;
    bool operator==(const SW_JOIN_INNER_TD_19746_key_rightMajor& other) const {
        return ((_i_item_sk12338 == other._i_item_sk12338));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_19746_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_19746_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12338));
    }
};
}
struct SW_JOIN_INNER_TD_19746_payload_rightMajor {
    int32_t _i_item_sk12338;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
void SW_JOIN_INNER_TD_19746(Table &tbl_Filter_TD_20859_output, Table &tbl_JOIN_LEFTSEMI_TD_20128_output, Table &tbl_JOIN_INNER_TD_19746_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#1208 = i_item_sk#12338))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, ss_item_sk#1208)
    // Right Table: ListBuffer(i_item_sk#12338, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_Filter_TD_20859_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_20128_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19746_key_leftMajor, SW_JOIN_INNER_TD_19746_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_20859_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20859_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19746_key_leftMajor keyA{_ss_item_sk1208_k};
            int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20859_output.getInt32(i, 0);
            int32_t _ss_item_sk1208 = tbl_Filter_TD_20859_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_19746_payload_leftMajor payloadA{_ss_sold_date_sk1206, _ss_item_sk1208};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_20128_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19746_key_leftMajor{_i_item_sk12338_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _ss_item_sk1208 = (it->second)._ss_item_sk1208;
                int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 0, _ss_sold_date_sk1206);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 3, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19746_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_19746_key_rightMajor, SW_JOIN_INNER_TD_19746_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_20128_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12338_k = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_19746_key_rightMajor keyA{_i_item_sk12338_k};
            int32_t _i_item_sk12338 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_LEFTSEMI_TD_20128_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_19746_payload_rightMajor payloadA{_i_item_sk12338, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_20859_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk1208_k = tbl_Filter_TD_20859_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_19746_key_rightMajor{_ss_item_sk1208_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12338 = (it->second)._i_item_sk12338;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _ss_sold_date_sk1206 = tbl_Filter_TD_20859_output.getInt32(i, 0);
                int32_t _ss_item_sk1208 = tbl_Filter_TD_20859_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 1, _i_brand_id12345);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 2, _i_class_id12347);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 3, _i_category_id12349);
                tbl_JOIN_INNER_TD_19746_output.setInt32(r, 0, _ss_sold_date_sk1206);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_19746_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_19746_output #Row: " << tbl_JOIN_INNER_TD_19746_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18650(Table &tbl_SerializeFromObject_TD_19964_input, Table &tbl_Filter_TD_18650_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12410))
    // Input: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19964_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12410 = tbl_SerializeFromObject_TD_19964_input.getInt32(i, 0);
        if (_i_item_sk12410!= 0) {
            int32_t _i_item_sk12410_t = tbl_SerializeFromObject_TD_19964_input.getInt32(i, 0);
            tbl_Filter_TD_18650_output.setInt32(r, 0, _i_item_sk12410_t);
            int32_t _i_brand_id12417_t = tbl_SerializeFromObject_TD_19964_input.getInt32(i, 1);
            tbl_Filter_TD_18650_output.setInt32(r, 1, _i_brand_id12417_t);
            int32_t _i_class_id12419_t = tbl_SerializeFromObject_TD_19964_input.getInt32(i, 2);
            tbl_Filter_TD_18650_output.setInt32(r, 2, _i_class_id12419_t);
            int32_t _i_category_id12421_t = tbl_SerializeFromObject_TD_19964_input.getInt32(i, 3);
            tbl_Filter_TD_18650_output.setInt32(r, 3, _i_category_id12421_t);
            r++;
        }
    }
    tbl_Filter_TD_18650_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18650_output #Row: " << tbl_Filter_TD_18650_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18230(Table &tbl_SerializeFromObject_TD_19820_input, Table &tbl_Filter_TD_18230_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19820_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19820_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19820_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19820_input.getInt32(i, 0);
            tbl_Filter_TD_18230_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19820_input.getInt32(i, 1);
            tbl_Filter_TD_18230_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18230_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18230_output #Row: " << tbl_Filter_TD_18230_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18580_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18580_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18580_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18580_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18580_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_INNER_TD_18580_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18580_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18580_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18580_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18580_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18580(Table &tbl_JOIN_INNER_TD_19988_output, Table &tbl_Filter_TD_19645_output, Table &tbl_JOIN_INNER_TD_18580_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_JOIN_INNER_TD_19988_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19645_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18580_key_leftMajor, SW_JOIN_INNER_TD_18580_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19988_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18580_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18580_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19645_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19645_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18580_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _d_date_sk120 = tbl_Filter_TD_19645_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18580_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18580_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18580_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18580_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18580_key_rightMajor, SW_JOIN_INNER_TD_18580_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19645_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19645_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18580_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19645_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18580_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19988_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18580_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19988_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18580_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18580_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18580_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18580_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18580_output #Row: " << tbl_JOIN_INNER_TD_18580_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18615(Table &tbl_SerializeFromObject_TD_19289_input, Table &tbl_Filter_TD_18615_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12410))
    // Input: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19289_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12410 = tbl_SerializeFromObject_TD_19289_input.getInt32(i, 0);
        if (_i_item_sk12410!= 0) {
            int32_t _i_item_sk12410_t = tbl_SerializeFromObject_TD_19289_input.getInt32(i, 0);
            tbl_Filter_TD_18615_output.setInt32(r, 0, _i_item_sk12410_t);
            int32_t _i_brand_id12417_t = tbl_SerializeFromObject_TD_19289_input.getInt32(i, 1);
            tbl_Filter_TD_18615_output.setInt32(r, 1, _i_brand_id12417_t);
            int32_t _i_class_id12419_t = tbl_SerializeFromObject_TD_19289_input.getInt32(i, 2);
            tbl_Filter_TD_18615_output.setInt32(r, 2, _i_class_id12419_t);
            int32_t _i_category_id12421_t = tbl_SerializeFromObject_TD_19289_input.getInt32(i, 3);
            tbl_Filter_TD_18615_output.setInt32(r, 3, _i_category_id12421_t);
            r++;
        }
    }
    tbl_Filter_TD_18615_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18615_output #Row: " << tbl_Filter_TD_18615_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18913(Table &tbl_SerializeFromObject_TD_19891_input, Table &tbl_Filter_TD_18913_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19891_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19891_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19891_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19891_input.getInt32(i, 0);
            tbl_Filter_TD_18913_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19891_input.getInt32(i, 1);
            tbl_Filter_TD_18913_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18913_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18913_output #Row: " << tbl_Filter_TD_18913_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18309_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18309_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18309_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18309_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18309_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_INNER_TD_18309_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18309_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18309_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18309_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18309_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18309(Table &tbl_JOIN_INNER_TD_19987_output, Table &tbl_Filter_TD_19593_output, Table &tbl_JOIN_INNER_TD_18309_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_JOIN_INNER_TD_19987_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19593_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18309_key_leftMajor, SW_JOIN_INNER_TD_18309_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19987_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18309_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18309_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19593_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19593_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18309_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _d_date_sk120 = tbl_Filter_TD_19593_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18309_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18309_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18309_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18309_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18309_key_rightMajor, SW_JOIN_INNER_TD_18309_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19593_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19593_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18309_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19593_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18309_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19987_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18309_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19987_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18309_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18309_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18309_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18309_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18309_output #Row: " << tbl_JOIN_INNER_TD_18309_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18736(Table &tbl_SerializeFromObject_TD_19762_input, Table &tbl_Filter_TD_18736_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12410))
    // Input: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19762_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12410 = tbl_SerializeFromObject_TD_19762_input.getInt32(i, 0);
        if (_i_item_sk12410!= 0) {
            int32_t _i_item_sk12410_t = tbl_SerializeFromObject_TD_19762_input.getInt32(i, 0);
            tbl_Filter_TD_18736_output.setInt32(r, 0, _i_item_sk12410_t);
            int32_t _i_brand_id12417_t = tbl_SerializeFromObject_TD_19762_input.getInt32(i, 1);
            tbl_Filter_TD_18736_output.setInt32(r, 1, _i_brand_id12417_t);
            int32_t _i_class_id12419_t = tbl_SerializeFromObject_TD_19762_input.getInt32(i, 2);
            tbl_Filter_TD_18736_output.setInt32(r, 2, _i_class_id12419_t);
            int32_t _i_category_id12421_t = tbl_SerializeFromObject_TD_19762_input.getInt32(i, 3);
            tbl_Filter_TD_18736_output.setInt32(r, 3, _i_category_id12421_t);
            r++;
        }
    }
    tbl_Filter_TD_18736_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18736_output #Row: " << tbl_Filter_TD_18736_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18640(Table &tbl_SerializeFromObject_TD_19102_input, Table &tbl_Filter_TD_18640_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19102_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19102_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19102_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19102_input.getInt32(i, 0);
            tbl_Filter_TD_18640_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19102_input.getInt32(i, 1);
            tbl_Filter_TD_18640_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18640_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18640_output #Row: " << tbl_Filter_TD_18640_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18462_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18462_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18462_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18462_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18462_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_INNER_TD_18462_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18462_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18462_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18462_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18462_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18462(Table &tbl_JOIN_INNER_TD_19510_output, Table &tbl_Filter_TD_19734_output, Table &tbl_JOIN_INNER_TD_18462_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_JOIN_INNER_TD_19510_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19734_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18462_key_leftMajor, SW_JOIN_INNER_TD_18462_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19510_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18462_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18462_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19734_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19734_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18462_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _d_date_sk120 = tbl_Filter_TD_19734_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18462_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18462_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18462_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18462_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18462_key_rightMajor, SW_JOIN_INNER_TD_18462_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19734_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19734_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18462_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19734_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18462_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19510_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18462_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19510_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18462_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18462_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18462_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18462_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18462_output #Row: " << tbl_JOIN_INNER_TD_18462_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18269(Table &tbl_SerializeFromObject_TD_19419_input, Table &tbl_Filter_TD_18269_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12410))
    // Input: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19419_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12410 = tbl_SerializeFromObject_TD_19419_input.getInt32(i, 0);
        if (_i_item_sk12410!= 0) {
            int32_t _i_item_sk12410_t = tbl_SerializeFromObject_TD_19419_input.getInt32(i, 0);
            tbl_Filter_TD_18269_output.setInt32(r, 0, _i_item_sk12410_t);
            int32_t _i_brand_id12417_t = tbl_SerializeFromObject_TD_19419_input.getInt32(i, 1);
            tbl_Filter_TD_18269_output.setInt32(r, 1, _i_brand_id12417_t);
            int32_t _i_class_id12419_t = tbl_SerializeFromObject_TD_19419_input.getInt32(i, 2);
            tbl_Filter_TD_18269_output.setInt32(r, 2, _i_class_id12419_t);
            int32_t _i_category_id12421_t = tbl_SerializeFromObject_TD_19419_input.getInt32(i, 3);
            tbl_Filter_TD_18269_output.setInt32(r, 3, _i_category_id12421_t);
            r++;
        }
    }
    tbl_Filter_TD_18269_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18269_output #Row: " << tbl_Filter_TD_18269_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18490(Table &tbl_SerializeFromObject_TD_19187_input, Table &tbl_Filter_TD_18490_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19187_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19187_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19187_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19187_input.getInt32(i, 0);
            tbl_Filter_TD_18490_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19187_input.getInt32(i, 1);
            tbl_Filter_TD_18490_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18490_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18490_output #Row: " << tbl_Filter_TD_18490_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1868_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_1868_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1868_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1868_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_1868_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_INNER_TD_1868_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_1868_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1868_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1868_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_1868_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_1868(Table &tbl_JOIN_INNER_TD_199_output, Table &tbl_Filter_TD_19755_output, Table &tbl_JOIN_INNER_TD_1868_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_JOIN_INNER_TD_199_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19755_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1868_key_leftMajor, SW_JOIN_INNER_TD_1868_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_199_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_199_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1868_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_1868_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19755_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19755_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1868_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _d_date_sk120 = tbl_Filter_TD_19755_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1868_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_1868_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_1868_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1868_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1868_key_rightMajor, SW_JOIN_INNER_TD_1868_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19755_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19755_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1868_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19755_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1868_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_199_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_199_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1868_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_199_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_1868_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_1868_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_1868_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1868_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1868_output #Row: " << tbl_JOIN_INNER_TD_1868_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18934(Table &tbl_SerializeFromObject_TD_19652_input, Table &tbl_Filter_TD_18934_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12410))
    // Input: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19652_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12410 = tbl_SerializeFromObject_TD_19652_input.getInt32(i, 0);
        if (_i_item_sk12410!= 0) {
            int32_t _i_item_sk12410_t = tbl_SerializeFromObject_TD_19652_input.getInt32(i, 0);
            tbl_Filter_TD_18934_output.setInt32(r, 0, _i_item_sk12410_t);
            int32_t _i_brand_id12417_t = tbl_SerializeFromObject_TD_19652_input.getInt32(i, 1);
            tbl_Filter_TD_18934_output.setInt32(r, 1, _i_brand_id12417_t);
            int32_t _i_class_id12419_t = tbl_SerializeFromObject_TD_19652_input.getInt32(i, 2);
            tbl_Filter_TD_18934_output.setInt32(r, 2, _i_class_id12419_t);
            int32_t _i_category_id12421_t = tbl_SerializeFromObject_TD_19652_input.getInt32(i, 3);
            tbl_Filter_TD_18934_output.setInt32(r, 3, _i_category_id12421_t);
            r++;
        }
    }
    tbl_Filter_TD_18934_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18934_output #Row: " << tbl_Filter_TD_18934_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18917(Table &tbl_SerializeFromObject_TD_19793_input, Table &tbl_Filter_TD_18917_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19793_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19793_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19793_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19793_input.getInt32(i, 0);
            tbl_Filter_TD_18917_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19793_input.getInt32(i, 1);
            tbl_Filter_TD_18917_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18917_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18917_output #Row: " << tbl_Filter_TD_18917_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18658_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18658_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18658_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18658_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18658_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_INNER_TD_18658_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18658_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18658_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18658_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18658_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18658(Table &tbl_JOIN_INNER_TD_19789_output, Table &tbl_Filter_TD_19305_output, Table &tbl_JOIN_INNER_TD_18658_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_JOIN_INNER_TD_19789_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19305_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18658_key_leftMajor, SW_JOIN_INNER_TD_18658_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19789_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18658_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18658_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19305_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19305_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18658_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _d_date_sk120 = tbl_Filter_TD_19305_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18658_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18658_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18658_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18658_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18658_key_rightMajor, SW_JOIN_INNER_TD_18658_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19305_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19305_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18658_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19305_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18658_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19789_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18658_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19789_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18658_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18658_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18658_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18658_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18658_output #Row: " << tbl_JOIN_INNER_TD_18658_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18859(Table &tbl_SerializeFromObject_TD_19232_input, Table &tbl_Filter_TD_18859_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12410))
    // Input: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19232_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12410 = tbl_SerializeFromObject_TD_19232_input.getInt32(i, 0);
        if (_i_item_sk12410!= 0) {
            int32_t _i_item_sk12410_t = tbl_SerializeFromObject_TD_19232_input.getInt32(i, 0);
            tbl_Filter_TD_18859_output.setInt32(r, 0, _i_item_sk12410_t);
            int32_t _i_brand_id12417_t = tbl_SerializeFromObject_TD_19232_input.getInt32(i, 1);
            tbl_Filter_TD_18859_output.setInt32(r, 1, _i_brand_id12417_t);
            int32_t _i_class_id12419_t = tbl_SerializeFromObject_TD_19232_input.getInt32(i, 2);
            tbl_Filter_TD_18859_output.setInt32(r, 2, _i_class_id12419_t);
            int32_t _i_category_id12421_t = tbl_SerializeFromObject_TD_19232_input.getInt32(i, 3);
            tbl_Filter_TD_18859_output.setInt32(r, 3, _i_category_id12421_t);
            r++;
        }
    }
    tbl_Filter_TD_18859_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18859_output #Row: " << tbl_Filter_TD_18859_output.getNumRow() << std::endl;
}

void SW_Filter_TD_18170(Table &tbl_SerializeFromObject_TD_19726_input, Table &tbl_Filter_TD_18170_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#732) AND isnotnull(ws_sold_date_sk#729)))
    // Input: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Output: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_19726_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk732 = tbl_SerializeFromObject_TD_19726_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk729 = tbl_SerializeFromObject_TD_19726_input.getInt32(i, 0);
        if ((_ws_item_sk732!= 0) && (_ws_sold_date_sk729!= 0)) {
            int32_t _ws_sold_date_sk729_t = tbl_SerializeFromObject_TD_19726_input.getInt32(i, 0);
            tbl_Filter_TD_18170_output.setInt32(r, 0, _ws_sold_date_sk729_t);
            int32_t _ws_item_sk732_t = tbl_SerializeFromObject_TD_19726_input.getInt32(i, 1);
            tbl_Filter_TD_18170_output.setInt32(r, 1, _ws_item_sk732_t);
            r++;
        }
    }
    tbl_Filter_TD_18170_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_18170_output #Row: " << tbl_Filter_TD_18170_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_18539_key_leftMajor {
    int32_t _ss_sold_date_sk1206;
    bool operator==(const SW_JOIN_INNER_TD_18539_key_leftMajor& other) const {
        return ((_ss_sold_date_sk1206 == other._ss_sold_date_sk1206));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18539_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18539_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk1206));
    }
};
}
struct SW_JOIN_INNER_TD_18539_payload_leftMajor {
    int32_t _ss_sold_date_sk1206;
    int32_t _i_brand_id12345;
    int32_t _i_class_id12347;
    int32_t _i_category_id12349;
};
struct SW_JOIN_INNER_TD_18539_key_rightMajor {
    int32_t _d_date_sk120;
    bool operator==(const SW_JOIN_INNER_TD_18539_key_rightMajor& other) const {
        return ((_d_date_sk120 == other._d_date_sk120));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_18539_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_18539_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk120));
    }
};
}
struct SW_JOIN_INNER_TD_18539_payload_rightMajor {
    int32_t _d_date_sk120;
};
void SW_JOIN_INNER_TD_18539(Table &tbl_JOIN_INNER_TD_19746_output, Table &tbl_Filter_TD_19161_output, Table &tbl_JOIN_INNER_TD_18539_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#1206 = d_date_sk#120))
    // Left Table: ListBuffer(ss_sold_date_sk#1206, i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    int left_nrow = tbl_JOIN_INNER_TD_19746_output.getNumRow();
    int right_nrow = tbl_Filter_TD_19161_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18539_key_leftMajor, SW_JOIN_INNER_TD_18539_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_19746_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18539_key_leftMajor keyA{_ss_sold_date_sk1206_k};
            int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 0);
            int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 1);
            int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 2);
            int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_18539_payload_leftMajor payloadA{_ss_sold_date_sk1206, _i_brand_id12345, _i_class_id12347, _i_category_id12349};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_19161_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19161_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18539_key_leftMajor{_d_date_sk120_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk1206 = (it->second)._ss_sold_date_sk1206;
                int32_t _i_brand_id12345 = (it->second)._i_brand_id12345;
                int32_t _i_class_id12347 = (it->second)._i_class_id12347;
                int32_t _i_category_id12349 = (it->second)._i_category_id12349;
                int32_t _d_date_sk120 = tbl_Filter_TD_19161_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_18539_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18539_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18539_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18539_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_18539_key_rightMajor, SW_JOIN_INNER_TD_18539_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_19161_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk120_k = tbl_Filter_TD_19161_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18539_key_rightMajor keyA{_d_date_sk120_k};
            int32_t _d_date_sk120 = tbl_Filter_TD_19161_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_18539_payload_rightMajor payloadA{_d_date_sk120};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_19746_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk1206_k = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_18539_key_rightMajor{_ss_sold_date_sk1206_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk120 = (it->second)._d_date_sk120;
                int32_t _ss_sold_date_sk1206 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 0);
                int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 1);
                int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 2);
                int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_19746_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_18539_output.setInt32(r, 0, _i_brand_id12345);
                tbl_JOIN_INNER_TD_18539_output.setInt32(r, 1, _i_class_id12347);
                tbl_JOIN_INNER_TD_18539_output.setInt32(r, 2, _i_category_id12349);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_18539_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_18539_output #Row: " << tbl_JOIN_INNER_TD_18539_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17529(Table &tbl_SerializeFromObject_TD_18445_input, Table &tbl_Filter_TD_17529_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12438) AND ((d_year#12438 >= 1999) AND (d_year#12438 <= 2001))) AND isnotnull(d_date_sk#12432)))
    // Input: ListBuffer(d_date_sk#12432, d_year#12438)
    // Output: ListBuffer(d_date_sk#12432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18445_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12438 = tbl_SerializeFromObject_TD_18445_input.getInt32(i, 1);
        int32_t _d_date_sk12432 = tbl_SerializeFromObject_TD_18445_input.getInt32(i, 0);
        if (((_d_year12438!= 0) && ((_d_year12438 >= 1999) && (_d_year12438 <= 2001))) && (_d_date_sk12432!= 0)) {
            int32_t _d_date_sk12432_t = tbl_SerializeFromObject_TD_18445_input.getInt32(i, 0);
            tbl_Filter_TD_17529_output.setInt32(r, 0, _d_date_sk12432_t);
            r++;
        }
    }
    tbl_Filter_TD_17529_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17529_output #Row: " << tbl_Filter_TD_17529_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17757_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17757_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17757_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17757_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17757_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17757_key_rightMajor {
    int32_t _i_item_sk12410;
    bool operator==(const SW_JOIN_INNER_TD_17757_key_rightMajor& other) const {
        return ((_i_item_sk12410 == other._i_item_sk12410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17757_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17757_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12410));
    }
};
}
struct SW_JOIN_INNER_TD_17757_payload_rightMajor {
    int32_t _i_item_sk12410;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_INNER_TD_17757(Table &tbl_Filter_TD_18230_output, Table &tbl_Filter_TD_18650_output, Table &tbl_JOIN_INNER_TD_17757_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#12410))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_Filter_TD_18230_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18650_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17757_key_leftMajor, SW_JOIN_INNER_TD_17757_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18230_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18230_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17757_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18230_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18230_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17757_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18650_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18650_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17757_key_leftMajor{_i_item_sk12410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk12410 = tbl_Filter_TD_18650_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_Filter_TD_18650_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_Filter_TD_18650_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_Filter_TD_18650_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 3, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17757_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17757_key_rightMajor, SW_JOIN_INNER_TD_17757_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18650_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18650_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17757_key_rightMajor keyA{_i_item_sk12410_k};
            int32_t _i_item_sk12410 = tbl_Filter_TD_18650_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_Filter_TD_18650_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_Filter_TD_18650_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_Filter_TD_18650_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17757_payload_rightMajor payloadA{_i_item_sk12410, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18230_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18230_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17757_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12410 = (it->second)._i_item_sk12410;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18230_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18230_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 3, _i_category_id12421);
                tbl_JOIN_INNER_TD_17757_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17757_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17757_output #Row: " << tbl_JOIN_INNER_TD_17757_output.getNumRow() << std::endl;
}

void SW_Project_TD_17123(Table &tbl_JOIN_INNER_TD_18580_output, Table &tbl_Project_TD_17123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#12345 AS brand_id#12327, i_class_id#12347 AS class_id#12328, i_category_id#12349 AS category_id#12329)
    // Input: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int nrow1 = tbl_JOIN_INNER_TD_18580_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_18580_output.getInt32(i, 0);
        int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_18580_output.getInt32(i, 1);
        int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_18580_output.getInt32(i, 2);
        int32_t _brand_id12327 = _i_brand_id12345;
        tbl_Project_TD_17123_output.setInt32(i, 0, _brand_id12327);
        int32_t _class_id12328 = _i_class_id12347;
        tbl_Project_TD_17123_output.setInt32(i, 1, _class_id12328);
        int32_t _category_id12329 = _i_category_id12349;
        tbl_Project_TD_17123_output.setInt32(i, 2, _category_id12329);
    }
    tbl_Project_TD_17123_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17123_output #Row: " << tbl_Project_TD_17123_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17941(Table &tbl_SerializeFromObject_TD_18382_input, Table &tbl_Filter_TD_17941_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12438) AND ((d_year#12438 >= 1999) AND (d_year#12438 <= 2001))) AND isnotnull(d_date_sk#12432)))
    // Input: ListBuffer(d_date_sk#12432, d_year#12438)
    // Output: ListBuffer(d_date_sk#12432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18382_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12438 = tbl_SerializeFromObject_TD_18382_input.getInt32(i, 1);
        int32_t _d_date_sk12432 = tbl_SerializeFromObject_TD_18382_input.getInt32(i, 0);
        if (((_d_year12438!= 0) && ((_d_year12438 >= 1999) && (_d_year12438 <= 2001))) && (_d_date_sk12432!= 0)) {
            int32_t _d_date_sk12432_t = tbl_SerializeFromObject_TD_18382_input.getInt32(i, 0);
            tbl_Filter_TD_17941_output.setInt32(r, 0, _d_date_sk12432_t);
            r++;
        }
    }
    tbl_Filter_TD_17941_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17941_output #Row: " << tbl_Filter_TD_17941_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17337_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17337_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17337_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17337_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17337_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17337_key_rightMajor {
    int32_t _i_item_sk12410;
    bool operator==(const SW_JOIN_INNER_TD_17337_key_rightMajor& other) const {
        return ((_i_item_sk12410 == other._i_item_sk12410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17337_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17337_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12410));
    }
};
}
struct SW_JOIN_INNER_TD_17337_payload_rightMajor {
    int32_t _i_item_sk12410;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_INNER_TD_17337(Table &tbl_Filter_TD_18913_output, Table &tbl_Filter_TD_18615_output, Table &tbl_JOIN_INNER_TD_17337_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#12410))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_Filter_TD_18913_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18615_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17337_key_leftMajor, SW_JOIN_INNER_TD_17337_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18913_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18913_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17337_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18913_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18913_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17337_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18615_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18615_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17337_key_leftMajor{_i_item_sk12410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk12410 = tbl_Filter_TD_18615_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_Filter_TD_18615_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_Filter_TD_18615_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_Filter_TD_18615_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 3, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17337_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17337_key_rightMajor, SW_JOIN_INNER_TD_17337_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18615_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18615_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17337_key_rightMajor keyA{_i_item_sk12410_k};
            int32_t _i_item_sk12410 = tbl_Filter_TD_18615_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_Filter_TD_18615_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_Filter_TD_18615_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_Filter_TD_18615_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17337_payload_rightMajor payloadA{_i_item_sk12410, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18913_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18913_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17337_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12410 = (it->second)._i_item_sk12410;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18913_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18913_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 3, _i_category_id12421);
                tbl_JOIN_INNER_TD_17337_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17337_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17337_output #Row: " << tbl_JOIN_INNER_TD_17337_output.getNumRow() << std::endl;
}

void SW_Project_TD_17967(Table &tbl_JOIN_INNER_TD_18309_output, Table &tbl_Project_TD_17967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#12345 AS brand_id#12327, i_class_id#12347 AS class_id#12328, i_category_id#12349 AS category_id#12329)
    // Input: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int nrow1 = tbl_JOIN_INNER_TD_18309_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_18309_output.getInt32(i, 0);
        int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_18309_output.getInt32(i, 1);
        int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_18309_output.getInt32(i, 2);
        int32_t _brand_id12327 = _i_brand_id12345;
        tbl_Project_TD_17967_output.setInt32(i, 0, _brand_id12327);
        int32_t _class_id12328 = _i_class_id12347;
        tbl_Project_TD_17967_output.setInt32(i, 1, _class_id12328);
        int32_t _category_id12329 = _i_category_id12349;
        tbl_Project_TD_17967_output.setInt32(i, 2, _category_id12329);
    }
    tbl_Project_TD_17967_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17967_output #Row: " << tbl_Project_TD_17967_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1756(Table &tbl_SerializeFromObject_TD_1865_input, Table &tbl_Filter_TD_1756_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12438) AND ((d_year#12438 >= 1999) AND (d_year#12438 <= 2001))) AND isnotnull(d_date_sk#12432)))
    // Input: ListBuffer(d_date_sk#12432, d_year#12438)
    // Output: ListBuffer(d_date_sk#12432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1865_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12438 = tbl_SerializeFromObject_TD_1865_input.getInt32(i, 1);
        int32_t _d_date_sk12432 = tbl_SerializeFromObject_TD_1865_input.getInt32(i, 0);
        if (((_d_year12438!= 0) && ((_d_year12438 >= 1999) && (_d_year12438 <= 2001))) && (_d_date_sk12432!= 0)) {
            int32_t _d_date_sk12432_t = tbl_SerializeFromObject_TD_1865_input.getInt32(i, 0);
            tbl_Filter_TD_1756_output.setInt32(r, 0, _d_date_sk12432_t);
            r++;
        }
    }
    tbl_Filter_TD_1756_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1756_output #Row: " << tbl_Filter_TD_1756_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17364_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17364_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17364_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17364_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17364_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17364_key_rightMajor {
    int32_t _i_item_sk12410;
    bool operator==(const SW_JOIN_INNER_TD_17364_key_rightMajor& other) const {
        return ((_i_item_sk12410 == other._i_item_sk12410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17364_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17364_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12410));
    }
};
}
struct SW_JOIN_INNER_TD_17364_payload_rightMajor {
    int32_t _i_item_sk12410;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_INNER_TD_17364(Table &tbl_Filter_TD_18640_output, Table &tbl_Filter_TD_18736_output, Table &tbl_JOIN_INNER_TD_17364_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#12410))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_Filter_TD_18640_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18736_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17364_key_leftMajor, SW_JOIN_INNER_TD_17364_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18640_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18640_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17364_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18640_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18640_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17364_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18736_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18736_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17364_key_leftMajor{_i_item_sk12410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk12410 = tbl_Filter_TD_18736_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_Filter_TD_18736_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_Filter_TD_18736_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_Filter_TD_18736_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 3, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17364_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17364_key_rightMajor, SW_JOIN_INNER_TD_17364_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18736_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18736_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17364_key_rightMajor keyA{_i_item_sk12410_k};
            int32_t _i_item_sk12410 = tbl_Filter_TD_18736_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_Filter_TD_18736_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_Filter_TD_18736_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_Filter_TD_18736_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17364_payload_rightMajor payloadA{_i_item_sk12410, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18640_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18640_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17364_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12410 = (it->second)._i_item_sk12410;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18640_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18640_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 3, _i_category_id12421);
                tbl_JOIN_INNER_TD_17364_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17364_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17364_output #Row: " << tbl_JOIN_INNER_TD_17364_output.getNumRow() << std::endl;
}

void SW_Project_TD_1763(Table &tbl_JOIN_INNER_TD_18462_output, Table &tbl_Project_TD_1763_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#12345 AS brand_id#12327, i_class_id#12347 AS class_id#12328, i_category_id#12349 AS category_id#12329)
    // Input: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int nrow1 = tbl_JOIN_INNER_TD_18462_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_18462_output.getInt32(i, 0);
        int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_18462_output.getInt32(i, 1);
        int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_18462_output.getInt32(i, 2);
        int32_t _brand_id12327 = _i_brand_id12345;
        tbl_Project_TD_1763_output.setInt32(i, 0, _brand_id12327);
        int32_t _class_id12328 = _i_class_id12347;
        tbl_Project_TD_1763_output.setInt32(i, 1, _class_id12328);
        int32_t _category_id12329 = _i_category_id12349;
        tbl_Project_TD_1763_output.setInt32(i, 2, _category_id12329);
    }
    tbl_Project_TD_1763_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1763_output #Row: " << tbl_Project_TD_1763_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17632(Table &tbl_SerializeFromObject_TD_1817_input, Table &tbl_Filter_TD_17632_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12438) AND ((d_year#12438 >= 1999) AND (d_year#12438 <= 2001))) AND isnotnull(d_date_sk#12432)))
    // Input: ListBuffer(d_date_sk#12432, d_year#12438)
    // Output: ListBuffer(d_date_sk#12432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1817_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12438 = tbl_SerializeFromObject_TD_1817_input.getInt32(i, 1);
        int32_t _d_date_sk12432 = tbl_SerializeFromObject_TD_1817_input.getInt32(i, 0);
        if (((_d_year12438!= 0) && ((_d_year12438 >= 1999) && (_d_year12438 <= 2001))) && (_d_date_sk12432!= 0)) {
            int32_t _d_date_sk12432_t = tbl_SerializeFromObject_TD_1817_input.getInt32(i, 0);
            tbl_Filter_TD_17632_output.setInt32(r, 0, _d_date_sk12432_t);
            r++;
        }
    }
    tbl_Filter_TD_17632_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17632_output #Row: " << tbl_Filter_TD_17632_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17260_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17260_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17260_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17260_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17260_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17260_key_rightMajor {
    int32_t _i_item_sk12410;
    bool operator==(const SW_JOIN_INNER_TD_17260_key_rightMajor& other) const {
        return ((_i_item_sk12410 == other._i_item_sk12410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17260_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17260_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12410));
    }
};
}
struct SW_JOIN_INNER_TD_17260_payload_rightMajor {
    int32_t _i_item_sk12410;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_INNER_TD_17260(Table &tbl_Filter_TD_18490_output, Table &tbl_Filter_TD_18269_output, Table &tbl_JOIN_INNER_TD_17260_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#12410))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_Filter_TD_18490_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18269_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17260_key_leftMajor, SW_JOIN_INNER_TD_17260_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18490_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18490_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17260_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18490_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18490_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17260_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18269_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18269_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17260_key_leftMajor{_i_item_sk12410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk12410 = tbl_Filter_TD_18269_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_Filter_TD_18269_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_Filter_TD_18269_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_Filter_TD_18269_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 3, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17260_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17260_key_rightMajor, SW_JOIN_INNER_TD_17260_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18269_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18269_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17260_key_rightMajor keyA{_i_item_sk12410_k};
            int32_t _i_item_sk12410 = tbl_Filter_TD_18269_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_Filter_TD_18269_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_Filter_TD_18269_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_Filter_TD_18269_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17260_payload_rightMajor payloadA{_i_item_sk12410, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18490_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18490_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17260_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12410 = (it->second)._i_item_sk12410;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18490_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18490_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 3, _i_category_id12421);
                tbl_JOIN_INNER_TD_17260_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17260_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17260_output #Row: " << tbl_JOIN_INNER_TD_17260_output.getNumRow() << std::endl;
}

void SW_Project_TD_17992(Table &tbl_JOIN_INNER_TD_1868_output, Table &tbl_Project_TD_17992_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#12345 AS brand_id#12327, i_class_id#12347 AS class_id#12328, i_category_id#12349 AS category_id#12329)
    // Input: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int nrow1 = tbl_JOIN_INNER_TD_1868_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_1868_output.getInt32(i, 0);
        int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_1868_output.getInt32(i, 1);
        int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_1868_output.getInt32(i, 2);
        int32_t _brand_id12327 = _i_brand_id12345;
        tbl_Project_TD_17992_output.setInt32(i, 0, _brand_id12327);
        int32_t _class_id12328 = _i_class_id12347;
        tbl_Project_TD_17992_output.setInt32(i, 1, _class_id12328);
        int32_t _category_id12329 = _i_category_id12349;
        tbl_Project_TD_17992_output.setInt32(i, 2, _category_id12329);
    }
    tbl_Project_TD_17992_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17992_output #Row: " << tbl_Project_TD_17992_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17751(Table &tbl_SerializeFromObject_TD_18200_input, Table &tbl_Filter_TD_17751_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12438) AND ((d_year#12438 >= 1999) AND (d_year#12438 <= 2001))) AND isnotnull(d_date_sk#12432)))
    // Input: ListBuffer(d_date_sk#12432, d_year#12438)
    // Output: ListBuffer(d_date_sk#12432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_18200_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12438 = tbl_SerializeFromObject_TD_18200_input.getInt32(i, 1);
        int32_t _d_date_sk12432 = tbl_SerializeFromObject_TD_18200_input.getInt32(i, 0);
        if (((_d_year12438!= 0) && ((_d_year12438 >= 1999) && (_d_year12438 <= 2001))) && (_d_date_sk12432!= 0)) {
            int32_t _d_date_sk12432_t = tbl_SerializeFromObject_TD_18200_input.getInt32(i, 0);
            tbl_Filter_TD_17751_output.setInt32(r, 0, _d_date_sk12432_t);
            r++;
        }
    }
    tbl_Filter_TD_17751_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17751_output #Row: " << tbl_Filter_TD_17751_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17921_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17921_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17921_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17921_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17921_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17921_key_rightMajor {
    int32_t _i_item_sk12410;
    bool operator==(const SW_JOIN_INNER_TD_17921_key_rightMajor& other) const {
        return ((_i_item_sk12410 == other._i_item_sk12410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17921_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17921_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12410));
    }
};
}
struct SW_JOIN_INNER_TD_17921_payload_rightMajor {
    int32_t _i_item_sk12410;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_INNER_TD_17921(Table &tbl_Filter_TD_18917_output, Table &tbl_Filter_TD_18934_output, Table &tbl_JOIN_INNER_TD_17921_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#12410))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_Filter_TD_18917_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18934_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17921_key_leftMajor, SW_JOIN_INNER_TD_17921_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18917_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18917_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17921_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18917_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18917_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17921_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18934_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18934_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17921_key_leftMajor{_i_item_sk12410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk12410 = tbl_Filter_TD_18934_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_Filter_TD_18934_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_Filter_TD_18934_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_Filter_TD_18934_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 3, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17921_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17921_key_rightMajor, SW_JOIN_INNER_TD_17921_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18934_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18934_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17921_key_rightMajor keyA{_i_item_sk12410_k};
            int32_t _i_item_sk12410 = tbl_Filter_TD_18934_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_Filter_TD_18934_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_Filter_TD_18934_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_Filter_TD_18934_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17921_payload_rightMajor payloadA{_i_item_sk12410, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18917_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18917_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17921_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12410 = (it->second)._i_item_sk12410;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18917_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18917_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 3, _i_category_id12421);
                tbl_JOIN_INNER_TD_17921_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17921_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17921_output #Row: " << tbl_JOIN_INNER_TD_17921_output.getNumRow() << std::endl;
}

void SW_Project_TD_17995(Table &tbl_JOIN_INNER_TD_18658_output, Table &tbl_Project_TD_17995_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#12345 AS brand_id#12327, i_class_id#12347 AS class_id#12328, i_category_id#12349 AS category_id#12329)
    // Input: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int nrow1 = tbl_JOIN_INNER_TD_18658_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_18658_output.getInt32(i, 0);
        int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_18658_output.getInt32(i, 1);
        int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_18658_output.getInt32(i, 2);
        int32_t _brand_id12327 = _i_brand_id12345;
        tbl_Project_TD_17995_output.setInt32(i, 0, _brand_id12327);
        int32_t _class_id12328 = _i_class_id12347;
        tbl_Project_TD_17995_output.setInt32(i, 1, _class_id12328);
        int32_t _category_id12329 = _i_category_id12349;
        tbl_Project_TD_17995_output.setInt32(i, 2, _category_id12329);
    }
    tbl_Project_TD_17995_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17995_output #Row: " << tbl_Project_TD_17995_output.getNumRow() << std::endl;
}

void SW_Filter_TD_17213(Table &tbl_SerializeFromObject_TD_183_input, Table &tbl_Filter_TD_17213_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12438) AND ((d_year#12438 >= 1999) AND (d_year#12438 <= 2001))) AND isnotnull(d_date_sk#12432)))
    // Input: ListBuffer(d_date_sk#12432, d_year#12438)
    // Output: ListBuffer(d_date_sk#12432)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_183_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12438 = tbl_SerializeFromObject_TD_183_input.getInt32(i, 1);
        int32_t _d_date_sk12432 = tbl_SerializeFromObject_TD_183_input.getInt32(i, 0);
        if (((_d_year12438!= 0) && ((_d_year12438 >= 1999) && (_d_year12438 <= 2001))) && (_d_date_sk12432!= 0)) {
            int32_t _d_date_sk12432_t = tbl_SerializeFromObject_TD_183_input.getInt32(i, 0);
            tbl_Filter_TD_17213_output.setInt32(r, 0, _d_date_sk12432_t);
            r++;
        }
    }
    tbl_Filter_TD_17213_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_17213_output #Row: " << tbl_Filter_TD_17213_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_17571_key_leftMajor {
    int32_t _ws_item_sk732;
    bool operator==(const SW_JOIN_INNER_TD_17571_key_leftMajor& other) const {
        return ((_ws_item_sk732 == other._ws_item_sk732));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17571_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17571_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk732));
    }
};
}
struct SW_JOIN_INNER_TD_17571_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _ws_item_sk732;
};
struct SW_JOIN_INNER_TD_17571_key_rightMajor {
    int32_t _i_item_sk12410;
    bool operator==(const SW_JOIN_INNER_TD_17571_key_rightMajor& other) const {
        return ((_i_item_sk12410 == other._i_item_sk12410));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_17571_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_17571_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12410));
    }
};
}
struct SW_JOIN_INNER_TD_17571_payload_rightMajor {
    int32_t _i_item_sk12410;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_INNER_TD_17571(Table &tbl_Filter_TD_18170_output, Table &tbl_Filter_TD_18859_output, Table &tbl_JOIN_INNER_TD_17571_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#732 = i_item_sk#12410))
    // Left Table: ListBuffer(ws_sold_date_sk#729, ws_item_sk#732)
    // Right Table: ListBuffer(i_item_sk#12410, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_Filter_TD_18170_output.getNumRow();
    int right_nrow = tbl_Filter_TD_18859_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17571_key_leftMajor, SW_JOIN_INNER_TD_17571_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_18170_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18170_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17571_key_leftMajor keyA{_ws_item_sk732_k};
            int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18170_output.getInt32(i, 0);
            int32_t _ws_item_sk732 = tbl_Filter_TD_18170_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_17571_payload_leftMajor payloadA{_ws_sold_date_sk729, _ws_item_sk732};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18859_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18859_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17571_key_leftMajor{_i_item_sk12410_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _ws_item_sk732 = (it->second)._ws_item_sk732;
                int32_t _i_item_sk12410 = tbl_Filter_TD_18859_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_Filter_TD_18859_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_Filter_TD_18859_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_Filter_TD_18859_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 0, _ws_sold_date_sk729);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 3, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17571_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_17571_key_rightMajor, SW_JOIN_INNER_TD_17571_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_18859_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12410_k = tbl_Filter_TD_18859_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_17571_key_rightMajor keyA{_i_item_sk12410_k};
            int32_t _i_item_sk12410 = tbl_Filter_TD_18859_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_Filter_TD_18859_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_Filter_TD_18859_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_Filter_TD_18859_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_17571_payload_rightMajor payloadA{_i_item_sk12410, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_18170_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk732_k = tbl_Filter_TD_18170_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_17571_key_rightMajor{_ws_item_sk732_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12410 = (it->second)._i_item_sk12410;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _ws_sold_date_sk729 = tbl_Filter_TD_18170_output.getInt32(i, 0);
                int32_t _ws_item_sk732 = tbl_Filter_TD_18170_output.getInt32(i, 1);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 1, _i_brand_id12417);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 2, _i_class_id12419);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 3, _i_category_id12421);
                tbl_JOIN_INNER_TD_17571_output.setInt32(r, 0, _ws_sold_date_sk729);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_17571_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_17571_output #Row: " << tbl_JOIN_INNER_TD_17571_output.getNumRow() << std::endl;
}

void SW_Project_TD_17766(Table &tbl_JOIN_INNER_TD_18539_output, Table &tbl_Project_TD_17766_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_brand_id#12345 AS brand_id#12327, i_class_id#12347 AS class_id#12328, i_category_id#12349 AS category_id#12329)
    // Input: ListBuffer(i_brand_id#12345, i_class_id#12347, i_category_id#12349)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int nrow1 = tbl_JOIN_INNER_TD_18539_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id12345 = tbl_JOIN_INNER_TD_18539_output.getInt32(i, 0);
        int32_t _i_class_id12347 = tbl_JOIN_INNER_TD_18539_output.getInt32(i, 1);
        int32_t _i_category_id12349 = tbl_JOIN_INNER_TD_18539_output.getInt32(i, 2);
        int32_t _brand_id12327 = _i_brand_id12345;
        tbl_Project_TD_17766_output.setInt32(i, 0, _brand_id12327);
        int32_t _class_id12328 = _i_class_id12347;
        tbl_Project_TD_17766_output.setInt32(i, 1, _class_id12328);
        int32_t _category_id12329 = _i_category_id12349;
        tbl_Project_TD_17766_output.setInt32(i, 2, _category_id12329);
    }
    tbl_Project_TD_17766_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_17766_output #Row: " << tbl_Project_TD_17766_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16332_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16332_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16332_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16332_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16332_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
struct SW_JOIN_INNER_TD_16332_key_rightMajor {
    int32_t _d_date_sk12432;
    bool operator==(const SW_JOIN_INNER_TD_16332_key_rightMajor& other) const {
        return ((_d_date_sk12432 == other._d_date_sk12432));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16332_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16332_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12432));
    }
};
}
struct SW_JOIN_INNER_TD_16332_payload_rightMajor {
    int32_t _d_date_sk12432;
};
void SW_JOIN_INNER_TD_16332(Table &tbl_JOIN_INNER_TD_17757_output, Table &tbl_Filter_TD_17529_output, Table &tbl_JOIN_INNER_TD_16332_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#12432))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Right Table: ListBuffer(d_date_sk#12432)
    // Output Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_JOIN_INNER_TD_17757_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17529_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16332_key_leftMajor, SW_JOIN_INNER_TD_16332_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17757_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16332_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16332_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17529_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17529_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16332_key_leftMajor{_d_date_sk12432_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _d_date_sk12432 = tbl_Filter_TD_17529_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16332_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16332_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16332_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16332_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16332_key_rightMajor, SW_JOIN_INNER_TD_16332_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17529_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17529_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16332_key_rightMajor keyA{_d_date_sk12432_k};
            int32_t _d_date_sk12432 = tbl_Filter_TD_17529_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16332_payload_rightMajor payloadA{_d_date_sk12432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17757_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16332_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12432 = (it->second)._d_date_sk12432;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17757_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16332_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16332_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16332_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16332_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16332_output #Row: " << tbl_JOIN_INNER_TD_16332_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16626_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_16626_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16626_key> {
    std::size_t operator() (const SW_Aggregate_TD_16626_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_16626_payload {
};
void SW_Aggregate_TD_16626(Table &tbl_Project_TD_17123_output, Table &tbl_Aggregate_TD_16626_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_16626_key, SW_Aggregate_TD_16626_payload> ht1;
    int nrow1 = tbl_Project_TD_17123_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_Project_TD_17123_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_Project_TD_17123_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_Project_TD_17123_output.getInt32(i, 2);
        SW_Aggregate_TD_16626_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_16626_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16626_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_16626_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_16626_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_16626_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16626_output #Row: " << tbl_Aggregate_TD_16626_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16736_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16736_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16736_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16736_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16736_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
struct SW_JOIN_INNER_TD_16736_key_rightMajor {
    int32_t _d_date_sk12432;
    bool operator==(const SW_JOIN_INNER_TD_16736_key_rightMajor& other) const {
        return ((_d_date_sk12432 == other._d_date_sk12432));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16736_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16736_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12432));
    }
};
}
struct SW_JOIN_INNER_TD_16736_payload_rightMajor {
    int32_t _d_date_sk12432;
};
void SW_JOIN_INNER_TD_16736(Table &tbl_JOIN_INNER_TD_17337_output, Table &tbl_Filter_TD_17941_output, Table &tbl_JOIN_INNER_TD_16736_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#12432))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Right Table: ListBuffer(d_date_sk#12432)
    // Output Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_JOIN_INNER_TD_17337_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17941_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16736_key_leftMajor, SW_JOIN_INNER_TD_16736_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17337_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16736_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16736_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17941_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17941_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16736_key_leftMajor{_d_date_sk12432_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _d_date_sk12432 = tbl_Filter_TD_17941_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16736_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16736_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16736_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16736_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16736_key_rightMajor, SW_JOIN_INNER_TD_16736_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17941_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17941_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16736_key_rightMajor keyA{_d_date_sk12432_k};
            int32_t _d_date_sk12432 = tbl_Filter_TD_17941_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16736_payload_rightMajor payloadA{_d_date_sk12432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17337_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16736_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12432 = (it->second)._d_date_sk12432;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17337_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16736_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16736_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16736_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16736_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16736_output #Row: " << tbl_JOIN_INNER_TD_16736_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16957_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_16957_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16957_key> {
    std::size_t operator() (const SW_Aggregate_TD_16957_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_16957_payload {
};
void SW_Aggregate_TD_16957(Table &tbl_Project_TD_17967_output, Table &tbl_Aggregate_TD_16957_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_16957_key, SW_Aggregate_TD_16957_payload> ht1;
    int nrow1 = tbl_Project_TD_17967_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_Project_TD_17967_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_Project_TD_17967_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_Project_TD_17967_output.getInt32(i, 2);
        SW_Aggregate_TD_16957_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_16957_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16957_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_16957_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_16957_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_16957_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16957_output #Row: " << tbl_Aggregate_TD_16957_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16338_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16338_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16338_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16338_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16338_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
struct SW_JOIN_INNER_TD_16338_key_rightMajor {
    int32_t _d_date_sk12432;
    bool operator==(const SW_JOIN_INNER_TD_16338_key_rightMajor& other) const {
        return ((_d_date_sk12432 == other._d_date_sk12432));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16338_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16338_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12432));
    }
};
}
struct SW_JOIN_INNER_TD_16338_payload_rightMajor {
    int32_t _d_date_sk12432;
};
void SW_JOIN_INNER_TD_16338(Table &tbl_JOIN_INNER_TD_17364_output, Table &tbl_Filter_TD_1756_output, Table &tbl_JOIN_INNER_TD_16338_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#12432))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Right Table: ListBuffer(d_date_sk#12432)
    // Output Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_JOIN_INNER_TD_17364_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1756_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16338_key_leftMajor, SW_JOIN_INNER_TD_16338_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17364_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16338_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16338_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1756_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_1756_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16338_key_leftMajor{_d_date_sk12432_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _d_date_sk12432 = tbl_Filter_TD_1756_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16338_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16338_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16338_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16338_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16338_key_rightMajor, SW_JOIN_INNER_TD_16338_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1756_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_1756_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16338_key_rightMajor keyA{_d_date_sk12432_k};
            int32_t _d_date_sk12432 = tbl_Filter_TD_1756_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16338_payload_rightMajor payloadA{_d_date_sk12432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17364_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16338_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12432 = (it->second)._d_date_sk12432;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17364_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16338_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16338_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16338_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16338_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16338_output #Row: " << tbl_JOIN_INNER_TD_16338_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16287_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_16287_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16287_key> {
    std::size_t operator() (const SW_Aggregate_TD_16287_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_16287_payload {
};
void SW_Aggregate_TD_16287(Table &tbl_Project_TD_1763_output, Table &tbl_Aggregate_TD_16287_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_16287_key, SW_Aggregate_TD_16287_payload> ht1;
    int nrow1 = tbl_Project_TD_1763_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_Project_TD_1763_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_Project_TD_1763_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_Project_TD_1763_output.getInt32(i, 2);
        SW_Aggregate_TD_16287_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_16287_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16287_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_16287_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_16287_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_16287_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16287_output #Row: " << tbl_Aggregate_TD_16287_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16874_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16874_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16874_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16874_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16874_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
struct SW_JOIN_INNER_TD_16874_key_rightMajor {
    int32_t _d_date_sk12432;
    bool operator==(const SW_JOIN_INNER_TD_16874_key_rightMajor& other) const {
        return ((_d_date_sk12432 == other._d_date_sk12432));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16874_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16874_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12432));
    }
};
}
struct SW_JOIN_INNER_TD_16874_payload_rightMajor {
    int32_t _d_date_sk12432;
};
void SW_JOIN_INNER_TD_16874(Table &tbl_JOIN_INNER_TD_17260_output, Table &tbl_Filter_TD_17632_output, Table &tbl_JOIN_INNER_TD_16874_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#12432))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Right Table: ListBuffer(d_date_sk#12432)
    // Output Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_JOIN_INNER_TD_17260_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17632_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16874_key_leftMajor, SW_JOIN_INNER_TD_16874_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17260_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16874_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16874_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17632_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17632_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16874_key_leftMajor{_d_date_sk12432_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _d_date_sk12432 = tbl_Filter_TD_17632_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16874_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16874_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16874_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16874_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16874_key_rightMajor, SW_JOIN_INNER_TD_16874_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17632_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17632_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16874_key_rightMajor keyA{_d_date_sk12432_k};
            int32_t _d_date_sk12432 = tbl_Filter_TD_17632_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16874_payload_rightMajor payloadA{_d_date_sk12432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17260_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16874_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12432 = (it->second)._d_date_sk12432;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17260_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16874_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16874_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16874_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16874_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16874_output #Row: " << tbl_JOIN_INNER_TD_16874_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16614_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_16614_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16614_key> {
    std::size_t operator() (const SW_Aggregate_TD_16614_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_16614_payload {
};
void SW_Aggregate_TD_16614(Table &tbl_Project_TD_17992_output, Table &tbl_Aggregate_TD_16614_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_16614_key, SW_Aggregate_TD_16614_payload> ht1;
    int nrow1 = tbl_Project_TD_17992_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_Project_TD_17992_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_Project_TD_17992_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_Project_TD_17992_output.getInt32(i, 2);
        SW_Aggregate_TD_16614_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_16614_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16614_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_16614_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_16614_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_16614_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16614_output #Row: " << tbl_Aggregate_TD_16614_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16574_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16574_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16574_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16574_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16574_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
struct SW_JOIN_INNER_TD_16574_key_rightMajor {
    int32_t _d_date_sk12432;
    bool operator==(const SW_JOIN_INNER_TD_16574_key_rightMajor& other) const {
        return ((_d_date_sk12432 == other._d_date_sk12432));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16574_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16574_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12432));
    }
};
}
struct SW_JOIN_INNER_TD_16574_payload_rightMajor {
    int32_t _d_date_sk12432;
};
void SW_JOIN_INNER_TD_16574(Table &tbl_JOIN_INNER_TD_17921_output, Table &tbl_Filter_TD_17751_output, Table &tbl_JOIN_INNER_TD_16574_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#12432))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Right Table: ListBuffer(d_date_sk#12432)
    // Output Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_JOIN_INNER_TD_17921_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17751_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16574_key_leftMajor, SW_JOIN_INNER_TD_16574_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17921_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16574_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16574_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17751_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17751_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16574_key_leftMajor{_d_date_sk12432_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _d_date_sk12432 = tbl_Filter_TD_17751_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16574_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16574_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16574_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16574_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16574_key_rightMajor, SW_JOIN_INNER_TD_16574_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17751_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17751_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16574_key_rightMajor keyA{_d_date_sk12432_k};
            int32_t _d_date_sk12432 = tbl_Filter_TD_17751_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16574_payload_rightMajor payloadA{_d_date_sk12432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17921_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16574_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12432 = (it->second)._d_date_sk12432;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17921_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16574_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16574_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16574_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16574_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16574_output #Row: " << tbl_JOIN_INNER_TD_16574_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_16697_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_16697_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_16697_key> {
    std::size_t operator() (const SW_Aggregate_TD_16697_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_16697_payload {
};
void SW_Aggregate_TD_16697(Table &tbl_Project_TD_17995_output, Table &tbl_Aggregate_TD_16697_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_16697_key, SW_Aggregate_TD_16697_payload> ht1;
    int nrow1 = tbl_Project_TD_17995_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_Project_TD_17995_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_Project_TD_17995_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_Project_TD_17995_output.getInt32(i, 2);
        SW_Aggregate_TD_16697_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_16697_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_16697_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_16697_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_16697_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_16697_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_16697_output #Row: " << tbl_Aggregate_TD_16697_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_16625_key_leftMajor {
    int32_t _ws_sold_date_sk729;
    bool operator==(const SW_JOIN_INNER_TD_16625_key_leftMajor& other) const {
        return ((_ws_sold_date_sk729 == other._ws_sold_date_sk729));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16625_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16625_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk729));
    }
};
}
struct SW_JOIN_INNER_TD_16625_payload_leftMajor {
    int32_t _ws_sold_date_sk729;
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
struct SW_JOIN_INNER_TD_16625_key_rightMajor {
    int32_t _d_date_sk12432;
    bool operator==(const SW_JOIN_INNER_TD_16625_key_rightMajor& other) const {
        return ((_d_date_sk12432 == other._d_date_sk12432));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_16625_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_16625_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12432));
    }
};
}
struct SW_JOIN_INNER_TD_16625_payload_rightMajor {
    int32_t _d_date_sk12432;
};
void SW_JOIN_INNER_TD_16625(Table &tbl_JOIN_INNER_TD_17571_output, Table &tbl_Filter_TD_17213_output, Table &tbl_JOIN_INNER_TD_16625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#729 = d_date_sk#12432))
    // Left Table: ListBuffer(ws_sold_date_sk#729, i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Right Table: ListBuffer(d_date_sk#12432)
    // Output Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    int left_nrow = tbl_JOIN_INNER_TD_17571_output.getNumRow();
    int right_nrow = tbl_Filter_TD_17213_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16625_key_leftMajor, SW_JOIN_INNER_TD_16625_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_17571_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16625_key_leftMajor keyA{_ws_sold_date_sk729_k};
            int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 0);
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 1);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 2);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_16625_payload_leftMajor payloadA{_ws_sold_date_sk729, _i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_17213_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17213_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16625_key_leftMajor{_d_date_sk12432_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk729 = (it->second)._ws_sold_date_sk729;
                int32_t _i_brand_id12417 = (it->second)._i_brand_id12417;
                int32_t _i_class_id12419 = (it->second)._i_class_id12419;
                int32_t _i_category_id12421 = (it->second)._i_category_id12421;
                int32_t _d_date_sk12432 = tbl_Filter_TD_17213_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_16625_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16625_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16625_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16625_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_16625_key_rightMajor, SW_JOIN_INNER_TD_16625_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_17213_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12432_k = tbl_Filter_TD_17213_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16625_key_rightMajor keyA{_d_date_sk12432_k};
            int32_t _d_date_sk12432 = tbl_Filter_TD_17213_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_16625_payload_rightMajor payloadA{_d_date_sk12432};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_17571_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk729_k = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_16625_key_rightMajor{_ws_sold_date_sk729_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12432 = (it->second)._d_date_sk12432;
                int32_t _ws_sold_date_sk729 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 0);
                int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 1);
                int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 2);
                int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_17571_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_16625_output.setInt32(r, 0, _i_brand_id12417);
                tbl_JOIN_INNER_TD_16625_output.setInt32(r, 1, _i_class_id12419);
                tbl_JOIN_INNER_TD_16625_output.setInt32(r, 2, _i_category_id12421);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_16625_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_16625_output #Row: " << tbl_JOIN_INNER_TD_16625_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_164_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_164_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_164_key> {
    std::size_t operator() (const SW_Aggregate_TD_164_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_164_payload {
};
void SW_Aggregate_TD_164(Table &tbl_Project_TD_17766_output, Table &tbl_Aggregate_TD_164_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_164_key, SW_Aggregate_TD_164_payload> ht1;
    int nrow1 = tbl_Project_TD_17766_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_Project_TD_17766_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_Project_TD_17766_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_Project_TD_17766_output.getInt32(i, 2);
        SW_Aggregate_TD_164_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_164_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_164_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_164_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_164_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_164_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_164_output #Row: " << tbl_Aggregate_TD_164_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15617_key_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15617_key_leftMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15617_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15617_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15617_payload_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
struct SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor& other) const {
        return ((_i_brand_id12417 == other._i_brand_id12417) && (_i_class_id12419 == other._i_class_id12419) && (_i_category_id12421 == other._i_category_id12421));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12417)) + (hash<int32_t>()(k._i_class_id12419)) + (hash<int32_t>()(k._i_category_id12421));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15617_payload_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_LEFTSEMI_TD_15617(Table &tbl_Aggregate_TD_16626_output, Table &tbl_JOIN_INNER_TD_16332_output, Table &tbl_JOIN_LEFTSEMI_TD_15617_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#12327 <=> i_brand_id#12417) AND (class_id#12328 <=> i_class_id#12419)) AND (category_id#12329 <=> i_category_id#12421)))
    // Left Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Right Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int left_nrow = tbl_Aggregate_TD_16626_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16332_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15617_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16332_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16626_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12417_k = tbl_JOIN_INNER_TD_16332_output.getInt32(i, 0);
            int32_t _i_class_id12419_k = tbl_JOIN_INNER_TD_16332_output.getInt32(i, 1);
            int32_t _i_category_id12421_k = tbl_JOIN_INNER_TD_16332_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor keyA{_i_brand_id12417_k, _i_class_id12419_k, _i_category_id12421_k};
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_16332_output.getInt32(i, 0);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_16332_output.getInt32(i, 1);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_16332_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15617_payload_rightMajor payloadA{_i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_16626_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_16626_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_16626_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15617_key_rightMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            if (it != ht1.end()) {
                int32_t _brand_id12327 = tbl_Aggregate_TD_16626_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_16626_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_16626_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15617_output.setInt32(r, 0, _brand_id12327);
                tbl_JOIN_LEFTSEMI_TD_15617_output.setInt32(r, 1, _class_id12328);
                tbl_JOIN_LEFTSEMI_TD_15617_output.setInt32(r, 2, _category_id12329);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15617_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15617_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15617_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1578_key_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1578_key_leftMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1578_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1578_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1578_payload_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
struct SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor& other) const {
        return ((_i_brand_id12417 == other._i_brand_id12417) && (_i_class_id12419 == other._i_class_id12419) && (_i_category_id12421 == other._i_category_id12421));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12417)) + (hash<int32_t>()(k._i_class_id12419)) + (hash<int32_t>()(k._i_category_id12421));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1578_payload_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_LEFTSEMI_TD_1578(Table &tbl_Aggregate_TD_16957_output, Table &tbl_JOIN_INNER_TD_16736_output, Table &tbl_JOIN_LEFTSEMI_TD_1578_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#12327 <=> i_brand_id#12417) AND (class_id#12328 <=> i_class_id#12419)) AND (category_id#12329 <=> i_category_id#12421)))
    // Left Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Right Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int left_nrow = tbl_Aggregate_TD_16957_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16736_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1578_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16736_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16957_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12417_k = tbl_JOIN_INNER_TD_16736_output.getInt32(i, 0);
            int32_t _i_class_id12419_k = tbl_JOIN_INNER_TD_16736_output.getInt32(i, 1);
            int32_t _i_category_id12421_k = tbl_JOIN_INNER_TD_16736_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor keyA{_i_brand_id12417_k, _i_class_id12419_k, _i_category_id12421_k};
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_16736_output.getInt32(i, 0);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_16736_output.getInt32(i, 1);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_16736_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1578_payload_rightMajor payloadA{_i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_16957_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_16957_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_16957_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1578_key_rightMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            if (it != ht1.end()) {
                int32_t _brand_id12327 = tbl_Aggregate_TD_16957_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_16957_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_16957_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1578_output.setInt32(r, 0, _brand_id12327);
                tbl_JOIN_LEFTSEMI_TD_1578_output.setInt32(r, 1, _class_id12328);
                tbl_JOIN_LEFTSEMI_TD_1578_output.setInt32(r, 2, _category_id12329);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1578_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1578_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1578_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15325_key_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15325_key_leftMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15325_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15325_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15325_payload_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
struct SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor& other) const {
        return ((_i_brand_id12417 == other._i_brand_id12417) && (_i_class_id12419 == other._i_class_id12419) && (_i_category_id12421 == other._i_category_id12421));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12417)) + (hash<int32_t>()(k._i_class_id12419)) + (hash<int32_t>()(k._i_category_id12421));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15325_payload_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_LEFTSEMI_TD_15325(Table &tbl_Aggregate_TD_16287_output, Table &tbl_JOIN_INNER_TD_16338_output, Table &tbl_JOIN_LEFTSEMI_TD_15325_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#12327 <=> i_brand_id#12417) AND (class_id#12328 <=> i_class_id#12419)) AND (category_id#12329 <=> i_category_id#12421)))
    // Left Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Right Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int left_nrow = tbl_Aggregate_TD_16287_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16338_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15325_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16338_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16287_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12417_k = tbl_JOIN_INNER_TD_16338_output.getInt32(i, 0);
            int32_t _i_class_id12419_k = tbl_JOIN_INNER_TD_16338_output.getInt32(i, 1);
            int32_t _i_category_id12421_k = tbl_JOIN_INNER_TD_16338_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor keyA{_i_brand_id12417_k, _i_class_id12419_k, _i_category_id12421_k};
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_16338_output.getInt32(i, 0);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_16338_output.getInt32(i, 1);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_16338_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15325_payload_rightMajor payloadA{_i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_16287_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_16287_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_16287_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15325_key_rightMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            if (it != ht1.end()) {
                int32_t _brand_id12327 = tbl_Aggregate_TD_16287_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_16287_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_16287_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15325_output.setInt32(r, 0, _brand_id12327);
                tbl_JOIN_LEFTSEMI_TD_15325_output.setInt32(r, 1, _class_id12328);
                tbl_JOIN_LEFTSEMI_TD_15325_output.setInt32(r, 2, _category_id12329);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15325_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15325_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15325_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1512_key_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1512_key_leftMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1512_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1512_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1512_payload_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
struct SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor& other) const {
        return ((_i_brand_id12417 == other._i_brand_id12417) && (_i_class_id12419 == other._i_class_id12419) && (_i_category_id12421 == other._i_category_id12421));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12417)) + (hash<int32_t>()(k._i_class_id12419)) + (hash<int32_t>()(k._i_category_id12421));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1512_payload_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_LEFTSEMI_TD_1512(Table &tbl_Aggregate_TD_16614_output, Table &tbl_JOIN_INNER_TD_16874_output, Table &tbl_JOIN_LEFTSEMI_TD_1512_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#12327 <=> i_brand_id#12417) AND (class_id#12328 <=> i_class_id#12419)) AND (category_id#12329 <=> i_category_id#12421)))
    // Left Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Right Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int left_nrow = tbl_Aggregate_TD_16614_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16874_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1512_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16874_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16614_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12417_k = tbl_JOIN_INNER_TD_16874_output.getInt32(i, 0);
            int32_t _i_class_id12419_k = tbl_JOIN_INNER_TD_16874_output.getInt32(i, 1);
            int32_t _i_category_id12421_k = tbl_JOIN_INNER_TD_16874_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor keyA{_i_brand_id12417_k, _i_class_id12419_k, _i_category_id12421_k};
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_16874_output.getInt32(i, 0);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_16874_output.getInt32(i, 1);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_16874_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_1512_payload_rightMajor payloadA{_i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_16614_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_16614_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_16614_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1512_key_rightMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            if (it != ht1.end()) {
                int32_t _brand_id12327 = tbl_Aggregate_TD_16614_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_16614_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_16614_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_1512_output.setInt32(r, 0, _brand_id12327);
                tbl_JOIN_LEFTSEMI_TD_1512_output.setInt32(r, 1, _class_id12328);
                tbl_JOIN_LEFTSEMI_TD_1512_output.setInt32(r, 2, _category_id12329);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1512_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1512_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1512_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15848_key_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15848_key_leftMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15848_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15848_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15848_payload_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
struct SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor& other) const {
        return ((_i_brand_id12417 == other._i_brand_id12417) && (_i_class_id12419 == other._i_class_id12419) && (_i_category_id12421 == other._i_category_id12421));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12417)) + (hash<int32_t>()(k._i_class_id12419)) + (hash<int32_t>()(k._i_category_id12421));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15848_payload_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_LEFTSEMI_TD_15848(Table &tbl_Aggregate_TD_16697_output, Table &tbl_JOIN_INNER_TD_16574_output, Table &tbl_JOIN_LEFTSEMI_TD_15848_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#12327 <=> i_brand_id#12417) AND (class_id#12328 <=> i_class_id#12419)) AND (category_id#12329 <=> i_category_id#12421)))
    // Left Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Right Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int left_nrow = tbl_Aggregate_TD_16697_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16574_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15848_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16574_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_16697_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12417_k = tbl_JOIN_INNER_TD_16574_output.getInt32(i, 0);
            int32_t _i_class_id12419_k = tbl_JOIN_INNER_TD_16574_output.getInt32(i, 1);
            int32_t _i_category_id12421_k = tbl_JOIN_INNER_TD_16574_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor keyA{_i_brand_id12417_k, _i_class_id12419_k, _i_category_id12421_k};
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_16574_output.getInt32(i, 0);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_16574_output.getInt32(i, 1);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_16574_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15848_payload_rightMajor payloadA{_i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_16697_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_16697_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_16697_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15848_key_rightMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            if (it != ht1.end()) {
                int32_t _brand_id12327 = tbl_Aggregate_TD_16697_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_16697_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_16697_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15848_output.setInt32(r, 0, _brand_id12327);
                tbl_JOIN_LEFTSEMI_TD_15848_output.setInt32(r, 1, _class_id12328);
                tbl_JOIN_LEFTSEMI_TD_15848_output.setInt32(r, 2, _category_id12329);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15848_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15848_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15848_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_15633_key_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15633_key_leftMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15633_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15633_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15633_payload_leftMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
struct SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor& other) const {
        return ((_i_brand_id12417 == other._i_brand_id12417) && (_i_class_id12419 == other._i_class_id12419) && (_i_category_id12421 == other._i_category_id12421));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12417)) + (hash<int32_t>()(k._i_class_id12419)) + (hash<int32_t>()(k._i_category_id12421));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_15633_payload_rightMajor {
    int32_t _i_brand_id12417;
    int32_t _i_class_id12419;
    int32_t _i_category_id12421;
};
void SW_JOIN_LEFTSEMI_TD_15633(Table &tbl_Aggregate_TD_164_output, Table &tbl_JOIN_INNER_TD_16625_output, Table &tbl_JOIN_LEFTSEMI_TD_15633_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((((brand_id#12327 <=> i_brand_id#12417) AND (class_id#12328 <=> i_class_id#12419)) AND (category_id#12329 <=> i_category_id#12421)))
    // Left Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Right Table: ListBuffer(i_brand_id#12417, i_class_id#12419, i_category_id#12421)
    // Output Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    int left_nrow = tbl_Aggregate_TD_164_output.getNumRow();
    int right_nrow = tbl_JOIN_INNER_TD_16625_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor, SW_JOIN_LEFTSEMI_TD_15633_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_16625_output.getNumRow();
        int nrow2 = tbl_Aggregate_TD_164_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id12417_k = tbl_JOIN_INNER_TD_16625_output.getInt32(i, 0);
            int32_t _i_class_id12419_k = tbl_JOIN_INNER_TD_16625_output.getInt32(i, 1);
            int32_t _i_category_id12421_k = tbl_JOIN_INNER_TD_16625_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor keyA{_i_brand_id12417_k, _i_class_id12419_k, _i_category_id12421_k};
            int32_t _i_brand_id12417 = tbl_JOIN_INNER_TD_16625_output.getInt32(i, 0);
            int32_t _i_class_id12419 = tbl_JOIN_INNER_TD_16625_output.getInt32(i, 1);
            int32_t _i_category_id12421 = tbl_JOIN_INNER_TD_16625_output.getInt32(i, 2);
            SW_JOIN_LEFTSEMI_TD_15633_payload_rightMajor payloadA{_i_brand_id12417, _i_class_id12419, _i_category_id12421};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_164_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_164_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_164_output.getInt32(i, 2);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_15633_key_rightMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            if (it != ht1.end()) {
                int32_t _brand_id12327 = tbl_Aggregate_TD_164_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_164_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_164_output.getInt32(i, 2);
                tbl_JOIN_LEFTSEMI_TD_15633_output.setInt32(r, 0, _brand_id12327);
                tbl_JOIN_LEFTSEMI_TD_15633_output.setInt32(r, 1, _class_id12328);
                tbl_JOIN_LEFTSEMI_TD_15633_output.setInt32(r, 2, _category_id12329);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_15633_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_15633_output #Row: " << tbl_JOIN_LEFTSEMI_TD_15633_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14488_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_14488_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14488_key> {
    std::size_t operator() (const SW_Aggregate_TD_14488_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_14488_payload {
};
void SW_Aggregate_TD_14488(Table &tbl_JOIN_LEFTSEMI_TD_15617_output, Table &tbl_Aggregate_TD_14488_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_14488_key, SW_Aggregate_TD_14488_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15617_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_JOIN_LEFTSEMI_TD_15617_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_JOIN_LEFTSEMI_TD_15617_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_JOIN_LEFTSEMI_TD_15617_output.getInt32(i, 2);
        SW_Aggregate_TD_14488_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_14488_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14488_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_14488_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_14488_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_14488_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14488_output #Row: " << tbl_Aggregate_TD_14488_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14901(Table &tbl_SerializeFromObject_TD_15176_input, Table &tbl_Filter_TD_14901_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15176_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 0);
            tbl_Filter_TD_14901_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 1);
            tbl_Filter_TD_14901_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 2);
            tbl_Filter_TD_14901_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15176_input.getInt32(i, 3);
            tbl_Filter_TD_14901_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14901_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14901_output #Row: " << tbl_Filter_TD_14901_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14536_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_14536_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14536_key> {
    std::size_t operator() (const SW_Aggregate_TD_14536_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_14536_payload {
};
void SW_Aggregate_TD_14536(Table &tbl_JOIN_LEFTSEMI_TD_1578_output, Table &tbl_Aggregate_TD_14536_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_14536_key, SW_Aggregate_TD_14536_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_1578_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_JOIN_LEFTSEMI_TD_1578_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_JOIN_LEFTSEMI_TD_1578_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_JOIN_LEFTSEMI_TD_1578_output.getInt32(i, 2);
        SW_Aggregate_TD_14536_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_14536_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14536_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_14536_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_14536_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_14536_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14536_output #Row: " << tbl_Aggregate_TD_14536_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14627(Table &tbl_SerializeFromObject_TD_1547_input, Table &tbl_Filter_TD_14627_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1547_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 0);
            tbl_Filter_TD_14627_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 1);
            tbl_Filter_TD_14627_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 2);
            tbl_Filter_TD_14627_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_1547_input.getInt32(i, 3);
            tbl_Filter_TD_14627_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14627_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14627_output #Row: " << tbl_Filter_TD_14627_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14402_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_14402_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14402_key> {
    std::size_t operator() (const SW_Aggregate_TD_14402_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_14402_payload {
};
void SW_Aggregate_TD_14402(Table &tbl_JOIN_LEFTSEMI_TD_15325_output, Table &tbl_Aggregate_TD_14402_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_14402_key, SW_Aggregate_TD_14402_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15325_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_JOIN_LEFTSEMI_TD_15325_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_JOIN_LEFTSEMI_TD_15325_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_JOIN_LEFTSEMI_TD_15325_output.getInt32(i, 2);
        SW_Aggregate_TD_14402_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_14402_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14402_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_14402_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_14402_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_14402_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14402_output #Row: " << tbl_Aggregate_TD_14402_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14419(Table &tbl_SerializeFromObject_TD_15738_input, Table &tbl_Filter_TD_14419_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15738_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 0);
            tbl_Filter_TD_14419_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 1);
            tbl_Filter_TD_14419_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 2);
            tbl_Filter_TD_14419_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15738_input.getInt32(i, 3);
            tbl_Filter_TD_14419_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14419_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14419_output #Row: " << tbl_Filter_TD_14419_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14718_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_14718_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14718_key> {
    std::size_t operator() (const SW_Aggregate_TD_14718_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_14718_payload {
};
void SW_Aggregate_TD_14718(Table &tbl_JOIN_LEFTSEMI_TD_1512_output, Table &tbl_Aggregate_TD_14718_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_14718_key, SW_Aggregate_TD_14718_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_1512_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_JOIN_LEFTSEMI_TD_1512_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_JOIN_LEFTSEMI_TD_1512_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_JOIN_LEFTSEMI_TD_1512_output.getInt32(i, 2);
        SW_Aggregate_TD_14718_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_14718_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14718_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_14718_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_14718_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_14718_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14718_output #Row: " << tbl_Aggregate_TD_14718_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14967(Table &tbl_SerializeFromObject_TD_1598_input, Table &tbl_Filter_TD_14967_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1598_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 0);
            tbl_Filter_TD_14967_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 1);
            tbl_Filter_TD_14967_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 2);
            tbl_Filter_TD_14967_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_1598_input.getInt32(i, 3);
            tbl_Filter_TD_14967_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14967_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14967_output #Row: " << tbl_Filter_TD_14967_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14976_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_14976_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14976_key> {
    std::size_t operator() (const SW_Aggregate_TD_14976_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_14976_payload {
};
void SW_Aggregate_TD_14976(Table &tbl_JOIN_LEFTSEMI_TD_15848_output, Table &tbl_Aggregate_TD_14976_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_14976_key, SW_Aggregate_TD_14976_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15848_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_JOIN_LEFTSEMI_TD_15848_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_JOIN_LEFTSEMI_TD_15848_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_JOIN_LEFTSEMI_TD_15848_output.getInt32(i, 2);
        SW_Aggregate_TD_14976_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_14976_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14976_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_14976_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_14976_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_14976_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14976_output #Row: " << tbl_Aggregate_TD_14976_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14642(Table &tbl_SerializeFromObject_TD_15765_input, Table &tbl_Filter_TD_14642_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15765_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 0);
            tbl_Filter_TD_14642_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 1);
            tbl_Filter_TD_14642_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 2);
            tbl_Filter_TD_14642_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15765_input.getInt32(i, 3);
            tbl_Filter_TD_14642_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14642_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14642_output #Row: " << tbl_Filter_TD_14642_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_14612_key {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_Aggregate_TD_14612_key& other) const { return (_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_14612_key> {
    std::size_t operator() (const SW_Aggregate_TD_14612_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_Aggregate_TD_14612_payload {
};
void SW_Aggregate_TD_14612(Table &tbl_JOIN_LEFTSEMI_TD_15633_output, Table &tbl_Aggregate_TD_14612_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Input: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    std::unordered_map<SW_Aggregate_TD_14612_key, SW_Aggregate_TD_14612_payload> ht1;
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_15633_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _brand_id12327 = tbl_JOIN_LEFTSEMI_TD_15633_output.getInt32(i, 0);
        int32_t _class_id12328 = tbl_JOIN_LEFTSEMI_TD_15633_output.getInt32(i, 1);
        int32_t _category_id12329 = tbl_JOIN_LEFTSEMI_TD_15633_output.getInt32(i, 2);
        SW_Aggregate_TD_14612_key k{_brand_id12327, _class_id12328, _category_id12329};
        SW_Aggregate_TD_14612_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_14612_output.setInt32(r, 0, (it.first)._brand_id12327);
        tbl_Aggregate_TD_14612_output.setInt32(r, 1, (it.first)._class_id12328);
        tbl_Aggregate_TD_14612_output.setInt32(r, 2, (it.first)._category_id12329);
        ++r;
    }
    tbl_Aggregate_TD_14612_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_14612_output #Row: " << tbl_Aggregate_TD_14612_output.getNumRow() << std::endl;
}

void SW_Filter_TD_14496(Table &tbl_SerializeFromObject_TD_15835_input, Table &tbl_Filter_TD_14496_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_brand_id#235) AND isnotnull(i_class_id#237)) AND isnotnull(i_category_id#239)))
    // Input: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Output: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_15835_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_brand_id235 = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 1);
        int32_t _i_class_id237 = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 2);
        int32_t _i_category_id239 = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 3);
        if (((_i_brand_id235!= 0) && (_i_class_id237!= 0)) && (_i_category_id239!= 0)) {
            int32_t _i_item_sk228_t = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 0);
            tbl_Filter_TD_14496_output.setInt32(r, 0, _i_item_sk228_t);
            int32_t _i_brand_id235_t = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 1);
            tbl_Filter_TD_14496_output.setInt32(r, 1, _i_brand_id235_t);
            int32_t _i_class_id237_t = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 2);
            tbl_Filter_TD_14496_output.setInt32(r, 2, _i_class_id237_t);
            int32_t _i_category_id239_t = tbl_SerializeFromObject_TD_15835_input.getInt32(i, 3);
            tbl_Filter_TD_14496_output.setInt32(r, 3, _i_category_id239_t);
            r++;
        }
    }
    tbl_Filter_TD_14496_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_14496_output #Row: " << tbl_Filter_TD_14496_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13338_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13338_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13338_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13338_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13338_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13338_key_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_INNER_TD_13338_key_rightMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13338_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13338_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_INNER_TD_13338_payload_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
void SW_JOIN_INNER_TD_13338(Table &tbl_Filter_TD_14901_output, Table &tbl_Aggregate_TD_14488_output, Table &tbl_JOIN_INNER_TD_13338_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#12327) AND (i_class_id#237 = class_id#12328)) AND (i_category_id#239 = category_id#12329)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14901_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14488_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13338_key_leftMajor, SW_JOIN_INNER_TD_13338_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14901_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14901_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14901_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14901_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13338_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14901_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14901_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14901_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14901_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13338_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14488_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14488_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14488_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14488_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13338_key_leftMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id12327 = tbl_Aggregate_TD_14488_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_14488_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_14488_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13338_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13338_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13338_key_rightMajor, SW_JOIN_INNER_TD_13338_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14488_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14488_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14488_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14488_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13338_key_rightMajor keyA{_brand_id12327_k, _class_id12328_k, _category_id12329_k};
            int32_t _brand_id12327 = tbl_Aggregate_TD_14488_output.getInt32(i, 0);
            int32_t _class_id12328 = tbl_Aggregate_TD_14488_output.getInt32(i, 1);
            int32_t _category_id12329 = tbl_Aggregate_TD_14488_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13338_payload_rightMajor payloadA{_brand_id12327, _class_id12328, _category_id12329};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14901_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14901_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14901_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14901_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13338_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id12327 = (it->second)._brand_id12327;
                int32_t _class_id12328 = (it->second)._class_id12328;
                int32_t _category_id12329 = (it->second)._category_id12329;
                int32_t _i_item_sk228 = tbl_Filter_TD_14901_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14901_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14901_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14901_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13338_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13338_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13338_output #Row: " << tbl_JOIN_INNER_TD_13338_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13754_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13754_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13754_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13754_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13754_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13754_key_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_INNER_TD_13754_key_rightMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13754_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13754_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_INNER_TD_13754_payload_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
void SW_JOIN_INNER_TD_13754(Table &tbl_Filter_TD_14627_output, Table &tbl_Aggregate_TD_14536_output, Table &tbl_JOIN_INNER_TD_13754_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#12327) AND (i_class_id#237 = class_id#12328)) AND (i_category_id#239 = category_id#12329)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14627_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14536_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13754_key_leftMajor, SW_JOIN_INNER_TD_13754_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14627_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14627_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14627_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14627_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13754_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14627_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14627_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14627_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14627_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13754_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14536_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14536_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14536_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14536_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13754_key_leftMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id12327 = tbl_Aggregate_TD_14536_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_14536_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_14536_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13754_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13754_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13754_key_rightMajor, SW_JOIN_INNER_TD_13754_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14536_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14536_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14536_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14536_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13754_key_rightMajor keyA{_brand_id12327_k, _class_id12328_k, _category_id12329_k};
            int32_t _brand_id12327 = tbl_Aggregate_TD_14536_output.getInt32(i, 0);
            int32_t _class_id12328 = tbl_Aggregate_TD_14536_output.getInt32(i, 1);
            int32_t _category_id12329 = tbl_Aggregate_TD_14536_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13754_payload_rightMajor payloadA{_brand_id12327, _class_id12328, _category_id12329};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14627_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14627_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14627_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14627_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13754_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id12327 = (it->second)._brand_id12327;
                int32_t _class_id12328 = (it->second)._class_id12328;
                int32_t _category_id12329 = (it->second)._category_id12329;
                int32_t _i_item_sk228 = tbl_Filter_TD_14627_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14627_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14627_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14627_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13754_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13754_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13754_output #Row: " << tbl_JOIN_INNER_TD_13754_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13882_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13882_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13882_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13882_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13882_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13882_key_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_INNER_TD_13882_key_rightMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13882_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13882_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_INNER_TD_13882_payload_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
void SW_JOIN_INNER_TD_13882(Table &tbl_Filter_TD_14419_output, Table &tbl_Aggregate_TD_14402_output, Table &tbl_JOIN_INNER_TD_13882_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#12327) AND (i_class_id#237 = class_id#12328)) AND (i_category_id#239 = category_id#12329)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14419_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14402_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13882_key_leftMajor, SW_JOIN_INNER_TD_13882_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14419_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14419_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14419_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14419_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13882_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14419_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14419_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14419_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14419_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13882_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14402_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14402_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14402_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14402_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13882_key_leftMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id12327 = tbl_Aggregate_TD_14402_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_14402_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_14402_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13882_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13882_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13882_key_rightMajor, SW_JOIN_INNER_TD_13882_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14402_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14402_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14402_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14402_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13882_key_rightMajor keyA{_brand_id12327_k, _class_id12328_k, _category_id12329_k};
            int32_t _brand_id12327 = tbl_Aggregate_TD_14402_output.getInt32(i, 0);
            int32_t _class_id12328 = tbl_Aggregate_TD_14402_output.getInt32(i, 1);
            int32_t _category_id12329 = tbl_Aggregate_TD_14402_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13882_payload_rightMajor payloadA{_brand_id12327, _class_id12328, _category_id12329};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14419_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14419_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14419_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14419_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13882_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id12327 = (it->second)._brand_id12327;
                int32_t _class_id12328 = (it->second)._class_id12328;
                int32_t _category_id12329 = (it->second)._category_id12329;
                int32_t _i_item_sk228 = tbl_Filter_TD_14419_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14419_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14419_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14419_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13882_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13882_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13882_output #Row: " << tbl_JOIN_INNER_TD_13882_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13603_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13603_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13603_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13603_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13603_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13603_key_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_INNER_TD_13603_key_rightMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13603_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13603_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_INNER_TD_13603_payload_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
void SW_JOIN_INNER_TD_13603(Table &tbl_Filter_TD_14967_output, Table &tbl_Aggregate_TD_14718_output, Table &tbl_JOIN_INNER_TD_13603_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#12327) AND (i_class_id#237 = class_id#12328)) AND (i_category_id#239 = category_id#12329)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14967_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14718_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13603_key_leftMajor, SW_JOIN_INNER_TD_13603_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14967_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14967_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14967_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14967_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13603_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14967_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14967_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14967_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14967_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13603_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14718_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14718_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14718_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14718_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13603_key_leftMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id12327 = tbl_Aggregate_TD_14718_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_14718_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_14718_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13603_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13603_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13603_key_rightMajor, SW_JOIN_INNER_TD_13603_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14718_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14718_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14718_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14718_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13603_key_rightMajor keyA{_brand_id12327_k, _class_id12328_k, _category_id12329_k};
            int32_t _brand_id12327 = tbl_Aggregate_TD_14718_output.getInt32(i, 0);
            int32_t _class_id12328 = tbl_Aggregate_TD_14718_output.getInt32(i, 1);
            int32_t _category_id12329 = tbl_Aggregate_TD_14718_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13603_payload_rightMajor payloadA{_brand_id12327, _class_id12328, _category_id12329};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14967_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14967_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14967_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14967_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13603_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id12327 = (it->second)._brand_id12327;
                int32_t _class_id12328 = (it->second)._class_id12328;
                int32_t _category_id12329 = (it->second)._category_id12329;
                int32_t _i_item_sk228 = tbl_Filter_TD_14967_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14967_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14967_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14967_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13603_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13603_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13603_output #Row: " << tbl_JOIN_INNER_TD_13603_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13763_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13763_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13763_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13763_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13763_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13763_key_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_INNER_TD_13763_key_rightMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13763_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13763_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_INNER_TD_13763_payload_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
void SW_JOIN_INNER_TD_13763(Table &tbl_Filter_TD_14642_output, Table &tbl_Aggregate_TD_14976_output, Table &tbl_JOIN_INNER_TD_13763_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#12327) AND (i_class_id#237 = class_id#12328)) AND (i_category_id#239 = category_id#12329)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14642_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14976_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13763_key_leftMajor, SW_JOIN_INNER_TD_13763_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14642_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14642_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14642_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14642_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13763_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14642_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14642_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14642_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14642_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13763_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14976_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14976_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14976_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14976_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13763_key_leftMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id12327 = tbl_Aggregate_TD_14976_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_14976_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_14976_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13763_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13763_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13763_key_rightMajor, SW_JOIN_INNER_TD_13763_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14976_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14976_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14976_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14976_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13763_key_rightMajor keyA{_brand_id12327_k, _class_id12328_k, _category_id12329_k};
            int32_t _brand_id12327 = tbl_Aggregate_TD_14976_output.getInt32(i, 0);
            int32_t _class_id12328 = tbl_Aggregate_TD_14976_output.getInt32(i, 1);
            int32_t _category_id12329 = tbl_Aggregate_TD_14976_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13763_payload_rightMajor payloadA{_brand_id12327, _class_id12328, _category_id12329};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14642_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14642_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14642_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14642_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13763_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id12327 = (it->second)._brand_id12327;
                int32_t _class_id12328 = (it->second)._class_id12328;
                int32_t _category_id12329 = (it->second)._category_id12329;
                int32_t _i_item_sk228 = tbl_Filter_TD_14642_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14642_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14642_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14642_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13763_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13763_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13763_output #Row: " << tbl_JOIN_INNER_TD_13763_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_13722_key_leftMajor {
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
    bool operator==(const SW_JOIN_INNER_TD_13722_key_leftMajor& other) const {
        return ((_i_brand_id235 == other._i_brand_id235) && (_i_class_id237 == other._i_class_id237) && (_i_category_id239 == other._i_category_id239));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13722_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13722_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id235)) + (hash<int32_t>()(k._i_class_id237)) + (hash<int32_t>()(k._i_category_id239));
    }
};
}
struct SW_JOIN_INNER_TD_13722_payload_leftMajor {
    int32_t _i_item_sk228;
    int32_t _i_brand_id235;
    int32_t _i_class_id237;
    int32_t _i_category_id239;
};
struct SW_JOIN_INNER_TD_13722_key_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
    bool operator==(const SW_JOIN_INNER_TD_13722_key_rightMajor& other) const {
        return ((_brand_id12327 == other._brand_id12327) && (_class_id12328 == other._class_id12328) && (_category_id12329 == other._category_id12329));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_13722_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_13722_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._brand_id12327)) + (hash<int32_t>()(k._class_id12328)) + (hash<int32_t>()(k._category_id12329));
    }
};
}
struct SW_JOIN_INNER_TD_13722_payload_rightMajor {
    int32_t _brand_id12327;
    int32_t _class_id12328;
    int32_t _category_id12329;
};
void SW_JOIN_INNER_TD_13722(Table &tbl_Filter_TD_14496_output, Table &tbl_Aggregate_TD_14612_output, Table &tbl_JOIN_INNER_TD_13722_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((((i_brand_id#235 = brand_id#12327) AND (i_class_id#237 = class_id#12328)) AND (i_category_id#239 = category_id#12329)))
    // Left Table: ListBuffer(i_item_sk#228, i_brand_id#235, i_class_id#237, i_category_id#239)
    // Right Table: ListBuffer(brand_id#12327, class_id#12328, category_id#12329)
    // Output Table: ListBuffer(i_item_sk#228)
    int left_nrow = tbl_Filter_TD_14496_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_14612_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13722_key_leftMajor, SW_JOIN_INNER_TD_13722_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_14496_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14496_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14496_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14496_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13722_key_leftMajor keyA{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k};
            int32_t _i_item_sk228 = tbl_Filter_TD_14496_output.getInt32(i, 0);
            int32_t _i_brand_id235 = tbl_Filter_TD_14496_output.getInt32(i, 1);
            int32_t _i_class_id237 = tbl_Filter_TD_14496_output.getInt32(i, 2);
            int32_t _i_category_id239 = tbl_Filter_TD_14496_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_13722_payload_leftMajor payloadA{_i_item_sk228, _i_brand_id235, _i_class_id237, _i_category_id239};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_14612_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14612_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14612_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14612_output.getInt32(i, 2);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13722_key_leftMajor{_brand_id12327_k, _class_id12328_k, _category_id12329_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk228 = (it->second)._i_item_sk228;
                int32_t _i_brand_id235 = (it->second)._i_brand_id235;
                int32_t _i_class_id237 = (it->second)._i_class_id237;
                int32_t _i_category_id239 = (it->second)._i_category_id239;
                int32_t _brand_id12327 = tbl_Aggregate_TD_14612_output.getInt32(i, 0);
                int32_t _class_id12328 = tbl_Aggregate_TD_14612_output.getInt32(i, 1);
                int32_t _category_id12329 = tbl_Aggregate_TD_14612_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_13722_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13722_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_13722_key_rightMajor, SW_JOIN_INNER_TD_13722_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_14612_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _brand_id12327_k = tbl_Aggregate_TD_14612_output.getInt32(i, 0);
            int32_t _class_id12328_k = tbl_Aggregate_TD_14612_output.getInt32(i, 1);
            int32_t _category_id12329_k = tbl_Aggregate_TD_14612_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13722_key_rightMajor keyA{_brand_id12327_k, _class_id12328_k, _category_id12329_k};
            int32_t _brand_id12327 = tbl_Aggregate_TD_14612_output.getInt32(i, 0);
            int32_t _class_id12328 = tbl_Aggregate_TD_14612_output.getInt32(i, 1);
            int32_t _category_id12329 = tbl_Aggregate_TD_14612_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_13722_payload_rightMajor payloadA{_brand_id12327, _class_id12328, _category_id12329};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_14496_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_brand_id235_k = tbl_Filter_TD_14496_output.getInt32(i, 1);
            int32_t _i_class_id237_k = tbl_Filter_TD_14496_output.getInt32(i, 2);
            int32_t _i_category_id239_k = tbl_Filter_TD_14496_output.getInt32(i, 3);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_13722_key_rightMajor{_i_brand_id235_k, _i_class_id237_k, _i_category_id239_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _brand_id12327 = (it->second)._brand_id12327;
                int32_t _class_id12328 = (it->second)._class_id12328;
                int32_t _category_id12329 = (it->second)._category_id12329;
                int32_t _i_item_sk228 = tbl_Filter_TD_14496_output.getInt32(i, 0);
                int32_t _i_brand_id235 = tbl_Filter_TD_14496_output.getInt32(i, 1);
                int32_t _i_class_id237 = tbl_Filter_TD_14496_output.getInt32(i, 2);
                int32_t _i_category_id239 = tbl_Filter_TD_14496_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_13722_output.setInt32(r, 0, _i_item_sk228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_13722_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_13722_output #Row: " << tbl_JOIN_INNER_TD_13722_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12130(Table &tbl_SerializeFromObject_TD_13691_input, Table &tbl_Filter_TD_12130_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12613) AND ((d_year#12613 >= 1999) AND (d_year#12613 <= 2001))) AND isnotnull(d_date_sk#12607)))
    // Input: ListBuffer(d_date_sk#12607, d_year#12613)
    // Output: ListBuffer(d_date_sk#12607)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13691_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12613 = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 1);
        int32_t _d_date_sk12607 = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 0);
        if (((_d_year12613!= 0) && ((_d_year12613 >= 1999) && (_d_year12613 <= 2001))) && (_d_date_sk12607!= 0)) {
            int32_t _d_date_sk12607_t = tbl_SerializeFromObject_TD_13691_input.getInt32(i, 0);
            tbl_Filter_TD_12130_output.setInt32(r, 0, _d_date_sk12607_t);
            r++;
        }
    }
    tbl_Filter_TD_12130_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12130_output #Row: " << tbl_Filter_TD_12130_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12654(Table &tbl_SerializeFromObject_TD_1362_input, Table &tbl_Filter_TD_12654_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#12573))
    // Input: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    // Output: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1362_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk12573 = tbl_SerializeFromObject_TD_1362_input.getInt32(i, 0);
        if (_ws_sold_date_sk12573!= 0) {
            int32_t _ws_sold_date_sk12573_t = tbl_SerializeFromObject_TD_1362_input.getInt32(i, 0);
            tbl_Filter_TD_12654_output.setInt32(r, 0, _ws_sold_date_sk12573_t);
            int32_t _ws_quantity12591_t = tbl_SerializeFromObject_TD_1362_input.getInt32(i, 1);
            tbl_Filter_TD_12654_output.setInt32(r, 1, _ws_quantity12591_t);
            int32_t _ws_list_price12593_t = tbl_SerializeFromObject_TD_1362_input.getInt32(i, 2);
            tbl_Filter_TD_12654_output.setInt32(r, 2, _ws_list_price12593_t);
            r++;
        }
    }
    tbl_Filter_TD_12654_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12654_output #Row: " << tbl_Filter_TD_12654_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12866(Table &tbl_SerializeFromObject_TD_13753_input, Table &tbl_Filter_TD_12866_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12551) AND ((d_year#12551 >= 1999) AND (d_year#12551 <= 2001))) AND isnotnull(d_date_sk#12545)))
    // Input: ListBuffer(d_date_sk#12545, d_year#12551)
    // Output: ListBuffer(d_date_sk#12545)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13753_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12551 = tbl_SerializeFromObject_TD_13753_input.getInt32(i, 1);
        int32_t _d_date_sk12545 = tbl_SerializeFromObject_TD_13753_input.getInt32(i, 0);
        if (((_d_year12551!= 0) && ((_d_year12551 >= 1999) && (_d_year12551 <= 2001))) && (_d_date_sk12545!= 0)) {
            int32_t _d_date_sk12545_t = tbl_SerializeFromObject_TD_13753_input.getInt32(i, 0);
            tbl_Filter_TD_12866_output.setInt32(r, 0, _d_date_sk12545_t);
            r++;
        }
    }
    tbl_Filter_TD_12866_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12866_output #Row: " << tbl_Filter_TD_12866_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12763(Table &tbl_SerializeFromObject_TD_13889_input, Table &tbl_Filter_TD_12763_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#12511))
    // Input: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    // Output: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13889_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk12511 = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 0);
        if (_cs_sold_date_sk12511!= 0) {
            int32_t _cs_sold_date_sk12511_t = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 0);
            tbl_Filter_TD_12763_output.setInt32(r, 0, _cs_sold_date_sk12511_t);
            int32_t _cs_quantity12529_t = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 1);
            tbl_Filter_TD_12763_output.setInt32(r, 1, _cs_quantity12529_t);
            int32_t _cs_list_price12531_t = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 2);
            tbl_Filter_TD_12763_output.setInt32(r, 2, _cs_list_price12531_t);
            r++;
        }
    }
    tbl_Filter_TD_12763_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12763_output #Row: " << tbl_Filter_TD_12763_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12502(Table &tbl_SerializeFromObject_TD_13912_input, Table &tbl_Filter_TD_12502_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12489) AND ((d_year#12489 >= 1999) AND (d_year#12489 <= 2001))) AND isnotnull(d_date_sk#12483)))
    // Input: ListBuffer(d_date_sk#12483, d_year#12489)
    // Output: ListBuffer(d_date_sk#12483)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13912_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12489 = tbl_SerializeFromObject_TD_13912_input.getInt32(i, 1);
        int32_t _d_date_sk12483 = tbl_SerializeFromObject_TD_13912_input.getInt32(i, 0);
        if (((_d_year12489!= 0) && ((_d_year12489 >= 1999) && (_d_year12489 <= 2001))) && (_d_date_sk12483!= 0)) {
            int32_t _d_date_sk12483_t = tbl_SerializeFromObject_TD_13912_input.getInt32(i, 0);
            tbl_Filter_TD_12502_output.setInt32(r, 0, _d_date_sk12483_t);
            r++;
        }
    }
    tbl_Filter_TD_12502_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12502_output #Row: " << tbl_Filter_TD_12502_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1212(Table &tbl_SerializeFromObject_TD_13448_input, Table &tbl_Filter_TD_1212_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#12460))
    // Input: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    // Output: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13448_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk12460 = tbl_SerializeFromObject_TD_13448_input.getInt32(i, 0);
        if (_ss_sold_date_sk12460!= 0) {
            int32_t _ss_sold_date_sk12460_t = tbl_SerializeFromObject_TD_13448_input.getInt32(i, 0);
            tbl_Filter_TD_1212_output.setInt32(r, 0, _ss_sold_date_sk12460_t);
            int32_t _ss_quantity12470_t = tbl_SerializeFromObject_TD_13448_input.getInt32(i, 1);
            tbl_Filter_TD_1212_output.setInt32(r, 1, _ss_quantity12470_t);
            int32_t _ss_list_price12472_t = tbl_SerializeFromObject_TD_13448_input.getInt32(i, 2);
            tbl_Filter_TD_1212_output.setInt32(r, 2, _ss_list_price12472_t);
            r++;
        }
    }
    tbl_Filter_TD_1212_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1212_output #Row: " << tbl_Filter_TD_1212_output.getNumRow() << std::endl;
}

void SW_Project_TD_12700(Table &tbl_JOIN_INNER_TD_13338_output, Table &tbl_Project_TD_12700_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#12330)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#12330)
    int nrow1 = tbl_JOIN_INNER_TD_13338_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13338_output.getInt32(i, 0);
        int32_t _ss_item_sk12330 = _i_item_sk228;
        tbl_Project_TD_12700_output.setInt32(i, 0, _ss_item_sk12330);
    }
    tbl_Project_TD_12700_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12700_output #Row: " << tbl_Project_TD_12700_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12481(Table &tbl_SerializeFromObject_TD_1343_input, Table &tbl_Filter_TD_12481_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12826))
    // Input: ListBuffer(i_item_sk#12826, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    // Output: ListBuffer(i_item_sk#12826, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_1343_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12826 = tbl_SerializeFromObject_TD_1343_input.getInt32(i, 0);
        if (_i_item_sk12826!= 0) {
            int32_t _i_item_sk12826_t = tbl_SerializeFromObject_TD_1343_input.getInt32(i, 0);
            tbl_Filter_TD_12481_output.setInt32(r, 0, _i_item_sk12826_t);
            int32_t _i_brand_id12833_t = tbl_SerializeFromObject_TD_1343_input.getInt32(i, 1);
            tbl_Filter_TD_12481_output.setInt32(r, 1, _i_brand_id12833_t);
            int32_t _i_class_id12835_t = tbl_SerializeFromObject_TD_1343_input.getInt32(i, 2);
            tbl_Filter_TD_12481_output.setInt32(r, 2, _i_class_id12835_t);
            int32_t _i_category_id12837_t = tbl_SerializeFromObject_TD_1343_input.getInt32(i, 3);
            tbl_Filter_TD_12481_output.setInt32(r, 3, _i_category_id12837_t);
            r++;
        }
    }
    tbl_Filter_TD_12481_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12481_output #Row: " << tbl_Filter_TD_12481_output.getNumRow() << std::endl;
}

void SW_Project_TD_12881(Table &tbl_JOIN_INNER_TD_13754_output, Table &tbl_Project_TD_12881_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#12330)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#12330)
    int nrow1 = tbl_JOIN_INNER_TD_13754_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13754_output.getInt32(i, 0);
        int32_t _ss_item_sk12330 = _i_item_sk228;
        tbl_Project_TD_12881_output.setInt32(i, 0, _ss_item_sk12330);
    }
    tbl_Project_TD_12881_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12881_output #Row: " << tbl_Project_TD_12881_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12745(Table &tbl_SerializeFromObject_TD_13580_input, Table &tbl_Filter_TD_12745_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ws_item_sk#12795) AND isnotnull(ws_sold_date_sk#12792)))
    // Input: ListBuffer(ws_sold_date_sk#12792, ws_item_sk#12795, ws_quantity#12810, ws_list_price#12812)
    // Output: ListBuffer(ws_sold_date_sk#12792, ws_item_sk#12795, ws_quantity#12810, ws_list_price#12812)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13580_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_item_sk12795 = tbl_SerializeFromObject_TD_13580_input.getInt32(i, 1);
        int32_t _ws_sold_date_sk12792 = tbl_SerializeFromObject_TD_13580_input.getInt32(i, 0);
        if ((_ws_item_sk12795!= 0) && (_ws_sold_date_sk12792!= 0)) {
            int32_t _ws_sold_date_sk12792_t = tbl_SerializeFromObject_TD_13580_input.getInt32(i, 0);
            tbl_Filter_TD_12745_output.setInt32(r, 0, _ws_sold_date_sk12792_t);
            int32_t _ws_item_sk12795_t = tbl_SerializeFromObject_TD_13580_input.getInt32(i, 1);
            tbl_Filter_TD_12745_output.setInt32(r, 1, _ws_item_sk12795_t);
            int32_t _ws_quantity12810_t = tbl_SerializeFromObject_TD_13580_input.getInt32(i, 2);
            tbl_Filter_TD_12745_output.setInt32(r, 2, _ws_quantity12810_t);
            int32_t _ws_list_price12812_t = tbl_SerializeFromObject_TD_13580_input.getInt32(i, 3);
            tbl_Filter_TD_12745_output.setInt32(r, 3, _ws_list_price12812_t);
            r++;
        }
    }
    tbl_Filter_TD_12745_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12745_output #Row: " << tbl_Filter_TD_12745_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12676(Table &tbl_SerializeFromObject_TD_13140_input, Table &tbl_Filter_TD_12676_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12613) AND ((d_year#12613 >= 1999) AND (d_year#12613 <= 2001))) AND isnotnull(d_date_sk#12607)))
    // Input: ListBuffer(d_date_sk#12607, d_year#12613)
    // Output: ListBuffer(d_date_sk#12607)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13140_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12613 = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 1);
        int32_t _d_date_sk12607 = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 0);
        if (((_d_year12613!= 0) && ((_d_year12613 >= 1999) && (_d_year12613 <= 2001))) && (_d_date_sk12607!= 0)) {
            int32_t _d_date_sk12607_t = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 0);
            tbl_Filter_TD_12676_output.setInt32(r, 0, _d_date_sk12607_t);
            r++;
        }
    }
    tbl_Filter_TD_12676_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12676_output #Row: " << tbl_Filter_TD_12676_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12645(Table &tbl_SerializeFromObject_TD_13889_input, Table &tbl_Filter_TD_12645_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#12573))
    // Input: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    // Output: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13889_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk12573 = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 0);
        if (_ws_sold_date_sk12573!= 0) {
            int32_t _ws_sold_date_sk12573_t = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 0);
            tbl_Filter_TD_12645_output.setInt32(r, 0, _ws_sold_date_sk12573_t);
            int32_t _ws_quantity12591_t = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 1);
            tbl_Filter_TD_12645_output.setInt32(r, 1, _ws_quantity12591_t);
            int32_t _ws_list_price12593_t = tbl_SerializeFromObject_TD_13889_input.getInt32(i, 2);
            tbl_Filter_TD_12645_output.setInt32(r, 2, _ws_list_price12593_t);
            r++;
        }
    }
    tbl_Filter_TD_12645_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12645_output #Row: " << tbl_Filter_TD_12645_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12678(Table &tbl_SerializeFromObject_TD_13828_input, Table &tbl_Filter_TD_12678_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12551) AND ((d_year#12551 >= 1999) AND (d_year#12551 <= 2001))) AND isnotnull(d_date_sk#12545)))
    // Input: ListBuffer(d_date_sk#12545, d_year#12551)
    // Output: ListBuffer(d_date_sk#12545)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13828_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12551 = tbl_SerializeFromObject_TD_13828_input.getInt32(i, 1);
        int32_t _d_date_sk12545 = tbl_SerializeFromObject_TD_13828_input.getInt32(i, 0);
        if (((_d_year12551!= 0) && ((_d_year12551 >= 1999) && (_d_year12551 <= 2001))) && (_d_date_sk12545!= 0)) {
            int32_t _d_date_sk12545_t = tbl_SerializeFromObject_TD_13828_input.getInt32(i, 0);
            tbl_Filter_TD_12678_output.setInt32(r, 0, _d_date_sk12545_t);
            r++;
        }
    }
    tbl_Filter_TD_12678_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12678_output #Row: " << tbl_Filter_TD_12678_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12623(Table &tbl_SerializeFromObject_TD_13747_input, Table &tbl_Filter_TD_12623_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#12511))
    // Input: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    // Output: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13747_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk12511 = tbl_SerializeFromObject_TD_13747_input.getInt32(i, 0);
        if (_cs_sold_date_sk12511!= 0) {
            int32_t _cs_sold_date_sk12511_t = tbl_SerializeFromObject_TD_13747_input.getInt32(i, 0);
            tbl_Filter_TD_12623_output.setInt32(r, 0, _cs_sold_date_sk12511_t);
            int32_t _cs_quantity12529_t = tbl_SerializeFromObject_TD_13747_input.getInt32(i, 1);
            tbl_Filter_TD_12623_output.setInt32(r, 1, _cs_quantity12529_t);
            int32_t _cs_list_price12531_t = tbl_SerializeFromObject_TD_13747_input.getInt32(i, 2);
            tbl_Filter_TD_12623_output.setInt32(r, 2, _cs_list_price12531_t);
            r++;
        }
    }
    tbl_Filter_TD_12623_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12623_output #Row: " << tbl_Filter_TD_12623_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12802(Table &tbl_SerializeFromObject_TD_13559_input, Table &tbl_Filter_TD_12802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12489) AND ((d_year#12489 >= 1999) AND (d_year#12489 <= 2001))) AND isnotnull(d_date_sk#12483)))
    // Input: ListBuffer(d_date_sk#12483, d_year#12489)
    // Output: ListBuffer(d_date_sk#12483)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13559_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12489 = tbl_SerializeFromObject_TD_13559_input.getInt32(i, 1);
        int32_t _d_date_sk12483 = tbl_SerializeFromObject_TD_13559_input.getInt32(i, 0);
        if (((_d_year12489!= 0) && ((_d_year12489 >= 1999) && (_d_year12489 <= 2001))) && (_d_date_sk12483!= 0)) {
            int32_t _d_date_sk12483_t = tbl_SerializeFromObject_TD_13559_input.getInt32(i, 0);
            tbl_Filter_TD_12802_output.setInt32(r, 0, _d_date_sk12483_t);
            r++;
        }
    }
    tbl_Filter_TD_12802_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12802_output #Row: " << tbl_Filter_TD_12802_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12711(Table &tbl_SerializeFromObject_TD_13633_input, Table &tbl_Filter_TD_12711_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#12460))
    // Input: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    // Output: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13633_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk12460 = tbl_SerializeFromObject_TD_13633_input.getInt32(i, 0);
        if (_ss_sold_date_sk12460!= 0) {
            int32_t _ss_sold_date_sk12460_t = tbl_SerializeFromObject_TD_13633_input.getInt32(i, 0);
            tbl_Filter_TD_12711_output.setInt32(r, 0, _ss_sold_date_sk12460_t);
            int32_t _ss_quantity12470_t = tbl_SerializeFromObject_TD_13633_input.getInt32(i, 1);
            tbl_Filter_TD_12711_output.setInt32(r, 1, _ss_quantity12470_t);
            int32_t _ss_list_price12472_t = tbl_SerializeFromObject_TD_13633_input.getInt32(i, 2);
            tbl_Filter_TD_12711_output.setInt32(r, 2, _ss_list_price12472_t);
            r++;
        }
    }
    tbl_Filter_TD_12711_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12711_output #Row: " << tbl_Filter_TD_12711_output.getNumRow() << std::endl;
}

void SW_Project_TD_12738(Table &tbl_JOIN_INNER_TD_13882_output, Table &tbl_Project_TD_12738_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#12330)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#12330)
    int nrow1 = tbl_JOIN_INNER_TD_13882_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13882_output.getInt32(i, 0);
        int32_t _ss_item_sk12330 = _i_item_sk228;
        tbl_Project_TD_12738_output.setInt32(i, 0, _ss_item_sk12330);
    }
    tbl_Project_TD_12738_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12738_output #Row: " << tbl_Project_TD_12738_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12646(Table &tbl_SerializeFromObject_TD_13833_input, Table &tbl_Filter_TD_12646_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12742))
    // Input: ListBuffer(i_item_sk#12742, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    // Output: ListBuffer(i_item_sk#12742, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13833_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12742 = tbl_SerializeFromObject_TD_13833_input.getInt32(i, 0);
        if (_i_item_sk12742!= 0) {
            int32_t _i_item_sk12742_t = tbl_SerializeFromObject_TD_13833_input.getInt32(i, 0);
            tbl_Filter_TD_12646_output.setInt32(r, 0, _i_item_sk12742_t);
            int32_t _i_brand_id12749_t = tbl_SerializeFromObject_TD_13833_input.getInt32(i, 1);
            tbl_Filter_TD_12646_output.setInt32(r, 1, _i_brand_id12749_t);
            int32_t _i_class_id12751_t = tbl_SerializeFromObject_TD_13833_input.getInt32(i, 2);
            tbl_Filter_TD_12646_output.setInt32(r, 2, _i_class_id12751_t);
            int32_t _i_category_id12753_t = tbl_SerializeFromObject_TD_13833_input.getInt32(i, 3);
            tbl_Filter_TD_12646_output.setInt32(r, 3, _i_category_id12753_t);
            r++;
        }
    }
    tbl_Filter_TD_12646_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12646_output #Row: " << tbl_Filter_TD_12646_output.getNumRow() << std::endl;
}

void SW_Project_TD_12270(Table &tbl_JOIN_INNER_TD_13603_output, Table &tbl_Project_TD_12270_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#12330)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#12330)
    int nrow1 = tbl_JOIN_INNER_TD_13603_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13603_output.getInt32(i, 0);
        int32_t _ss_item_sk12330 = _i_item_sk228;
        tbl_Project_TD_12270_output.setInt32(i, 0, _ss_item_sk12330);
    }
    tbl_Project_TD_12270_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12270_output #Row: " << tbl_Project_TD_12270_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12332(Table &tbl_SerializeFromObject_TD_13140_input, Table &tbl_Filter_TD_12332_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(cs_item_sk#12723) AND isnotnull(cs_sold_date_sk#12708)))
    // Input: ListBuffer(cs_sold_date_sk#12708, cs_item_sk#12723, cs_quantity#12726, cs_list_price#12728)
    // Output: ListBuffer(cs_sold_date_sk#12708, cs_item_sk#12723, cs_quantity#12726, cs_list_price#12728)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13140_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_item_sk12723 = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 1);
        int32_t _cs_sold_date_sk12708 = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 0);
        if ((_cs_item_sk12723!= 0) && (_cs_sold_date_sk12708!= 0)) {
            int32_t _cs_sold_date_sk12708_t = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 0);
            tbl_Filter_TD_12332_output.setInt32(r, 0, _cs_sold_date_sk12708_t);
            int32_t _cs_item_sk12723_t = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 1);
            tbl_Filter_TD_12332_output.setInt32(r, 1, _cs_item_sk12723_t);
            int32_t _cs_quantity12726_t = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 2);
            tbl_Filter_TD_12332_output.setInt32(r, 2, _cs_quantity12726_t);
            int32_t _cs_list_price12728_t = tbl_SerializeFromObject_TD_13140_input.getInt32(i, 3);
            tbl_Filter_TD_12332_output.setInt32(r, 3, _cs_list_price12728_t);
            r++;
        }
    }
    tbl_Filter_TD_12332_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12332_output #Row: " << tbl_Filter_TD_12332_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12881(Table &tbl_SerializeFromObject_TD_13791_input, Table &tbl_Filter_TD_12881_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12613) AND ((d_year#12613 >= 1999) AND (d_year#12613 <= 2001))) AND isnotnull(d_date_sk#12607)))
    // Input: ListBuffer(d_date_sk#12607, d_year#12613)
    // Output: ListBuffer(d_date_sk#12607)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13791_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12613 = tbl_SerializeFromObject_TD_13791_input.getInt32(i, 1);
        int32_t _d_date_sk12607 = tbl_SerializeFromObject_TD_13791_input.getInt32(i, 0);
        if (((_d_year12613!= 0) && ((_d_year12613 >= 1999) && (_d_year12613 <= 2001))) && (_d_date_sk12607!= 0)) {
            int32_t _d_date_sk12607_t = tbl_SerializeFromObject_TD_13791_input.getInt32(i, 0);
            tbl_Filter_TD_12881_output.setInt32(r, 0, _d_date_sk12607_t);
            r++;
        }
    }
    tbl_Filter_TD_12881_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12881_output #Row: " << tbl_Filter_TD_12881_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12285(Table &tbl_SerializeFromObject_TD_13873_input, Table &tbl_Filter_TD_12285_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ws_sold_date_sk#12573))
    // Input: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    // Output: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13873_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_sold_date_sk12573 = tbl_SerializeFromObject_TD_13873_input.getInt32(i, 0);
        if (_ws_sold_date_sk12573!= 0) {
            int32_t _ws_sold_date_sk12573_t = tbl_SerializeFromObject_TD_13873_input.getInt32(i, 0);
            tbl_Filter_TD_12285_output.setInt32(r, 0, _ws_sold_date_sk12573_t);
            int32_t _ws_quantity12591_t = tbl_SerializeFromObject_TD_13873_input.getInt32(i, 1);
            tbl_Filter_TD_12285_output.setInt32(r, 1, _ws_quantity12591_t);
            int32_t _ws_list_price12593_t = tbl_SerializeFromObject_TD_13873_input.getInt32(i, 2);
            tbl_Filter_TD_12285_output.setInt32(r, 2, _ws_list_price12593_t);
            r++;
        }
    }
    tbl_Filter_TD_12285_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12285_output #Row: " << tbl_Filter_TD_12285_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1229(Table &tbl_SerializeFromObject_TD_13308_input, Table &tbl_Filter_TD_1229_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12551) AND ((d_year#12551 >= 1999) AND (d_year#12551 <= 2001))) AND isnotnull(d_date_sk#12545)))
    // Input: ListBuffer(d_date_sk#12545, d_year#12551)
    // Output: ListBuffer(d_date_sk#12545)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13308_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12551 = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 1);
        int32_t _d_date_sk12545 = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 0);
        if (((_d_year12551!= 0) && ((_d_year12551 >= 1999) && (_d_year12551 <= 2001))) && (_d_date_sk12545!= 0)) {
            int32_t _d_date_sk12545_t = tbl_SerializeFromObject_TD_13308_input.getInt32(i, 0);
            tbl_Filter_TD_1229_output.setInt32(r, 0, _d_date_sk12545_t);
            r++;
        }
    }
    tbl_Filter_TD_1229_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1229_output #Row: " << tbl_Filter_TD_1229_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12834(Table &tbl_SerializeFromObject_TD_13944_input, Table &tbl_Filter_TD_12834_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(cs_sold_date_sk#12511))
    // Input: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    // Output: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13944_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_sold_date_sk12511 = tbl_SerializeFromObject_TD_13944_input.getInt32(i, 0);
        if (_cs_sold_date_sk12511!= 0) {
            int32_t _cs_sold_date_sk12511_t = tbl_SerializeFromObject_TD_13944_input.getInt32(i, 0);
            tbl_Filter_TD_12834_output.setInt32(r, 0, _cs_sold_date_sk12511_t);
            int32_t _cs_quantity12529_t = tbl_SerializeFromObject_TD_13944_input.getInt32(i, 1);
            tbl_Filter_TD_12834_output.setInt32(r, 1, _cs_quantity12529_t);
            int32_t _cs_list_price12531_t = tbl_SerializeFromObject_TD_13944_input.getInt32(i, 2);
            tbl_Filter_TD_12834_output.setInt32(r, 2, _cs_list_price12531_t);
            r++;
        }
    }
    tbl_Filter_TD_12834_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12834_output #Row: " << tbl_Filter_TD_12834_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12671(Table &tbl_SerializeFromObject_TD_13505_input, Table &tbl_Filter_TD_12671_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(d_year#12489) AND ((d_year#12489 >= 1999) AND (d_year#12489 <= 2001))) AND isnotnull(d_date_sk#12483)))
    // Input: ListBuffer(d_date_sk#12483, d_year#12489)
    // Output: ListBuffer(d_date_sk#12483)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13505_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12489 = tbl_SerializeFromObject_TD_13505_input.getInt32(i, 1);
        int32_t _d_date_sk12483 = tbl_SerializeFromObject_TD_13505_input.getInt32(i, 0);
        if (((_d_year12489!= 0) && ((_d_year12489 >= 1999) && (_d_year12489 <= 2001))) && (_d_date_sk12483!= 0)) {
            int32_t _d_date_sk12483_t = tbl_SerializeFromObject_TD_13505_input.getInt32(i, 0);
            tbl_Filter_TD_12671_output.setInt32(r, 0, _d_date_sk12483_t);
            r++;
        }
    }
    tbl_Filter_TD_12671_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12671_output #Row: " << tbl_Filter_TD_12671_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12354(Table &tbl_SerializeFromObject_TD_13299_input, Table &tbl_Filter_TD_12354_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ss_sold_date_sk#12460))
    // Input: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    // Output: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13299_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk12460 = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 0);
        if (_ss_sold_date_sk12460!= 0) {
            int32_t _ss_sold_date_sk12460_t = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 0);
            tbl_Filter_TD_12354_output.setInt32(r, 0, _ss_sold_date_sk12460_t);
            int32_t _ss_quantity12470_t = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 1);
            tbl_Filter_TD_12354_output.setInt32(r, 1, _ss_quantity12470_t);
            int32_t _ss_list_price12472_t = tbl_SerializeFromObject_TD_13299_input.getInt32(i, 2);
            tbl_Filter_TD_12354_output.setInt32(r, 2, _ss_list_price12472_t);
            r++;
        }
    }
    tbl_Filter_TD_12354_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12354_output #Row: " << tbl_Filter_TD_12354_output.getNumRow() << std::endl;
}

void SW_Project_TD_1223(Table &tbl_JOIN_INNER_TD_13763_output, Table &tbl_Project_TD_1223_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#12330)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#12330)
    int nrow1 = tbl_JOIN_INNER_TD_13763_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13763_output.getInt32(i, 0);
        int32_t _ss_item_sk12330 = _i_item_sk228;
        tbl_Project_TD_1223_output.setInt32(i, 0, _ss_item_sk12330);
    }
    tbl_Project_TD_1223_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1223_output #Row: " << tbl_Project_TD_1223_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12604(Table &tbl_SerializeFromObject_TD_13499_input, Table &tbl_Filter_TD_12604_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(i_item_sk#12658))
    // Input: ListBuffer(i_item_sk#12658, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Output: ListBuffer(i_item_sk#12658, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13499_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk12658 = tbl_SerializeFromObject_TD_13499_input.getInt32(i, 0);
        if (_i_item_sk12658!= 0) {
            int32_t _i_item_sk12658_t = tbl_SerializeFromObject_TD_13499_input.getInt32(i, 0);
            tbl_Filter_TD_12604_output.setInt32(r, 0, _i_item_sk12658_t);
            int32_t _i_brand_id12665_t = tbl_SerializeFromObject_TD_13499_input.getInt32(i, 1);
            tbl_Filter_TD_12604_output.setInt32(r, 1, _i_brand_id12665_t);
            int32_t _i_class_id12667_t = tbl_SerializeFromObject_TD_13499_input.getInt32(i, 2);
            tbl_Filter_TD_12604_output.setInt32(r, 2, _i_class_id12667_t);
            int32_t _i_category_id12669_t = tbl_SerializeFromObject_TD_13499_input.getInt32(i, 3);
            tbl_Filter_TD_12604_output.setInt32(r, 3, _i_category_id12669_t);
            r++;
        }
    }
    tbl_Filter_TD_12604_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12604_output #Row: " << tbl_Filter_TD_12604_output.getNumRow() << std::endl;
}

void SW_Project_TD_12137(Table &tbl_JOIN_INNER_TD_13722_output, Table &tbl_Project_TD_12137_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(i_item_sk#228 AS ss_item_sk#12330)
    // Input: ListBuffer(i_item_sk#228)
    // Output: ListBuffer(ss_item_sk#12330)
    int nrow1 = tbl_JOIN_INNER_TD_13722_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_item_sk228 = tbl_JOIN_INNER_TD_13722_output.getInt32(i, 0);
        int32_t _ss_item_sk12330 = _i_item_sk228;
        tbl_Project_TD_12137_output.setInt32(i, 0, _ss_item_sk12330);
    }
    tbl_Project_TD_12137_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_12137_output #Row: " << tbl_Project_TD_12137_output.getNumRow() << std::endl;
}

void SW_Filter_TD_12286(Table &tbl_SerializeFromObject_TD_13667_input, Table &tbl_Filter_TD_12286_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_item_sk#12637) AND isnotnull(ss_sold_date_sk#12635)))
    // Input: ListBuffer(ss_sold_date_sk#12635, ss_item_sk#12637, ss_quantity#12645, ss_list_price#12647)
    // Output: ListBuffer(ss_sold_date_sk#12635, ss_item_sk#12637, ss_quantity#12645, ss_list_price#12647)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_13667_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_item_sk12637 = tbl_SerializeFromObject_TD_13667_input.getInt32(i, 1);
        int32_t _ss_sold_date_sk12635 = tbl_SerializeFromObject_TD_13667_input.getInt32(i, 0);
        if ((_ss_item_sk12637!= 0) && (_ss_sold_date_sk12635!= 0)) {
            int32_t _ss_sold_date_sk12635_t = tbl_SerializeFromObject_TD_13667_input.getInt32(i, 0);
            tbl_Filter_TD_12286_output.setInt32(r, 0, _ss_sold_date_sk12635_t);
            int32_t _ss_item_sk12637_t = tbl_SerializeFromObject_TD_13667_input.getInt32(i, 1);
            tbl_Filter_TD_12286_output.setInt32(r, 1, _ss_item_sk12637_t);
            int32_t _ss_quantity12645_t = tbl_SerializeFromObject_TD_13667_input.getInt32(i, 2);
            tbl_Filter_TD_12286_output.setInt32(r, 2, _ss_quantity12645_t);
            int32_t _ss_list_price12647_t = tbl_SerializeFromObject_TD_13667_input.getInt32(i, 3);
            tbl_Filter_TD_12286_output.setInt32(r, 3, _ss_list_price12647_t);
            r++;
        }
    }
    tbl_Filter_TD_12286_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_12286_output #Row: " << tbl_Filter_TD_12286_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11446_key_leftMajor {
    int32_t _ws_sold_date_sk12573;
    bool operator==(const SW_JOIN_INNER_TD_11446_key_leftMajor& other) const {
        return ((_ws_sold_date_sk12573 == other._ws_sold_date_sk12573));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11446_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11446_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk12573));
    }
};
}
struct SW_JOIN_INNER_TD_11446_payload_leftMajor {
    int32_t _ws_sold_date_sk12573;
    int32_t _ws_quantity12591;
    int32_t _ws_list_price12593;
};
struct SW_JOIN_INNER_TD_11446_key_rightMajor {
    int32_t _d_date_sk12607;
    bool operator==(const SW_JOIN_INNER_TD_11446_key_rightMajor& other) const {
        return ((_d_date_sk12607 == other._d_date_sk12607));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11446_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11446_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12607));
    }
};
}
struct SW_JOIN_INNER_TD_11446_payload_rightMajor {
    int32_t _d_date_sk12607;
};
void SW_JOIN_INNER_TD_11446(Table &tbl_Filter_TD_12654_output, Table &tbl_Filter_TD_12130_output, Table &tbl_JOIN_INNER_TD_11446_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#12573 = d_date_sk#12607))
    // Left Table: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    // Right Table: ListBuffer(d_date_sk#12607)
    // Output Table: ListBuffer(ws_quantity#12591, ws_list_price#12593)
    int left_nrow = tbl_Filter_TD_12654_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12130_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11446_key_leftMajor, SW_JOIN_INNER_TD_11446_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12654_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk12573_k = tbl_Filter_TD_12654_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11446_key_leftMajor keyA{_ws_sold_date_sk12573_k};
            int32_t _ws_sold_date_sk12573 = tbl_Filter_TD_12654_output.getInt32(i, 0);
            int32_t _ws_quantity12591 = tbl_Filter_TD_12654_output.getInt32(i, 1);
            int32_t _ws_list_price12593 = tbl_Filter_TD_12654_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11446_payload_leftMajor payloadA{_ws_sold_date_sk12573, _ws_quantity12591, _ws_list_price12593};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12130_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12607_k = tbl_Filter_TD_12130_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11446_key_leftMajor{_d_date_sk12607_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk12573 = (it->second)._ws_sold_date_sk12573;
                int32_t _ws_quantity12591 = (it->second)._ws_quantity12591;
                int32_t _ws_list_price12593 = (it->second)._ws_list_price12593;
                int32_t _d_date_sk12607 = tbl_Filter_TD_12130_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11446_output.setInt32(r, 0, _ws_quantity12591);
                tbl_JOIN_INNER_TD_11446_output.setInt32(r, 1, _ws_list_price12593);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11446_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11446_key_rightMajor, SW_JOIN_INNER_TD_11446_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12130_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12607_k = tbl_Filter_TD_12130_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11446_key_rightMajor keyA{_d_date_sk12607_k};
            int32_t _d_date_sk12607 = tbl_Filter_TD_12130_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11446_payload_rightMajor payloadA{_d_date_sk12607};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12654_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk12573_k = tbl_Filter_TD_12654_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11446_key_rightMajor{_ws_sold_date_sk12573_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12607 = (it->second)._d_date_sk12607;
                int32_t _ws_sold_date_sk12573 = tbl_Filter_TD_12654_output.getInt32(i, 0);
                int32_t _ws_quantity12591 = tbl_Filter_TD_12654_output.getInt32(i, 1);
                int32_t _ws_list_price12593 = tbl_Filter_TD_12654_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11446_output.setInt32(r, 0, _ws_quantity12591);
                tbl_JOIN_INNER_TD_11446_output.setInt32(r, 1, _ws_list_price12593);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11446_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11446_output #Row: " << tbl_JOIN_INNER_TD_11446_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1162_key_leftMajor {
    int32_t _cs_sold_date_sk12511;
    bool operator==(const SW_JOIN_INNER_TD_1162_key_leftMajor& other) const {
        return ((_cs_sold_date_sk12511 == other._cs_sold_date_sk12511));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1162_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1162_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk12511));
    }
};
}
struct SW_JOIN_INNER_TD_1162_payload_leftMajor {
    int32_t _cs_sold_date_sk12511;
    int32_t _cs_quantity12529;
    int32_t _cs_list_price12531;
};
struct SW_JOIN_INNER_TD_1162_key_rightMajor {
    int32_t _d_date_sk12545;
    bool operator==(const SW_JOIN_INNER_TD_1162_key_rightMajor& other) const {
        return ((_d_date_sk12545 == other._d_date_sk12545));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1162_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1162_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12545));
    }
};
}
struct SW_JOIN_INNER_TD_1162_payload_rightMajor {
    int32_t _d_date_sk12545;
};
void SW_JOIN_INNER_TD_1162(Table &tbl_Filter_TD_12763_output, Table &tbl_Filter_TD_12866_output, Table &tbl_JOIN_INNER_TD_1162_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#12511 = d_date_sk#12545))
    // Left Table: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    // Right Table: ListBuffer(d_date_sk#12545)
    // Output Table: ListBuffer(cs_quantity#12529, cs_list_price#12531)
    int left_nrow = tbl_Filter_TD_12763_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12866_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1162_key_leftMajor, SW_JOIN_INNER_TD_1162_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12763_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk12511_k = tbl_Filter_TD_12763_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1162_key_leftMajor keyA{_cs_sold_date_sk12511_k};
            int32_t _cs_sold_date_sk12511 = tbl_Filter_TD_12763_output.getInt32(i, 0);
            int32_t _cs_quantity12529 = tbl_Filter_TD_12763_output.getInt32(i, 1);
            int32_t _cs_list_price12531 = tbl_Filter_TD_12763_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1162_payload_leftMajor payloadA{_cs_sold_date_sk12511, _cs_quantity12529, _cs_list_price12531};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12866_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12545_k = tbl_Filter_TD_12866_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1162_key_leftMajor{_d_date_sk12545_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk12511 = (it->second)._cs_sold_date_sk12511;
                int32_t _cs_quantity12529 = (it->second)._cs_quantity12529;
                int32_t _cs_list_price12531 = (it->second)._cs_list_price12531;
                int32_t _d_date_sk12545 = tbl_Filter_TD_12866_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1162_output.setInt32(r, 0, _cs_quantity12529);
                tbl_JOIN_INNER_TD_1162_output.setInt32(r, 1, _cs_list_price12531);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1162_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1162_key_rightMajor, SW_JOIN_INNER_TD_1162_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12866_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12545_k = tbl_Filter_TD_12866_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1162_key_rightMajor keyA{_d_date_sk12545_k};
            int32_t _d_date_sk12545 = tbl_Filter_TD_12866_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1162_payload_rightMajor payloadA{_d_date_sk12545};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12763_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk12511_k = tbl_Filter_TD_12763_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1162_key_rightMajor{_cs_sold_date_sk12511_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12545 = (it->second)._d_date_sk12545;
                int32_t _cs_sold_date_sk12511 = tbl_Filter_TD_12763_output.getInt32(i, 0);
                int32_t _cs_quantity12529 = tbl_Filter_TD_12763_output.getInt32(i, 1);
                int32_t _cs_list_price12531 = tbl_Filter_TD_12763_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_1162_output.setInt32(r, 0, _cs_quantity12529);
                tbl_JOIN_INNER_TD_1162_output.setInt32(r, 1, _cs_list_price12531);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1162_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1162_output #Row: " << tbl_JOIN_INNER_TD_1162_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11482_key_leftMajor {
    int32_t _ss_sold_date_sk12460;
    bool operator==(const SW_JOIN_INNER_TD_11482_key_leftMajor& other) const {
        return ((_ss_sold_date_sk12460 == other._ss_sold_date_sk12460));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11482_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11482_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk12460));
    }
};
}
struct SW_JOIN_INNER_TD_11482_payload_leftMajor {
    int32_t _ss_sold_date_sk12460;
    int32_t _ss_quantity12470;
    int32_t _ss_list_price12472;
};
struct SW_JOIN_INNER_TD_11482_key_rightMajor {
    int32_t _d_date_sk12483;
    bool operator==(const SW_JOIN_INNER_TD_11482_key_rightMajor& other) const {
        return ((_d_date_sk12483 == other._d_date_sk12483));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11482_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11482_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12483));
    }
};
}
struct SW_JOIN_INNER_TD_11482_payload_rightMajor {
    int32_t _d_date_sk12483;
};
void SW_JOIN_INNER_TD_11482(Table &tbl_Filter_TD_1212_output, Table &tbl_Filter_TD_12502_output, Table &tbl_JOIN_INNER_TD_11482_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#12460 = d_date_sk#12483))
    // Left Table: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    // Right Table: ListBuffer(d_date_sk#12483)
    // Output Table: ListBuffer(ss_quantity#12470, ss_list_price#12472)
    int left_nrow = tbl_Filter_TD_1212_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12502_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11482_key_leftMajor, SW_JOIN_INNER_TD_11482_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_1212_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk12460_k = tbl_Filter_TD_1212_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11482_key_leftMajor keyA{_ss_sold_date_sk12460_k};
            int32_t _ss_sold_date_sk12460 = tbl_Filter_TD_1212_output.getInt32(i, 0);
            int32_t _ss_quantity12470 = tbl_Filter_TD_1212_output.getInt32(i, 1);
            int32_t _ss_list_price12472 = tbl_Filter_TD_1212_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11482_payload_leftMajor payloadA{_ss_sold_date_sk12460, _ss_quantity12470, _ss_list_price12472};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12502_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12483_k = tbl_Filter_TD_12502_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11482_key_leftMajor{_d_date_sk12483_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk12460 = (it->second)._ss_sold_date_sk12460;
                int32_t _ss_quantity12470 = (it->second)._ss_quantity12470;
                int32_t _ss_list_price12472 = (it->second)._ss_list_price12472;
                int32_t _d_date_sk12483 = tbl_Filter_TD_12502_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11482_output.setInt32(r, 0, _ss_quantity12470);
                tbl_JOIN_INNER_TD_11482_output.setInt32(r, 1, _ss_list_price12472);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11482_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11482_key_rightMajor, SW_JOIN_INNER_TD_11482_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12502_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12483_k = tbl_Filter_TD_12502_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11482_key_rightMajor keyA{_d_date_sk12483_k};
            int32_t _d_date_sk12483 = tbl_Filter_TD_12502_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11482_payload_rightMajor payloadA{_d_date_sk12483};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1212_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk12460_k = tbl_Filter_TD_1212_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11482_key_rightMajor{_ss_sold_date_sk12460_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12483 = (it->second)._d_date_sk12483;
                int32_t _ss_sold_date_sk12460 = tbl_Filter_TD_1212_output.getInt32(i, 0);
                int32_t _ss_quantity12470 = tbl_Filter_TD_1212_output.getInt32(i, 1);
                int32_t _ss_list_price12472 = tbl_Filter_TD_1212_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11482_output.setInt32(r, 0, _ss_quantity12470);
                tbl_JOIN_INNER_TD_11482_output.setInt32(r, 1, _ss_list_price12472);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11482_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11482_output #Row: " << tbl_JOIN_INNER_TD_11482_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11290_key_leftMajor {
    int32_t _i_item_sk12826;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11290_key_leftMajor& other) const {
        return ((_i_item_sk12826 == other._i_item_sk12826));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11290_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11290_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12826));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11290_payload_leftMajor {
    int32_t _i_item_sk12826;
    int32_t _i_brand_id12833;
    int32_t _i_class_id12835;
    int32_t _i_category_id12837;
};
struct SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor {
    int32_t _ss_item_sk12330;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor& other) const {
        return ((_ss_item_sk12330 == other._ss_item_sk12330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12330));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11290_payload_rightMajor {
    int32_t _ss_item_sk12330;
};
void SW_JOIN_LEFTSEMI_TD_11290(Table &tbl_Filter_TD_12481_output, Table &tbl_Project_TD_12700_output, Table &tbl_JOIN_LEFTSEMI_TD_11290_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_sk#12826 = ss_item_sk#12330))
    // Left Table: ListBuffer(i_item_sk#12826, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    // Right Table: ListBuffer(ss_item_sk#12330)
    // Output Table: ListBuffer(i_item_sk#12826, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    int left_nrow = tbl_Filter_TD_12481_output.getNumRow();
    int right_nrow = tbl_Project_TD_12700_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11290_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12700_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12481_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12330_k = tbl_Project_TD_12700_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor keyA{_ss_item_sk12330_k};
            int32_t _ss_item_sk12330 = tbl_Project_TD_12700_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11290_payload_rightMajor payloadA{_ss_item_sk12330};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12826_k = tbl_Filter_TD_12481_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11290_key_rightMajor{_i_item_sk12826_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12826 = tbl_Filter_TD_12481_output.getInt32(i, 0);
                int32_t _i_brand_id12833 = tbl_Filter_TD_12481_output.getInt32(i, 1);
                int32_t _i_class_id12835 = tbl_Filter_TD_12481_output.getInt32(i, 2);
                int32_t _i_category_id12837 = tbl_Filter_TD_12481_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11290_output.setInt32(r, 0, _i_item_sk12826);
                tbl_JOIN_LEFTSEMI_TD_11290_output.setInt32(r, 1, _i_brand_id12833);
                tbl_JOIN_LEFTSEMI_TD_11290_output.setInt32(r, 2, _i_class_id12835);
                tbl_JOIN_LEFTSEMI_TD_11290_output.setInt32(r, 3, _i_category_id12837);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11290_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11290_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11290_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11641_key_leftMajor {
    int32_t _ws_item_sk12795;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11641_key_leftMajor& other) const {
        return ((_ws_item_sk12795 == other._ws_item_sk12795));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11641_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11641_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk12795));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11641_payload_leftMajor {
    int32_t _ws_sold_date_sk12792;
    int32_t _ws_item_sk12795;
    int32_t _ws_quantity12810;
    int32_t _ws_list_price12812;
};
struct SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor {
    int32_t _ss_item_sk12330;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor& other) const {
        return ((_ss_item_sk12330 == other._ss_item_sk12330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12330));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11641_payload_rightMajor {
    int32_t _ss_item_sk12330;
};
void SW_JOIN_LEFTSEMI_TD_11641(Table &tbl_Filter_TD_12745_output, Table &tbl_Project_TD_12881_output, Table &tbl_JOIN_LEFTSEMI_TD_11641_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ws_item_sk#12795 = ss_item_sk#12330))
    // Left Table: ListBuffer(ws_sold_date_sk#12792, ws_item_sk#12795, ws_quantity#12810, ws_list_price#12812)
    // Right Table: ListBuffer(ss_item_sk#12330)
    // Output Table: ListBuffer(ws_sold_date_sk#12792, ws_item_sk#12795, ws_quantity#12810, ws_list_price#12812)
    int left_nrow = tbl_Filter_TD_12745_output.getNumRow();
    int right_nrow = tbl_Project_TD_12881_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11641_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12881_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12745_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12330_k = tbl_Project_TD_12881_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor keyA{_ss_item_sk12330_k};
            int32_t _ss_item_sk12330 = tbl_Project_TD_12881_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11641_payload_rightMajor payloadA{_ss_item_sk12330};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk12795_k = tbl_Filter_TD_12745_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11641_key_rightMajor{_ws_item_sk12795_k});
            if (it != ht1.end()) {
                int32_t _ws_sold_date_sk12792 = tbl_Filter_TD_12745_output.getInt32(i, 0);
                int32_t _ws_item_sk12795 = tbl_Filter_TD_12745_output.getInt32(i, 1);
                int32_t _ws_quantity12810 = tbl_Filter_TD_12745_output.getInt32(i, 2);
                int32_t _ws_list_price12812 = tbl_Filter_TD_12745_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11641_output.setInt32(r, 0, _ws_sold_date_sk12792);
                tbl_JOIN_LEFTSEMI_TD_11641_output.setInt32(r, 1, _ws_item_sk12795);
                tbl_JOIN_LEFTSEMI_TD_11641_output.setInt32(r, 2, _ws_quantity12810);
                tbl_JOIN_LEFTSEMI_TD_11641_output.setInt32(r, 3, _ws_list_price12812);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11641_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11641_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11641_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11408_key_leftMajor {
    int32_t _ws_sold_date_sk12573;
    bool operator==(const SW_JOIN_INNER_TD_11408_key_leftMajor& other) const {
        return ((_ws_sold_date_sk12573 == other._ws_sold_date_sk12573));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11408_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11408_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk12573));
    }
};
}
struct SW_JOIN_INNER_TD_11408_payload_leftMajor {
    int32_t _ws_sold_date_sk12573;
    int32_t _ws_quantity12591;
    int32_t _ws_list_price12593;
};
struct SW_JOIN_INNER_TD_11408_key_rightMajor {
    int32_t _d_date_sk12607;
    bool operator==(const SW_JOIN_INNER_TD_11408_key_rightMajor& other) const {
        return ((_d_date_sk12607 == other._d_date_sk12607));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11408_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11408_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12607));
    }
};
}
struct SW_JOIN_INNER_TD_11408_payload_rightMajor {
    int32_t _d_date_sk12607;
};
void SW_JOIN_INNER_TD_11408(Table &tbl_Filter_TD_12645_output, Table &tbl_Filter_TD_12676_output, Table &tbl_JOIN_INNER_TD_11408_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#12573 = d_date_sk#12607))
    // Left Table: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    // Right Table: ListBuffer(d_date_sk#12607)
    // Output Table: ListBuffer(ws_quantity#12591, ws_list_price#12593)
    int left_nrow = tbl_Filter_TD_12645_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12676_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11408_key_leftMajor, SW_JOIN_INNER_TD_11408_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12645_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk12573_k = tbl_Filter_TD_12645_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11408_key_leftMajor keyA{_ws_sold_date_sk12573_k};
            int32_t _ws_sold_date_sk12573 = tbl_Filter_TD_12645_output.getInt32(i, 0);
            int32_t _ws_quantity12591 = tbl_Filter_TD_12645_output.getInt32(i, 1);
            int32_t _ws_list_price12593 = tbl_Filter_TD_12645_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11408_payload_leftMajor payloadA{_ws_sold_date_sk12573, _ws_quantity12591, _ws_list_price12593};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12676_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12607_k = tbl_Filter_TD_12676_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11408_key_leftMajor{_d_date_sk12607_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk12573 = (it->second)._ws_sold_date_sk12573;
                int32_t _ws_quantity12591 = (it->second)._ws_quantity12591;
                int32_t _ws_list_price12593 = (it->second)._ws_list_price12593;
                int32_t _d_date_sk12607 = tbl_Filter_TD_12676_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11408_output.setInt32(r, 0, _ws_quantity12591);
                tbl_JOIN_INNER_TD_11408_output.setInt32(r, 1, _ws_list_price12593);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11408_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11408_key_rightMajor, SW_JOIN_INNER_TD_11408_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12676_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12607_k = tbl_Filter_TD_12676_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11408_key_rightMajor keyA{_d_date_sk12607_k};
            int32_t _d_date_sk12607 = tbl_Filter_TD_12676_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11408_payload_rightMajor payloadA{_d_date_sk12607};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12645_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk12573_k = tbl_Filter_TD_12645_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11408_key_rightMajor{_ws_sold_date_sk12573_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12607 = (it->second)._d_date_sk12607;
                int32_t _ws_sold_date_sk12573 = tbl_Filter_TD_12645_output.getInt32(i, 0);
                int32_t _ws_quantity12591 = tbl_Filter_TD_12645_output.getInt32(i, 1);
                int32_t _ws_list_price12593 = tbl_Filter_TD_12645_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11408_output.setInt32(r, 0, _ws_quantity12591);
                tbl_JOIN_INNER_TD_11408_output.setInt32(r, 1, _ws_list_price12593);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11408_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11408_output #Row: " << tbl_JOIN_INNER_TD_11408_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1175_key_leftMajor {
    int32_t _cs_sold_date_sk12511;
    bool operator==(const SW_JOIN_INNER_TD_1175_key_leftMajor& other) const {
        return ((_cs_sold_date_sk12511 == other._cs_sold_date_sk12511));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1175_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1175_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk12511));
    }
};
}
struct SW_JOIN_INNER_TD_1175_payload_leftMajor {
    int32_t _cs_sold_date_sk12511;
    int32_t _cs_quantity12529;
    int32_t _cs_list_price12531;
};
struct SW_JOIN_INNER_TD_1175_key_rightMajor {
    int32_t _d_date_sk12545;
    bool operator==(const SW_JOIN_INNER_TD_1175_key_rightMajor& other) const {
        return ((_d_date_sk12545 == other._d_date_sk12545));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1175_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1175_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12545));
    }
};
}
struct SW_JOIN_INNER_TD_1175_payload_rightMajor {
    int32_t _d_date_sk12545;
};
void SW_JOIN_INNER_TD_1175(Table &tbl_Filter_TD_12623_output, Table &tbl_Filter_TD_12678_output, Table &tbl_JOIN_INNER_TD_1175_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#12511 = d_date_sk#12545))
    // Left Table: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    // Right Table: ListBuffer(d_date_sk#12545)
    // Output Table: ListBuffer(cs_quantity#12529, cs_list_price#12531)
    int left_nrow = tbl_Filter_TD_12623_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12678_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1175_key_leftMajor, SW_JOIN_INNER_TD_1175_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12623_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk12511_k = tbl_Filter_TD_12623_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1175_key_leftMajor keyA{_cs_sold_date_sk12511_k};
            int32_t _cs_sold_date_sk12511 = tbl_Filter_TD_12623_output.getInt32(i, 0);
            int32_t _cs_quantity12529 = tbl_Filter_TD_12623_output.getInt32(i, 1);
            int32_t _cs_list_price12531 = tbl_Filter_TD_12623_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1175_payload_leftMajor payloadA{_cs_sold_date_sk12511, _cs_quantity12529, _cs_list_price12531};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12678_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12545_k = tbl_Filter_TD_12678_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1175_key_leftMajor{_d_date_sk12545_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk12511 = (it->second)._cs_sold_date_sk12511;
                int32_t _cs_quantity12529 = (it->second)._cs_quantity12529;
                int32_t _cs_list_price12531 = (it->second)._cs_list_price12531;
                int32_t _d_date_sk12545 = tbl_Filter_TD_12678_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1175_output.setInt32(r, 0, _cs_quantity12529);
                tbl_JOIN_INNER_TD_1175_output.setInt32(r, 1, _cs_list_price12531);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1175_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1175_key_rightMajor, SW_JOIN_INNER_TD_1175_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12678_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12545_k = tbl_Filter_TD_12678_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1175_key_rightMajor keyA{_d_date_sk12545_k};
            int32_t _d_date_sk12545 = tbl_Filter_TD_12678_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1175_payload_rightMajor payloadA{_d_date_sk12545};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12623_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk12511_k = tbl_Filter_TD_12623_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1175_key_rightMajor{_cs_sold_date_sk12511_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12545 = (it->second)._d_date_sk12545;
                int32_t _cs_sold_date_sk12511 = tbl_Filter_TD_12623_output.getInt32(i, 0);
                int32_t _cs_quantity12529 = tbl_Filter_TD_12623_output.getInt32(i, 1);
                int32_t _cs_list_price12531 = tbl_Filter_TD_12623_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_1175_output.setInt32(r, 0, _cs_quantity12529);
                tbl_JOIN_INNER_TD_1175_output.setInt32(r, 1, _cs_list_price12531);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1175_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1175_output #Row: " << tbl_JOIN_INNER_TD_1175_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11961_key_leftMajor {
    int32_t _ss_sold_date_sk12460;
    bool operator==(const SW_JOIN_INNER_TD_11961_key_leftMajor& other) const {
        return ((_ss_sold_date_sk12460 == other._ss_sold_date_sk12460));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11961_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11961_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk12460));
    }
};
}
struct SW_JOIN_INNER_TD_11961_payload_leftMajor {
    int32_t _ss_sold_date_sk12460;
    int32_t _ss_quantity12470;
    int32_t _ss_list_price12472;
};
struct SW_JOIN_INNER_TD_11961_key_rightMajor {
    int32_t _d_date_sk12483;
    bool operator==(const SW_JOIN_INNER_TD_11961_key_rightMajor& other) const {
        return ((_d_date_sk12483 == other._d_date_sk12483));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11961_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11961_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12483));
    }
};
}
struct SW_JOIN_INNER_TD_11961_payload_rightMajor {
    int32_t _d_date_sk12483;
};
void SW_JOIN_INNER_TD_11961(Table &tbl_Filter_TD_12711_output, Table &tbl_Filter_TD_12802_output, Table &tbl_JOIN_INNER_TD_11961_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#12460 = d_date_sk#12483))
    // Left Table: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    // Right Table: ListBuffer(d_date_sk#12483)
    // Output Table: ListBuffer(ss_quantity#12470, ss_list_price#12472)
    int left_nrow = tbl_Filter_TD_12711_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12802_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11961_key_leftMajor, SW_JOIN_INNER_TD_11961_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12711_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk12460_k = tbl_Filter_TD_12711_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11961_key_leftMajor keyA{_ss_sold_date_sk12460_k};
            int32_t _ss_sold_date_sk12460 = tbl_Filter_TD_12711_output.getInt32(i, 0);
            int32_t _ss_quantity12470 = tbl_Filter_TD_12711_output.getInt32(i, 1);
            int32_t _ss_list_price12472 = tbl_Filter_TD_12711_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11961_payload_leftMajor payloadA{_ss_sold_date_sk12460, _ss_quantity12470, _ss_list_price12472};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12802_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12483_k = tbl_Filter_TD_12802_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11961_key_leftMajor{_d_date_sk12483_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk12460 = (it->second)._ss_sold_date_sk12460;
                int32_t _ss_quantity12470 = (it->second)._ss_quantity12470;
                int32_t _ss_list_price12472 = (it->second)._ss_list_price12472;
                int32_t _d_date_sk12483 = tbl_Filter_TD_12802_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11961_output.setInt32(r, 0, _ss_quantity12470);
                tbl_JOIN_INNER_TD_11961_output.setInt32(r, 1, _ss_list_price12472);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11961_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11961_key_rightMajor, SW_JOIN_INNER_TD_11961_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12802_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12483_k = tbl_Filter_TD_12802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11961_key_rightMajor keyA{_d_date_sk12483_k};
            int32_t _d_date_sk12483 = tbl_Filter_TD_12802_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11961_payload_rightMajor payloadA{_d_date_sk12483};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12711_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk12460_k = tbl_Filter_TD_12711_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11961_key_rightMajor{_ss_sold_date_sk12460_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12483 = (it->second)._d_date_sk12483;
                int32_t _ss_sold_date_sk12460 = tbl_Filter_TD_12711_output.getInt32(i, 0);
                int32_t _ss_quantity12470 = tbl_Filter_TD_12711_output.getInt32(i, 1);
                int32_t _ss_list_price12472 = tbl_Filter_TD_12711_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11961_output.setInt32(r, 0, _ss_quantity12470);
                tbl_JOIN_INNER_TD_11961_output.setInt32(r, 1, _ss_list_price12472);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11961_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11961_output #Row: " << tbl_JOIN_INNER_TD_11961_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11161_key_leftMajor {
    int32_t _i_item_sk12742;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11161_key_leftMajor& other) const {
        return ((_i_item_sk12742 == other._i_item_sk12742));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11161_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11161_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12742));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11161_payload_leftMajor {
    int32_t _i_item_sk12742;
    int32_t _i_brand_id12749;
    int32_t _i_class_id12751;
    int32_t _i_category_id12753;
};
struct SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor {
    int32_t _ss_item_sk12330;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor& other) const {
        return ((_ss_item_sk12330 == other._ss_item_sk12330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12330));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11161_payload_rightMajor {
    int32_t _ss_item_sk12330;
};
void SW_JOIN_LEFTSEMI_TD_11161(Table &tbl_Filter_TD_12646_output, Table &tbl_Project_TD_12738_output, Table &tbl_JOIN_LEFTSEMI_TD_11161_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_sk#12742 = ss_item_sk#12330))
    // Left Table: ListBuffer(i_item_sk#12742, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    // Right Table: ListBuffer(ss_item_sk#12330)
    // Output Table: ListBuffer(i_item_sk#12742, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    int left_nrow = tbl_Filter_TD_12646_output.getNumRow();
    int right_nrow = tbl_Project_TD_12738_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11161_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12738_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12646_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12330_k = tbl_Project_TD_12738_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor keyA{_ss_item_sk12330_k};
            int32_t _ss_item_sk12330 = tbl_Project_TD_12738_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11161_payload_rightMajor payloadA{_ss_item_sk12330};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12742_k = tbl_Filter_TD_12646_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11161_key_rightMajor{_i_item_sk12742_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12742 = tbl_Filter_TD_12646_output.getInt32(i, 0);
                int32_t _i_brand_id12749 = tbl_Filter_TD_12646_output.getInt32(i, 1);
                int32_t _i_class_id12751 = tbl_Filter_TD_12646_output.getInt32(i, 2);
                int32_t _i_category_id12753 = tbl_Filter_TD_12646_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11161_output.setInt32(r, 0, _i_item_sk12742);
                tbl_JOIN_LEFTSEMI_TD_11161_output.setInt32(r, 1, _i_brand_id12749);
                tbl_JOIN_LEFTSEMI_TD_11161_output.setInt32(r, 2, _i_class_id12751);
                tbl_JOIN_LEFTSEMI_TD_11161_output.setInt32(r, 3, _i_category_id12753);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11161_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11161_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11161_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11655_key_leftMajor {
    int32_t _cs_item_sk12723;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11655_key_leftMajor& other) const {
        return ((_cs_item_sk12723 == other._cs_item_sk12723));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11655_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11655_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk12723));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11655_payload_leftMajor {
    int32_t _cs_sold_date_sk12708;
    int32_t _cs_item_sk12723;
    int32_t _cs_quantity12726;
    int32_t _cs_list_price12728;
};
struct SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor {
    int32_t _ss_item_sk12330;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor& other) const {
        return ((_ss_item_sk12330 == other._ss_item_sk12330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12330));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11655_payload_rightMajor {
    int32_t _ss_item_sk12330;
};
void SW_JOIN_LEFTSEMI_TD_11655(Table &tbl_Filter_TD_12332_output, Table &tbl_Project_TD_12270_output, Table &tbl_JOIN_LEFTSEMI_TD_11655_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((cs_item_sk#12723 = ss_item_sk#12330))
    // Left Table: ListBuffer(cs_sold_date_sk#12708, cs_item_sk#12723, cs_quantity#12726, cs_list_price#12728)
    // Right Table: ListBuffer(ss_item_sk#12330)
    // Output Table: ListBuffer(cs_sold_date_sk#12708, cs_item_sk#12723, cs_quantity#12726, cs_list_price#12728)
    int left_nrow = tbl_Filter_TD_12332_output.getNumRow();
    int right_nrow = tbl_Project_TD_12270_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11655_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12270_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12332_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12330_k = tbl_Project_TD_12270_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor keyA{_ss_item_sk12330_k};
            int32_t _ss_item_sk12330 = tbl_Project_TD_12270_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11655_payload_rightMajor payloadA{_ss_item_sk12330};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk12723_k = tbl_Filter_TD_12332_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11655_key_rightMajor{_cs_item_sk12723_k});
            if (it != ht1.end()) {
                int32_t _cs_sold_date_sk12708 = tbl_Filter_TD_12332_output.getInt32(i, 0);
                int32_t _cs_item_sk12723 = tbl_Filter_TD_12332_output.getInt32(i, 1);
                int32_t _cs_quantity12726 = tbl_Filter_TD_12332_output.getInt32(i, 2);
                int32_t _cs_list_price12728 = tbl_Filter_TD_12332_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11655_output.setInt32(r, 0, _cs_sold_date_sk12708);
                tbl_JOIN_LEFTSEMI_TD_11655_output.setInt32(r, 1, _cs_item_sk12723);
                tbl_JOIN_LEFTSEMI_TD_11655_output.setInt32(r, 2, _cs_quantity12726);
                tbl_JOIN_LEFTSEMI_TD_11655_output.setInt32(r, 3, _cs_list_price12728);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11655_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11655_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11655_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_1191_key_leftMajor {
    int32_t _ws_sold_date_sk12573;
    bool operator==(const SW_JOIN_INNER_TD_1191_key_leftMajor& other) const {
        return ((_ws_sold_date_sk12573 == other._ws_sold_date_sk12573));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1191_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1191_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk12573));
    }
};
}
struct SW_JOIN_INNER_TD_1191_payload_leftMajor {
    int32_t _ws_sold_date_sk12573;
    int32_t _ws_quantity12591;
    int32_t _ws_list_price12593;
};
struct SW_JOIN_INNER_TD_1191_key_rightMajor {
    int32_t _d_date_sk12607;
    bool operator==(const SW_JOIN_INNER_TD_1191_key_rightMajor& other) const {
        return ((_d_date_sk12607 == other._d_date_sk12607));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_1191_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_1191_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12607));
    }
};
}
struct SW_JOIN_INNER_TD_1191_payload_rightMajor {
    int32_t _d_date_sk12607;
};
void SW_JOIN_INNER_TD_1191(Table &tbl_Filter_TD_12285_output, Table &tbl_Filter_TD_12881_output, Table &tbl_JOIN_INNER_TD_1191_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#12573 = d_date_sk#12607))
    // Left Table: ListBuffer(ws_sold_date_sk#12573, ws_quantity#12591, ws_list_price#12593)
    // Right Table: ListBuffer(d_date_sk#12607)
    // Output Table: ListBuffer(ws_quantity#12591, ws_list_price#12593)
    int left_nrow = tbl_Filter_TD_12285_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12881_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1191_key_leftMajor, SW_JOIN_INNER_TD_1191_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12285_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk12573_k = tbl_Filter_TD_12285_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1191_key_leftMajor keyA{_ws_sold_date_sk12573_k};
            int32_t _ws_sold_date_sk12573 = tbl_Filter_TD_12285_output.getInt32(i, 0);
            int32_t _ws_quantity12591 = tbl_Filter_TD_12285_output.getInt32(i, 1);
            int32_t _ws_list_price12593 = tbl_Filter_TD_12285_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_1191_payload_leftMajor payloadA{_ws_sold_date_sk12573, _ws_quantity12591, _ws_list_price12593};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12881_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12607_k = tbl_Filter_TD_12881_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1191_key_leftMajor{_d_date_sk12607_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk12573 = (it->second)._ws_sold_date_sk12573;
                int32_t _ws_quantity12591 = (it->second)._ws_quantity12591;
                int32_t _ws_list_price12593 = (it->second)._ws_list_price12593;
                int32_t _d_date_sk12607 = tbl_Filter_TD_12881_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_1191_output.setInt32(r, 0, _ws_quantity12591);
                tbl_JOIN_INNER_TD_1191_output.setInt32(r, 1, _ws_list_price12593);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1191_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_1191_key_rightMajor, SW_JOIN_INNER_TD_1191_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12881_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12607_k = tbl_Filter_TD_12881_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1191_key_rightMajor keyA{_d_date_sk12607_k};
            int32_t _d_date_sk12607 = tbl_Filter_TD_12881_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_1191_payload_rightMajor payloadA{_d_date_sk12607};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12285_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk12573_k = tbl_Filter_TD_12285_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_1191_key_rightMajor{_ws_sold_date_sk12573_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12607 = (it->second)._d_date_sk12607;
                int32_t _ws_sold_date_sk12573 = tbl_Filter_TD_12285_output.getInt32(i, 0);
                int32_t _ws_quantity12591 = tbl_Filter_TD_12285_output.getInt32(i, 1);
                int32_t _ws_list_price12593 = tbl_Filter_TD_12285_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_1191_output.setInt32(r, 0, _ws_quantity12591);
                tbl_JOIN_INNER_TD_1191_output.setInt32(r, 1, _ws_list_price12593);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_1191_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_1191_output #Row: " << tbl_JOIN_INNER_TD_1191_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11837_key_leftMajor {
    int32_t _cs_sold_date_sk12511;
    bool operator==(const SW_JOIN_INNER_TD_11837_key_leftMajor& other) const {
        return ((_cs_sold_date_sk12511 == other._cs_sold_date_sk12511));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11837_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11837_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk12511));
    }
};
}
struct SW_JOIN_INNER_TD_11837_payload_leftMajor {
    int32_t _cs_sold_date_sk12511;
    int32_t _cs_quantity12529;
    int32_t _cs_list_price12531;
};
struct SW_JOIN_INNER_TD_11837_key_rightMajor {
    int32_t _d_date_sk12545;
    bool operator==(const SW_JOIN_INNER_TD_11837_key_rightMajor& other) const {
        return ((_d_date_sk12545 == other._d_date_sk12545));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11837_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11837_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12545));
    }
};
}
struct SW_JOIN_INNER_TD_11837_payload_rightMajor {
    int32_t _d_date_sk12545;
};
void SW_JOIN_INNER_TD_11837(Table &tbl_Filter_TD_12834_output, Table &tbl_Filter_TD_1229_output, Table &tbl_JOIN_INNER_TD_11837_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#12511 = d_date_sk#12545))
    // Left Table: ListBuffer(cs_sold_date_sk#12511, cs_quantity#12529, cs_list_price#12531)
    // Right Table: ListBuffer(d_date_sk#12545)
    // Output Table: ListBuffer(cs_quantity#12529, cs_list_price#12531)
    int left_nrow = tbl_Filter_TD_12834_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1229_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11837_key_leftMajor, SW_JOIN_INNER_TD_11837_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12834_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk12511_k = tbl_Filter_TD_12834_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11837_key_leftMajor keyA{_cs_sold_date_sk12511_k};
            int32_t _cs_sold_date_sk12511 = tbl_Filter_TD_12834_output.getInt32(i, 0);
            int32_t _cs_quantity12529 = tbl_Filter_TD_12834_output.getInt32(i, 1);
            int32_t _cs_list_price12531 = tbl_Filter_TD_12834_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11837_payload_leftMajor payloadA{_cs_sold_date_sk12511, _cs_quantity12529, _cs_list_price12531};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1229_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12545_k = tbl_Filter_TD_1229_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11837_key_leftMajor{_d_date_sk12545_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk12511 = (it->second)._cs_sold_date_sk12511;
                int32_t _cs_quantity12529 = (it->second)._cs_quantity12529;
                int32_t _cs_list_price12531 = (it->second)._cs_list_price12531;
                int32_t _d_date_sk12545 = tbl_Filter_TD_1229_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11837_output.setInt32(r, 0, _cs_quantity12529);
                tbl_JOIN_INNER_TD_11837_output.setInt32(r, 1, _cs_list_price12531);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11837_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11837_key_rightMajor, SW_JOIN_INNER_TD_11837_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1229_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12545_k = tbl_Filter_TD_1229_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11837_key_rightMajor keyA{_d_date_sk12545_k};
            int32_t _d_date_sk12545 = tbl_Filter_TD_1229_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11837_payload_rightMajor payloadA{_d_date_sk12545};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12834_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk12511_k = tbl_Filter_TD_12834_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11837_key_rightMajor{_cs_sold_date_sk12511_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12545 = (it->second)._d_date_sk12545;
                int32_t _cs_sold_date_sk12511 = tbl_Filter_TD_12834_output.getInt32(i, 0);
                int32_t _cs_quantity12529 = tbl_Filter_TD_12834_output.getInt32(i, 1);
                int32_t _cs_list_price12531 = tbl_Filter_TD_12834_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11837_output.setInt32(r, 0, _cs_quantity12529);
                tbl_JOIN_INNER_TD_11837_output.setInt32(r, 1, _cs_list_price12531);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11837_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11837_output #Row: " << tbl_JOIN_INNER_TD_11837_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_11621_key_leftMajor {
    int32_t _ss_sold_date_sk12460;
    bool operator==(const SW_JOIN_INNER_TD_11621_key_leftMajor& other) const {
        return ((_ss_sold_date_sk12460 == other._ss_sold_date_sk12460));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11621_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11621_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk12460));
    }
};
}
struct SW_JOIN_INNER_TD_11621_payload_leftMajor {
    int32_t _ss_sold_date_sk12460;
    int32_t _ss_quantity12470;
    int32_t _ss_list_price12472;
};
struct SW_JOIN_INNER_TD_11621_key_rightMajor {
    int32_t _d_date_sk12483;
    bool operator==(const SW_JOIN_INNER_TD_11621_key_rightMajor& other) const {
        return ((_d_date_sk12483 == other._d_date_sk12483));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_11621_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_11621_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12483));
    }
};
}
struct SW_JOIN_INNER_TD_11621_payload_rightMajor {
    int32_t _d_date_sk12483;
};
void SW_JOIN_INNER_TD_11621(Table &tbl_Filter_TD_12354_output, Table &tbl_Filter_TD_12671_output, Table &tbl_JOIN_INNER_TD_11621_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#12460 = d_date_sk#12483))
    // Left Table: ListBuffer(ss_sold_date_sk#12460, ss_quantity#12470, ss_list_price#12472)
    // Right Table: ListBuffer(d_date_sk#12483)
    // Output Table: ListBuffer(ss_quantity#12470, ss_list_price#12472)
    int left_nrow = tbl_Filter_TD_12354_output.getNumRow();
    int right_nrow = tbl_Filter_TD_12671_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11621_key_leftMajor, SW_JOIN_INNER_TD_11621_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_12354_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk12460_k = tbl_Filter_TD_12354_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11621_key_leftMajor keyA{_ss_sold_date_sk12460_k};
            int32_t _ss_sold_date_sk12460 = tbl_Filter_TD_12354_output.getInt32(i, 0);
            int32_t _ss_quantity12470 = tbl_Filter_TD_12354_output.getInt32(i, 1);
            int32_t _ss_list_price12472 = tbl_Filter_TD_12354_output.getInt32(i, 2);
            SW_JOIN_INNER_TD_11621_payload_leftMajor payloadA{_ss_sold_date_sk12460, _ss_quantity12470, _ss_list_price12472};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12671_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12483_k = tbl_Filter_TD_12671_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11621_key_leftMajor{_d_date_sk12483_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk12460 = (it->second)._ss_sold_date_sk12460;
                int32_t _ss_quantity12470 = (it->second)._ss_quantity12470;
                int32_t _ss_list_price12472 = (it->second)._ss_list_price12472;
                int32_t _d_date_sk12483 = tbl_Filter_TD_12671_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_11621_output.setInt32(r, 0, _ss_quantity12470);
                tbl_JOIN_INNER_TD_11621_output.setInt32(r, 1, _ss_list_price12472);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11621_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_11621_key_rightMajor, SW_JOIN_INNER_TD_11621_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_12671_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12483_k = tbl_Filter_TD_12671_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11621_key_rightMajor keyA{_d_date_sk12483_k};
            int32_t _d_date_sk12483 = tbl_Filter_TD_12671_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_11621_payload_rightMajor payloadA{_d_date_sk12483};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_12354_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk12460_k = tbl_Filter_TD_12354_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_11621_key_rightMajor{_ss_sold_date_sk12460_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12483 = (it->second)._d_date_sk12483;
                int32_t _ss_sold_date_sk12460 = tbl_Filter_TD_12354_output.getInt32(i, 0);
                int32_t _ss_quantity12470 = tbl_Filter_TD_12354_output.getInt32(i, 1);
                int32_t _ss_list_price12472 = tbl_Filter_TD_12354_output.getInt32(i, 2);
                tbl_JOIN_INNER_TD_11621_output.setInt32(r, 0, _ss_quantity12470);
                tbl_JOIN_INNER_TD_11621_output.setInt32(r, 1, _ss_list_price12472);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_11621_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_11621_output #Row: " << tbl_JOIN_INNER_TD_11621_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_11737_key_leftMajor {
    int32_t _i_item_sk12658;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11737_key_leftMajor& other) const {
        return ((_i_item_sk12658 == other._i_item_sk12658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11737_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11737_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12658));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11737_payload_leftMajor {
    int32_t _i_item_sk12658;
    int32_t _i_brand_id12665;
    int32_t _i_class_id12667;
    int32_t _i_category_id12669;
};
struct SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor {
    int32_t _ss_item_sk12330;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor& other) const {
        return ((_ss_item_sk12330 == other._ss_item_sk12330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12330));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_11737_payload_rightMajor {
    int32_t _ss_item_sk12330;
};
void SW_JOIN_LEFTSEMI_TD_11737(Table &tbl_Filter_TD_12604_output, Table &tbl_Project_TD_1223_output, Table &tbl_JOIN_LEFTSEMI_TD_11737_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((i_item_sk#12658 = ss_item_sk#12330))
    // Left Table: ListBuffer(i_item_sk#12658, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Right Table: ListBuffer(ss_item_sk#12330)
    // Output Table: ListBuffer(i_item_sk#12658, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int left_nrow = tbl_Filter_TD_12604_output.getNumRow();
    int right_nrow = tbl_Project_TD_1223_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor, SW_JOIN_LEFTSEMI_TD_11737_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_1223_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12604_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12330_k = tbl_Project_TD_1223_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor keyA{_ss_item_sk12330_k};
            int32_t _ss_item_sk12330 = tbl_Project_TD_1223_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_11737_payload_rightMajor payloadA{_ss_item_sk12330};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12658_k = tbl_Filter_TD_12604_output.getInt32(i, 0);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_11737_key_rightMajor{_i_item_sk12658_k});
            if (it != ht1.end()) {
                int32_t _i_item_sk12658 = tbl_Filter_TD_12604_output.getInt32(i, 0);
                int32_t _i_brand_id12665 = tbl_Filter_TD_12604_output.getInt32(i, 1);
                int32_t _i_class_id12667 = tbl_Filter_TD_12604_output.getInt32(i, 2);
                int32_t _i_category_id12669 = tbl_Filter_TD_12604_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_11737_output.setInt32(r, 0, _i_item_sk12658);
                tbl_JOIN_LEFTSEMI_TD_11737_output.setInt32(r, 1, _i_brand_id12665);
                tbl_JOIN_LEFTSEMI_TD_11737_output.setInt32(r, 2, _i_class_id12667);
                tbl_JOIN_LEFTSEMI_TD_11737_output.setInt32(r, 3, _i_category_id12669);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_11737_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_11737_output #Row: " << tbl_JOIN_LEFTSEMI_TD_11737_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_1169_key_leftMajor {
    int32_t _ss_item_sk12637;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1169_key_leftMajor& other) const {
        return ((_ss_item_sk12637 == other._ss_item_sk12637));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1169_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1169_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12637));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1169_payload_leftMajor {
    int32_t _ss_sold_date_sk12635;
    int32_t _ss_item_sk12637;
    int32_t _ss_quantity12645;
    int32_t _ss_list_price12647;
};
struct SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor {
    int32_t _ss_item_sk12330;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor& other) const {
        return ((_ss_item_sk12330 == other._ss_item_sk12330));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12330));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_1169_payload_rightMajor {
    int32_t _ss_item_sk12330;
};
void SW_JOIN_LEFTSEMI_TD_1169(Table &tbl_Filter_TD_12286_output, Table &tbl_Project_TD_12137_output, Table &tbl_JOIN_LEFTSEMI_TD_1169_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((ss_item_sk#12637 = ss_item_sk#12330))
    // Left Table: ListBuffer(ss_sold_date_sk#12635, ss_item_sk#12637, ss_quantity#12645, ss_list_price#12647)
    // Right Table: ListBuffer(ss_item_sk#12330)
    // Output Table: ListBuffer(ss_sold_date_sk#12635, ss_item_sk#12637, ss_quantity#12645, ss_list_price#12647)
    int left_nrow = tbl_Filter_TD_12286_output.getNumRow();
    int right_nrow = tbl_Project_TD_12137_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor, SW_JOIN_LEFTSEMI_TD_1169_payload_rightMajor> ht1;
        int nrow1 = tbl_Project_TD_12137_output.getNumRow();
        int nrow2 = tbl_Filter_TD_12286_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12330_k = tbl_Project_TD_12137_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor keyA{_ss_item_sk12330_k};
            int32_t _ss_item_sk12330 = tbl_Project_TD_12137_output.getInt32(i, 0);
            SW_JOIN_LEFTSEMI_TD_1169_payload_rightMajor payloadA{_ss_item_sk12330};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk12637_k = tbl_Filter_TD_12286_output.getInt32(i, 1);
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_1169_key_rightMajor{_ss_item_sk12637_k});
            if (it != ht1.end()) {
                int32_t _ss_sold_date_sk12635 = tbl_Filter_TD_12286_output.getInt32(i, 0);
                int32_t _ss_item_sk12637 = tbl_Filter_TD_12286_output.getInt32(i, 1);
                int32_t _ss_quantity12645 = tbl_Filter_TD_12286_output.getInt32(i, 2);
                int32_t _ss_list_price12647 = tbl_Filter_TD_12286_output.getInt32(i, 3);
                tbl_JOIN_LEFTSEMI_TD_1169_output.setInt32(r, 0, _ss_sold_date_sk12635);
                tbl_JOIN_LEFTSEMI_TD_1169_output.setInt32(r, 1, _ss_item_sk12637);
                tbl_JOIN_LEFTSEMI_TD_1169_output.setInt32(r, 2, _ss_quantity12645);
                tbl_JOIN_LEFTSEMI_TD_1169_output.setInt32(r, 3, _ss_list_price12647);
                r++;
            }
        }
        tbl_JOIN_LEFTSEMI_TD_1169_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_1169_output #Row: " << tbl_JOIN_LEFTSEMI_TD_1169_output.getNumRow() << std::endl;
}

void SW_Project_TD_10595(Table &tbl_JOIN_INNER_TD_11446_output, Table &tbl_Project_TD_10595_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#12591 AS quantity#12335, ws_list_price#12593 AS list_price#12336)
    // Input: ListBuffer(ws_quantity#12591, ws_list_price#12593)
    // Output: ListBuffer(quantity#12335, list_price#12336)
    int nrow1 = tbl_JOIN_INNER_TD_11446_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity12591 = tbl_JOIN_INNER_TD_11446_output.getInt32(i, 0);
        int32_t _ws_list_price12593 = tbl_JOIN_INNER_TD_11446_output.getInt32(i, 1);
        int32_t _quantity12335 = _ws_quantity12591;
        tbl_Project_TD_10595_output.setInt32(i, 0, _quantity12335);
        int32_t _list_price12336 = _ws_list_price12593;
        tbl_Project_TD_10595_output.setInt32(i, 1, _list_price12336);
    }
    tbl_Project_TD_10595_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10595_output #Row: " << tbl_Project_TD_10595_output.getNumRow() << std::endl;
}

void SW_Project_TD_10502(Table &tbl_JOIN_INNER_TD_1162_output, Table &tbl_Project_TD_10502_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#12529 AS quantity#12333, cs_list_price#12531 AS list_price#12334)
    // Input: ListBuffer(cs_quantity#12529, cs_list_price#12531)
    // Output: ListBuffer(quantity#12333, list_price#12334)
    int nrow1 = tbl_JOIN_INNER_TD_1162_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity12529 = tbl_JOIN_INNER_TD_1162_output.getInt32(i, 0);
        int32_t _cs_list_price12531 = tbl_JOIN_INNER_TD_1162_output.getInt32(i, 1);
        int32_t _quantity12333 = _cs_quantity12529;
        tbl_Project_TD_10502_output.setInt32(i, 0, _quantity12333);
        int32_t _list_price12334 = _cs_list_price12531;
        tbl_Project_TD_10502_output.setInt32(i, 1, _list_price12334);
    }
    tbl_Project_TD_10502_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10502_output #Row: " << tbl_Project_TD_10502_output.getNumRow() << std::endl;
}

void SW_Project_TD_10121(Table &tbl_JOIN_INNER_TD_11482_output, Table &tbl_Project_TD_10121_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#12470 AS quantity#12331, ss_list_price#12472 AS list_price#12332)
    // Input: ListBuffer(ss_quantity#12470, ss_list_price#12472)
    // Output: ListBuffer(quantity#12331, list_price#12332)
    int nrow1 = tbl_JOIN_INNER_TD_11482_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity12470 = tbl_JOIN_INNER_TD_11482_output.getInt32(i, 0);
        int32_t _ss_list_price12472 = tbl_JOIN_INNER_TD_11482_output.getInt32(i, 1);
        int32_t _quantity12331 = _ss_quantity12470;
        tbl_Project_TD_10121_output.setInt32(i, 0, _quantity12331);
        int32_t _list_price12332 = _ss_list_price12472;
        tbl_Project_TD_10121_output.setInt32(i, 1, _list_price12332);
    }
    tbl_Project_TD_10121_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10121_output #Row: " << tbl_Project_TD_10121_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1013(Table &tbl_SerializeFromObject_TD_11820_input, Table &tbl_Filter_TD_1013_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#12854) AND isnotnull(d_moy#12856)) AND ((d_year#12854 = 2001) AND (d_moy#12856 = 11))) AND isnotnull(d_date_sk#12848)))
    // Input: ListBuffer(d_date_sk#12848, d_year#12854, d_moy#12856)
    // Output: ListBuffer(d_date_sk#12848)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11820_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12854 = tbl_SerializeFromObject_TD_11820_input.getInt32(i, 1);
        int32_t _d_moy12856 = tbl_SerializeFromObject_TD_11820_input.getInt32(i, 2);
        int32_t _d_date_sk12848 = tbl_SerializeFromObject_TD_11820_input.getInt32(i, 0);
        if ((((_d_year12854!= 0) && (_d_moy12856!= 0)) && ((_d_year12854 == 2001) && (_d_moy12856 == 11))) && (_d_date_sk12848!= 0)) {
            int32_t _d_date_sk12848_t = tbl_SerializeFromObject_TD_11820_input.getInt32(i, 0);
            tbl_Filter_TD_1013_output.setInt32(r, 0, _d_date_sk12848_t);
            r++;
        }
    }
    tbl_Filter_TD_1013_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1013_output #Row: " << tbl_Filter_TD_1013_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10323_key_leftMajor {
    int32_t _ws_item_sk12795;
    bool operator==(const SW_JOIN_INNER_TD_10323_key_leftMajor& other) const {
        return ((_ws_item_sk12795 == other._ws_item_sk12795));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10323_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10323_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_item_sk12795));
    }
};
}
struct SW_JOIN_INNER_TD_10323_payload_leftMajor {
    int32_t _ws_sold_date_sk12792;
    int32_t _ws_item_sk12795;
    int32_t _ws_quantity12810;
    int32_t _ws_list_price12812;
};
struct SW_JOIN_INNER_TD_10323_key_rightMajor {
    int32_t _i_item_sk12826;
    bool operator==(const SW_JOIN_INNER_TD_10323_key_rightMajor& other) const {
        return ((_i_item_sk12826 == other._i_item_sk12826));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10323_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10323_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12826));
    }
};
}
struct SW_JOIN_INNER_TD_10323_payload_rightMajor {
    int32_t _i_item_sk12826;
    int32_t _i_brand_id12833;
    int32_t _i_class_id12835;
    int32_t _i_category_id12837;
};
void SW_JOIN_INNER_TD_10323(Table &tbl_JOIN_LEFTSEMI_TD_11641_output, Table &tbl_JOIN_LEFTSEMI_TD_11290_output, Table &tbl_JOIN_INNER_TD_10323_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_item_sk#12795 = i_item_sk#12826))
    // Left Table: ListBuffer(ws_sold_date_sk#12792, ws_item_sk#12795, ws_quantity#12810, ws_list_price#12812)
    // Right Table: ListBuffer(i_item_sk#12826, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    // Output Table: ListBuffer(ws_sold_date_sk#12792, ws_quantity#12810, ws_list_price#12812, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_11641_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_11290_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10323_key_leftMajor, SW_JOIN_INNER_TD_10323_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11641_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_item_sk12795_k = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10323_key_leftMajor keyA{_ws_item_sk12795_k};
            int32_t _ws_sold_date_sk12792 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 0);
            int32_t _ws_item_sk12795 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 1);
            int32_t _ws_quantity12810 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 2);
            int32_t _ws_list_price12812 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10323_payload_leftMajor payloadA{_ws_sold_date_sk12792, _ws_item_sk12795, _ws_quantity12810, _ws_list_price12812};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11290_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12826_k = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10323_key_leftMajor{_i_item_sk12826_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk12792 = (it->second)._ws_sold_date_sk12792;
                int32_t _ws_item_sk12795 = (it->second)._ws_item_sk12795;
                int32_t _ws_quantity12810 = (it->second)._ws_quantity12810;
                int32_t _ws_list_price12812 = (it->second)._ws_list_price12812;
                int32_t _i_item_sk12826 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 0);
                int32_t _i_brand_id12833 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 1);
                int32_t _i_class_id12835 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 2);
                int32_t _i_category_id12837 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 0, _ws_sold_date_sk12792);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 1, _ws_quantity12810);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 2, _ws_list_price12812);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 3, _i_brand_id12833);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 4, _i_class_id12835);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 5, _i_category_id12837);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10323_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10323_key_rightMajor, SW_JOIN_INNER_TD_10323_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11290_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12826_k = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10323_key_rightMajor keyA{_i_item_sk12826_k};
            int32_t _i_item_sk12826 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 0);
            int32_t _i_brand_id12833 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 1);
            int32_t _i_class_id12835 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 2);
            int32_t _i_category_id12837 = tbl_JOIN_LEFTSEMI_TD_11290_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10323_payload_rightMajor payloadA{_i_item_sk12826, _i_brand_id12833, _i_class_id12835, _i_category_id12837};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11641_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_item_sk12795_k = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10323_key_rightMajor{_ws_item_sk12795_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12826 = (it->second)._i_item_sk12826;
                int32_t _i_brand_id12833 = (it->second)._i_brand_id12833;
                int32_t _i_class_id12835 = (it->second)._i_class_id12835;
                int32_t _i_category_id12837 = (it->second)._i_category_id12837;
                int32_t _ws_sold_date_sk12792 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 0);
                int32_t _ws_item_sk12795 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 1);
                int32_t _ws_quantity12810 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 2);
                int32_t _ws_list_price12812 = tbl_JOIN_LEFTSEMI_TD_11641_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 3, _i_brand_id12833);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 4, _i_class_id12835);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 5, _i_category_id12837);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 0, _ws_sold_date_sk12792);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 1, _ws_quantity12810);
                tbl_JOIN_INNER_TD_10323_output.setInt32(r, 2, _ws_list_price12812);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10323_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10323_output #Row: " << tbl_JOIN_INNER_TD_10323_output.getNumRow() << std::endl;
}

void SW_Project_TD_1031(Table &tbl_JOIN_INNER_TD_11408_output, Table &tbl_Project_TD_1031_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#12591 AS quantity#12335, ws_list_price#12593 AS list_price#12336)
    // Input: ListBuffer(ws_quantity#12591, ws_list_price#12593)
    // Output: ListBuffer(quantity#12335, list_price#12336)
    int nrow1 = tbl_JOIN_INNER_TD_11408_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity12591 = tbl_JOIN_INNER_TD_11408_output.getInt32(i, 0);
        int32_t _ws_list_price12593 = tbl_JOIN_INNER_TD_11408_output.getInt32(i, 1);
        int32_t _quantity12335 = _ws_quantity12591;
        tbl_Project_TD_1031_output.setInt32(i, 0, _quantity12335);
        int32_t _list_price12336 = _ws_list_price12593;
        tbl_Project_TD_1031_output.setInt32(i, 1, _list_price12336);
    }
    tbl_Project_TD_1031_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_1031_output #Row: " << tbl_Project_TD_1031_output.getNumRow() << std::endl;
}

void SW_Project_TD_10750(Table &tbl_JOIN_INNER_TD_1175_output, Table &tbl_Project_TD_10750_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#12529 AS quantity#12333, cs_list_price#12531 AS list_price#12334)
    // Input: ListBuffer(cs_quantity#12529, cs_list_price#12531)
    // Output: ListBuffer(quantity#12333, list_price#12334)
    int nrow1 = tbl_JOIN_INNER_TD_1175_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity12529 = tbl_JOIN_INNER_TD_1175_output.getInt32(i, 0);
        int32_t _cs_list_price12531 = tbl_JOIN_INNER_TD_1175_output.getInt32(i, 1);
        int32_t _quantity12333 = _cs_quantity12529;
        tbl_Project_TD_10750_output.setInt32(i, 0, _quantity12333);
        int32_t _list_price12334 = _cs_list_price12531;
        tbl_Project_TD_10750_output.setInt32(i, 1, _list_price12334);
    }
    tbl_Project_TD_10750_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10750_output #Row: " << tbl_Project_TD_10750_output.getNumRow() << std::endl;
}

void SW_Project_TD_10583(Table &tbl_JOIN_INNER_TD_11961_output, Table &tbl_Project_TD_10583_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#12470 AS quantity#12331, ss_list_price#12472 AS list_price#12332)
    // Input: ListBuffer(ss_quantity#12470, ss_list_price#12472)
    // Output: ListBuffer(quantity#12331, list_price#12332)
    int nrow1 = tbl_JOIN_INNER_TD_11961_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity12470 = tbl_JOIN_INNER_TD_11961_output.getInt32(i, 0);
        int32_t _ss_list_price12472 = tbl_JOIN_INNER_TD_11961_output.getInt32(i, 1);
        int32_t _quantity12331 = _ss_quantity12470;
        tbl_Project_TD_10583_output.setInt32(i, 0, _quantity12331);
        int32_t _list_price12332 = _ss_list_price12472;
        tbl_Project_TD_10583_output.setInt32(i, 1, _list_price12332);
    }
    tbl_Project_TD_10583_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10583_output #Row: " << tbl_Project_TD_10583_output.getNumRow() << std::endl;
}

void SW_Filter_TD_10713(Table &tbl_SerializeFromObject_TD_11547_input, Table &tbl_Filter_TD_10713_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#12770) AND isnotnull(d_moy#12772)) AND ((d_year#12770 = 2001) AND (d_moy#12772 = 11))) AND isnotnull(d_date_sk#12764)))
    // Input: ListBuffer(d_date_sk#12764, d_year#12770, d_moy#12772)
    // Output: ListBuffer(d_date_sk#12764)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11547_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12770 = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 1);
        int32_t _d_moy12772 = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 2);
        int32_t _d_date_sk12764 = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 0);
        if ((((_d_year12770!= 0) && (_d_moy12772!= 0)) && ((_d_year12770 == 2001) && (_d_moy12772 == 11))) && (_d_date_sk12764!= 0)) {
            int32_t _d_date_sk12764_t = tbl_SerializeFromObject_TD_11547_input.getInt32(i, 0);
            tbl_Filter_TD_10713_output.setInt32(r, 0, _d_date_sk12764_t);
            r++;
        }
    }
    tbl_Filter_TD_10713_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_10713_output #Row: " << tbl_Filter_TD_10713_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10647_key_leftMajor {
    int32_t _cs_item_sk12723;
    bool operator==(const SW_JOIN_INNER_TD_10647_key_leftMajor& other) const {
        return ((_cs_item_sk12723 == other._cs_item_sk12723));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10647_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10647_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_item_sk12723));
    }
};
}
struct SW_JOIN_INNER_TD_10647_payload_leftMajor {
    int32_t _cs_sold_date_sk12708;
    int32_t _cs_item_sk12723;
    int32_t _cs_quantity12726;
    int32_t _cs_list_price12728;
};
struct SW_JOIN_INNER_TD_10647_key_rightMajor {
    int32_t _i_item_sk12742;
    bool operator==(const SW_JOIN_INNER_TD_10647_key_rightMajor& other) const {
        return ((_i_item_sk12742 == other._i_item_sk12742));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10647_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10647_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12742));
    }
};
}
struct SW_JOIN_INNER_TD_10647_payload_rightMajor {
    int32_t _i_item_sk12742;
    int32_t _i_brand_id12749;
    int32_t _i_class_id12751;
    int32_t _i_category_id12753;
};
void SW_JOIN_INNER_TD_10647(Table &tbl_JOIN_LEFTSEMI_TD_11655_output, Table &tbl_JOIN_LEFTSEMI_TD_11161_output, Table &tbl_JOIN_INNER_TD_10647_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_item_sk#12723 = i_item_sk#12742))
    // Left Table: ListBuffer(cs_sold_date_sk#12708, cs_item_sk#12723, cs_quantity#12726, cs_list_price#12728)
    // Right Table: ListBuffer(i_item_sk#12742, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    // Output Table: ListBuffer(cs_sold_date_sk#12708, cs_quantity#12726, cs_list_price#12728, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_11655_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_11161_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10647_key_leftMajor, SW_JOIN_INNER_TD_10647_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11655_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_item_sk12723_k = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10647_key_leftMajor keyA{_cs_item_sk12723_k};
            int32_t _cs_sold_date_sk12708 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 0);
            int32_t _cs_item_sk12723 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 1);
            int32_t _cs_quantity12726 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 2);
            int32_t _cs_list_price12728 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10647_payload_leftMajor payloadA{_cs_sold_date_sk12708, _cs_item_sk12723, _cs_quantity12726, _cs_list_price12728};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11161_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12742_k = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10647_key_leftMajor{_i_item_sk12742_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk12708 = (it->second)._cs_sold_date_sk12708;
                int32_t _cs_item_sk12723 = (it->second)._cs_item_sk12723;
                int32_t _cs_quantity12726 = (it->second)._cs_quantity12726;
                int32_t _cs_list_price12728 = (it->second)._cs_list_price12728;
                int32_t _i_item_sk12742 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 0);
                int32_t _i_brand_id12749 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 1);
                int32_t _i_class_id12751 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 2);
                int32_t _i_category_id12753 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 0, _cs_sold_date_sk12708);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 1, _cs_quantity12726);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 2, _cs_list_price12728);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 3, _i_brand_id12749);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 4, _i_class_id12751);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 5, _i_category_id12753);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10647_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10647_key_rightMajor, SW_JOIN_INNER_TD_10647_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11161_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12742_k = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10647_key_rightMajor keyA{_i_item_sk12742_k};
            int32_t _i_item_sk12742 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 0);
            int32_t _i_brand_id12749 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 1);
            int32_t _i_class_id12751 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 2);
            int32_t _i_category_id12753 = tbl_JOIN_LEFTSEMI_TD_11161_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10647_payload_rightMajor payloadA{_i_item_sk12742, _i_brand_id12749, _i_class_id12751, _i_category_id12753};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11655_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_item_sk12723_k = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10647_key_rightMajor{_cs_item_sk12723_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12742 = (it->second)._i_item_sk12742;
                int32_t _i_brand_id12749 = (it->second)._i_brand_id12749;
                int32_t _i_class_id12751 = (it->second)._i_class_id12751;
                int32_t _i_category_id12753 = (it->second)._i_category_id12753;
                int32_t _cs_sold_date_sk12708 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 0);
                int32_t _cs_item_sk12723 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 1);
                int32_t _cs_quantity12726 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 2);
                int32_t _cs_list_price12728 = tbl_JOIN_LEFTSEMI_TD_11655_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 3, _i_brand_id12749);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 4, _i_class_id12751);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 5, _i_category_id12753);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 0, _cs_sold_date_sk12708);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 1, _cs_quantity12726);
                tbl_JOIN_INNER_TD_10647_output.setInt32(r, 2, _cs_list_price12728);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10647_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10647_output #Row: " << tbl_JOIN_INNER_TD_10647_output.getNumRow() << std::endl;
}

void SW_Project_TD_10123(Table &tbl_JOIN_INNER_TD_1191_output, Table &tbl_Project_TD_10123_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ws_quantity#12591 AS quantity#12335, ws_list_price#12593 AS list_price#12336)
    // Input: ListBuffer(ws_quantity#12591, ws_list_price#12593)
    // Output: ListBuffer(quantity#12335, list_price#12336)
    int nrow1 = tbl_JOIN_INNER_TD_1191_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity12591 = tbl_JOIN_INNER_TD_1191_output.getInt32(i, 0);
        int32_t _ws_list_price12593 = tbl_JOIN_INNER_TD_1191_output.getInt32(i, 1);
        int32_t _quantity12335 = _ws_quantity12591;
        tbl_Project_TD_10123_output.setInt32(i, 0, _quantity12335);
        int32_t _list_price12336 = _ws_list_price12593;
        tbl_Project_TD_10123_output.setInt32(i, 1, _list_price12336);
    }
    tbl_Project_TD_10123_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10123_output #Row: " << tbl_Project_TD_10123_output.getNumRow() << std::endl;
}

void SW_Project_TD_10581(Table &tbl_JOIN_INNER_TD_11837_output, Table &tbl_Project_TD_10581_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(cs_quantity#12529 AS quantity#12333, cs_list_price#12531 AS list_price#12334)
    // Input: ListBuffer(cs_quantity#12529, cs_list_price#12531)
    // Output: ListBuffer(quantity#12333, list_price#12334)
    int nrow1 = tbl_JOIN_INNER_TD_11837_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity12529 = tbl_JOIN_INNER_TD_11837_output.getInt32(i, 0);
        int32_t _cs_list_price12531 = tbl_JOIN_INNER_TD_11837_output.getInt32(i, 1);
        int32_t _quantity12333 = _cs_quantity12529;
        tbl_Project_TD_10581_output.setInt32(i, 0, _quantity12333);
        int32_t _list_price12334 = _cs_list_price12531;
        tbl_Project_TD_10581_output.setInt32(i, 1, _list_price12334);
    }
    tbl_Project_TD_10581_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10581_output #Row: " << tbl_Project_TD_10581_output.getNumRow() << std::endl;
}

void SW_Project_TD_10364(Table &tbl_JOIN_INNER_TD_11621_output, Table &tbl_Project_TD_10364_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(ss_quantity#12470 AS quantity#12331, ss_list_price#12472 AS list_price#12332)
    // Input: ListBuffer(ss_quantity#12470, ss_list_price#12472)
    // Output: ListBuffer(quantity#12331, list_price#12332)
    int nrow1 = tbl_JOIN_INNER_TD_11621_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity12470 = tbl_JOIN_INNER_TD_11621_output.getInt32(i, 0);
        int32_t _ss_list_price12472 = tbl_JOIN_INNER_TD_11621_output.getInt32(i, 1);
        int32_t _quantity12331 = _ss_quantity12470;
        tbl_Project_TD_10364_output.setInt32(i, 0, _quantity12331);
        int32_t _list_price12332 = _ss_list_price12472;
        tbl_Project_TD_10364_output.setInt32(i, 1, _list_price12332);
    }
    tbl_Project_TD_10364_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_10364_output #Row: " << tbl_Project_TD_10364_output.getNumRow() << std::endl;
}

void SW_Filter_TD_1059(Table &tbl_SerializeFromObject_TD_11951_input, Table &tbl_Filter_TD_1059_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_year#12686) AND isnotnull(d_moy#12688)) AND ((d_year#12686 = 2001) AND (d_moy#12688 = 11))) AND isnotnull(d_date_sk#12680)))
    // Input: ListBuffer(d_date_sk#12680, d_year#12686, d_moy#12688)
    // Output: ListBuffer(d_date_sk#12680)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_11951_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_year12686 = tbl_SerializeFromObject_TD_11951_input.getInt32(i, 1);
        int32_t _d_moy12688 = tbl_SerializeFromObject_TD_11951_input.getInt32(i, 2);
        int32_t _d_date_sk12680 = tbl_SerializeFromObject_TD_11951_input.getInt32(i, 0);
        if ((((_d_year12686!= 0) && (_d_moy12688!= 0)) && ((_d_year12686 == 2001) && (_d_moy12688 == 11))) && (_d_date_sk12680!= 0)) {
            int32_t _d_date_sk12680_t = tbl_SerializeFromObject_TD_11951_input.getInt32(i, 0);
            tbl_Filter_TD_1059_output.setInt32(r, 0, _d_date_sk12680_t);
            r++;
        }
    }
    tbl_Filter_TD_1059_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1059_output #Row: " << tbl_Filter_TD_1059_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10740_key_leftMajor {
    int32_t _ss_item_sk12637;
    bool operator==(const SW_JOIN_INNER_TD_10740_key_leftMajor& other) const {
        return ((_ss_item_sk12637 == other._ss_item_sk12637));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10740_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10740_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_item_sk12637));
    }
};
}
struct SW_JOIN_INNER_TD_10740_payload_leftMajor {
    int32_t _ss_sold_date_sk12635;
    int32_t _ss_item_sk12637;
    int32_t _ss_quantity12645;
    int32_t _ss_list_price12647;
};
struct SW_JOIN_INNER_TD_10740_key_rightMajor {
    int32_t _i_item_sk12658;
    bool operator==(const SW_JOIN_INNER_TD_10740_key_rightMajor& other) const {
        return ((_i_item_sk12658 == other._i_item_sk12658));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10740_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10740_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_item_sk12658));
    }
};
}
struct SW_JOIN_INNER_TD_10740_payload_rightMajor {
    int32_t _i_item_sk12658;
    int32_t _i_brand_id12665;
    int32_t _i_class_id12667;
    int32_t _i_category_id12669;
};
void SW_JOIN_INNER_TD_10740(Table &tbl_JOIN_LEFTSEMI_TD_1169_output, Table &tbl_JOIN_LEFTSEMI_TD_11737_output, Table &tbl_JOIN_INNER_TD_10740_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_item_sk#12637 = i_item_sk#12658))
    // Left Table: ListBuffer(ss_sold_date_sk#12635, ss_item_sk#12637, ss_quantity#12645, ss_list_price#12647)
    // Right Table: ListBuffer(i_item_sk#12658, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Output Table: ListBuffer(ss_sold_date_sk#12635, ss_quantity#12645, ss_list_price#12647, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int left_nrow = tbl_JOIN_LEFTSEMI_TD_1169_output.getNumRow();
    int right_nrow = tbl_JOIN_LEFTSEMI_TD_11737_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10740_key_leftMajor, SW_JOIN_INNER_TD_10740_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_1169_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_item_sk12637_k = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 1);
            SW_JOIN_INNER_TD_10740_key_leftMajor keyA{_ss_item_sk12637_k};
            int32_t _ss_sold_date_sk12635 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 0);
            int32_t _ss_item_sk12637 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 1);
            int32_t _ss_quantity12645 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 2);
            int32_t _ss_list_price12647 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10740_payload_leftMajor payloadA{_ss_sold_date_sk12635, _ss_item_sk12637, _ss_quantity12645, _ss_list_price12647};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_11737_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _i_item_sk12658_k = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10740_key_leftMajor{_i_item_sk12658_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk12635 = (it->second)._ss_sold_date_sk12635;
                int32_t _ss_item_sk12637 = (it->second)._ss_item_sk12637;
                int32_t _ss_quantity12645 = (it->second)._ss_quantity12645;
                int32_t _ss_list_price12647 = (it->second)._ss_list_price12647;
                int32_t _i_item_sk12658 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 0);
                int32_t _i_brand_id12665 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 1);
                int32_t _i_class_id12667 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 2);
                int32_t _i_category_id12669 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 0, _ss_sold_date_sk12635);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 1, _ss_quantity12645);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 2, _ss_list_price12647);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 3, _i_brand_id12665);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 4, _i_class_id12667);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 5, _i_category_id12669);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10740_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10740_key_rightMajor, SW_JOIN_INNER_TD_10740_payload_rightMajor> ht1;
        int nrow1 = tbl_JOIN_LEFTSEMI_TD_11737_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _i_item_sk12658_k = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10740_key_rightMajor keyA{_i_item_sk12658_k};
            int32_t _i_item_sk12658 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 0);
            int32_t _i_brand_id12665 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 1);
            int32_t _i_class_id12667 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 2);
            int32_t _i_category_id12669 = tbl_JOIN_LEFTSEMI_TD_11737_output.getInt32(i, 3);
            SW_JOIN_INNER_TD_10740_payload_rightMajor payloadA{_i_item_sk12658, _i_brand_id12665, _i_class_id12667, _i_category_id12669};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_LEFTSEMI_TD_1169_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_item_sk12637_k = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 1);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10740_key_rightMajor{_ss_item_sk12637_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _i_item_sk12658 = (it->second)._i_item_sk12658;
                int32_t _i_brand_id12665 = (it->second)._i_brand_id12665;
                int32_t _i_class_id12667 = (it->second)._i_class_id12667;
                int32_t _i_category_id12669 = (it->second)._i_category_id12669;
                int32_t _ss_sold_date_sk12635 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 0);
                int32_t _ss_item_sk12637 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 1);
                int32_t _ss_quantity12645 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 2);
                int32_t _ss_list_price12647 = tbl_JOIN_LEFTSEMI_TD_1169_output.getInt32(i, 3);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 3, _i_brand_id12665);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 4, _i_class_id12667);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 5, _i_category_id12669);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 0, _ss_sold_date_sk12635);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 1, _ss_quantity12645);
                tbl_JOIN_INNER_TD_10740_output.setInt32(r, 2, _ss_list_price12647);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10740_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10740_output #Row: " << tbl_JOIN_INNER_TD_10740_output.getNumRow() << std::endl;
}

void SW_Union_TD_9949(Table &tbl_Project_TD_10121_output, Table &tbl_Project_TD_10502_output, Table &tbl_Project_TD_10595_output, Table &tbl_Union_TD_9949_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#12331, list_price#12332)
    int r = 0;
    int row0 = tbl_Project_TD_10121_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9949_output.setInt32(r, 0, tbl_Project_TD_10121_output.getInt32(i, 0));
        tbl_Union_TD_9949_output.setInt32(r, 1, tbl_Project_TD_10121_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10502_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9949_output.setInt32(r, 0, tbl_Project_TD_10502_output.getInt32(i, 0));
        tbl_Union_TD_9949_output.setInt32(r, 1, tbl_Project_TD_10502_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10595_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9949_output.setInt32(r, 0, tbl_Project_TD_10595_output.getInt32(i, 0));
        tbl_Union_TD_9949_output.setInt32(r, 1, tbl_Project_TD_10595_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_9949_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9949_output #Row: " << tbl_Union_TD_9949_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9862_key_leftMajor {
    int32_t _ws_sold_date_sk12792;
    bool operator==(const SW_JOIN_INNER_TD_9862_key_leftMajor& other) const {
        return ((_ws_sold_date_sk12792 == other._ws_sold_date_sk12792));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9862_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9862_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ws_sold_date_sk12792));
    }
};
}
struct SW_JOIN_INNER_TD_9862_payload_leftMajor {
    int32_t _ws_sold_date_sk12792;
    int32_t _ws_quantity12810;
    int32_t _ws_list_price12812;
    int32_t _i_brand_id12833;
    int32_t _i_class_id12835;
    int32_t _i_category_id12837;
};
struct SW_JOIN_INNER_TD_9862_key_rightMajor {
    int32_t _d_date_sk12848;
    bool operator==(const SW_JOIN_INNER_TD_9862_key_rightMajor& other) const {
        return ((_d_date_sk12848 == other._d_date_sk12848));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9862_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9862_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12848));
    }
};
}
struct SW_JOIN_INNER_TD_9862_payload_rightMajor {
    int32_t _d_date_sk12848;
};
void SW_JOIN_INNER_TD_9862(Table &tbl_JOIN_INNER_TD_10323_output, Table &tbl_Filter_TD_1013_output, Table &tbl_JOIN_INNER_TD_9862_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ws_sold_date_sk#12792 = d_date_sk#12848))
    // Left Table: ListBuffer(ws_sold_date_sk#12792, ws_quantity#12810, ws_list_price#12812, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    // Right Table: ListBuffer(d_date_sk#12848)
    // Output Table: ListBuffer(ws_quantity#12810, ws_list_price#12812, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    int left_nrow = tbl_JOIN_INNER_TD_10323_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1013_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9862_key_leftMajor, SW_JOIN_INNER_TD_9862_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10323_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ws_sold_date_sk12792_k = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9862_key_leftMajor keyA{_ws_sold_date_sk12792_k};
            int32_t _ws_sold_date_sk12792 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 0);
            int32_t _ws_quantity12810 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 1);
            int32_t _ws_list_price12812 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 2);
            int32_t _i_brand_id12833 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 3);
            int32_t _i_class_id12835 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 4);
            int32_t _i_category_id12837 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9862_payload_leftMajor payloadA{_ws_sold_date_sk12792, _ws_quantity12810, _ws_list_price12812, _i_brand_id12833, _i_class_id12835, _i_category_id12837};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1013_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12848_k = tbl_Filter_TD_1013_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9862_key_leftMajor{_d_date_sk12848_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ws_sold_date_sk12792 = (it->second)._ws_sold_date_sk12792;
                int32_t _ws_quantity12810 = (it->second)._ws_quantity12810;
                int32_t _ws_list_price12812 = (it->second)._ws_list_price12812;
                int32_t _i_brand_id12833 = (it->second)._i_brand_id12833;
                int32_t _i_class_id12835 = (it->second)._i_class_id12835;
                int32_t _i_category_id12837 = (it->second)._i_category_id12837;
                int32_t _d_date_sk12848 = tbl_Filter_TD_1013_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 0, _ws_quantity12810);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 1, _ws_list_price12812);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 2, _i_brand_id12833);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 3, _i_class_id12835);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 4, _i_category_id12837);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9862_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9862_key_rightMajor, SW_JOIN_INNER_TD_9862_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1013_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12848_k = tbl_Filter_TD_1013_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9862_key_rightMajor keyA{_d_date_sk12848_k};
            int32_t _d_date_sk12848 = tbl_Filter_TD_1013_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9862_payload_rightMajor payloadA{_d_date_sk12848};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10323_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ws_sold_date_sk12792_k = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9862_key_rightMajor{_ws_sold_date_sk12792_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12848 = (it->second)._d_date_sk12848;
                int32_t _ws_sold_date_sk12792 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 0);
                int32_t _ws_quantity12810 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 1);
                int32_t _ws_list_price12812 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 2);
                int32_t _i_brand_id12833 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 3);
                int32_t _i_class_id12835 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 4);
                int32_t _i_category_id12837 = tbl_JOIN_INNER_TD_10323_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 0, _ws_quantity12810);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 1, _ws_list_price12812);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 2, _i_brand_id12833);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 3, _i_class_id12835);
                tbl_JOIN_INNER_TD_9862_output.setInt32(r, 4, _i_category_id12837);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9862_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9862_output #Row: " << tbl_JOIN_INNER_TD_9862_output.getNumRow() << std::endl;
}

void SW_Union_TD_9308(Table &tbl_Project_TD_10583_output, Table &tbl_Project_TD_10750_output, Table &tbl_Project_TD_1031_output, Table &tbl_Union_TD_9308_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#12331, list_price#12332)
    int r = 0;
    int row0 = tbl_Project_TD_10583_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9308_output.setInt32(r, 0, tbl_Project_TD_10583_output.getInt32(i, 0));
        tbl_Union_TD_9308_output.setInt32(r, 1, tbl_Project_TD_10583_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10750_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9308_output.setInt32(r, 0, tbl_Project_TD_10750_output.getInt32(i, 0));
        tbl_Union_TD_9308_output.setInt32(r, 1, tbl_Project_TD_10750_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_1031_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9308_output.setInt32(r, 0, tbl_Project_TD_1031_output.getInt32(i, 0));
        tbl_Union_TD_9308_output.setInt32(r, 1, tbl_Project_TD_1031_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_9308_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9308_output #Row: " << tbl_Union_TD_9308_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_963_key_leftMajor {
    int32_t _cs_sold_date_sk12708;
    bool operator==(const SW_JOIN_INNER_TD_963_key_leftMajor& other) const {
        return ((_cs_sold_date_sk12708 == other._cs_sold_date_sk12708));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_963_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_963_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._cs_sold_date_sk12708));
    }
};
}
struct SW_JOIN_INNER_TD_963_payload_leftMajor {
    int32_t _cs_sold_date_sk12708;
    int32_t _cs_quantity12726;
    int32_t _cs_list_price12728;
    int32_t _i_brand_id12749;
    int32_t _i_class_id12751;
    int32_t _i_category_id12753;
};
struct SW_JOIN_INNER_TD_963_key_rightMajor {
    int32_t _d_date_sk12764;
    bool operator==(const SW_JOIN_INNER_TD_963_key_rightMajor& other) const {
        return ((_d_date_sk12764 == other._d_date_sk12764));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_963_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_963_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12764));
    }
};
}
struct SW_JOIN_INNER_TD_963_payload_rightMajor {
    int32_t _d_date_sk12764;
};
void SW_JOIN_INNER_TD_963(Table &tbl_JOIN_INNER_TD_10647_output, Table &tbl_Filter_TD_10713_output, Table &tbl_JOIN_INNER_TD_963_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((cs_sold_date_sk#12708 = d_date_sk#12764))
    // Left Table: ListBuffer(cs_sold_date_sk#12708, cs_quantity#12726, cs_list_price#12728, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    // Right Table: ListBuffer(d_date_sk#12764)
    // Output Table: ListBuffer(cs_quantity#12726, cs_list_price#12728, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    int left_nrow = tbl_JOIN_INNER_TD_10647_output.getNumRow();
    int right_nrow = tbl_Filter_TD_10713_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_963_key_leftMajor, SW_JOIN_INNER_TD_963_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10647_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _cs_sold_date_sk12708_k = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_963_key_leftMajor keyA{_cs_sold_date_sk12708_k};
            int32_t _cs_sold_date_sk12708 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 0);
            int32_t _cs_quantity12726 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 1);
            int32_t _cs_list_price12728 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 2);
            int32_t _i_brand_id12749 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 3);
            int32_t _i_class_id12751 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 4);
            int32_t _i_category_id12753 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_963_payload_leftMajor payloadA{_cs_sold_date_sk12708, _cs_quantity12726, _cs_list_price12728, _i_brand_id12749, _i_class_id12751, _i_category_id12753};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_10713_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12764_k = tbl_Filter_TD_10713_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_963_key_leftMajor{_d_date_sk12764_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _cs_sold_date_sk12708 = (it->second)._cs_sold_date_sk12708;
                int32_t _cs_quantity12726 = (it->second)._cs_quantity12726;
                int32_t _cs_list_price12728 = (it->second)._cs_list_price12728;
                int32_t _i_brand_id12749 = (it->second)._i_brand_id12749;
                int32_t _i_class_id12751 = (it->second)._i_class_id12751;
                int32_t _i_category_id12753 = (it->second)._i_category_id12753;
                int32_t _d_date_sk12764 = tbl_Filter_TD_10713_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 0, _cs_quantity12726);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 1, _cs_list_price12728);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 2, _i_brand_id12749);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 3, _i_class_id12751);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 4, _i_category_id12753);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_963_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_963_key_rightMajor, SW_JOIN_INNER_TD_963_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_10713_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12764_k = tbl_Filter_TD_10713_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_963_key_rightMajor keyA{_d_date_sk12764_k};
            int32_t _d_date_sk12764 = tbl_Filter_TD_10713_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_963_payload_rightMajor payloadA{_d_date_sk12764};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10647_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _cs_sold_date_sk12708_k = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_963_key_rightMajor{_cs_sold_date_sk12708_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12764 = (it->second)._d_date_sk12764;
                int32_t _cs_sold_date_sk12708 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 0);
                int32_t _cs_quantity12726 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 1);
                int32_t _cs_list_price12728 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 2);
                int32_t _i_brand_id12749 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 3);
                int32_t _i_class_id12751 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 4);
                int32_t _i_category_id12753 = tbl_JOIN_INNER_TD_10647_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 0, _cs_quantity12726);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 1, _cs_list_price12728);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 2, _i_brand_id12749);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 3, _i_class_id12751);
                tbl_JOIN_INNER_TD_963_output.setInt32(r, 4, _i_category_id12753);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_963_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_963_output #Row: " << tbl_JOIN_INNER_TD_963_output.getNumRow() << std::endl;
}

void SW_Union_TD_9347(Table &tbl_Project_TD_10364_output, Table &tbl_Project_TD_10581_output, Table &tbl_Project_TD_10123_output, Table &tbl_Union_TD_9347_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(quantity#12331, list_price#12332)
    int r = 0;
    int row0 = tbl_Project_TD_10364_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_9347_output.setInt32(r, 0, tbl_Project_TD_10364_output.getInt32(i, 0));
        tbl_Union_TD_9347_output.setInt32(r, 1, tbl_Project_TD_10364_output.getInt32(i, 1));
        ++r;
    }
    int row1 = tbl_Project_TD_10581_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_9347_output.setInt32(r, 0, tbl_Project_TD_10581_output.getInt32(i, 0));
        tbl_Union_TD_9347_output.setInt32(r, 1, tbl_Project_TD_10581_output.getInt32(i, 1));
        ++r;
    }
    int row2 = tbl_Project_TD_10123_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_9347_output.setInt32(r, 0, tbl_Project_TD_10123_output.getInt32(i, 0));
        tbl_Union_TD_9347_output.setInt32(r, 1, tbl_Project_TD_10123_output.getInt32(i, 1));
        ++r;
    }
    tbl_Union_TD_9347_output.setNumRow(r);
    std::cout << "tbl_Union_TD_9347_output #Row: " << tbl_Union_TD_9347_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_9455_key_leftMajor {
    int32_t _ss_sold_date_sk12635;
    bool operator==(const SW_JOIN_INNER_TD_9455_key_leftMajor& other) const {
        return ((_ss_sold_date_sk12635 == other._ss_sold_date_sk12635));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9455_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9455_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_sold_date_sk12635));
    }
};
}
struct SW_JOIN_INNER_TD_9455_payload_leftMajor {
    int32_t _ss_sold_date_sk12635;
    int32_t _ss_quantity12645;
    int32_t _ss_list_price12647;
    int32_t _i_brand_id12665;
    int32_t _i_class_id12667;
    int32_t _i_category_id12669;
};
struct SW_JOIN_INNER_TD_9455_key_rightMajor {
    int32_t _d_date_sk12680;
    bool operator==(const SW_JOIN_INNER_TD_9455_key_rightMajor& other) const {
        return ((_d_date_sk12680 == other._d_date_sk12680));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_9455_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_9455_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._d_date_sk12680));
    }
};
}
struct SW_JOIN_INNER_TD_9455_payload_rightMajor {
    int32_t _d_date_sk12680;
};
void SW_JOIN_INNER_TD_9455(Table &tbl_JOIN_INNER_TD_10740_output, Table &tbl_Filter_TD_1059_output, Table &tbl_JOIN_INNER_TD_9455_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_sold_date_sk#12635 = d_date_sk#12680))
    // Left Table: ListBuffer(ss_sold_date_sk#12635, ss_quantity#12645, ss_list_price#12647, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Right Table: ListBuffer(d_date_sk#12680)
    // Output Table: ListBuffer(ss_quantity#12645, ss_list_price#12647, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int left_nrow = tbl_JOIN_INNER_TD_10740_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1059_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9455_key_leftMajor, SW_JOIN_INNER_TD_9455_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_10740_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_sold_date_sk12635_k = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9455_key_leftMajor keyA{_ss_sold_date_sk12635_k};
            int32_t _ss_sold_date_sk12635 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 0);
            int32_t _ss_quantity12645 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 1);
            int32_t _ss_list_price12647 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 2);
            int32_t _i_brand_id12665 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 3);
            int32_t _i_class_id12667 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 4);
            int32_t _i_category_id12669 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 5);
            SW_JOIN_INNER_TD_9455_payload_leftMajor payloadA{_ss_sold_date_sk12635, _ss_quantity12645, _ss_list_price12647, _i_brand_id12665, _i_class_id12667, _i_category_id12669};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1059_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _d_date_sk12680_k = tbl_Filter_TD_1059_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9455_key_leftMajor{_d_date_sk12680_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_sold_date_sk12635 = (it->second)._ss_sold_date_sk12635;
                int32_t _ss_quantity12645 = (it->second)._ss_quantity12645;
                int32_t _ss_list_price12647 = (it->second)._ss_list_price12647;
                int32_t _i_brand_id12665 = (it->second)._i_brand_id12665;
                int32_t _i_class_id12667 = (it->second)._i_class_id12667;
                int32_t _i_category_id12669 = (it->second)._i_category_id12669;
                int32_t _d_date_sk12680 = tbl_Filter_TD_1059_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 0, _ss_quantity12645);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 1, _ss_list_price12647);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 2, _i_brand_id12665);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 3, _i_class_id12667);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 4, _i_category_id12669);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9455_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_9455_key_rightMajor, SW_JOIN_INNER_TD_9455_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1059_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _d_date_sk12680_k = tbl_Filter_TD_1059_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9455_key_rightMajor keyA{_d_date_sk12680_k};
            int32_t _d_date_sk12680 = tbl_Filter_TD_1059_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_9455_payload_rightMajor payloadA{_d_date_sk12680};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_10740_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_sold_date_sk12635_k = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_9455_key_rightMajor{_ss_sold_date_sk12635_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _d_date_sk12680 = (it->second)._d_date_sk12680;
                int32_t _ss_sold_date_sk12635 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 0);
                int32_t _ss_quantity12645 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 1);
                int32_t _ss_list_price12647 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 2);
                int32_t _i_brand_id12665 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 3);
                int32_t _i_class_id12667 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 4);
                int32_t _i_category_id12669 = tbl_JOIN_INNER_TD_10740_output.getInt32(i, 5);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 0, _ss_quantity12645);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 1, _ss_list_price12647);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 2, _i_brand_id12665);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 3, _i_class_id12667);
                tbl_JOIN_INNER_TD_9455_output.setInt32(r, 4, _i_category_id12669);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_9455_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_9455_output #Row: " << tbl_JOIN_INNER_TD_9455_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8808(Table &tbl_Union_TD_9949_output, Table &tbl_Aggregate_TD_8808_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#12331 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#12332 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#12337)
    // Input: ListBuffer(quantity#12331, list_price#12332)
    // Output: ListBuffer(average_sales#12337)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9949_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity12331 = tbl_Union_TD_9949_output.getInt32(i, 0);
        int32_t _list_price12332 = tbl_Union_TD_9949_output.getInt32(i, 1);
        int64_t _average_sales12337_avg_0 = (_quantity12331 * _list_price12332);
        avg_0 = (avg_0 + _average_sales12337_avg_0);
    }
    int r = 0;
    int32_t _average_sales12337 = avg_0 / nrow1;
    tbl_Aggregate_TD_8808_output.setInt32(r++, 0, _average_sales12337);
    tbl_Aggregate_TD_8808_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8808_output #Row: " << tbl_Aggregate_TD_8808_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_816_key {
    int32_t _i_brand_id12833;
    int32_t _i_class_id12835;
    int32_t _i_category_id12837;
    bool operator==(const SW_Aggregate_TD_816_key& other) const { return (_i_brand_id12833 == other._i_brand_id12833) && (_i_class_id12835 == other._i_class_id12835) && (_i_category_id12837 == other._i_category_id12837); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_816_key> {
    std::size_t operator() (const SW_Aggregate_TD_816_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12833)) + (hash<int32_t>()(k._i_class_id12835)) + (hash<int32_t>()(k._i_category_id12837));
    }
};
}
struct SW_Aggregate_TD_816_payload {
    int32_t _sales12323_sum_0;
    int64_t _number_sales12324L_count_1;
};
void SW_Aggregate_TD_816(Table &tbl_JOIN_INNER_TD_9862_output, Table &tbl_Aggregate_TD_816_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand_id#12833, i_class_id#12835, i_category_id#12837, sum(CheckOverflow((promote_precision(cast(cast(ws_quantity#12810 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ws_list_price#12812 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#12323, count(1) AS number_sales#12324L)
    // Input: ListBuffer(ws_quantity#12810, ws_list_price#12812, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    // Output: ListBuffer(i_brand_id#12833, i_class_id#12835, i_category_id#12837, sales#12323, number_sales#12324L)
    std::unordered_map<SW_Aggregate_TD_816_key, SW_Aggregate_TD_816_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9862_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ws_quantity12810 = tbl_JOIN_INNER_TD_9862_output.getInt32(i, 0);
        int32_t _ws_list_price12812 = tbl_JOIN_INNER_TD_9862_output.getInt32(i, 1);
        int32_t _i_brand_id12833 = tbl_JOIN_INNER_TD_9862_output.getInt32(i, 2);
        int32_t _i_class_id12835 = tbl_JOIN_INNER_TD_9862_output.getInt32(i, 3);
        int32_t _i_category_id12837 = tbl_JOIN_INNER_TD_9862_output.getInt32(i, 4);
        SW_Aggregate_TD_816_key k{_i_brand_id12833, _i_class_id12835, _i_category_id12837};
        int64_t _sales12323_sum_0 = (_ws_quantity12810 * _ws_list_price12812);
        int64_t _number_sales12324L_count_1 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_816_payload p{_sales12323_sum_0, _number_sales12324L_count_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales12323_sum_0 + _sales12323_sum_0;
            p._sales12323_sum_0 = sum_0;
            int64_t count_1 = (it->second)._number_sales12324L_count_1 + _number_sales12324L_count_1;
            p._number_sales12324L_count_1 = count_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_816_output.setInt32(r, 0, (it.first)._i_brand_id12833);
        tbl_Aggregate_TD_816_output.setInt32(r, 1, (it.first)._i_class_id12835);
        tbl_Aggregate_TD_816_output.setInt32(r, 2, (it.first)._i_category_id12837);
        int32_t _sales12323 = (it.second)._sales12323_sum_0;
        tbl_Aggregate_TD_816_output.setInt32(r, 3, _sales12323);
        int64_t _number_sales12324L = (it.second)._number_sales12324L_count_1;
        tbl_Aggregate_TD_816_output.setInt64(r, 4, _number_sales12324L);
        ++r;
    }
    tbl_Aggregate_TD_816_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_816_output #Row: " << tbl_Aggregate_TD_816_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8810(Table &tbl_Union_TD_9308_output, Table &tbl_Aggregate_TD_8810_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#12331 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#12332 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#12337)
    // Input: ListBuffer(quantity#12331, list_price#12332)
    // Output: ListBuffer(average_sales#12337)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9308_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity12331 = tbl_Union_TD_9308_output.getInt32(i, 0);
        int32_t _list_price12332 = tbl_Union_TD_9308_output.getInt32(i, 1);
        int64_t _average_sales12337_avg_0 = (_quantity12331 * _list_price12332);
        avg_0 = (avg_0 + _average_sales12337_avg_0);
    }
    int r = 0;
    int32_t _average_sales12337 = avg_0 / nrow1;
    tbl_Aggregate_TD_8810_output.setInt32(r++, 0, _average_sales12337);
    tbl_Aggregate_TD_8810_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8810_output #Row: " << tbl_Aggregate_TD_8810_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8835_key {
    int32_t _i_brand_id12749;
    int32_t _i_class_id12751;
    int32_t _i_category_id12753;
    bool operator==(const SW_Aggregate_TD_8835_key& other) const { return (_i_brand_id12749 == other._i_brand_id12749) && (_i_class_id12751 == other._i_class_id12751) && (_i_category_id12753 == other._i_category_id12753); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8835_key> {
    std::size_t operator() (const SW_Aggregate_TD_8835_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12749)) + (hash<int32_t>()(k._i_class_id12751)) + (hash<int32_t>()(k._i_category_id12753));
    }
};
}
struct SW_Aggregate_TD_8835_payload {
    int32_t _sales12318_sum_0;
    int64_t _number_sales12319L_count_1;
};
void SW_Aggregate_TD_8835(Table &tbl_JOIN_INNER_TD_963_output, Table &tbl_Aggregate_TD_8835_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand_id#12749, i_class_id#12751, i_category_id#12753, sum(CheckOverflow((promote_precision(cast(cast(cs_quantity#12726 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(cs_list_price#12728 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#12318, count(1) AS number_sales#12319L)
    // Input: ListBuffer(cs_quantity#12726, cs_list_price#12728, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    // Output: ListBuffer(i_brand_id#12749, i_class_id#12751, i_category_id#12753, sales#12318, number_sales#12319L)
    std::unordered_map<SW_Aggregate_TD_8835_key, SW_Aggregate_TD_8835_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_963_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _cs_quantity12726 = tbl_JOIN_INNER_TD_963_output.getInt32(i, 0);
        int32_t _cs_list_price12728 = tbl_JOIN_INNER_TD_963_output.getInt32(i, 1);
        int32_t _i_brand_id12749 = tbl_JOIN_INNER_TD_963_output.getInt32(i, 2);
        int32_t _i_class_id12751 = tbl_JOIN_INNER_TD_963_output.getInt32(i, 3);
        int32_t _i_category_id12753 = tbl_JOIN_INNER_TD_963_output.getInt32(i, 4);
        SW_Aggregate_TD_8835_key k{_i_brand_id12749, _i_class_id12751, _i_category_id12753};
        int64_t _sales12318_sum_0 = (_cs_quantity12726 * _cs_list_price12728);
        int64_t _number_sales12319L_count_1 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_8835_payload p{_sales12318_sum_0, _number_sales12319L_count_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales12318_sum_0 + _sales12318_sum_0;
            p._sales12318_sum_0 = sum_0;
            int64_t count_1 = (it->second)._number_sales12319L_count_1 + _number_sales12319L_count_1;
            p._number_sales12319L_count_1 = count_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8835_output.setInt32(r, 0, (it.first)._i_brand_id12749);
        tbl_Aggregate_TD_8835_output.setInt32(r, 1, (it.first)._i_class_id12751);
        tbl_Aggregate_TD_8835_output.setInt32(r, 2, (it.first)._i_category_id12753);
        int32_t _sales12318 = (it.second)._sales12318_sum_0;
        tbl_Aggregate_TD_8835_output.setInt32(r, 3, _sales12318);
        int64_t _number_sales12319L = (it.second)._number_sales12319L_count_1;
        tbl_Aggregate_TD_8835_output.setInt64(r, 4, _number_sales12319L);
        ++r;
    }
    tbl_Aggregate_TD_8835_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8835_output #Row: " << tbl_Aggregate_TD_8835_output.getNumRow() << std::endl;
}

void SW_Aggregate_TD_8310(Table &tbl_Union_TD_9347_output, Table &tbl_Aggregate_TD_8310_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(avg(CheckOverflow((promote_precision(cast(cast(quantity#12331 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(list_price#12332 as decimal(12,2)))), DecimalType(18,2), true)) AS average_sales#12337)
    // Input: ListBuffer(quantity#12331, list_price#12332)
    // Output: ListBuffer(average_sales#12337)
    int64_t avg_0 = 0;
    int nrow1 = tbl_Union_TD_9347_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _quantity12331 = tbl_Union_TD_9347_output.getInt32(i, 0);
        int32_t _list_price12332 = tbl_Union_TD_9347_output.getInt32(i, 1);
        int64_t _average_sales12337_avg_0 = (_quantity12331 * _list_price12332);
        avg_0 = (avg_0 + _average_sales12337_avg_0);
    }
    int r = 0;
    int32_t _average_sales12337 = avg_0 / nrow1;
    tbl_Aggregate_TD_8310_output.setInt32(r++, 0, _average_sales12337);
    tbl_Aggregate_TD_8310_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8310_output #Row: " << tbl_Aggregate_TD_8310_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_8818_key {
    int32_t _i_brand_id12665;
    int32_t _i_class_id12667;
    int32_t _i_category_id12669;
    bool operator==(const SW_Aggregate_TD_8818_key& other) const { return (_i_brand_id12665 == other._i_brand_id12665) && (_i_class_id12667 == other._i_class_id12667) && (_i_category_id12669 == other._i_category_id12669); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_8818_key> {
    std::size_t operator() (const SW_Aggregate_TD_8818_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._i_brand_id12665)) + (hash<int32_t>()(k._i_class_id12667)) + (hash<int32_t>()(k._i_category_id12669));
    }
};
}
struct SW_Aggregate_TD_8818_payload {
    int32_t _sales12313_sum_0;
    int64_t _number_sales12314L_count_1;
};
void SW_Aggregate_TD_8818(Table &tbl_JOIN_INNER_TD_9455_output, Table &tbl_Aggregate_TD_8818_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_brand_id#12665, i_class_id#12667, i_category_id#12669, sum(CheckOverflow((promote_precision(cast(cast(ss_quantity#12645 as decimal(10,0)) as decimal(12,2))) * promote_precision(cast(ss_list_price#12647 as decimal(12,2)))), DecimalType(18,2), true)) AS sales#12313, count(1) AS number_sales#12314L)
    // Input: ListBuffer(ss_quantity#12645, ss_list_price#12647, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Output: ListBuffer(i_brand_id#12665, i_class_id#12667, i_category_id#12669, sales#12313, number_sales#12314L)
    std::unordered_map<SW_Aggregate_TD_8818_key, SW_Aggregate_TD_8818_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_9455_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_quantity12645 = tbl_JOIN_INNER_TD_9455_output.getInt32(i, 0);
        int32_t _ss_list_price12647 = tbl_JOIN_INNER_TD_9455_output.getInt32(i, 1);
        int32_t _i_brand_id12665 = tbl_JOIN_INNER_TD_9455_output.getInt32(i, 2);
        int32_t _i_class_id12667 = tbl_JOIN_INNER_TD_9455_output.getInt32(i, 3);
        int32_t _i_category_id12669 = tbl_JOIN_INNER_TD_9455_output.getInt32(i, 4);
        SW_Aggregate_TD_8818_key k{_i_brand_id12665, _i_class_id12667, _i_category_id12669};
        int64_t _sales12313_sum_0 = (_ss_quantity12645 * _ss_list_price12647);
        int64_t _number_sales12314L_count_1 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_8818_payload p{_sales12313_sum_0, _number_sales12314L_count_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sales12313_sum_0 + _sales12313_sum_0;
            p._sales12313_sum_0 = sum_0;
            int64_t count_1 = (it->second)._number_sales12314L_count_1 + _number_sales12314L_count_1;
            p._number_sales12314L_count_1 = count_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        tbl_Aggregate_TD_8818_output.setInt32(r, 0, (it.first)._i_brand_id12665);
        tbl_Aggregate_TD_8818_output.setInt32(r, 1, (it.first)._i_class_id12667);
        tbl_Aggregate_TD_8818_output.setInt32(r, 2, (it.first)._i_category_id12669);
        int32_t _sales12313 = (it.second)._sales12313_sum_0;
        tbl_Aggregate_TD_8818_output.setInt32(r, 3, _sales12313);
        int64_t _number_sales12314L = (it.second)._number_sales12314L_count_1;
        tbl_Aggregate_TD_8818_output.setInt64(r, 4, _number_sales12314L);
        ++r;
    }
    tbl_Aggregate_TD_8818_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_8818_output #Row: " << tbl_Aggregate_TD_8818_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7522(Table &tbl_Aggregate_TD_816_output, Table &tbl_Aggregate_TD_8808_output, Table &tbl_Filter_TD_7522_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#12323) AND (cast(sales#12323 as decimal(32,6)) > cast(scalar-subquery#12326 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#12833, i_class_id#12835, i_category_id#12837, sales#12323, number_sales#12324L)
    // Output: ListBuffer(sales#12323, number_sales#12324L, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_816_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12323 = tbl_Aggregate_TD_816_output.getInt32(i, 3);
        if ((_sales12323!= 0) && (_sales12323 > tbl_Aggregate_TD_8808_output.getInt32(0, 0))) {
            int32_t _sales12323_t = tbl_Aggregate_TD_816_output.getInt32(i, 3);
            tbl_Filter_TD_7522_output.setInt32(r, 0, _sales12323_t);
            int64_t _number_sales12324L_t = tbl_Aggregate_TD_816_output.getInt64(i, 4);
            tbl_Filter_TD_7522_output.setInt64(r, 1, _number_sales12324L_t);
            int32_t _i_brand_id12833_t = tbl_Aggregate_TD_816_output.getInt32(i, 0);
            tbl_Filter_TD_7522_output.setInt32(r, 2, _i_brand_id12833_t);
            int32_t _i_class_id12835_t = tbl_Aggregate_TD_816_output.getInt32(i, 1);
            tbl_Filter_TD_7522_output.setInt32(r, 3, _i_class_id12835_t);
            int32_t _i_category_id12837_t = tbl_Aggregate_TD_816_output.getInt32(i, 2);
            tbl_Filter_TD_7522_output.setInt32(r, 4, _i_category_id12837_t);
            r++;
        }
    }
    tbl_Filter_TD_7522_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7522_output #Row: " << tbl_Filter_TD_7522_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7865(Table &tbl_Aggregate_TD_8835_output, Table &tbl_Aggregate_TD_8810_output, Table &tbl_Filter_TD_7865_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#12318) AND (cast(sales#12318 as decimal(32,6)) > cast(scalar-subquery#12321 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#12749, i_class_id#12751, i_category_id#12753, sales#12318, number_sales#12319L)
    // Output: ListBuffer(sales#12318, number_sales#12319L, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8835_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12318 = tbl_Aggregate_TD_8835_output.getInt32(i, 3);
        if ((_sales12318!= 0) && (_sales12318 > tbl_Aggregate_TD_8810_output.getInt32(0, 0))) {
            int32_t _sales12318_t = tbl_Aggregate_TD_8835_output.getInt32(i, 3);
            tbl_Filter_TD_7865_output.setInt32(r, 0, _sales12318_t);
            int64_t _number_sales12319L_t = tbl_Aggregate_TD_8835_output.getInt64(i, 4);
            tbl_Filter_TD_7865_output.setInt64(r, 1, _number_sales12319L_t);
            int32_t _i_brand_id12749_t = tbl_Aggregate_TD_8835_output.getInt32(i, 0);
            tbl_Filter_TD_7865_output.setInt32(r, 2, _i_brand_id12749_t);
            int32_t _i_class_id12751_t = tbl_Aggregate_TD_8835_output.getInt32(i, 1);
            tbl_Filter_TD_7865_output.setInt32(r, 3, _i_class_id12751_t);
            int32_t _i_category_id12753_t = tbl_Aggregate_TD_8835_output.getInt32(i, 2);
            tbl_Filter_TD_7865_output.setInt32(r, 4, _i_category_id12753_t);
            r++;
        }
    }
    tbl_Filter_TD_7865_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7865_output #Row: " << tbl_Filter_TD_7865_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7569(Table &tbl_Aggregate_TD_8818_output, Table &tbl_Aggregate_TD_8310_output, Table &tbl_Filter_TD_7569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(sales#12313) AND (cast(sales#12313 as decimal(32,6)) > cast(scalar-subquery#12316 [] as decimal(32,6)))))
    // Input: ListBuffer(i_brand_id#12665, i_class_id#12667, i_category_id#12669, sales#12313, number_sales#12314L)
    // Output: ListBuffer(sales#12313, number_sales#12314L, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_8818_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12313 = tbl_Aggregate_TD_8818_output.getInt32(i, 3);
        if ((_sales12313!= 0) && (_sales12313 > tbl_Aggregate_TD_8310_output.getInt32(0, 0))) {
            int32_t _sales12313_t = tbl_Aggregate_TD_8818_output.getInt32(i, 3);
            tbl_Filter_TD_7569_output.setInt32(r, 0, _sales12313_t);
            int64_t _number_sales12314L_t = tbl_Aggregate_TD_8818_output.getInt64(i, 4);
            tbl_Filter_TD_7569_output.setInt64(r, 1, _number_sales12314L_t);
            int32_t _i_brand_id12665_t = tbl_Aggregate_TD_8818_output.getInt32(i, 0);
            tbl_Filter_TD_7569_output.setInt32(r, 2, _i_brand_id12665_t);
            int32_t _i_class_id12667_t = tbl_Aggregate_TD_8818_output.getInt32(i, 1);
            tbl_Filter_TD_7569_output.setInt32(r, 3, _i_class_id12667_t);
            int32_t _i_category_id12669_t = tbl_Aggregate_TD_8818_output.getInt32(i, 2);
            tbl_Filter_TD_7569_output.setInt32(r, 4, _i_category_id12669_t);
            r++;
        }
    }
    tbl_Filter_TD_7569_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7569_output #Row: " << tbl_Filter_TD_7569_output.getNumRow() << std::endl;
}

void SW_Project_TD_6237(Table &tbl_Filter_TD_7522_output, Table &tbl_Project_TD_6237_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(web AS channel#13308)
    // Input: ListBuffer(sales#12323, number_sales#12324L, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    // Output: ListBuffer(sales#12323, number_sales#12324L, channel#13308, i_brand_id#12833, i_class_id#12835, i_category_id#12837)
    int nrow1 = tbl_Filter_TD_7522_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12323 = tbl_Filter_TD_7522_output.getInt32(i, 0);
        int64_t _number_sales12324L = tbl_Filter_TD_7522_output.getInt64(i, 1);
        int32_t _i_brand_id12833 = tbl_Filter_TD_7522_output.getInt32(i, 2);
        int32_t _i_class_id12835 = tbl_Filter_TD_7522_output.getInt32(i, 3);
        int32_t _i_category_id12837 = tbl_Filter_TD_7522_output.getInt32(i, 4);
        std::string _channel13308_str = "web";
        std::array<char, TPCDS_READ_MAX + 1> _channel13308{};
        memcpy(_channel13308.data(), _channel13308_str.data(), (_channel13308_str).length());
        tbl_Project_TD_6237_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel13308);
        tbl_Project_TD_6237_output.setInt32(i, 0, _sales12323);
        tbl_Project_TD_6237_output.setInt64(i, 1, _number_sales12324L);
        tbl_Project_TD_6237_output.setInt32(i, 3, _i_brand_id12833);
        tbl_Project_TD_6237_output.setInt32(i, 4, _i_class_id12835);
        tbl_Project_TD_6237_output.setInt32(i, 5, _i_category_id12837);
    }
    tbl_Project_TD_6237_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6237_output #Row: " << tbl_Project_TD_6237_output.getNumRow() << std::endl;
}

void SW_Project_TD_6100(Table &tbl_Filter_TD_7865_output, Table &tbl_Project_TD_6100_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(catalog AS channel#13304)
    // Input: ListBuffer(sales#12318, number_sales#12319L, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    // Output: ListBuffer(sales#12318, number_sales#12319L, channel#13304, i_brand_id#12749, i_class_id#12751, i_category_id#12753)
    int nrow1 = tbl_Filter_TD_7865_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12318 = tbl_Filter_TD_7865_output.getInt32(i, 0);
        int64_t _number_sales12319L = tbl_Filter_TD_7865_output.getInt64(i, 1);
        int32_t _i_brand_id12749 = tbl_Filter_TD_7865_output.getInt32(i, 2);
        int32_t _i_class_id12751 = tbl_Filter_TD_7865_output.getInt32(i, 3);
        int32_t _i_category_id12753 = tbl_Filter_TD_7865_output.getInt32(i, 4);
        std::string _channel13304_str = "catalog";
        std::array<char, TPCDS_READ_MAX + 1> _channel13304{};
        memcpy(_channel13304.data(), _channel13304_str.data(), (_channel13304_str).length());
        tbl_Project_TD_6100_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel13304);
        tbl_Project_TD_6100_output.setInt32(i, 0, _sales12318);
        tbl_Project_TD_6100_output.setInt64(i, 1, _number_sales12319L);
        tbl_Project_TD_6100_output.setInt32(i, 3, _i_brand_id12749);
        tbl_Project_TD_6100_output.setInt32(i, 4, _i_class_id12751);
        tbl_Project_TD_6100_output.setInt32(i, 5, _i_category_id12753);
    }
    tbl_Project_TD_6100_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6100_output #Row: " << tbl_Project_TD_6100_output.getNumRow() << std::endl;
}

void SW_Project_TD_6597(Table &tbl_Filter_TD_7569_output, Table &tbl_Project_TD_6597_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(store AS channel#12902)
    // Input: ListBuffer(sales#12313, number_sales#12314L, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Output: ListBuffer(sales#12313, number_sales#12314L, channel#12902, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int nrow1 = tbl_Filter_TD_7569_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12313 = tbl_Filter_TD_7569_output.getInt32(i, 0);
        int64_t _number_sales12314L = tbl_Filter_TD_7569_output.getInt64(i, 1);
        int32_t _i_brand_id12665 = tbl_Filter_TD_7569_output.getInt32(i, 2);
        int32_t _i_class_id12667 = tbl_Filter_TD_7569_output.getInt32(i, 3);
        int32_t _i_category_id12669 = tbl_Filter_TD_7569_output.getInt32(i, 4);
        std::string _channel12902_str = "store";
        std::array<char, TPCDS_READ_MAX + 1> _channel12902{};
        memcpy(_channel12902.data(), _channel12902_str.data(), (_channel12902_str).length());
        tbl_Project_TD_6597_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 2, _channel12902);
        tbl_Project_TD_6597_output.setInt32(i, 0, _sales12313);
        tbl_Project_TD_6597_output.setInt64(i, 1, _number_sales12314L);
        tbl_Project_TD_6597_output.setInt32(i, 3, _i_brand_id12665);
        tbl_Project_TD_6597_output.setInt32(i, 4, _i_class_id12667);
        tbl_Project_TD_6597_output.setInt32(i, 5, _i_category_id12669);
    }
    tbl_Project_TD_6597_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6597_output #Row: " << tbl_Project_TD_6597_output.getNumRow() << std::endl;
}

void SW_Union_TD_5437(Table &tbl_Project_TD_6597_output, Table &tbl_Project_TD_6100_output, Table &tbl_Project_TD_6237_output, Table &tbl_Union_TD_5437_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Union
    // Operation: ListBuffer(List(UNION))
    // Output Table: ListBuffer(sales#12313, number_sales#12314L, channel#12902, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    int r = 0;
    int row0 = tbl_Project_TD_6597_output.getNumRow();
    for (int i = 0; i < row0; i++) {
        tbl_Union_TD_5437_output.setInt32(r, 0, tbl_Project_TD_6597_output.getInt32(i, 0));
        tbl_Union_TD_5437_output.setInt32(r, 1, tbl_Project_TD_6597_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel12902_n = tbl_Union_TD_5437_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5437_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel12902_n);
        tbl_Union_TD_5437_output.setInt32(r, 3, tbl_Project_TD_6597_output.getInt32(i, 3));
        tbl_Union_TD_5437_output.setInt32(r, 4, tbl_Project_TD_6597_output.getInt32(i, 4));
        tbl_Union_TD_5437_output.setInt32(r, 5, tbl_Project_TD_6597_output.getInt32(i, 5));
        ++r;
    }
    int row1 = tbl_Project_TD_6100_output.getNumRow();
    for (int i = 0; i < row1; i++) {
        tbl_Union_TD_5437_output.setInt32(r, 0, tbl_Project_TD_6100_output.getInt32(i, 0));
        tbl_Union_TD_5437_output.setInt32(r, 1, tbl_Project_TD_6100_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel13304_n = tbl_Union_TD_5437_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5437_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel13304_n);
        tbl_Union_TD_5437_output.setInt32(r, 3, tbl_Project_TD_6100_output.getInt32(i, 3));
        tbl_Union_TD_5437_output.setInt32(r, 4, tbl_Project_TD_6100_output.getInt32(i, 4));
        tbl_Union_TD_5437_output.setInt32(r, 5, tbl_Project_TD_6100_output.getInt32(i, 5));
        ++r;
    }
    int row2 = tbl_Project_TD_6237_output.getNumRow();
    for (int i = 0; i < row2; i++) {
        tbl_Union_TD_5437_output.setInt32(r, 0, tbl_Project_TD_6237_output.getInt32(i, 0));
        tbl_Union_TD_5437_output.setInt32(r, 1, tbl_Project_TD_6237_output.getInt64(i, 1));
        std::array<char, TPCDS_READ_MAX + 1> _channel13308_n = tbl_Union_TD_5437_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        tbl_Union_TD_5437_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _channel13308_n);
        tbl_Union_TD_5437_output.setInt32(r, 3, tbl_Project_TD_6237_output.getInt32(i, 3));
        tbl_Union_TD_5437_output.setInt32(r, 4, tbl_Project_TD_6237_output.getInt32(i, 4));
        tbl_Union_TD_5437_output.setInt32(r, 5, tbl_Project_TD_6237_output.getInt32(i, 5));
        ++r;
    }
    tbl_Union_TD_5437_output.setNumRow(r);
    std::cout << "tbl_Union_TD_5437_output #Row: " << tbl_Union_TD_5437_output.getNumRow() << std::endl;
}

void SW_Expand_TD_4900(Table &tbl_Union_TD_5437_output, Table &tbl_Expand_TD_4900_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Expand
    // Operation: ListBuffer(Expand)
    // Input: ListBuffer(sales#12313, number_sales#12314L, channel#12902, i_brand_id#12665, i_class_id#12667, i_category_id#12669)
    // Output: ListBuffer(sales#12313, number_sales#12314L, channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, spark_grouping_id#12906L)
    std::cout << "tbl_Expand_TD_4900_output #Row: " << tbl_Expand_TD_4900_output.getNumRow() << std::endl;
}

struct SW_Aggregate_TD_3894_key {
    std::string _channel12907;
    int32_t _i_brand_id12908;
    int32_t _i_class_id12909;
    int32_t _i_category_id12910;
    int64_t _spark_grouping_id12906L;
    bool operator==(const SW_Aggregate_TD_3894_key& other) const { return (_channel12907 == other._channel12907) && (_i_brand_id12908 == other._i_brand_id12908) && (_i_class_id12909 == other._i_class_id12909) && (_i_category_id12910 == other._i_category_id12910) && (_spark_grouping_id12906L == other._spark_grouping_id12906L); }
};
namespace std {
template <>
struct hash<SW_Aggregate_TD_3894_key> {
    std::size_t operator() (const SW_Aggregate_TD_3894_key& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._channel12907)) + (hash<int32_t>()(k._i_brand_id12908)) + (hash<int32_t>()(k._i_class_id12909)) + (hash<int32_t>()(k._i_category_id12910)) + (hash<int64_t>()(k._spark_grouping_id12906L));
    }
};
}
struct SW_Aggregate_TD_3894_payload {
    int32_t _sumsales12897_sum_0;
    int64_t _sumnumber_sales12898L_sum_1;
};
void SW_Aggregate_TD_3894(Table &tbl_Expand_TD_4900_output, Table &tbl_Aggregate_TD_3894_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, spark_grouping_id#12906L, sum(sales#12313) AS sum(sales)#12897, sum(number_sales#12314L) AS sum(number_sales)#12898L)
    // Input: ListBuffer(sales#12313, number_sales#12314L, channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, spark_grouping_id#12906L)
    // Output: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    std::unordered_map<SW_Aggregate_TD_3894_key, SW_Aggregate_TD_3894_payload> ht1;
    int nrow1 = tbl_Expand_TD_4900_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _sales12313 = tbl_Expand_TD_4900_output.getInt32(i, 0);
        int64_t _number_sales12314L = tbl_Expand_TD_4900_output.getInt64(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _channel12907 = tbl_Expand_TD_4900_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        int32_t _i_brand_id12908 = tbl_Expand_TD_4900_output.getInt32(i, 3);
        int32_t _i_class_id12909 = tbl_Expand_TD_4900_output.getInt32(i, 4);
        int32_t _i_category_id12910 = tbl_Expand_TD_4900_output.getInt32(i, 5);
        int64_t _spark_grouping_id12906L = tbl_Expand_TD_4900_output.getInt64(i, 6);
        SW_Aggregate_TD_3894_key k{std::string(_channel12907.data()), _i_brand_id12908, _i_class_id12909, _i_category_id12910, _spark_grouping_id12906L};
        int64_t _sumsales12897_sum_0 = _sales12313;
        int64_t _sumnumber_sales12898L_sum_1 = _number_sales12314L;
        SW_Aggregate_TD_3894_payload p{_sumsales12897_sum_0, _sumnumber_sales12898L_sum_1};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int32_t sum_0 = (it->second)._sumsales12897_sum_0 + _sumsales12897_sum_0;
            p._sumsales12897_sum_0 = sum_0;
            int64_t sum_1 = (it->second)._sumnumber_sales12898L_sum_1 + _sumnumber_sales12898L_sum_1;
            p._sumnumber_sales12898L_sum_1 = sum_1;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _channel12907{};
        memcpy(_channel12907.data(), ((it.first)._channel12907).data(), ((it.first)._channel12907).length());
        tbl_Aggregate_TD_3894_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel12907);
        tbl_Aggregate_TD_3894_output.setInt32(r, 1, (it.first)._i_brand_id12908);
        tbl_Aggregate_TD_3894_output.setInt32(r, 2, (it.first)._i_class_id12909);
        tbl_Aggregate_TD_3894_output.setInt32(r, 3, (it.first)._i_category_id12910);
        // _spark_grouping_id12906L not required in the output table
        int32_t _sumsales12897 = (it.second)._sumsales12897_sum_0;
        tbl_Aggregate_TD_3894_output.setInt32(r, 4, _sumsales12897);
        int64_t _sumnumber_sales12898L = (it.second)._sumnumber_sales12898L_sum_1;
        tbl_Aggregate_TD_3894_output.setInt64(r, 5, _sumnumber_sales12898L);
        ++r;
    }
    tbl_Aggregate_TD_3894_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3894_output #Row: " << tbl_Aggregate_TD_3894_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2396(Table &tbl_Aggregate_TD_3894_output, Table &tbl_Sort_TD_2396_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(channel#12907 ASC NULLS FIRST, i_brand_id#12908 ASC NULLS FIRST, i_class_id#12909 ASC NULLS FIRST, i_category_id#12910 ASC NULLS FIRST)
    // Input: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    // Output: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    struct SW_Sort_TD_2396Row {
        std::string _channel12907;
        int32_t _i_brand_id12908;
        int32_t _i_class_id12909;
        int32_t _i_category_id12910;
        int32_t _sumsales12897;
        int64_t _sumnumber_sales12898L;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2396Row& a, const SW_Sort_TD_2396Row& b) const { return 
 (a._channel12907 < b._channel12907) || 
 ((a._channel12907 == b._channel12907) && (a._i_brand_id12908 < b._i_brand_id12908)) || 
 ((a._channel12907 == b._channel12907) && (a._i_brand_id12908 == b._i_brand_id12908) && (a._i_class_id12909 < b._i_class_id12909)) || 
 ((a._channel12907 == b._channel12907) && (a._i_brand_id12908 == b._i_brand_id12908) && (a._i_class_id12909 == b._i_class_id12909) && (a._i_category_id12910 < b._i_category_id12910)); 
}
    }SW_Sort_TD_2396_order; 

    int nrow1 = tbl_Aggregate_TD_3894_output.getNumRow();
    std::vector<SW_Sort_TD_2396Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel12907 = tbl_Aggregate_TD_3894_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int32_t _i_brand_id12908 = tbl_Aggregate_TD_3894_output.getInt32(i, 1);
        int32_t _i_class_id12909 = tbl_Aggregate_TD_3894_output.getInt32(i, 2);
        int32_t _i_category_id12910 = tbl_Aggregate_TD_3894_output.getInt32(i, 3);
        int32_t _sumsales12897 = tbl_Aggregate_TD_3894_output.getInt32(i, 4);
        int64_t _sumnumber_sales12898L = tbl_Aggregate_TD_3894_output.getInt64(i, 5);
        SW_Sort_TD_2396Row t = {std::string(_channel12907.data()),_i_brand_id12908,_i_class_id12909,_i_category_id12910,_sumsales12897,_sumnumber_sales12898L};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2396_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _channel12907{};
        memcpy(_channel12907.data(), (it._channel12907).data(), (it._channel12907).length());
        tbl_Sort_TD_2396_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _channel12907);
        tbl_Sort_TD_2396_output.setInt32(r, 1, it._i_brand_id12908);
        tbl_Sort_TD_2396_output.setInt32(r, 2, it._i_class_id12909);
        tbl_Sort_TD_2396_output.setInt32(r, 3, it._i_category_id12910);
        tbl_Sort_TD_2396_output.setInt32(r, 4, it._sumsales12897);
        tbl_Sort_TD_2396_output.setInt64(r, 5, it._sumnumber_sales12898L);
        ++r;
    }
    tbl_Sort_TD_2396_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2396_output #Row: " << tbl_Sort_TD_2396_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1625(Table &tbl_Sort_TD_2396_output, Table &tbl_LocalLimit_TD_1625_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    // Output: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel12907_n = tbl_Sort_TD_2396_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1625_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel12907_n);
        tbl_LocalLimit_TD_1625_output.setInt32(r, 1, tbl_Sort_TD_2396_output.getInt32(i, 1));
        tbl_LocalLimit_TD_1625_output.setInt32(r, 2, tbl_Sort_TD_2396_output.getInt32(i, 2));
        tbl_LocalLimit_TD_1625_output.setInt32(r, 3, tbl_Sort_TD_2396_output.getInt32(i, 3));
        tbl_LocalLimit_TD_1625_output.setInt32(r, 4, tbl_Sort_TD_2396_output.getInt32(i, 4));
        tbl_LocalLimit_TD_1625_output.setInt32(r, 5, tbl_Sort_TD_2396_output.getInt64(i, 5));
        r++;
    }
    tbl_LocalLimit_TD_1625_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1625_output #Row: " << tbl_LocalLimit_TD_1625_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0297(Table &tbl_LocalLimit_TD_1625_output, Table &tbl_GlobalLimit_TD_0297_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    // Output: ListBuffer(channel#12907, i_brand_id#12908, i_class_id#12909, i_category_id#12910, sum(sales)#12897, sum(number_sales)#12898L)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _channel12907_n = tbl_LocalLimit_TD_1625_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0297_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _channel12907_n);
        tbl_GlobalLimit_TD_0297_output.setInt32(r, 1, tbl_LocalLimit_TD_1625_output.getInt32(i, 1));
        tbl_GlobalLimit_TD_0297_output.setInt32(r, 2, tbl_LocalLimit_TD_1625_output.getInt32(i, 2));
        tbl_GlobalLimit_TD_0297_output.setInt32(r, 3, tbl_LocalLimit_TD_1625_output.getInt32(i, 3));
        tbl_GlobalLimit_TD_0297_output.setInt32(r, 4, tbl_LocalLimit_TD_1625_output.getInt32(i, 4));
        tbl_GlobalLimit_TD_0297_output.setInt32(r, 5, tbl_LocalLimit_TD_1625_output.getInt64(i, 5));
        r++;
    }
    tbl_GlobalLimit_TD_0297_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0297_output #Row: " << tbl_GlobalLimit_TD_0297_output.getNumRow() << std::endl;
}

