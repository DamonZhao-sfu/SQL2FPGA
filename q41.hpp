#include <regex> 
#include <stdint.h> 

void SW_Filter_TD_7558(Table &tbl_SerializeFromObject_TD_8146_input, Table &tbl_Filter_TD_7558_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((((i_category#4494 = Women) AND (((((i_color#4499 = powder) OR (i_color#4499 = khaki)) AND ((i_units#4500 = Ounce) OR (i_units#4500 = Oz))) AND ((i_size#4497 = medium) OR (i_size#4497 = extra large))) OR ((((i_color#4499 = brown) OR (i_color#4499 = honeydew)) AND ((i_units#4500 = Bunch) OR (i_units#4500 = Ton))) AND ((i_size#4497 = N/A) OR (i_size#4497 = small))))) OR ((i_category#4494 = Men) AND (((((i_color#4499 = floral) OR (i_color#4499 = deep)) AND ((i_units#4500 = N/A) OR (i_units#4500 = Dozen))) AND ((i_size#4497 = petite) OR (i_size#4497 = large))) OR ((((i_color#4499 = light) OR (i_color#4499 = cornflower)) AND ((i_units#4500 = Box) OR (i_units#4500 = Pound))) AND ((i_size#4497 = medium) OR (i_size#4497 = extra large)))))) OR (((i_category#4494 = Women) AND (((((i_color#4499 = midnight) OR (i_color#4499 = snow)) AND ((i_units#4500 = Pallet) OR (i_units#4500 = Gross))) AND ((i_size#4497 = medium) OR (i_size#4497 = extra large))) OR ((((i_color#4499 = cyan) OR (i_color#4499 = papaya)) AND ((i_units#4500 = Cup) OR (i_units#4500 = Dram))) AND ((i_size#4497 = N/A) OR (i_size#4497 = small))))) OR ((i_category#4494 = Men) AND (((((i_color#4499 = orange) OR (i_color#4499 = frosted)) AND ((i_units#4500 = Each) OR (i_units#4500 = Tbl))) AND ((i_size#4497 = petite) OR (i_size#4497 = large))) OR ((((i_color#4499 = forest) OR (i_color#4499 = ghost)) AND ((i_units#4500 = Lb) OR (i_units#4500 = Bundle))) AND ((i_size#4497 = medium) OR (i_size#4497 = extra large))))))) AND isnotnull(i_manufact#4496)))
    // Input: ListBuffer(i_manufact#4496, i_category#4494, i_color#4499, i_units#4500, i_size#4497)
    // Output: ListBuffer(i_manufact#4496)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8146_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_category4494 = tbl_SerializeFromObject_TD_8146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        std::array<char, TPCDS_READ_MAX + 1> _i_color4499 = tbl_SerializeFromObject_TD_8146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_units4500 = tbl_SerializeFromObject_TD_8146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 3);
        std::array<char, TPCDS_READ_MAX + 1> _i_size4497 = tbl_SerializeFromObject_TD_8146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 4);
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496 = tbl_SerializeFromObject_TD_8146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        if (((((std::string(_i_category4494.data()) == "Women") && (((((std::string(_i_color4499.data()) == "powder") || (std::string(_i_color4499.data()) == "khaki")) && ((std::string(_i_units4500.data()) == "Ounce") || (std::string(_i_units4500.data()) == "Oz"))) && ((std::string(_i_size4497.data()) == "medium") || (std::string(_i_size4497.data()) == "extra large"))) || ((((std::string(_i_color4499.data()) == "brown") || (std::string(_i_color4499.data()) == "honeydew")) && ((std::string(_i_units4500.data()) == "Bunch") || (std::string(_i_units4500.data()) == "Ton"))) && ((std::string(_i_size4497.data()) == "N/A") || (std::string(_i_size4497.data()) == "small"))))) || ((std::string(_i_category4494.data()) == "Men") && (((((std::string(_i_color4499.data()) == "floral") || (std::string(_i_color4499.data()) == "deep")) && ((std::string(_i_units4500.data()) == "N/A") || (std::string(_i_units4500.data()) == "Dozen"))) && ((std::string(_i_size4497.data()) == "petite") || (std::string(_i_size4497.data()) == "large"))) || ((((std::string(_i_color4499.data()) == "light") || (std::string(_i_color4499.data()) == "cornflower")) && ((std::string(_i_units4500.data()) == "Box") || (std::string(_i_units4500.data()) == "Pound"))) && ((std::string(_i_size4497.data()) == "medium") || (std::string(_i_size4497.data()) == "extra large")))))) || (((std::string(_i_category4494.data()) == "Women") && (((((std::string(_i_color4499.data()) == "midnight") || (std::string(_i_color4499.data()) == "snow")) && ((std::string(_i_units4500.data()) == "Pallet") || (std::string(_i_units4500.data()) == "Gross"))) && ((std::string(_i_size4497.data()) == "medium") || (std::string(_i_size4497.data()) == "extra large"))) || ((((std::string(_i_color4499.data()) == "cyan") || (std::string(_i_color4499.data()) == "papaya")) && ((std::string(_i_units4500.data()) == "Cup") || (std::string(_i_units4500.data()) == "Dram"))) && ((std::string(_i_size4497.data()) == "N/A") || (std::string(_i_size4497.data()) == "small"))))) || ((std::string(_i_category4494.data()) == "Men") && (((((std::string(_i_color4499.data()) == "orange") || (std::string(_i_color4499.data()) == "frosted")) && ((std::string(_i_units4500.data()) == "Each") || (std::string(_i_units4500.data()) == "Tbl"))) && ((std::string(_i_size4497.data()) == "petite") || (std::string(_i_size4497.data()) == "large"))) || ((((std::string(_i_color4499.data()) == "forest") || (std::string(_i_color4499.data()) == "ghost")) && ((std::string(_i_units4500.data()) == "Lb") || (std::string(_i_units4500.data()) == "Bundle"))) && ((std::string(_i_size4497.data()) == "medium") || (std::string(_i_size4497.data()) == "extra large"))))))) && （std::string(_isnotnulli_manufact4496.data()) != "NULL")) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_t = tbl_SerializeFromObject_TD_8146_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_7558_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_manufact4496_t);
            r++;
        }
    }
    tbl_Filter_TD_7558_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7558_output #Row: " << tbl_Filter_TD_7558_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_6439_key;
