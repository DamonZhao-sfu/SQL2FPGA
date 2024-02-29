#include "ap_int.h" 
#include "xf_database/dynamic_alu_host.hpp"
#include "xf_database/enums.hpp"
#include <fstream> 
 
static void gen_pass_fcfg(uint32_t cfg[]) { 
    using namespace xf::database; 
    int n = 0; 
 
    // cond_1 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = 0UL | (FOP_DC << FilterOpWidth) | (FOP_DC); 
    // cond_2 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = 0UL | (FOP_DC << FilterOpWidth) | (FOP_DC); 
    // cond_3 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = 0UL | (FOP_DC << FilterOpWidth) | (FOP_DC); 
    // cond_4 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = 0UL | (FOP_DC << FilterOpWidth) | (FOP_DC); 
 
    uint32_t r = 0; 
    int sh = 0; 
    // cond_1 -- cond_2 
    r |= ((uint32_t)(FOP_DC << sh)); 
    sh += FilterOpWidth; 
    // cond_1 -- cond_3 
    r |= ((uint32_t)(FOP_DC << sh)); 
    sh += FilterOpWidth; 
    // cond_1 -- cond_4 
    r |= ((uint32_t)(FOP_DC << sh)); 
    sh += FilterOpWidth; 
 
    // cond_2 -- cond_3 
    r |= ((uint32_t)(FOP_DC << sh)); 
    sh += FilterOpWidth; 
    // cond_2 -- cond_4 
    r |= ((uint32_t)(FOP_DC << sh)); 
    sh += FilterOpWidth; 
 
    // cond_3 -- cond_4 
    r |= ((uint32_t)(FOP_DC << sh)); 
    sh += FilterOpWidth; 
 
    cfg[n++] = r; 
 
    // 4 true and 6 true 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)0UL; 
    cfg[n++] = (uint32_t)(1UL << 31); 
} 

