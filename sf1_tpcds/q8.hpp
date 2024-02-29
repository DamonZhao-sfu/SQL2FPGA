#include <regex> 
#include <stdint.h> 
#include "utils.hpp"

void SW_Filter_TD_1197485(Table &tbl_SerializeFromObject_TD_12287125_input, Table &tbl_Filter_TD_1197485_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(((isnotnull(c_preferred_cust_flag#10) AND (c_preferred_cust_flag#10 = Y)) AND isnotnull(c_current_addr_sk#4)))
    // Input: ListBuffer(c_current_addr_sk#4, c_preferred_cust_flag#10)
    // Output: ListBuffer(c_current_addr_sk#4)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12287125_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _c_preferred_cust_flag10 = tbl_SerializeFromObject_TD_12287125_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        int32_t _c_current_addr_sk4 = tbl_SerializeFromObject_TD_12287125_input.getInt32(i, 0);
        if ((_c_preferred_cust_flag10.data() != "NULL" && (std::string(_c_preferred_cust_flag10.data()) == "Y")) && (_c_current_addr_sk4!= 0)) {
            int32_t _c_current_addr_sk4_t = tbl_SerializeFromObject_TD_12287125_input.getInt32(i, 0);
            tbl_Filter_TD_1197485_output.setInt32(r, 0, _c_current_addr_sk4_t);
            r++;
        }
    }
    tbl_Filter_TD_1197485_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_1197485_output #Row: " << tbl_Filter_TD_1197485_output.getNumRow() << std::endl;
}

void SW_Filter_TD_11208208(Table &tbl_SerializeFromObject_TD_12286301_input, Table &tbl_Filter_TD_11208208_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer(isnotnull(ca_address_sk#9342))
    // Input: ListBuffer(ca_address_sk#9342, ca_zip#9351)
    // Output: ListBuffer(ca_address_sk#9342, ca_zip#9351)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_12286301_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ca_address_sk9342 = tbl_SerializeFromObject_TD_12286301_input.getInt32(i, 0);
        if (_ca_address_sk9342!= 0) {
            int32_t _ca_address_sk9342_t = tbl_SerializeFromObject_TD_12286301_input.getInt32(i, 0);
            tbl_Filter_TD_11208208_output.setInt32(r, 0, _ca_address_sk9342_t);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip9351_t = tbl_SerializeFromObject_TD_12286301_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_11208208_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _ca_zip9351_t);
            r++;
        }
    }
    tbl_Filter_TD_11208208_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_11208208_output #Row: " << tbl_Filter_TD_11208208_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_10819547_key_leftMajor {
    int32_t _ca_address_sk9342;
    bool operator==(const SW_JOIN_INNER_TD_10819547_key_leftMajor& other) const {
        return ((_ca_address_sk9342 == other._ca_address_sk9342));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10819547_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10819547_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ca_address_sk9342));
    }
};
}
struct SW_JOIN_INNER_TD_10819547_payload_leftMajor {
    int32_t _ca_address_sk9342;
    std::string _ca_zip9351;
};
struct SW_JOIN_INNER_TD_10819547_key_rightMajor {
    int32_t _c_current_addr_sk4;
    bool operator==(const SW_JOIN_INNER_TD_10819547_key_rightMajor& other) const {
        return ((_c_current_addr_sk4 == other._c_current_addr_sk4));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_10819547_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_10819547_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._c_current_addr_sk4));
    }
};
}
struct SW_JOIN_INNER_TD_10819547_payload_rightMajor {
    int32_t _c_current_addr_sk4;
};
void SW_JOIN_INNER_TD_10819547(Table &tbl_Filter_TD_11208208_output, Table &tbl_Filter_TD_1197485_output, Table &tbl_JOIN_INNER_TD_10819547_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ca_address_sk#9342 = c_current_addr_sk#4))
    // Left Table: ListBuffer(ca_address_sk#9342, ca_zip#9351)
    // Right Table: ListBuffer(c_current_addr_sk#4)
    // Output Table: ListBuffer(ca_zip#9351)
    int left_nrow = tbl_Filter_TD_11208208_output.getNumRow();
    int right_nrow = tbl_Filter_TD_1197485_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10819547_key_leftMajor, SW_JOIN_INNER_TD_10819547_payload_leftMajor> ht1;
        int nrow1 = tbl_Filter_TD_11208208_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ca_address_sk9342_k = tbl_Filter_TD_11208208_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10819547_key_leftMajor keyA{_ca_address_sk9342_k};
            int32_t _ca_address_sk9342 = tbl_Filter_TD_11208208_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip9351_n = tbl_Filter_TD_11208208_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _ca_zip9351 = std::string(_ca_zip9351_n.data());
            SW_JOIN_INNER_TD_10819547_payload_leftMajor payloadA{_ca_address_sk9342, _ca_zip9351};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_1197485_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_1197485_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10819547_key_leftMajor{_c_current_addr_sk4_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ca_address_sk9342 = (it->second)._ca_address_sk9342;
                std::string _ca_zip9351 = (it->second)._ca_zip9351;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip9351_n{};
                memcpy(_ca_zip9351_n.data(), (_ca_zip9351).data(), (_ca_zip9351).length());
                int32_t _c_current_addr_sk4 = tbl_Filter_TD_1197485_output.getInt32(i, 0);
                tbl_JOIN_INNER_TD_10819547_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip9351_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10819547_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_10819547_key_rightMajor, SW_JOIN_INNER_TD_10819547_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_1197485_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _c_current_addr_sk4_k = tbl_Filter_TD_1197485_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10819547_key_rightMajor keyA{_c_current_addr_sk4_k};
            int32_t _c_current_addr_sk4 = tbl_Filter_TD_1197485_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_10819547_payload_rightMajor payloadA{_c_current_addr_sk4};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_11208208_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ca_address_sk9342_k = tbl_Filter_TD_11208208_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_10819547_key_rightMajor{_ca_address_sk9342_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _c_current_addr_sk4 = (it->second)._c_current_addr_sk4;
                int32_t _ca_address_sk9342 = tbl_Filter_TD_11208208_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip9351_n = tbl_Filter_TD_11208208_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _ca_zip9351 = std::string(_ca_zip9351_n.data());
                tbl_JOIN_INNER_TD_10819547_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip9351_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_10819547_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_10819547_output #Row: " << tbl_JOIN_INNER_TD_10819547_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_9977358_key;
struct SW_Aggregate_TD_9977358_payload {
    std::string _ca_zip9340;
    int64_t _cnt9341L_count_0;
};
void SW_Aggregate_TD_9977358(Table &tbl_JOIN_INNER_TD_10819547_output, Table &tbl_Aggregate_TD_9977358_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_zip#9351, substr(ca_zip#9351, 1, 5) AS ca_zip#9340, count(1) AS cnt#9341L)
    // Input: ListBuffer(ca_zip#9351)
    // Output: ListBuffer(ca_zip#9340, cnt#9341L)
    std::unordered_map<SW_Aggregate_TD_9977358_key, SW_Aggregate_TD_9977358_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_10819547_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip9351 = tbl_JOIN_INNER_TD_10819547_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_9977358_key k = std::string(_ca_zip9351.data());
        std::string _ca_zip9340 = std::string(_ca_zip9351.data()).substr(0, 5);
        int64_t _cnt9341L_count_0 = 1 != 0 ? 1 : 0;
        SW_Aggregate_TD_9977358_payload p{std::string(_ca_zip9340.data()), _cnt9341L_count_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t count_0 = (it->second)._cnt9341L_count_0 + _cnt9341L_count_0;
            p._cnt9341L_count_0 = count_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        // _ca_zip9351 not required in the output table
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip9340_n{};
        memcpy(_ca_zip9340_n.data(), (it.second)._ca_zip9340.data(), (it.second)._ca_zip9340.length());
        tbl_Aggregate_TD_9977358_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip9340_n);
        int64_t _cnt9341L = (it.second)._cnt9341L_count_0;
        tbl_Aggregate_TD_9977358_output.setInt64(r, 1, _cnt9341L);
        ++r;
    }
    tbl_Aggregate_TD_9977358_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_9977358_output #Row: " << tbl_Aggregate_TD_9977358_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8371427(Table &tbl_Aggregate_TD_9977358_output, Table &tbl_Filter_TD_8371427_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((cnt#9341L > 10))
    // Input: ListBuffer(ca_zip#9340, cnt#9341L)
    // Output: ListBuffer(ca_zip#9340)
    int r = 0;
    int nrow1 = tbl_Aggregate_TD_9977358_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _cnt9341L = tbl_Aggregate_TD_9977358_output.getInt64(i, 1);
        if (_cnt9341L > 10) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip9340_t = tbl_Aggregate_TD_9977358_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8371427_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip9340_t);
            r++;
        }
    }
    tbl_Filter_TD_8371427_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8371427_output #Row: " << tbl_Filter_TD_8371427_output.getNumRow() << std::endl;
}