struct SW_Aggregate_TD_6439_payload {
    int64_t _item_cnt4479L_count_0;
};
void SW_Aggregate_TD_6439(Table &tbl_Filter_TD_7558_output, Table &tbl_Aggregate_TD_6439_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_manufact#4496, count(1) AS item_cnt#4479L)
    // Input: ListBuffer(i_manufact#4496)
    // Output: ListBuffer(item_cnt#4479L, i_manufact#4496)
    std::unordered_map<SW_Aggregate_TD_6439_key, SW_Aggregate_TD_6439_payload> ht1;
    int nrow1 = tbl_Filter_TD_7558_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496 = tbl_Filter_TD_7558_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_6439_key k = std::string(_i_manufact4496.data());
        int64_t _item_cnt4479L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_6439_payload p{_item_cnt4479L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._item_cnt4479L_count_0 + _item_cnt4479L_count_0;
            p._item_cnt4479L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496{};
        memcpy(_i_manufact4496.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_6439_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_manufact4496);
        int64_t _item_cnt4479L = (it.second)._item_cnt4479L_count_0;
        tbl_Aggregate_TD_6439_output.setInt64(r, 0, _item_cnt4479L);
        ++r;
    }
    tbl_Aggregate_TD_6439_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_6439_output #Row: " << tbl_Aggregate_TD_6439_output.getNumRow() << std::endl;
}

void SW_Filter_TD_5365(Table &tbl_Aggregate_TD_6439_output, Table &tbl_Filter_TD_5365_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((item_cnt#4479L > 0))
    // Input: ListBuffer(item_cnt#4479L, i_manufact#4496)
    // Output: ListBuffer(i_manufact#4496)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_6439_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _item_cnt4479L = tbl_Aggregate_TD_6439_output.getInt64(i, 0);
        if (_item_cnt4479L > 0) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_t = tbl_Aggregate_TD_6439_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_5365_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_manufact4496_t);
            r++;
        }
    }
    tbl_Filter_TD_5365_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_5365_output #Row: " << tbl_Filter_TD_5365_output.getNumRow() << std::endl;
}