void get_cfg_dat_JOIN_INNER_TD_11304473_gqe_join(ap_uint<512>* hbuf) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer(((wr_item_sk#833 = ws_item_sk#8583) AND (wr_order_number#844L = ws_order_number#8597L)))
    // Left Table: ListBuffer(wr_returned_date_sk#831, wr_item_sk#833, wr_order_number#844L, wr_return_amt#846, wr_net_loss#854)
    // Right Table: ListBuffer(ws_item_sk#8583, ws_web_site_sk#8593, ws_order_number#8597L)
    // Output Table: ListBuffer(ws_web_site_sk#8593, wr_returned_date_sk#831, wr_return_amt#846, wr_net_loss#854)
    // Node Depth: 11
    ap_uint<512>* b = hbuf;
    memset(b, 0, sizeof(ap_uint<512>) * 9);
    ap_uint<512> t = 0;

    //--------------filter--------------
    // input table a
    signed char id_a[] = {0,1,2,3,4,-1,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(56 + 8 * c + 7, 56 + 8 * c) = id_a[c];
    }
    // filter tbl_a config
    uint32_t cfga[45];
    gen_pass_fcfg(cfga);
    memcpy(&b[3], cfga, sizeof(uint32_t) * 45);

    // input table b
    signed char id_b[] = {0,1,2,-1,-1,-1,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(120 + 8 * c + 7, 120 + 8 * c) = id_b[c];
    }
    // filter tbl_b config
    uint32_t cfgb[45];
    gen_pass_fcfg(cfgb);
    memcpy(&b[6], cfgb, sizeof(uint32_t) * 45);

    //--------------join--------------
    //stream shuffle 1a
    ap_int<64> shuffle1a_cfg;
    shuffle1a_cfg(7, 0) = 1;
    shuffle1a_cfg(15, 8) = 2;
    shuffle1a_cfg(23, 16) = 3;
    shuffle1a_cfg(31, 24) = 4;
    shuffle1a_cfg(39, 32) = 0;
    shuffle1a_cfg(47, 40) = -1;
    shuffle1a_cfg(55, 48) = -1;
    shuffle1a_cfg(63, 56) = -1;

    //stream shuffle 1b
    ap_int<64> shuffle1b_cfg;
    shuffle1b_cfg(7, 0) = 0;
    shuffle1b_cfg(15, 8) = 2;
    shuffle1b_cfg(23, 16) = 1;
    shuffle1b_cfg(31, 24) = -1;
    shuffle1b_cfg(39, 32) = -1;
    shuffle1b_cfg(47, 40) = -1;
    shuffle1b_cfg(55, 48) = -1;
    shuffle1b_cfg(63, 56) = -1;

    // join config
    t.set_bit(0, 1);    // join
    t.set_bit(2, 1);    // dual-key
    t.range(5, 3) = 0;  // hash join flag = 0 for normal, 1 for semi, 2 for anti

    //--------------eval0--------------
    //stream shuffle 2
    ap_int<64> shuffle2_cfg;
    shuffle2_cfg(7, 0) = 0; // ws_web_site_sk
    shuffle2_cfg(15, 8) = 8; // wr_returned_date_sk
    shuffle2_cfg(23, 16) = 6; // wr_return_amt
    shuffle2_cfg(31, 24) = 7; // wr_net_loss
    shuffle2_cfg(39, 32) = -1;
    shuffle2_cfg(47, 40) = -1;
    shuffle2_cfg(55, 48) = -1;
    shuffle2_cfg(63, 56) = -1;

    ap_uint<289> op_eval_0 = 0; // NOP
    // eval0: NOP
    b[1] = op_eval_0;

    //--------------eval1--------------
    //stream shuffle 3
    ap_int<64> shuffle3_cfg;
    shuffle3_cfg(7, 0) = 0; // ws_web_site_sk
    shuffle3_cfg(15, 8) = 1; // wr_returned_date_sk
    shuffle3_cfg(23, 16) = 2; // wr_return_amt
    shuffle3_cfg(31, 24) = 3; // wr_net_loss
    shuffle3_cfg(39, 32) = -1;
    shuffle3_cfg(47, 40) = -1;
    shuffle3_cfg(55, 48) = -1;
    shuffle3_cfg(63, 56) = -1;

    ap_uint<289> op_eval_1 = 0; // NOP
    // eval1: NOP
    b[2] = op_eval_1;

    //--------------aggregate--------------
    //stream shuffle 4
    ap_int<64> shuffle4_cfg;
    shuffle4_cfg(7, 0) = 0; // ws_web_site_sk
    shuffle4_cfg(15, 8) = 1; // wr_returned_date_sk
    shuffle4_cfg(23, 16) = 2; // wr_return_amt
    shuffle4_cfg(31, 24) = 3; // wr_net_loss
    shuffle4_cfg(39, 32) = -1;
    shuffle4_cfg(47, 40) = -1;
    shuffle4_cfg(55, 48) = -1;
    shuffle4_cfg(63, 56) = -1;

    t.set_bit(1, 0); // aggr flag

    //--------------writeout--------------
    // output table col
    t.range(191, 184) = {1*1 + 2*1 + 4*1 + 8*1 + 16*0 + 32*0 + 64*0 + 128*0};
    b[0] = t;

    //stream shuffle assignment
    b[0].range(255, 192) = shuffle1a_cfg;
    b[0].range(319, 256) = shuffle1b_cfg;
    b[0].range(383, 320) = shuffle2_cfg;
    b[0].range(447, 384) = shuffle3_cfg;
    b[0].range(511, 448) = shuffle4_cfg;
}

void get_cfg_dat_JOIN_INNER_TD_898670_gqe_join(ap_uint<512>* hbuf) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((date_sk#8537 = d_date_sk#8614))
    // Left Table: ListBuffer(wsr_web_site_sk#8536, date_sk#8537, sales_price#8538, profit#8539, return_amt#8540, net_loss#8541)
    // Right Table: ListBuffer(d_date_sk#8614)
    // Output Table: ListBuffer(wsr_web_site_sk#8536, sales_price#8538, profit#8539, return_amt#8540, net_loss#8541)
    // Node Depth: 8
    ap_uint<512>* b = hbuf;
    memset(b, 0, sizeof(ap_uint<512>) * 9);
    ap_uint<512> t = 0;

    //--------------filter--------------
    // input table a
    signed char id_a[] = {0,1,2,3,4,5,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(56 + 8 * c + 7, 56 + 8 * c) = id_a[c];
    }
    // filter tbl_a config
    uint32_t cfga[45];
    gen_pass_fcfg(cfga);
    memcpy(&b[3], cfga, sizeof(uint32_t) * 45);

    // input table b
    signed char id_b[] = {0,-1,-1,-1,-1,-1,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(120 + 8 * c + 7, 120 + 8 * c) = id_b[c];
    }
    // filter tbl_b config
    uint32_t cfgb[45];
    gen_pass_fcfg(cfgb);
    memcpy(&b[6], cfgb, sizeof(uint32_t) * 45);

    //--------------join--------------
    //stream shuffle 1a
    ap_int<64> shuffle1a_cfg;
    shuffle1a_cfg(7, 0) = 1;
    shuffle1a_cfg(15, 8) = 4;
    shuffle1a_cfg(23, 16) = 5;
    shuffle1a_cfg(31, 24) = 0;
    shuffle1a_cfg(39, 32) = 2;
    shuffle1a_cfg(47, 40) = 3;
    shuffle1a_cfg(55, 48) = -1;
    shuffle1a_cfg(63, 56) = -1;

    //stream shuffle 1b
    ap_int<64> shuffle1b_cfg;
    shuffle1b_cfg(7, 0) = 0;
    shuffle1b_cfg(15, 8) = -1;
    shuffle1b_cfg(23, 16) = -1;
    shuffle1b_cfg(31, 24) = -1;
    shuffle1b_cfg(39, 32) = -1;
    shuffle1b_cfg(47, 40) = -1;
    shuffle1b_cfg(55, 48) = -1;
    shuffle1b_cfg(63, 56) = -1;

    // join config
    t.set_bit(0, 1);    // join
    t.set_bit(2, 0);    // dual-key
    t.range(5, 3) = 0;  // hash join flag = 0 for normal, 1 for semi, 2 for anti

    //--------------eval0--------------
    //stream shuffle 2
    ap_int<64> shuffle2_cfg;
    shuffle2_cfg(7, 0) = 8; // wsr_web_site_sk
    shuffle2_cfg(15, 8) = 9; // sales_price
    shuffle2_cfg(23, 16) = 10; // profit
    shuffle2_cfg(31, 24) = 6; // return_amt
    shuffle2_cfg(39, 32) = 7; // net_loss
    shuffle2_cfg(47, 40) = -1;
    shuffle2_cfg(55, 48) = -1;
    shuffle2_cfg(63, 56) = -1;

    ap_uint<289> op_eval_0 = 0; // NOP
    // eval0: NOP
    b[1] = op_eval_0;

    //--------------eval1--------------
    //stream shuffle 3
    ap_int<64> shuffle3_cfg;
    shuffle3_cfg(7, 0) = 0; // wsr_web_site_sk
    shuffle3_cfg(15, 8) = 1; // sales_price
    shuffle3_cfg(23, 16) = 2; // profit
    shuffle3_cfg(31, 24) = 3; // return_amt
    shuffle3_cfg(39, 32) = 4; // net_loss
    shuffle3_cfg(47, 40) = -1;
    shuffle3_cfg(55, 48) = -1;
    shuffle3_cfg(63, 56) = -1;

    ap_uint<289> op_eval_1 = 0; // NOP
    // eval1: NOP
    b[2] = op_eval_1;

    //--------------aggregate--------------
    //stream shuffle 4
    ap_int<64> shuffle4_cfg;
    shuffle4_cfg(7, 0) = 0; // wsr_web_site_sk
    shuffle4_cfg(15, 8) = 1; // sales_price
    shuffle4_cfg(23, 16) = 2; // profit
    shuffle4_cfg(31, 24) = 3; // return_amt
    shuffle4_cfg(39, 32) = 4; // net_loss
    shuffle4_cfg(47, 40) = -1;
    shuffle4_cfg(55, 48) = -1;
    shuffle4_cfg(63, 56) = -1;

    t.set_bit(1, 0); // aggr flag

    //--------------writeout--------------
    // output table col
    t.range(191, 184) = {1*1 + 2*1 + 4*1 + 8*1 + 16*1 + 32*0 + 64*0 + 128*0};
    b[0] = t;

    //stream shuffle assignment
    b[0].range(255, 192) = shuffle1a_cfg;
    b[0].range(319, 256) = shuffle1b_cfg;
    b[0].range(383, 320) = shuffle2_cfg;
    b[0].range(447, 384) = shuffle3_cfg;
    b[0].range(511, 448) = shuffle4_cfg;
}

void get_cfg_dat_JOIN_INNER_TD_864901_gqe_join(ap_uint<512>* hbuf) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((date_sk#8521 = d_date_sk#8552))
    // Left Table: ListBuffer(page_sk#8520, date_sk#8521, sales_price#8522, profit#8523, return_amt#8524, net_loss#8525)
    // Right Table: ListBuffer(d_date_sk#8552)
    // Output Table: ListBuffer(page_sk#8520, sales_price#8522, profit#8523, return_amt#8524, net_loss#8525)
    // Node Depth: 8
    ap_uint<512>* b = hbuf;
    memset(b, 0, sizeof(ap_uint<512>) * 9);
    ap_uint<512> t = 0;

    //--------------filter--------------
    // input table a
    signed char id_a[] = {0,1,2,3,4,5,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(56 + 8 * c + 7, 56 + 8 * c) = id_a[c];
    }
    // filter tbl_a config
    uint32_t cfga[45];
    gen_pass_fcfg(cfga);
    memcpy(&b[3], cfga, sizeof(uint32_t) * 45);

    // input table b
    signed char id_b[] = {0,-1,-1,-1,-1,-1,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(120 + 8 * c + 7, 120 + 8 * c) = id_b[c];
    }
    // filter tbl_b config
    uint32_t cfgb[45];
    gen_pass_fcfg(cfgb);
    memcpy(&b[6], cfgb, sizeof(uint32_t) * 45);

    //--------------join--------------
    //stream shuffle 1a
    ap_int<64> shuffle1a_cfg;
    shuffle1a_cfg(7, 0) = 1;
    shuffle1a_cfg(15, 8) = 4;
    shuffle1a_cfg(23, 16) = 0;
    shuffle1a_cfg(31, 24) = 5;
    shuffle1a_cfg(39, 32) = 2;
    shuffle1a_cfg(47, 40) = 3;
    shuffle1a_cfg(55, 48) = -1;
    shuffle1a_cfg(63, 56) = -1;

    //stream shuffle 1b
    ap_int<64> shuffle1b_cfg;
    shuffle1b_cfg(7, 0) = 0;
    shuffle1b_cfg(15, 8) = -1;
    shuffle1b_cfg(23, 16) = -1;
    shuffle1b_cfg(31, 24) = -1;
    shuffle1b_cfg(39, 32) = -1;
    shuffle1b_cfg(47, 40) = -1;
    shuffle1b_cfg(55, 48) = -1;
    shuffle1b_cfg(63, 56) = -1;

    // join config
    t.set_bit(0, 1);    // join
    t.set_bit(2, 0);    // dual-key
    t.range(5, 3) = 0;  // hash join flag = 0 for normal, 1 for semi, 2 for anti

    //--------------eval0--------------
    //stream shuffle 2
    ap_int<64> shuffle2_cfg;
    shuffle2_cfg(7, 0) = 7; // page_sk
    shuffle2_cfg(15, 8) = 9; // sales_price
    shuffle2_cfg(23, 16) = 10; // profit
    shuffle2_cfg(31, 24) = 6; // return_amt
    shuffle2_cfg(39, 32) = 8; // net_loss
    shuffle2_cfg(47, 40) = -1;
    shuffle2_cfg(55, 48) = -1;
    shuffle2_cfg(63, 56) = -1;

    ap_uint<289> op_eval_0 = 0; // NOP
    // eval0: NOP
    b[1] = op_eval_0;

    //--------------eval1--------------
    //stream shuffle 3
    ap_int<64> shuffle3_cfg;
    shuffle3_cfg(7, 0) = 0; // page_sk
    shuffle3_cfg(15, 8) = 1; // sales_price
    shuffle3_cfg(23, 16) = 2; // profit
    shuffle3_cfg(31, 24) = 3; // return_amt
    shuffle3_cfg(39, 32) = 4; // net_loss
    shuffle3_cfg(47, 40) = -1;
    shuffle3_cfg(55, 48) = -1;
    shuffle3_cfg(63, 56) = -1;

    ap_uint<289> op_eval_1 = 0; // NOP
    // eval1: NOP
    b[2] = op_eval_1;

    //--------------aggregate--------------
    //stream shuffle 4
    ap_int<64> shuffle4_cfg;
    shuffle4_cfg(7, 0) = 0; // page_sk
    shuffle4_cfg(15, 8) = 1; // sales_price
    shuffle4_cfg(23, 16) = 2; // profit
    shuffle4_cfg(31, 24) = 3; // return_amt
    shuffle4_cfg(39, 32) = 4; // net_loss
    shuffle4_cfg(47, 40) = -1;
    shuffle4_cfg(55, 48) = -1;
    shuffle4_cfg(63, 56) = -1;

    t.set_bit(1, 0); // aggr flag

    //--------------writeout--------------
    // output table col
    t.range(191, 184) = {1*1 + 2*1 + 4*1 + 8*1 + 16*1 + 32*0 + 64*0 + 128*0};
    b[0] = t;

    //stream shuffle assignment
    b[0].range(255, 192) = shuffle1a_cfg;
    b[0].range(319, 256) = shuffle1b_cfg;
    b[0].range(383, 320) = shuffle2_cfg;
    b[0].range(447, 384) = shuffle3_cfg;
    b[0].range(511, 448) = shuffle4_cfg;
}

void get_cfg_dat_JOIN_INNER_TD_8935998_gqe_join(ap_uint<512>* hbuf) {
    // StringRowIDSubstitution: false StringRowIDBackSubstitution: false
    // Supported operation: JOIN_INNER
    // Operation: ListBuffer((date_sk#8505 = d_date_sk#120))
    // Left Table: ListBuffer(store_sk#8504, date_sk#8505, sales_price#8506, profit#8507, return_amt#8508, net_loss#8509)
    // Right Table: ListBuffer(d_date_sk#120)
    // Output Table: ListBuffer(store_sk#8504, sales_price#8506, profit#8507, return_amt#8508, net_loss#8509)
    // Node Depth: 8
    ap_uint<512>* b = hbuf;
    memset(b, 0, sizeof(ap_uint<512>) * 9);
    ap_uint<512> t = 0;

    //--------------filter--------------
    // input table a
    signed char id_a[] = {0,1,2,3,4,5,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(56 + 8 * c + 7, 56 + 8 * c) = id_a[c];
    }
    // filter tbl_a config
    uint32_t cfga[45];
    gen_pass_fcfg(cfga);
    memcpy(&b[3], cfga, sizeof(uint32_t) * 45);

    // input table b
    signed char id_b[] = {0,-1,-1,-1,-1,-1,-1,-1};
    for (int c = 0; c < 8; ++c) {
        t.range(120 + 8 * c + 7, 120 + 8 * c) = id_b[c];
    }
    // filter tbl_b config
    uint32_t cfgb[45];
    gen_pass_fcfg(cfgb);
    memcpy(&b[6], cfgb, sizeof(uint32_t) * 45);

    //--------------join--------------
    //stream shuffle 1a
    ap_int<64> shuffle1a_cfg;
    shuffle1a_cfg(7, 0) = 1;
    shuffle1a_cfg(15, 8) = 4;
    shuffle1a_cfg(23, 16) = 5;
    shuffle1a_cfg(31, 24) = 2;
    shuffle1a_cfg(39, 32) = 3;
    shuffle1a_cfg(47, 40) = 0;
    shuffle1a_cfg(55, 48) = -1;
    shuffle1a_cfg(63, 56) = -1;

    //stream shuffle 1b
    ap_int<64> shuffle1b_cfg;
    shuffle1b_cfg(7, 0) = 0;
    shuffle1b_cfg(15, 8) = -1;
    shuffle1b_cfg(23, 16) = -1;
    shuffle1b_cfg(31, 24) = -1;
    shuffle1b_cfg(39, 32) = -1;
    shuffle1b_cfg(47, 40) = -1;
    shuffle1b_cfg(55, 48) = -1;
    shuffle1b_cfg(63, 56) = -1;

    // join config
    t.set_bit(0, 1);    // join
    t.set_bit(2, 0);    // dual-key
    t.range(5, 3) = 0;  // hash join flag = 0 for normal, 1 for semi, 2 for anti

    //--------------eval0--------------
    //stream shuffle 2
    ap_int<64> shuffle2_cfg;
    shuffle2_cfg(7, 0) = 10; // store_sk
    shuffle2_cfg(15, 8) = 8; // sales_price
    shuffle2_cfg(23, 16) = 9; // profit
    shuffle2_cfg(31, 24) = 6; // return_amt
    shuffle2_cfg(39, 32) = 7; // net_loss
    shuffle2_cfg(47, 40) = -1;
    shuffle2_cfg(55, 48) = -1;
    shuffle2_cfg(63, 56) = -1;

    ap_uint<289> op_eval_0 = 0; // NOP
    // eval0: NOP
    b[1] = op_eval_0;

    //--------------eval1--------------
    //stream shuffle 3
    ap_int<64> shuffle3_cfg;
    shuffle3_cfg(7, 0) = 0; // store_sk
    shuffle3_cfg(15, 8) = 1; // sales_price
    shuffle3_cfg(23, 16) = 2; // profit
    shuffle3_cfg(31, 24) = 3; // return_amt
    shuffle3_cfg(39, 32) = 4; // net_loss
    shuffle3_cfg(47, 40) = -1;
    shuffle3_cfg(55, 48) = -1;
    shuffle3_cfg(63, 56) = -1;

    ap_uint<289> op_eval_1 = 0; // NOP
    // eval1: NOP
    b[2] = op_eval_1;

    //--------------aggregate--------------
    //stream shuffle 4
    ap_int<64> shuffle4_cfg;
    shuffle4_cfg(7, 0) = 0; // store_sk
    shuffle4_cfg(15, 8) = 1; // sales_price
    shuffle4_cfg(23, 16) = 2; // profit
    shuffle4_cfg(31, 24) = 3; // return_amt
    shuffle4_cfg(39, 32) = 4; // net_loss
    shuffle4_cfg(47, 40) = -1;
    shuffle4_cfg(55, 48) = -1;
    shuffle4_cfg(63, 56) = -1;

    t.set_bit(1, 0); // aggr flag

    //--------------writeout--------------
    // output table col
    t.range(191, 184) = {1*1 + 2*1 + 4*1 + 8*1 + 16*1 + 32*0 + 64*0 + 128*0};
    b[0] = t;

    //stream shuffle assignment
    b[0].range(255, 192) = shuffle1a_cfg;
    b[0].range(319, 256) = shuffle1b_cfg;
    b[0].range(383, 320) = shuffle2_cfg;
    b[0].range(447, 384) = shuffle3_cfg;
    b[0].range(511, 448) = shuffle4_cfg;
}