void SW_Filter_TD_8171854(Table &tbl_SerializeFromObject_TD_9906937_input, Table &tbl_Filter_TD_8171854_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((substr(ca_zip#63, 1, 5) INSET 10144, 10336, 10390, 10445, 10516, 10567, 11101, 11356, 11376, 11489, 11634, 11928, 12305, 13354, 13375, 13376, 13394, 13595, 13695, 13955, 14060, 14089, 14171, 14328, 14663, 14867, 14922, 15126, 15146, 15371, 15455, 15559, 15723, 15734, 15765, 15798, 15882, 16021, 16725, 16807, 17043, 17183, 17871, 17879, 17920, 18119, 18270, 18376, 18383, 18426, 18652, 18767, 18799, 18840, 18842, 18845, 18906, 19430, 19505, 19512, 19515, 19736, 19769, 19849, 20004, 20260, 20548, 21076, 21195, 21286, 21309, 21337, 21756, 22152, 22245, 22246, 22351, 22437, 22461, 22685, 22744, 22752, 22927, 23006, 23470, 23932, 23968, 24128, 24206, 24317, 24610, 24671, 24676, 24996, 25003, 25103, 25280, 25486, 25631, 25733, 25782, 25858, 25989, 26065, 26105, 26231, 26233, 26653, 26689, 26859, 27068, 27156, 27385, 27700, 28286, 28488, 28545, 28577, 28587, 28709, 28810, 28898, 28915, 29178, 29741, 29839, 30010, 30122, 30431, 30450, 30469, 30625, 30903, 31016, 31029, 31387, 31671, 31880, 32213, 32754, 33123, 33282, 33515, 33786, 34102, 34322, 34425, 35258, 35458, 35474, 35576, 35850, 35942, 36233, 36420, 36446, 36495, 36634, 37125, 37126, 37930, 38122, 38193, 38415, 38607, 38935, 39127, 39192, 39371, 39516, 39736, 39861, 39972, 40081, 40162, 40558, 40604, 41248, 41367, 41368, 41766, 41918, 42029, 42666, 42961, 43285, 43848, 43933, 44165, 44438, 45200, 45266, 45375, 45549, 45692, 45721, 45748, 46081, 46136, 46820, 47305, 47537, 47770, 48033, 48425, 48583, 49130, 49156, 49448, 50016, 50298, 50308, 50412, 51061, 51103, 51200, 51211, 51622, 51649, 51650, 51798, 51949, 52867, 53179, 53268, 53535, 53672, 54364, 54601, 54917, 55253, 55307, 55565, 56240, 56458, 56529, 56571, 56575, 56616, 56691, 56910, 57047, 57647, 57665, 57834, 57855, 58048, 58058, 58078, 58263, 58470, 58943, 59166, 59402, 60099, 60279, 60576, 61265, 61547, 61810, 61860, 62377, 62496, 62878, 62971, 63089, 63193, 63435, 63792, 63837, 63981, 64034, 64147, 64457, 64528, 64544, 65084, 65164, 66162, 66708, 66864, 67030, 67301, 67467, 67473, 67853, 67875, 67897, 68014, 68100, 68101, 68309, 68341, 68621, 68786, 68806, 68880, 68893, 68908, 69035, 69399, 69913, 69952, 70372, 70466, 70738, 71256, 71286, 71791, 71954, 72013, 72151, 72175, 72305, 72325, 72425, 72550, 72823, 73134, 73171, 73241, 73273, 73520, 73650, 74351, 75691, 76107, 76231, 76232, 76614, 76638, 76698, 77191, 77556, 77610, 77721, 78451, 78567, 78668, 78890, 79077, 79777, 79994, 81019, 81096, 81312, 81426, 82136, 82276, 82636, 83041, 83144, 83444, 83849, 83921, 83926, 83933, 84093, 84935, 85816, 86057, 86198, 86284, 86379, 87343, 87501, 87816, 88086, 88190, 88424, 88885, 89091, 89360, 90225, 90257, 90578, 91068, 91110, 91137, 91393, 92712, 94167, 94627, 94898, 94945, 94983, 96451, 96576, 96765, 96888, 96976, 97189, 97789, 98025, 98235, 98294, 98359, 98569, 99076, 99543 AND isnotnull(substr(ca_zip#63, 1, 5))))
    // Input: ListBuffer(ca_zip#63)
    // Output: ListBuffer(ca_zip#63)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_9906937_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_SerializeFromObject_TD_9906937_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::vector<std::string>vec_797 = {
        "53268","73171","14089","34102","18799","57855","19769","18906","13354","19515","42029","96451","44438","26859","68100","13695","61265","38607","26233","79777","79077","72151","16725","57665","30903","37930","59166","85816","47770","81426","87343","33515","24676","25280","56691","16807","11356","67473","68621","58058","77556","17183","56910","10567","88424","28577","24996","51798","37125","22461","66864","30431","73134","68786","91110","41918","15371","47305","91137","86284","52867","27385","60279","64457","79994","21076","25858","68309","35942","83444","70738","69399","94983","56458","63435","25486","15723","64034","35474","76638","48425","67030","83849","61547","94945","55307","83144","13375","24671","30010","29178","28488","77191","68893","28915","67853","86057","72425","10445","26231","65084","51103","36420","19512","21337","25989","60099","18383","30450","15559","54364","28545","99076","49130","29839","10336","11928","57047","96888","26105","18840","81019","54917","11634","21286","59402","87501","25003","83921","47537","83926","42961","82276","23968","22927","18845","43285","43848","97789","18652","83041","91068","35850","75691","24317","41766","39972","94167","78890","16021","98359","58048","56240","27156","38935","19736","67875","23470","56571","86379","28898","54601","34425","28810","77721","46820","39736","63981","22351","15798","24128","21195","51211","39192","17043","50412","96576","88885","57834","18270","97189","26065","32213","68014","39371","39516","65164","34322","28286","62971","10516","98025","19430","45748","40081","30625","88190","38193","45375","87816","49448","35458","64147","38122","13955","18842","76614","68341","89360","48583","98294","31671","22752","30469","40162","36233","72305","17879","55253","72550","90225","36446","10144","71286","53672","94627","55565","20260","49156","84935","69952","40558","27700","15126","96976","45721","53179","73241","23006","78451","40604","41367","72175","83933","63193","36495","25631","35576","63089","72325","73273","14663","61860","45692","76232","67467","22685","20548","70466","20004","73650","14171","76698","33123","82636","22245","14867","31880","71791","51649","72013","58263","69913","56529","77610","25103","70372","89091","25782","25733","71256","51622","64544","73520","57647","98235","15734","38415","58943","22437","36634","42666","39861","18119","44165","37126","56616","68806","15146","51200","18767","51949","13376","22152","81096","31387","56575","26653","30122","11376","18376","60576","98569","15765","53535","12305","33786","81312","88086","92712","32754","31016","46081","11489","58470","90578","21756","17871","62377","26689","50298","18426","78567","28709","78668","41248","82136","50308","33282","62878","15455","76107","23932","29741","39127","67301","24610","10390","24206","50016","67897","76231","11101","45549","22744","61810","71954","28587","19849","41368","17920","68880","21309","68908","45266","13595","62496","43933","14328","66162","66708","69035","99543","15882","14060","84093","19505","22246","51061","90257","86198","91393","13394","72823","68101","27068","35258","45200","63792","96765","63837","58078","74351","46136","51650","48033","14922","31029","94898","64528"
        };
        bool elementExists = std::find(vec_797.begin(), vec_797.end(),std::string(_ca_zip63.data()).substr(0, 5)) != vec_797.end();
        if (((elementExists) || (0)) && std::string(_ca_zip63.data()).substr(0, 5).data() != "NULL") {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip63_t = tbl_SerializeFromObject_TD_9906937_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            tbl_Filter_TD_8171854_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip63_t);
            r++;
        }
    }
    tbl_Filter_TD_8171854_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_8171854_output #Row: " << tbl_Filter_TD_8171854_output.getNumRow() << std::endl;
}