void SW_Filter_TD_542(Table &tbl_SerializeFromObject_TD_6616_input, Table &tbl_Filter_TD_542_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(i_manufact_id#241) AND ((i_manufact_id#241 >= 738) AND (i_manufact_id#241 <= 778))) AND isnotnull(i_manufact#242)))
    // Input: ListBuffer(i_manufact#242, i_product_name#249, i_manufact_id#241)
    // Output: ListBuffer(i_manufact#242, i_product_name#249)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_6616_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _i_manufact_id241 = tbl_SerializeFromObject_TD_6616_input.getInt32(i, 2);
        std::array<char, TPCDS_READ_MAX + 1> _i_manufact242 = tbl_SerializeFromObject_TD_6616_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        if (((_i_manufact_id241!= 0) && ((_i_manufact_id241 >= 738) && (_i_manufact_id241 <= 778))) && （std::string(_isnotnulli_manufact242.data()) != "NULL")) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_t = tbl_SerializeFromObject_TD_6616_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_542_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_manufact242_t);
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_t = tbl_SerializeFromObject_TD_6616_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_542_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _i_product_name249_t);
            r++;
        }
    }
    tbl_Filter_TD_542_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_542_output #Row: " << tbl_Filter_TD_542_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4710_key_leftMajor {
    std::string _i_manufact242;
    bool operator==(const SW_JOIN_INNER_TD_4710_key_leftMajor& other) const {
        return ((_i_manufact242 == other._i_manufact242));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4710_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4710_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_manufact242));
    }
};
}
struct SW_JOIN_INNER_TD_4710_payload_leftMajor {
    std::string _i_manufact242;
    std::string _i_product_name249;
};
struct SW_JOIN_INNER_TD_4710_key_rightMajor {
    std::string _i_manufact4496;
    bool operator==(const SW_JOIN_INNER_TD_4710_key_rightMajor& other) const {
        return ((_i_manufact4496 == other._i_manufact4496));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4710_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4710_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._i_manufact4496));
    }
};
}
struct SW_JOIN_INNER_TD_4710_payload_rightMajor {
    std::string _i_manufact4496;
};
void SW_JOIN_INNER_TD_4710(Table &tbl_Filter_TD_542_output, Table &tbl_Filter_TD_5365_output, Table &tbl_JOIN_INNER_TD_4710_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((i_manufact#4496 = i_manufact#242))
    // Left Table: ListBuffer(i_manufact#242, i_product_name#249)
    // Right Table: ListBuffer(i_manufact#4496)
    // Output Table: ListBuffer(i_product_name#249)
    int left_nrow = tbl_Filter_TD_542_output.getNumRow();
    int right_nrow = tbl_Filter_TD_5365_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4710_key_leftMajor, SW_JOIN_INNER_TD_4710_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_542_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_k_n = tbl_Filter_TD_542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_manufact242_k = std::string(_i_manufact242_k_n.data());
            SW_JOIN_INNER_TD_4710_key_leftMajor keyA{_i_manufact242_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_Filter_TD_542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_manufact242 = std::string(_i_manufact242_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _i_product_name249 = std::string(_i_product_name249_n.data());
            SW_JOIN_INNER_TD_4710_payload_leftMajor payloadA{_i_manufact242, _i_product_name249};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_5365_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_k_n = tbl_Filter_TD_5365_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_manufact4496_k = std::string(_i_manufact4496_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4710_key_leftMajor{_i_manufact4496_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_manufact242 = (it->second)._i_manufact242;
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n{};
                memcpy(_i_manufact242_n.data(), (_i_manufact242).data(), (_i_manufact242).length());
                std::string _i_product_name249 = (it->second)._i_product_name249;
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n{};
                memcpy(_i_product_name249_n.data(), (_i_product_name249).data(), (_i_product_name249).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_n = tbl_Filter_TD_5365_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_manufact4496 = std::string(_i_manufact4496_n.data());
                tbl_JOIN_INNER_TD_4710_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4710_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4710_key_rightMajor, SW_JOIN_INNER_TD_4710_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_5365_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_k_n = tbl_Filter_TD_5365_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_manufact4496_k = std::string(_i_manufact4496_k_n.data());
            SW_JOIN_INNER_TD_4710_key_rightMajor keyA{_i_manufact4496_k};
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_n = tbl_Filter_TD_5365_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_manufact4496 = std::string(_i_manufact4496_n.data());
            SW_JOIN_INNER_TD_4710_payload_rightMajor payloadA{_i_manufact4496};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_542_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_k_n = tbl_Filter_TD_542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _i_manufact242_k = std::string(_i_manufact242_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4710_key_rightMajor{_i_manufact242_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _i_manufact4496 = (it->second)._i_manufact4496;
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact4496_n{};
                memcpy(_i_manufact4496_n.data(), (_i_manufact4496).data(), (_i_manufact4496).length());
                std::array<char, TPCDS_READ_MAX + 1> _i_manufact242_n = tbl_Filter_TD_542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _i_manufact242 = std::string(_i_manufact242_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Filter_TD_542_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _i_product_name249 = std::string(_i_product_name249_n.data());
                tbl_JOIN_INNER_TD_4710_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name249_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4710_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4710_output #Row: " << tbl_JOIN_INNER_TD_4710_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3511_key;
struct SW_Aggregate_TD_3511_payload {
};
void SW_Aggregate_TD_3511(Table &tbl_JOIN_INNER_TD_4710_output, Table &tbl_Aggregate_TD_3511_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(i_product_name#249)
    // Input: ListBuffer(i_product_name#249)
    // Output: ListBuffer(i_product_name#249)
    std::unordered_map<SW_Aggregate_TD_3511_key, SW_Aggregate_TD_3511_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4710_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249 = tbl_JOIN_INNER_TD_4710_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_3511_key k = std::string(_i_product_name249.data());
        SW_Aggregate_TD_3511_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249{};
        memcpy(_i_product_name249.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_3511_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name249);
        ++r;
    }
    tbl_Aggregate_TD_3511_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3511_output #Row: " << tbl_Aggregate_TD_3511_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2569(Table &tbl_Aggregate_TD_3511_output, Table &tbl_Sort_TD_2569_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(i_product_name#249 ASC NULLS FIRST)
    // Input: ListBuffer(i_product_name#249)
    // Output: ListBuffer(i_product_name#249)
    struct SW_Sort_TD_2569Row {
        std::string _i_product_name249;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2569Row& a, const SW_Sort_TD_2569Row& b) const { return 
 (a._i_product_name249 < b._i_product_name249); 
}
    }SW_Sort_TD_2569_order; 

    int nrow1 = tbl_Aggregate_TD_3511_output.getNumRow();
    std::vector<SW_Sort_TD_2569Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249 = tbl_Aggregate_TD_3511_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        SW_Sort_TD_2569Row t = {std::string(_i_product_name249.data())};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2569_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249{};
        memcpy(_i_product_name249.data(), (it._i_product_name249).data(), (it._i_product_name249).length());
        tbl_Sort_TD_2569_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _i_product_name249);
        ++r;
    }
    tbl_Sort_TD_2569_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2569_output #Row: " << tbl_Sort_TD_2569_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_1536(Table &tbl_Sort_TD_2569_output, Table &tbl_LocalLimit_TD_1536_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(i_product_name#249)
    // Output: ListBuffer(i_product_name#249)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_Sort_TD_2569_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_1536_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name249_n);
        r++;
    }
    tbl_LocalLimit_TD_1536_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_1536_output #Row: " << tbl_LocalLimit_TD_1536_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_0713(Table &tbl_LocalLimit_TD_1536_output, Table &tbl_GlobalLimit_TD_0713_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(i_product_name#249)
    // Output: ListBuffer(i_product_name#249)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _i_product_name249_n = tbl_LocalLimit_TD_1536_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_0713_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _i_product_name249_n);
        r++;
    }
    tbl_GlobalLimit_TD_0713_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_0713_output #Row: " << tbl_GlobalLimit_TD_0713_output.getNumRow() << std::endl;
}