struct SW_JOIN_LEFTSEMI_TD_732446_key_leftMajor {
    std::string _ca_zip9340;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_732446_key_leftMajor& other) const {
        return ((_ca_zip9340 == other._ca_zip9340));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_732446_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_732446_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_zip9340));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_732446_payload_leftMajor {
    std::string _ca_zip63;
};
struct SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor {
    std::string _ca_zip9340;
    bool operator==(const SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor& other) const {
        return ((_ca_zip9340 == other._ca_zip9340));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k._ca_zip9340));
    }
};
}
struct SW_JOIN_LEFTSEMI_TD_732446_payload_rightMajor {
    std::string _ca_zip9340;
};
void SW_JOIN_LEFTSEMI_TD_732446(Table &tbl_Filter_TD_8171854_output, Table &tbl_Filter_TD_8371427_output, Table &tbl_JOIN_LEFTSEMI_TD_732446_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_LEFTSEMI
    // Operation: ListBuffer((substr(ca_zip#63, 1, 5) <=> ca_zip#9340))
    // Left Table: ListBuffer(ca_zip#63)
    // Right Table: ListBuffer(ca_zip#9340)
    // Output Table: ListBuffer(ca_zip#63)
    int left_nrow = tbl_Filter_TD_8171854_output.getNumRow();
    int right_nrow = tbl_Filter_TD_8371427_output.getNumRow();
        std::unordered_map<SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor, SW_JOIN_LEFTSEMI_TD_732446_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_8371427_output.getNumRow();
        int nrow2 = tbl_Filter_TD_8171854_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip9340_k_n = tbl_Filter_TD_8371427_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_zip9340_k = std::string(_ca_zip9340_k_n.data());
            SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor keyA{_ca_zip9340_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip9340_n = tbl_Filter_TD_8371427_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_zip9340 = std::string(_ca_zip9340_n.data());
            SW_JOIN_LEFTSEMI_TD_732446_payload_rightMajor payloadA{_ca_zip9340};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_ca_zip_1_5_k_n = tbl_Filter_TD_8171854_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string substr_ca_zip_1_5_k = std::string(substr_ca_zip_1_5_k_n.data());
            auto it = ht1.find(SW_JOIN_LEFTSEMI_TD_732446_key_rightMajor{substr_ca_zip_1_5_k});
            if (it != ht1.end()) {
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_Filter_TD_8171854_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                if (1) {
                    tbl_JOIN_LEFTSEMI_TD_732446_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip63);
                    r++;
                }
            }
        }
        tbl_JOIN_LEFTSEMI_TD_732446_output.setNumRow(r);
    std::cout << "tbl_JOIN_LEFTSEMI_TD_732446_output #Row: " << tbl_JOIN_LEFTSEMI_TD_732446_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7188400(Table &tbl_SerializeFromObject_TD_8745087_input, Table &tbl_Filter_TD_7188400_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((((isnotnull(d_qoy#130) AND isnotnull(d_year#126)) AND ((d_qoy#130 = 2) AND (d_year#126 = 1998))) AND isnotnull(d_date_sk#120)))
    // Input: ListBuffer(d_date_sk#120, d_qoy#130, d_year#126)
    // Output: ListBuffer(d_date_sk#120)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8745087_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _d_qoy130 = tbl_SerializeFromObject_TD_8745087_input.getInt32(i, 1);
        int32_t _d_year126 = tbl_SerializeFromObject_TD_8745087_input.getInt32(i, 2);
        int32_t _d_date_sk120 = tbl_SerializeFromObject_TD_8745087_input.getInt32(i, 0);
        if ((((_d_qoy130!= 0) && (_d_year126!= 0)) && ((_d_qoy130 == 2) && (_d_year126 == 1998))) && (_d_date_sk120!= 0)) {
            int32_t _d_date_sk120_t = tbl_SerializeFromObject_TD_8745087_input.getInt32(i, 0);
            tbl_Filter_TD_7188400_output.setInt32(r, 0, _d_date_sk120_t);
            r++;
        }
    }
    tbl_Filter_TD_7188400_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7188400_output #Row: " << tbl_Filter_TD_7188400_output.getNumRow() << std::endl;
}

void SW_Filter_TD_7342694(Table &tbl_SerializeFromObject_TD_8991989_input, Table &tbl_Filter_TD_7342694_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(ss_sold_date_sk#1206) AND isnotnull(ss_store_sk#1213)))
    // Input: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_net_profit#1228)
    // Output: ListBuffer(ss_sold_date_sk#1206, ss_store_sk#1213, ss_net_profit#1228)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_8991989_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _ss_sold_date_sk1206 = tbl_SerializeFromObject_TD_8991989_input.getInt32(i, 0);
        int32_t _ss_store_sk1213 = tbl_SerializeFromObject_TD_8991989_input.getInt32(i, 1);
        if ((_ss_sold_date_sk1206!= 0) && (_ss_store_sk1213!= 0)) {
            int32_t _ss_sold_date_sk1206_t = tbl_SerializeFromObject_TD_8991989_input.getInt32(i, 0);
            tbl_Filter_TD_7342694_output.setInt32(r, 0, _ss_sold_date_sk1206_t);
            int32_t _ss_store_sk1213_t = tbl_SerializeFromObject_TD_8991989_input.getInt32(i, 1);
            tbl_Filter_TD_7342694_output.setInt32(r, 1, _ss_store_sk1213_t);
            int64_t _ss_net_profit1228_t = tbl_SerializeFromObject_TD_8991989_input.getInt64(i, 2);
            tbl_Filter_TD_7342694_output.setInt64(r, 2, _ss_net_profit1228_t);
            r++;
        }
    }
    tbl_Filter_TD_7342694_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_7342694_output #Row: " << tbl_Filter_TD_7342694_output.getNumRow() << std::endl;
}

void SW_Project_TD_6642414(Table &tbl_JOIN_LEFTSEMI_TD_732446_output, Table &tbl_Project_TD_6642414_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Project
    // Operation: ListBuffer(substr(ca_zip#63, 1, 5) AS ca_zip#9339)
    // Input: ListBuffer(ca_zip#63)
    // Output: ListBuffer(ca_zip#9339)
    int nrow1 = tbl_JOIN_LEFTSEMI_TD_732446_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip63 = tbl_JOIN_LEFTSEMI_TD_732446_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        std::string _ca_zip9339_str = std::string(_ca_zip63.data()).substr(0, 5);
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip9339{};
        memcpy(_ca_zip9339.data(), _ca_zip9339_str.data(), (_ca_zip9339_str).length());
        tbl_Project_TD_6642414_output.setcharN<char, TPCDS_READ_MAX + 1>(i, 0, _ca_zip9339);
    }
    tbl_Project_TD_6642414_output.setNumRow(nrow1);
    std::cout << "tbl_Project_TD_6642414_output #Row: " << tbl_Project_TD_6642414_output.getNumRow() << std::endl;
}

void SW_Filter_TD_6215944(Table &tbl_SerializeFromObject_TD_7455297_input, Table &tbl_Filter_TD_6215944_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Filter
    // Operation: ListBuffer((isnotnull(s_store_sk#378) AND isnotnull(s_zip#403)))
    // Input: ListBuffer(s_store_sk#378, s_store_name#383, s_zip#403)
    // Output: ListBuffer(s_store_sk#378, s_store_name#383, s_zip#403)
    int r = 0;
    int nrow1 = tbl_SerializeFromObject_TD_7455297_input.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int32_t _s_store_sk378 = tbl_SerializeFromObject_TD_7455297_input.getInt32(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_zip403 = tbl_SerializeFromObject_TD_7455297_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
        if ((_s_store_sk378!= 0) && _s_zip403.data() != "NULL") {
            int32_t _s_store_sk378_t = tbl_SerializeFromObject_TD_7455297_input.getInt32(i, 0);
            tbl_Filter_TD_6215944_output.setInt32(r, 0, _s_store_sk378_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_t = tbl_SerializeFromObject_TD_7455297_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            tbl_Filter_TD_6215944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_t);
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_t = tbl_SerializeFromObject_TD_7455297_input.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            tbl_Filter_TD_6215944_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_zip403_t);
            r++;
        }
    }
    tbl_Filter_TD_6215944_output.setNumRow(r);
    std::cout << "tbl_Filter_TD_6215944_output #Row: " << tbl_Filter_TD_6215944_output.getNumRow() << std::endl;
}


typedef std::string SW_Aggregate_TD_561802_key;
struct SW_Aggregate_TD_561802_payload {
};
void SW_Aggregate_TD_561802(Table &tbl_Project_TD_6642414_output, Table &tbl_Aggregate_TD_561802_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(ca_zip#9339)
    // Input: ListBuffer(ca_zip#9339)
    // Output: ListBuffer(ca_zip#9339)
    std::unordered_map<SW_Aggregate_TD_561802_key, SW_Aggregate_TD_561802_payload> ht1;
    int nrow1 = tbl_Project_TD_6642414_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip9339 = tbl_Project_TD_6642414_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        SW_Aggregate_TD_561802_key k = std::string(_ca_zip9339.data());
        SW_Aggregate_TD_561802_payload p{};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _ca_zip9339{};
        memcpy(_ca_zip9339.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_561802_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _ca_zip9339);
        ++r;
    }
    tbl_Aggregate_TD_561802_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_561802_output #Row: " << tbl_Aggregate_TD_561802_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_5377107_key_leftMajor {
    int32_t _ss_store_sk1213;
    bool operator==(const SW_JOIN_INNER_TD_5377107_key_leftMajor& other) const {
        return ((_ss_store_sk1213 == other._ss_store_sk1213));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5377107_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5377107_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._ss_store_sk1213));
    }
};
}
struct SW_JOIN_INNER_TD_5377107_payload_leftMajor {
    int32_t _ss_store_sk1213;
    int64_t _ss_net_profit1228;
};
struct SW_JOIN_INNER_TD_5377107_key_rightMajor {
    int32_t _s_store_sk378;
    bool operator==(const SW_JOIN_INNER_TD_5377107_key_rightMajor& other) const {
        return ((_s_store_sk378 == other._s_store_sk378));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_5377107_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_5377107_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<int32_t>()(k._s_store_sk378));
    }
};
}
struct SW_JOIN_INNER_TD_5377107_payload_rightMajor {
    int32_t _s_store_sk378;
    std::string _s_store_name383;
    std::string _s_zip403;
};
void SW_JOIN_INNER_TD_5377107(Table &tbl_JOIN_INNER_TD_6989457_output, Table &tbl_Filter_TD_6215944_output, Table &tbl_JOIN_INNER_TD_5377107_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((ss_store_sk#1213 = s_store_sk#378))
    // Left Table: ListBuffer(ss_store_sk#1213, ss_net_profit#1228)
    // Right Table: ListBuffer(s_store_sk#378, s_store_name#383, s_zip#403)
    // Output Table: ListBuffer(ss_net_profit#1228, s_store_name#383, s_zip#403)
    int left_nrow = tbl_JOIN_INNER_TD_6989457_output.getNumRow();
    int right_nrow = tbl_Filter_TD_6215944_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5377107_key_leftMajor, SW_JOIN_INNER_TD_5377107_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_6989457_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_6989457_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5377107_key_leftMajor keyA{_ss_store_sk1213_k};
            int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6989457_output.getInt32(i, 0);
            int64_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_6989457_output.getInt64(i, 1);
            SW_JOIN_INNER_TD_5377107_payload_leftMajor payloadA{_ss_store_sk1213, _ss_net_profit1228};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Filter_TD_6215944_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6215944_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5377107_key_leftMajor{_s_store_sk378_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _ss_store_sk1213 = (it->second)._ss_store_sk1213;
                int64_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                int32_t _s_store_sk378 = tbl_Filter_TD_6215944_output.getInt32(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6215944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_6215944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_5377107_output.setInt64(r, 0, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_5377107_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5377107_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_zip403_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5377107_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_5377107_key_rightMajor, SW_JOIN_INNER_TD_5377107_payload_rightMajor> ht1;
        int nrow1 = tbl_Filter_TD_6215944_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            int32_t _s_store_sk378_k = tbl_Filter_TD_6215944_output.getInt32(i, 0);
            SW_JOIN_INNER_TD_5377107_key_rightMajor keyA{_s_store_sk378_k};
            int32_t _s_store_sk378 = tbl_Filter_TD_6215944_output.getInt32(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Filter_TD_6215944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_Filter_TD_6215944_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_5377107_payload_rightMajor payloadA{_s_store_sk378, _s_store_name383, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_6989457_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            int32_t _ss_store_sk1213_k = tbl_JOIN_INNER_TD_6989457_output.getInt32(i, 0);
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_5377107_key_rightMajor{_ss_store_sk1213_k});
            auto it = its.first;
            while (it != its.second) {
                int32_t _s_store_sk378 = (it->second)._s_store_sk378;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                int32_t _ss_store_sk1213 = tbl_JOIN_INNER_TD_6989457_output.getInt32(i, 0);
                int64_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_6989457_output.getInt64(i, 1);
                tbl_JOIN_INNER_TD_5377107_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                tbl_JOIN_INNER_TD_5377107_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 2, _s_zip403_n);
                tbl_JOIN_INNER_TD_5377107_output.setInt64(r, 0, _ss_net_profit1228);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_5377107_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_5377107_output #Row: " << tbl_JOIN_INNER_TD_5377107_output.getNumRow() << std::endl;
}

struct SW_JOIN_INNER_TD_4941554_key_leftMajor {
    std::string substr_ca_zip_1_2;
    bool operator==(const SW_JOIN_INNER_TD_4941554_key_leftMajor& other) const {
        return ((substr_ca_zip_1_2 == other.substr_ca_zip_1_2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4941554_key_leftMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4941554_key_leftMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k.substr_ca_zip_1_2));
    }
};
}
struct SW_JOIN_INNER_TD_4941554_payload_leftMajor {
    int64_t _ss_net_profit1228;
    std::string _s_store_name383;
    std::string _s_zip403;
};
struct SW_JOIN_INNER_TD_4941554_key_rightMajor {
    std::string substr_ca_zip_1_2;
    bool operator==(const SW_JOIN_INNER_TD_4941554_key_rightMajor& other) const {
        return ((substr_ca_zip_1_2 == other.substr_ca_zip_1_2));
    }
};
namespace std {
template <>
struct hash<SW_JOIN_INNER_TD_4941554_key_rightMajor> {
    std::size_t operator() (const SW_JOIN_INNER_TD_4941554_key_rightMajor& k) const {
        using std::size_t;
        using std::hash;
        using std::string;
        return (hash<string>()(k.substr_ca_zip_1_2));
    }
};
}
struct SW_JOIN_INNER_TD_4941554_payload_rightMajor {
    std::string _ca_zip9339;
};
void SW_JOIN_INNER_TD_4941554(Table &tbl_JOIN_INNER_TD_5377107_output, Table &tbl_Aggregate_TD_561802_output, Table &tbl_JOIN_INNER_TD_4941554_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((substr(s_zip#403, 1, 2) = substr(ca_zip#9339, 1, 2)))
    // Left Table: ListBuffer(ss_net_profit#1228, s_store_name#383, s_zip#403)
    // Right Table: ListBuffer(ca_zip#9339)
    // Output Table: ListBuffer(ss_net_profit#1228, s_store_name#383)
    int left_nrow = tbl_JOIN_INNER_TD_5377107_output.getNumRow();
    int right_nrow = tbl_Aggregate_TD_561802_output.getNumRow();
    if (left_nrow < right_nrow) { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4941554_key_leftMajor, SW_JOIN_INNER_TD_4941554_payload_leftMajor> ht1;
        int nrow1 = tbl_JOIN_INNER_TD_5377107_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_ca_zip_1_2_k_n = tbl_JOIN_INNER_TD_5377107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_ca_zip_1_2_k = std::string(substr_ca_zip_1_2_k_n.data());
            SW_JOIN_INNER_TD_4941554_key_leftMajor keyA{substr_ca_zip_1_2_k};
            int64_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_5377107_output.getInt64(i, 0);
            std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5377107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
            std::string _s_store_name383 = std::string(_s_store_name383_n.data());
            std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5377107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
            std::string _s_zip403 = std::string(_s_zip403_n.data());
            SW_JOIN_INNER_TD_4941554_payload_leftMajor payloadA{_ss_net_profit1228, _s_store_name383, _s_zip403};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_Aggregate_TD_561802_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_s_zip_1_2_k_n = tbl_Aggregate_TD_561802_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_s_zip_1_2_k = std::string(substr_s_zip_1_2_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4941554_key_leftMajor{substr_s_zip_1_2_k});
            auto it = its.first;
            while (it != its.second) {
                int64_t _ss_net_profit1228 = (it->second)._ss_net_profit1228;
                std::string _s_store_name383 = (it->second)._s_store_name383;
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n{};
                memcpy(_s_store_name383_n.data(), (_s_store_name383).data(), (_s_store_name383).length());
                std::string _s_zip403 = (it->second)._s_zip403;
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n{};
                memcpy(_s_zip403_n.data(), (_s_zip403).data(), (_s_zip403).length());
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip9339_n = tbl_Aggregate_TD_561802_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
                std::string _ca_zip9339 = std::string(_ca_zip9339_n.data());
                tbl_JOIN_INNER_TD_4941554_output.setInt64(r, 0, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_4941554_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4941554_output.setNumRow(r);
    } else { 
        std::unordered_multimap<SW_JOIN_INNER_TD_4941554_key_rightMajor, SW_JOIN_INNER_TD_4941554_payload_rightMajor> ht1;
        int nrow1 = tbl_Aggregate_TD_561802_output.getNumRow();
        for (int i = 0; i < nrow1; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_ca_zip_1_2_k_n = tbl_Aggregate_TD_561802_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_ca_zip_1_2_k = std::string(substr_ca_zip_1_2_k_n.data());
            SW_JOIN_INNER_TD_4941554_key_rightMajor keyA{substr_ca_zip_1_2_k};
            std::array<char, TPCDS_READ_MAX + 1> _ca_zip9339_n = tbl_Aggregate_TD_561802_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
            std::string _ca_zip9339 = std::string(_ca_zip9339_n.data());
            SW_JOIN_INNER_TD_4941554_payload_rightMajor payloadA{_ca_zip9339};
            ht1.insert(std::make_pair(keyA, payloadA));
        }
        int r = 0;
        int nrow2 = tbl_JOIN_INNER_TD_5377107_output.getNumRow();
        for (int i = 0; i < nrow2; i++) {
            std::array<char, TPCDS_READ_MAX + 1> substr_s_zip_1_2_k_n = tbl_JOIN_INNER_TD_5377107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, -1);
            std::string substr_s_zip_1_2_k = std::string(substr_s_zip_1_2_k_n.data());
            auto its = ht1.equal_range(SW_JOIN_INNER_TD_4941554_key_rightMajor{substr_s_zip_1_2_k});
            auto it = its.first;
            while (it != its.second) {
                std::string _ca_zip9339 = (it->second)._ca_zip9339;
                std::array<char, TPCDS_READ_MAX + 1> _ca_zip9339_n{};
                memcpy(_ca_zip9339_n.data(), (_ca_zip9339).data(), (_ca_zip9339).length());
                int64_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_5377107_output.getInt64(i, 0);
                std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_JOIN_INNER_TD_5377107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
                std::string _s_store_name383 = std::string(_s_store_name383_n.data());
                std::array<char, TPCDS_READ_MAX + 1> _s_zip403_n = tbl_JOIN_INNER_TD_5377107_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 2);
                std::string _s_zip403 = std::string(_s_zip403_n.data());
                tbl_JOIN_INNER_TD_4941554_output.setInt64(r, 0, _ss_net_profit1228);
                tbl_JOIN_INNER_TD_4941554_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 1, _s_store_name383_n);
                it++;
                r++;
            }
        }
        tbl_JOIN_INNER_TD_4941554_output.setNumRow(r);
    } 
    std::cout << "tbl_JOIN_INNER_TD_4941554_output #Row: " << tbl_JOIN_INNER_TD_4941554_output.getNumRow() << std::endl;
}

typedef std::string SW_Aggregate_TD_3502980_key;
struct SW_Aggregate_TD_3502980_payload {
    int64_t _sumss_net_profit9358_sum_0;
};
void SW_Aggregate_TD_3502980(Table &tbl_JOIN_INNER_TD_4941554_output, Table &tbl_Aggregate_TD_3502980_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Aggregate
    // Operation: ListBuffer(s_store_name#383, MakeDecimal(sum(UnscaledValue(ss_net_profit#1228)),17,2) AS sum(ss_net_profit)#9358)
    // Input: ListBuffer(ss_net_profit#1228, s_store_name#383)
    // Output: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    std::unordered_map<SW_Aggregate_TD_3502980_key, SW_Aggregate_TD_3502980_payload> ht1;
    int nrow1 = tbl_JOIN_INNER_TD_4941554_output.getNumRow();
    for (int i = 0; i < nrow1; i++) {
        int64_t _ss_net_profit1228 = tbl_JOIN_INNER_TD_4941554_output.getInt64(i, 0);
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_JOIN_INNER_TD_4941554_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 1);
        SW_Aggregate_TD_3502980_key k = std::string(_s_store_name383.data());
        int64_t _sumss_net_profit9358_sum_0 = _ss_net_profit1228;
        SW_Aggregate_TD_3502980_payload p{_sumss_net_profit9358_sum_0};
        auto it = ht1.find(k);
        if (it != ht1.end()) {
            int64_t sum_0 = (it->second)._sumss_net_profit9358_sum_0 + _sumss_net_profit9358_sum_0;
            p._sumss_net_profit9358_sum_0 = sum_0;
            ht1[k] = p;
        } else { 
            ht1.insert(std::make_pair(k, p));
        }
    }
    int r = 0;
    for (auto& it : ht1) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it.first).data(), (it.first).length());
        tbl_Aggregate_TD_3502980_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383);
        int64_t _sumss_net_profit9358 = (it.second)._sumss_net_profit9358_sum_0;
        tbl_Aggregate_TD_3502980_output.setInt64(r, 1, _sumss_net_profit9358);
        ++r;
    }
    tbl_Aggregate_TD_3502980_output.setNumRow(r);
    std::cout << "tbl_Aggregate_TD_3502980_output #Row: " << tbl_Aggregate_TD_3502980_output.getNumRow() << std::endl;
}

void SW_Sort_TD_2904256(Table &tbl_Aggregate_TD_3502980_output, Table &tbl_Sort_TD_2904256_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: Sort
    // Operation: ListBuffer(s_store_name#383 ASC NULLS FIRST)
    // Input: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    // Output: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    struct SW_Sort_TD_2904256Row {
        std::string _s_store_name383;
        int64_t _sumss_net_profit9358;
    }; 

    struct {
        bool operator()(const SW_Sort_TD_2904256Row& a, const SW_Sort_TD_2904256Row& b) const { return 
 (a._s_store_name383 < b._s_store_name383); 
}
    }SW_Sort_TD_2904256_order; 

    int nrow1 = tbl_Aggregate_TD_3502980_output.getNumRow();
    std::vector<SW_Sort_TD_2904256Row> rows;
    for (int i = 0; i < nrow1; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383 = tbl_Aggregate_TD_3502980_output.getcharN<char, TPCDS_READ_MAX +1>(i, 0);
        int64_t _sumss_net_profit9358 = tbl_Aggregate_TD_3502980_output.getInt64(i, 1);
        SW_Sort_TD_2904256Row t = {std::string(_s_store_name383.data()),_sumss_net_profit9358};
        rows.push_back(t);
    }
    std::sort(rows.begin(), rows.end(), SW_Sort_TD_2904256_order);
    int r = 0;
    for (auto& it : rows) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383{};
        memcpy(_s_store_name383.data(), (it._s_store_name383).data(), (it._s_store_name383).length());
        tbl_Sort_TD_2904256_output.setcharN<char, TPCDS_READ_MAX +1>(r, 0, _s_store_name383);
        tbl_Sort_TD_2904256_output.setInt64(r, 1, it._sumss_net_profit9358);
        ++r;
    }
    tbl_Sort_TD_2904256_output.setNumRow(r);
    std::cout << "tbl_Sort_TD_2904256_output #Row: " << tbl_Sort_TD_2904256_output.getNumRow() << std::endl;
}

void SW_LocalLimit_TD_137286(Table &tbl_Sort_TD_2904256_output, Table &tbl_LocalLimit_TD_137286_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: LocalLimit
    // Operation: ListBuffer(locallimit)
    // Input: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    // Output: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_Sort_TD_2904256_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_LocalLimit_TD_137286_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
        tbl_LocalLimit_TD_137286_output.setInt64(r, 1, tbl_Sort_TD_2904256_output.getInt64(i, 1));
        r++;
    }
    tbl_LocalLimit_TD_137286_output.setNumRow(r);
    std::cout << "tbl_LocalLimit_TD_137286_output #Row: " << tbl_LocalLimit_TD_137286_output.getNumRow() << std::endl;
}

void SW_GlobalLimit_TD_050086(Table &tbl_LocalLimit_TD_137286_output, Table &tbl_GlobalLimit_TD_050086_output) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: GlobalLimit
    // Operation: ListBuffer(globallimit)
    // Input: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    // Output: ListBuffer(s_store_name#383, sum(ss_net_profit)#9358)
    int r = 0;
    int nrow = 100;
    for (int i = 0; i < nrow; i++) {
        std::array<char, TPCDS_READ_MAX + 1> _s_store_name383_n = tbl_LocalLimit_TD_137286_output.getcharN<char, TPCDS_READ_MAX + 1>(i, 0);
        tbl_GlobalLimit_TD_050086_output.setcharN<char, TPCDS_READ_MAX + 1>(r, 0, _s_store_name383_n);
        tbl_GlobalLimit_TD_050086_output.setInt64(r, 1, tbl_LocalLimit_TD_137286_output.getInt64(i, 1));
        r++;
    }
    tbl_GlobalLimit_TD_050086_output.setNumRow(r);
    std::cout << "tbl_GlobalLimit_TD_050086_output #Row: " << tbl_GlobalLimit_TD_050086_output.getNumRow() << std::endl;
}

