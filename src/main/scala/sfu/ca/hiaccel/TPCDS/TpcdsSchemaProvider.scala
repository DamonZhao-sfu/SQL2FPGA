package sfu.ca.hiaccel.TPCDS

import org.apache.spark.sql.{DataFrame, SparkSession}
import sfu.ca.hiaccel.SchemaProvider

import java.math.BigDecimal
// TPC-DS table schemasd

case class Customer_tpcds(
                           c_customer_sk           : Int, //bigintd_year126
                           c_customer_id           : String,
                           c_current_cdemo_sk      : Int, //bigint
                           c_current_hdemo_sk      : Int, //bigint
                           c_current_addr_sk       : Int, //bigint
                           c_first_shipto_date_sk  : Int, //bigint
                           c_first_sales_date_sk   : Int, //bigint
                           c_salutation            : String,
                           c_first_name            : String,
                           c_last_name             : String,
                           c_preferred_cust_flag   : String,
                           c_birth_day             : Int,
                           c_birth_month           : Int,
                           c_birth_year            : Int,
                           c_birth_country         : String,
                           c_login                 : String,
                           c_email_address         : String,
                           c_last_review_date      : String
                         )

case class Customer_address(
                                   ca_address_sk           : Int, //bigint
                                   ca_address_id           : String,
                                   ca_street_number        : String,
                                   ca_street_name          : String,
                                   ca_street_type          : String,
                                   ca_suite_number         : String,
                                   ca_city                 : String,
                                   ca_county               : String,
                                   ca_state                : String,
                                   ca_zip                  : String,
                                   ca_country              : String,
                                   ca_gmt_offset           : Int, //decimal(5,2)
                                   ca_location_type        : String
                                 )

case class Customer_demographics(
                                        cd_demo_sk              : Int, //bigint
                                        cd_gender               : String,
                                        cd_marital_status       : String,
                                        cd_education_status     : String,
                                        cd_purchase_estimate    : Int,
                                        cd_credit_rating        : String,
                                        cd_dep_count            : Int,
                                        cd_dep_employed_count   : Int,
                                        cd_dep_college_count    : Int
                                      )

case class Date_dim(
                           d_date_sk           : Int, //bigint
                           d_date_id           : String,
                           d_date              : Int, //date
                           d_month_seq         : Int,
                           d_week_seq          : Int,
                           d_quarter_seq       : Int,
                           d_year              : Int,
                           d_dow               : Int,
                           d_moy               : Int,
                           d_dom               : Int,
                           d_qoy               : Int,
                           d_fy_year           : Int,
                           d_fy_quarter_seq    : Int,
                           d_fy_week_seq       : Int,
                           d_day_name          : String,
                           d_quarter_name      : String,
                           d_holiday           : String,
                           d_weekend           : String,
                           d_following_holiday : String,
                           d_first_dom         : Int,
                           d_last_dom          : Int,
                           d_same_day_ly       : Int,
                           d_same_day_lq       : Int,
                           d_current_day       : String,
                           d_current_week      : String,
                           d_current_month     : String,
                           d_current_quarter   : String,
                           d_current_year      : String
                         )

case class Household_demographics(
                                         hd_demo_sk          : Int, //bigint
                                         hd_income_band_sk   : Int, //bigint
                                         hd_buy_potential    : String,
                                         hd_dep_count        : Int,
                                         hd_vehicle_count    : Int
                                       )

case class tpcds_income_band(
                              ib_income_band_sk   : Int, //bigint
                              ib_lower_bound      : Int,
                              ib_upper_bound      : Int
                            )

case class Item(
                       i_item_sk       : Int, //bigint,
                       i_item_id       : String,
                       i_rec_start_date: Int, //date
                       i_rec_end_date  : Int,  //date
                       i_item_desc     : String,
                       i_current_price : Int, //decimal(7,2)
                       i_wholesale_cost: Int, //decimal(7,2)
                       i_brand_id      : Int,
                       i_brand         : String,
                       i_class_id      : Int,
                       i_class         : String,
                       i_category_id   : Int,
                       i_category      : String,
                       i_manufact_id   : Int,
                       i_manufact      : String,
                       i_size          : String,
                       i_formulation   : String,
                       i_color         : String,
                       i_units         : String,
                       i_container     : String,
                       i_manager_id    : Int,
                       i_product_name  : String
                     )

case class Promotion(
                            p_promo_sk              : Int, //bigint
                            p_promo_id              : String,
                            p_start_date_sk         : Int, //bigint
                            p_end_date_sk           : Int, //bigint
                            p_item_sk               : Int, //bigint
                            p_cost                  : Int, //decimal(15,2)
                            p_response_target       : Int,
                            p_promo_name            : String,
                            p_channel_dmail         : String,
                            p_channel_email         : String,
                            p_channel_catalog       : String,
                            p_channel_tv            : String,
                            p_channel_radio         : String,
                            p_channel_press         : String,
                            p_channel_event         : String,
                            p_channel_demo          : String,
                            p_channel_details       : String,
                            p_purpose               : String,
                            p_discount_active       : String
                          )

case class tpcds_reason(
                         r_reason_sk     : Int, //bigint
                         r_reason_id     : String,
                         r_reason_desc   : String
                       )

case class tpcds_ship_mode(
                            sm_ship_mode_sk : Int, //bigint
                            sm_ship_mode_id : String,
                            sm_type         : String,
                            sm_code         : String,
                            sm_carrier      : String,
                            sm_contract     : String
                          )

case class Store(
                        s_store_sk          : Int, //bigint
                        s_store_id          : String,
                        s_rec_start_date    : Int, //date
                        s_rec_end_date      : Int, //date
                        s_closed_date_sk    : Int, //bigint,
                        s_store_name        : String,
                        s_number_employees  : Int ,
                        s_floor_space       : Int ,
                        s_hours             : String ,
                        s_manager           : String ,
                        s_market_id         : Int ,
                        s_geography_class   : String ,
                        s_market_desc       : String ,
                        s_market_manager    : String ,
                        s_division_id       : Int ,
                        s_division_name     : String ,
                        s_company_id        : Int ,
                        s_company_name      : String,
                        s_street_number     : String,
                        s_street_name       : String,
                        s_street_type       : String,
                        s_suite_number      : String,
                        s_city              : String,
                        s_county            : String,
                        s_state             : String,
                        s_zip               : String,
                        s_country           : String,
                        s_gmt_offset        : Int, //decimal(5,2)
                        s_tax_precentage    : Int  //decimal(5,2)
                      )

case class Time_dim(
                           t_time_sk   : Int, //bigint
                           t_time_id   : String,
                           t_time      : Int,
                           t_hour      : Int,
                           t_minute    : Int,
                           t_second    : Int,
                           t_am_pm     : String,
                           t_shift     : String,
                           t_sub_shift : String,
                           t_meal_time : String
                         )

case class tpcds_warehouse(
                            w_warehouse_sk      : Int, //bigint
                            w_warehouse_id      : String ,
                            w_warehouse_name    : String ,
                            w_warehouse_sq_ft   : Int ,
                            w_street_number     : String ,
                            w_street_name       : String ,
                            w_street_type       : String ,
                            w_suite_number      : String ,
                            w_city              : String ,
                            w_county            : String ,
                            w_state             : String ,
                            w_zip               : String ,
                            w_country           : String ,
                            w_gmt_offset        : Int    //decimal(5,2)
                          )

  case class tpcds_web_site(
                             web_site_sk         : Int , //bigint
                             web_site_id         : String ,
                             web_rec_start_date  : Int , //date
                             web_rec_end_date    : Int , //date
                             web_name            : String ,
                             web_open_date_sk    : Int , //bigint
                             web_close_date_sk   : Int , //bigint
                             web_class           : String ,
                             web_manager         : String ,
                             web_mkt_id          : Int ,
                             web_mkt_class       : String ,
                             web_mkt_desc        : String ,
                             web_market_manager  : String ,
                             web_company_id      : Int ,
                             web_company_name    : String ,
                             web_street_number   : String ,
                             web_street_name     : String ,
                             web_street_type     : String ,
                             web_suite_number    : String ,
                             web_city            : String ,
                             web_county          : String ,
                             web_state           : String ,
                             web_zip             : String ,
                             web_country         : String ,
                             web_gmt_offset      : Int, //decimal(5,2) ,
                             web_tax_percentage  : Int  //decimal(5,2)
                           )

  case class tpcds_web_page(
                             wp_web_page_sk      : Int, //bigint
                             wp_web_page_id      : String ,
                             wp_rec_start_date   : Int , //date
                             wp_rec_end_date     : Int , //date
                             wp_creation_date_sk : Int, //bigint
                             wp_access_date_sk   : Int, //bigint
                             wp_autogen_flag     : String ,
                             wp_customer_sk      : Int, //bigint
                             wp_url              : String ,
                             wp_type             : String ,
                             wp_char_count       : Int ,
                             wp_link_count       : Int ,
                             wp_image_count      : Int ,
                             wp_max_ad_count     : Int
                           )

  case class tpcds_inventory(
                              inv_date_sk             : Int, //bigint
                              inv_item_sk             : Int, //bigint
                              inv_warehouse_sk        : Int, //bigint
                              inv_quantity_on_hand    : Int
                            )

  case class Store_returns(
                                  sr_returned_date_sk     : Int , //bigint
                                  sr_return_time_sk       : Int , //bigint
                                  sr_item_sk              : Int , //bigint
                                  sr_customer_sk          : Int , //bigint
                                  sr_cdemo_sk             : Int , //bigint
                                  sr_hdemo_sk             : Int , //bigint
                                  sr_addr_sk              : Int , //bigint
                                  sr_store_sk             : Int , //bigint
                                  sr_reason_sk            : Int , //bigint
                                  sr_ticket_number        : Int , //bigint
                                  sr_return_quantity      : Int ,
                                  sr_return_amt           : Int , //decimal(7,2)
                                  sr_return_tax           : Int , //decimal(7,2)
                                  sr_return_amt_inc_tax   : Int , //decimal(7,2)
                                  sr_fee                  : Int , //decimal(7,2)
                                  sr_return_ship_cost     : Int , //decimal(7,2)
                                  sr_refunded_cash        : Int , //decimal(7,2)
                                  sr_reversed_charge      : Int , //decimal(7,2)
                                  sr_store_credit         : Int , //decimal(7,2)
                                  sr_net_loss             : Int    //decimal(7,2)
                                )

  case class tpcds_web_sales(
                              ws_sold_date_sk             : Int, //bigint
                              ws_sold_time_sk             : Int, //bigint
                              ws_ship_date_sk             : Int, //bigint
                              ws_item_sk                  : Int, //bigint
                              ws_bill_customer_sk         : Int, //bigint
                              ws_bill_cdemo_sk            : Int, //bigint
                              ws_bill_hdemo_sk            : Int, //bigint
                              ws_bill_addr_sk             : Int, //bigint
                              ws_ship_customer_sk         : Int, //bigint
                              ws_ship_cdemo_sk            : Int, //bigint
                              ws_ship_hdemo_sk            : Int, //bigint
                              ws_ship_addr_sk             : Int, //bigint
                              ws_web_page_sk              : Int, //bigint
                              ws_web_site_sk              : Int, //bigint
                              ws_ship_mode_sk             : Int, //bigint
                              ws_warehouse_sk             : Int, //bigint
                              ws_promo_sk                 : Int, //bigint
                              ws_order_number             : Int, //bigint
                              ws_quantity                 : Int ,
                              ws_wholesale_cost           : Int , //decimal(7,2)
                              ws_list_price               : Int , //decimal(7,2)
                              ws_sales_price              : Int , //decimal(7,2)
                              ws_ext_discount_amt         : Int , //decimal(7,2)
                              ws_ext_sales_price          : Int , //decimal(7,2)
                              ws_ext_wholesale_cost       : Int , //decimal(7,2)
                              ws_ext_list_price           : Int , //decimal(7,2)
                              ws_ext_tax                  : Int , //decimal(7,2)
                              ws_coupon_amt               : Int , //decimal(7,2)
                              ws_ext_ship_cost            : Int , //decimal(7,2)
                              ws_net_paid                 : Int , //decimal(7,2)
                              ws_net_paid_inc_tax         : Int , //decimal(7,2)
                              ws_net_paid_inc_ship        : Int , //decimal(7,2)
                              ws_net_paid_inc_ship_tax    : Int , //decimal(7,2)
                              ws_net_profit               : Int   //decimal(7,2)
                            )

  case class tpcds_web_returns(
                                wr_returned_date_sk     : Int , //bigint
                                wr_returned_time_sk     : Int , //bigint
                                wr_item_sk              : Int , //bigint
                                wr_refunded_customer_sk : Int , //bigint
                                wr_refunded_cdemo_sk    : Int , //bigint
                                wr_refunded_hdemo_sk    : Int , //bigint
                                wr_refunded_addr_sk     : Int , //bigint
                                wr_returning_customer_sk: Int , //bigint
                                wr_returning_cdemo_sk   : Int , //bigint
                                wr_returning_hdemo_sk   : Int , //bigint
                                wr_returning_addr_sk    : Int , //bigint
                                wr_web_page_sk          : Int , //bigint
                                wr_reason_sk            : Int , //bigint
                                wr_order_number         : Int , //bigint
                                wr_return_quantity      : Int ,
                                wr_return_amt           : Int , //decimal(7,2)
                                wr_return_tax           : Int , //decimal(7,2)
                                wr_return_amt_inc_tax   : Int , //decimal(7,2)
                                wr_fee                  : Int , //decimal(7,2)
                                wr_return_ship_cost     : Int , //decimal(7,2)
                                wr_refunded_cash        : Int , //decimal(7,2)
                                wr_reversed_charge      : Int , //decimal(7,2)
                                wr_account_credit       : Int , //decimal(7,2)
                                wr_net_loss             : Int   //decimal(7,2)
                              )

  case class tpcds_call_center(
                                cc_call_center_sk   : Int , //bigint
                                cc_call_center_id   : String,
                                cc_rec_start_date   : Int, // int
                                cc_rec_end_date     : Int, // int
                                cc_closed_date_sk   : Int ,
                                cc_open_date_sk     : Int ,
                                cc_name             : String,
                                cc_class            : String,
                                cc_employees        : Int ,
                                cc_sq_ft            : Int ,
                                cc_hours            : String,
                                cc_manager          : String,
                                cc_mkt_id           : Int ,
                                cc_mkt_class        : String,
                                cc_mkt_desc         : String,
                                cc_market_manager   : String,
                                cc_division         : Int ,
                                cc_division_name    : String,
                                cc_company          : Int ,
                                cc_company_name     : String,
                                cc_street_number    : String,
                                cc_street_name      : String,
                                cc_street_type      : String,
                                cc_suite_number     : String,
                                cc_city             : String,
                                cc_county           : String,
                                cc_state            : String,
                                cc_zip              : String,
                                cc_country          : String,
                                cc_gmt_offset       : Int , //decimal(5,2)
                                cc_tax_percentage   : Int   //decimal(5,2)
                              )

  case class tpcds_catalog_page(
                                 cp_catalog_page_sk      : Int , //bigint
                                 cp_catalog_page_id      : String,
                                 cp_start_date_sk        : Int ,
                                 cp_end_date_sk          : Int ,
                                 cp_department           : String,
                                 cp_catalog_number       : Int ,
                                 cp_catalog_page_number  : Int ,
                                 cp_description          : String,
                                 cp_type                 : String
                               )

  case class tpcds_catalog_returns(
                                    cr_returned_date_sk         : Int, //bigint ,
                                    cr_returned_time_sk         : Int, //bigint ,
                                    cr_item_sk                  : Int, //bigint ,
                                    cr_refunded_customer_sk     : Int, //bigint ,
                                    cr_refunded_cdemo_sk        : Int, //bigint ,
                                    cr_refunded_hdemo_sk        : Int, //bigint ,
                                    cr_refunded_addr_sk         : Int, //bigint ,
                                    cr_returning_customer_sk    : Int, //bigint,
                                    cr_returning_cdemo_sk       : Int, //bigint,
                                    cr_returning_hdemo_sk       : Int, //bigint,
                                    cr_returning_addr_sk        : Int, //bigint ,
                                    cr_call_center_sk           : Int, //bigint ,
                                    cr_catalog_page_sk          : Int, //bigint ,
                                    cr_ship_mode_sk             : Int, //bigint ,
                                    cr_warehouse_sk             : Int, //bigint ,
                                    cr_reason_sk                : Int, //bigint ,
                                    cr_order_number             : Int, //bigint ,
                                    cr_return_quantity          : Int,
                                    cr_return_amount            : Int, //decimal(7,2),
                                    cr_return_tax               : Int, //decimal(7,2),
                                    cr_return_amt_inc_tax       : Int, //decimal(7,2),
                                    cr_fee                      : Int, //decimal(7,2),
                                    cr_return_ship_cost         : Int, //decimal(7,2),
                                    cr_refunded_cash            : Int, //decimal(7,2),
                                    cr_reversed_charge          : Int, //decimal(7,2),
                                    cr_store_credit             : Int, //decimal(7,2),
                                    cr_net_loss                 : Int  //decimal(7,2)
                                  )

  case class Catalog_sales(
                                  cs_sold_date_sk             : Int, //bigint ,
                                  cs_sold_time_sk             : Int, //bigint ,
                                  cs_ship_date_sk             : Int, //bigint ,
                                  cs_bill_customer_sk         : Int, //bigint ,
                                  cs_bill_cdemo_sk            : Int, //bigint ,
                                  cs_bill_hdemo_sk            : Int, //bigint ,
                                  cs_bill_addr_sk             : Int, //bigint ,
                                  cs_ship_customer_sk         : Int, //bigint ,
                                  cs_ship_cdemo_sk            : Int, //bigint ,
                                  cs_ship_hdemo_sk            : Int, //bigint ,
                                  cs_ship_addr_sk             : Int, //bigint ,
                                  cs_call_center_sk           : Int, //bigint ,
                                  cs_catalog_page_sk          : Int, //bigint ,
                                  cs_ship_mode_sk             : Int, //bigint ,
                                  cs_warehouse_sk             : Int, //bigint ,
                                  cs_item_sk                  : Int, //bigint ,
                                  cs_promo_sk                 : Int, //bigint ,
                                  cs_order_number             : Int, //bigint ,
                                  cs_quantity                 : Int,
                                  cs_wholesale_cost           : Int, //decimal(7,2),
                                  cs_list_price               : Int, //decimal(7,2),
                                  cs_sales_price              : Int, //decimal(7,2),
                                  cs_ext_discount_amt         : Int, //decimal(7,2),
                                  cs_ext_sales_price          : Int, //decimal(7,2),
                                  cs_ext_wholesale_cost       : Int, //decimal(7,2),
                                  cs_ext_list_price           : Int, //decimal(7,2),
                                  cs_ext_tax                  : Int, //decimal(7,2),
                                  cs_coupon_amt               : Int, //decimal(7,2),
                                  cs_ext_ship_cost            : Int, //decimal(7,2),
                                  cs_net_paid                 : Int, //decimal(7,2),
                                  cs_net_paid_inc_tax         : Int, //decimal(7,2),
                                  cs_net_paid_inc_ship        : Int, //decimal(7,2),
                                  cs_net_paid_inc_ship_tax    : Int, //decimal(7,2),
                                  cs_net_profit               : Int  //decimal(7,2)
                                )

  case class Store_sales(
                                ss_sold_date_sk           : Int, //bigint,
                                ss_sold_time_sk           : Int, //bigint,
                                ss_item_sk                : Int, //bigint,
                                ss_customer_sk            : Int, //bigint,
                                ss_cdemo_sk               : Int, //bigint,
                                ss_hdemo_sk               : Int, //bigint,
                                ss_addr_sk                : Int, //bigint,
                                ss_store_sk               : Int, //bigint,
                                ss_promo_sk               : Int, //bigint,
                                ss_ticket_number          : Int, //bigint,
                                ss_quantity               : Int,
                                ss_wholesale_cost         : Int, //decimal(7,2),
                                ss_list_price             : Int, //decimal(7,2),
                                ss_sales_price            : Int, //decimal(7,2),
                                ss_ext_discount_amt       : Int, //decimal(7,2),
                                ss_ext_sales_price        : Int, //decimal(7,2),
                                ss_ext_wholesale_cost     : Int, //decimal(7,2),
                                ss_ext_list_price         : Int, //decimal(7,2),
                                ss_ext_tax                : Int, //decimal(7,2),
                                ss_coupon_amt             : Int, //decimal(7,2),
                                ss_net_paid               : Int, //decimal(7,2),
                                ss_net_paid_inc_tax       : Int, //decimal(7,2),
                                ss_net_profit             : Int  //decimal(7,2)
                              )

class TpcdsSchemaProvider(sc: SparkSession, inputDir: String, format: String) extends SchemaProvider {
  import sc.implicits._

  dfMap = Map(
  "customer" -> sc.read.format(format)
  .load("file://" + inputDir + "/customer").toDF(),

 "customer_address" -> sc.read.format(format)
  .load("file://" + inputDir + "/customer_address").toDF(),

 "customer_demographics" -> sc.read.format(format)
  .load("file://" + inputDir + "/customer_demographics").toDF(),

  "date_dim" -> sc.read.format(format)
  .load("file://" + inputDir + "/date_dim").toDF(),

  "household_demographics" -> sc.read.format(format)
  .load("file://" + inputDir + "/household_demographics").toDF(),

  "income_band" -> sc.read.format(format)
  .load("file://" + inputDir + "/income_band").toDF(),

  "item" -> sc.read.format(format)
  .load("file://" + inputDir + "/item").toDF(),

  "promotion" -> sc.read.format(format)
  .load("file://" + inputDir + "/promotion").toDF(),

  "reason" -> sc.read.format(format)
  .load("file://" + inputDir + "/reason").toDF(),

  "ship_mode" -> sc.read.format(format)
  .load("file://" + inputDir + "/ship_mode").toDF(),

  "store" -> sc.read.format(format)
  .load("file://" + inputDir + "/store").toDF(),

  "time_dim" -> sc.read.format(format)
  .load("file://" + inputDir + "/time_dim").toDF(),

  "warehouse" -> sc.read.format(format)
  .load("file://" + inputDir + "/warehouse").toDF(),

  "web_site" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_site").toDF(),

  "web_page" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_page").toDF(),

  "inventory" -> sc.read.format(format)
  .load("file://" + inputDir + "/inventory").toDF(),

  "store_returns" -> sc.read.format(format)
  .load("file://" + inputDir + "/store_returns").toDF(),

  "web_sales" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_sales").toDF(),

  "web_returns" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_returns").toDF(),

  "call_center" -> sc.read.format(format)
  .load("file://" + inputDir + "/call_center").toDF(),

  "catalog_page" -> sc.read.format(format)
  .load("file://" + inputDir + "/catalog_page").toDF(),

  "catalog_returns" -> sc.read.format(format)
  .load("file://" + inputDir + "/catalog_returns").toDF(),

  "catalog_sales" -> sc.read.format(format)
  .load("file://" + inputDir + "/catalog_sales").toDF(),

  "store_sales" -> sc.read.format(format)
  .load("file://" + inputDir + "/store_sales").toDF())

 /* .map(row => {
    Customer_tpcds(
  c_customer_sk = row.getAs[Long]("c_customer_sk").toInt,
  c_customer_id = row.getAs[String]("c_customer_id"),
  c_current_cdemo_sk = row.getAs[Long]("c_current_cdemo_sk").toInt,
  c_current_hdemo_sk = row.getAs[Long]("c_current_hdemo_sk").toInt,
  c_current_addr_sk = row.getAs[Long]("c_current_addr_sk").toInt,
  c_first_shipto_date_sk = row.getAs[Long]("c_first_shipto_date_sk").toInt,
  c_first_sales_date_sk = row.getAs[Long]("c_first_sales_date_sk").toInt,
  c_salutation = row.getAs[String]("c_salutation"),
  c_first_name = row.getAs[String]("c_first_name"),
  c_last_name = row.getAs[String]("c_last_name"),
  c_preferred_cust_flag = row.getAs[String]("c_preferred_cust_flag"),
  c_birth_day = row.getAs[Int]("c_birth_day"),
  c_birth_month = row.getAs[Int]("c_birth_month"),
  c_birth_year = row.getAs[Int]("c_birth_year"),
  c_birth_country = row.getAs[String]("c_birth_country"),
  c_login = row.getAs[String]("c_login"),
  c_email_address = row.getAs[String]("c_email_address"),
  c_last_review_date = row.getAs[String]("c_last_review_date")
  )
  })*/

/*
   "customer_address" -> sc.read.format(format)
  .load("file://" + inputDir + "/customer_address")
  .map(row => {
    Customer_address(
  ca_address_sk = row.getAs[Long]("ca_address_sk").toInt,
  ca_address_id = row.getAs[String]("ca_address_id"),
  ca_street_number = row.getAs[String]("ca_street_number"),
  ca_street_name = row.getAs[String]("ca_street_name"),
  ca_street_type = row.getAs[String]("ca_street_type"),
  ca_suite_number = row.getAs[String]("ca_suite_number"),
  ca_city = row.getAs[String]("ca_city"),
  ca_county = row.getAs[String]("ca_county"),
  ca_state = row.getAs[String]("ca_state"),
  ca_zip = row.getAs[String]("ca_zip"),
  ca_country = row.getAs[String]("ca_country"),
  // Multiply by 100 to convert decimal(5,2) to an integer representation
  ca_gmt_offset = row.getAs[java.math.BigDecimal]("ca_gmt_offset").multiply(new java.math.BigDecimal("100")).intValueExact(),
  ca_location_type = row.getAs[String]("ca_location_type")
  )}).toDF(),

   "customer_demographics" -> sc.read.format(format)
  .load("file://" + inputDir + "/customer_demographics")
  .map(row => {
    Customer_demographics(
      cd_demo_sk = row.getAs[Long]("cd_demo_sk").toInt, 
  cd_gender = row.getAs[String]("cd_gender"),
  cd_marital_status = row.getAs[String]("cd_marital_status"),
  cd_education_status = row.getAs[String]("cd_education_status"),
  cd_purchase_estimate = row.getAs[Int]("cd_purchase_estimate"),
  cd_credit_rating = row.getAs[String]("cd_credit_rating"),
  cd_dep_count = row.getAs[Int]("cd_dep_count"),
  cd_dep_employed_count = row.getAs[Int]("cd_dep_employed_count"),
  cd_dep_college_count = row.getAs[Int]("cd_dep_college_count")
    )
  }).toDF(),

*/
 /* .map(row => {
    Date_dim(
  d_date_sk = row.getAs[Long]("d_date_sk").toInt,
  d_date_id = row.getAs[String]("d_date_id"),
  d_date = row.getAs[java.sql.Date]("d_date").toString.replace("-", "").toInt,
  d_month_seq = row.getAs[Int]("d_month_seq"),
  d_week_seq = row.getAs[Int]("d_week_seq"),
  d_quarter_seq = row.getAs[Int]("d_quarter_seq"),
  d_year = row.getAs[Int]("d_year"),
  d_dow = row.getAs[Int]("d_dow"),
  d_moy = row.getAs[Int]("d_moy"),
  d_dom = row.getAs[Int]("d_dom"),
  d_qoy = row.getAs[Int]("d_qoy"),
  d_fy_year = row.getAs[Int]("d_fy_year"),
  d_fy_quarter_seq = row.getAs[Int]("d_fy_quarter_seq"),
  d_fy_week_seq = row.getAs[Int]("d_fy_week_seq"),
  d_day_name = row.getAs[String]("d_day_name"),
  d_quarter_name = row.getAs[String]("d_quarter_name"),
  d_holiday = row.getAs[String]("d_holiday"),
  d_weekend = row.getAs[String]("d_weekend"),
  d_following_holiday = row.getAs[String]("d_following_holiday"),
  d_first_dom = row.getAs[Int]("d_first_dom"),
  d_last_dom = row.getAs[Int]("d_last_dom"),
  d_same_day_ly = row.getAs[Int]("d_same_day_ly"),
  d_same_day_lq = row.getAs[Int]("d_same_day_lq"),
  d_current_day = row.getAs[String]("d_current_day"),
  d_current_week = row.getAs[String]("d_current_week"),
  d_current_month = row.getAs[String]("d_current_month"),
  d_current_quarter = row.getAs[String]("d_current_quarter"),
  d_current_year = row.getAs[String]("d_current_year")
    )
  })*/

/*
  "household_demographics" -> sc.read.format(format)
  .load("file://" + inputDir + "/household_demographics")
  .map(row => {
    Household_demographics(
  hd_demo_sk = row.getAs[Long]("hd_demo_sk").toInt,        
  hd_income_band_sk = row.getAs[Long]("hd_income_band_sk").toInt, 
  hd_buy_potential = row.getAs[String]("hd_buy_potential"),
  hd_dep_count = row.getAs[Int]("hd_dep_count"),
  hd_vehicle_count = row.getAs[Int]("hd_vehicle_count")
    )
  }).toDF(),

 "incomes_band" -> sc.read.format(format)
  .load("file://" + inputDir + "/income_band")
  .map(row => {
    tpcds_income_band(
ib_income_band_sk = row.getAs[Long]("ib_income_band_sk").toInt, // Convert from Long to Int
  ib_lower_bound = row.getAs[Int]("ib_lower_bound"),
  ib_upper_bound = row.getAs[Int]("ib_upper_bound")
    )
  }).toDF(),

  "item" ->  sc.read.format(format)
  .load("file://" + inputDir + "/item")
  .map(row => Item(
    i_item_sk = row.getAs[Long]("i_item_sk").toInt,
    i_item_id = row.getAs[String]("i_item_id"),
    i_rec_start_date = row.getAs[java.sql.Date]("i_rec_start_date").toString.replace("-", "").toInt,
    i_rec_end_date = row.getAs[java.sql.Date]("i_rec_end_date").toString.replace("-", "").toInt,
    i_item_desc = row.getAs[String]("i_item_desc"),
    i_current_price = row.getAs[java.math.BigDecimal]("i_current_price").multiply(new java.math.BigDecimal("100")).intValueExact(),
    i_wholesale_cost = row.getAs[java.math.BigDecimal]("i_wholesale_cost").multiply(new java.math.BigDecimal("100")).intValueExact(),
    i_brand_id = row.getAs[Int]("i_brand_id"),
    i_brand = row.getAs[String]("i_brand"),
    i_class_id = row.getAs[Int]("i_class_id"),
    i_class = row.getAs[String]("i_class"),
    i_category_id = row.getAs[Int]("i_category_id"),
    i_category = row.getAs[String]("i_category"),
    i_manufact_id = row.getAs[Int]("i_manufact_id"),
    i_manufact = row.getAs[String]("i_manufact"),
    i_size = row.getAs[String]("i_size"),
    i_formulation = row.getAs[String]("i_formulation"),
    i_color = row.getAs[String]("i_color"),
    i_units = row.getAs[String]("i_units"),
    i_container = row.getAs[String]("i_container"),
    i_manager_id = row.getAs[Int]("i_manager_id"),
    i_product_name = row.getAs[String]("i_product_name")
  )).toDF(),

  "promotion" -> sc.read.format(format)
  .load("file://" + inputDir + "/promotion")
  .map(row => Promotion(
    p_promo_sk = row.getAs[Long]("p_promo_sk").toInt,
    p_promo_id = row.getAs[String]("p_promo_id"),
    p_start_date_sk = row.getAs[Long]("p_start_date_sk").toInt,
    p_end_date_sk = row.getAs[Long]("p_end_date_sk").toInt,
    p_item_sk = row.getAs[Long]("p_item_sk").toInt,
    p_cost = row.getAs[java.math.BigDecimal]("p_cost").multiply(new java.math.BigDecimal("100")).intValueExact(),
    p_response_target = row.getAs[Int]("p_response_target"),
    p_promo_name = row.getAs[String]("p_promo_name"),
    p_channel_dmail = row.getAs[String]("p_channel_dmail"),
    p_channel_email = row.getAs[String]("p_channel_email"),
    p_channel_catalog = row.getAs[String]("p_channel_catalog"),
    p_channel_tv = row.getAs[String]("p_channel_tv"),
    p_channel_radio = row.getAs[String]("p_channel_radio"),
    p_channel_press = row.getAs[String]("p_channel_press"),
    p_channel_event = row.getAs[String]("p_channel_event"),
    p_channel_demo = row.getAs[String]("p_channel_demo"),
    p_channel_details = row.getAs[String]("p_channel_details"),
    p_purpose = row.getAs[String]("p_purpose"),
    p_discount_active = row.getAs[String]("p_discount_active")
  )).toDF(),

    "reason" -> sc.read.format(format)
  .load("file://" + inputDir + "/reason")
  .map(row => tpcds_reason(
    r_reason_sk = row.getAs[Long]("r_reason_sk").toInt,  // Convert from Long to Int
    r_reason_id = row.getAs[String]("r_reason_id"),
    r_reason_desc = row.getAs[String]("r_reason_desc")
  )).toDF(),

   "ship_mode" -> sc.read.format(format)
  .load("file://" + inputDir +  "/ship_mode")
  .map(row => tpcds_ship_mode(
    sm_ship_mode_sk = row.getAs[Long]("sm_ship_mode_sk").toInt,  // Convert from Long to Int
    sm_ship_mode_id = row.getAs[String]("sm_ship_mode_id"),
    sm_type = row.getAs[String]("sm_type"),
    sm_code = row.getAs[String]("sm_code"),
    sm_carrier = row.getAs[String]("sm_carrier"),
    sm_contract = row.getAs[String]("sm_contract")
  )).toDF(),
*/
 /* .map(row => Store(
    s_store_sk = row.getAs[Long]("s_store_sk").toInt,  // Convert from Long to Int
    s_store_id = row.getAs[String]("s_store_id"),
    s_rec_start_date = row.getAs[java.sql.Date]("s_rec_start_date").toString.replace("-", "").toInt,  // Convert date to Int
    s_rec_end_date = row.getAs[java.sql.Date]("s_rec_end_date").toString.replace("-", "").toInt,  // Convert date to Int
    s_closed_date_sk = row.getAs[Long]("s_closed_date_sk").toInt,  // Convert from Long to Int, if nullable handle nulls
    s_store_name = row.getAs[String]("s_store_name"),
    s_number_employees = row.getAs[Int]("s_number_employees"),
    s_floor_space = row.getAs[Int]("s_floor_space"),
    s_hours = row.getAs[String]("s_hours"),
    s_manager = row.getAs[String]("s_manager"),
    s_market_id = row.getAs[Int]("s_market_id"),
    s_geography_class = row.getAs[String]("s_geography_class"),
    s_market_desc = row.getAs[String]("s_market_desc"),
    s_market_manager = row.getAs[String]("s_market_manager"),
    s_division_id = row.getAs[Int]("s_division_id"),
    s_division_name = row.getAs[String]("s_division_name"),
    s_company_id = row.getAs[Int]("s_company_id"),
    s_company_name = row.getAs[String]("s_company_name"),
    s_street_number = row.getAs[String]("s_street_number"),
    s_street_name = row.getAs[String]("s_street_name"),
    s_street_type = row.getAs[String]("s_street_type"),
    s_suite_number = row.getAs[String]("s_suite_number"),
    s_city = row.getAs[String]("s_city"),
    s_county = row.getAs[String]("s_county"),
    s_state = row.getAs[String]("s_state"),
    s_zip = row.getAs[String]("s_zip"),
    s_country = row.getAs[String]("s_country"),
    s_gmt_offset = row.getAs[java.math.BigDecimal]("s_gmt_offset").multiply(new java.math.BigDecimal("100")).intValueExact(),  // Convert from decimal to Int
    s_tax_precentage = row.getAs[java.math.BigDecimal]("s_tax_precentage").multiply(new java.math.BigDecimal("100")).intValueExact()  // Convert from decimal to Int
  )).toDF(),*/
/*
   "time_dim" -> sc.read.format(format)
  .load("file://" + inputDir + "/time_dim")
  .map(row => Time_dim(
    t_time_sk = row.getAs[Long]("t_time_sk").toInt, // 将Long类型转换为Int类型
    t_time_id = row.getAs[String]("t_time_id"),
    t_time = row.getAs[Int]("t_time"),
    t_hour = row.getAs[Int]("t_hour"),
    t_minute = row.getAs[Int]("t_minute"),
    t_second = row.getAs[Int]("t_second"),
    t_am_pm = row.getAs[String]("t_am_pm"),
    t_shift = row.getAs[String]("t_shift"),
    t_sub_shift = row.getAs[String]("t_sub_shift"),
    t_meal_time = row.getAs[String]("t_meal_time")
  )).toDF(),


  "warehouse" -> sc.read.format(format)
  .load("file://" + inputDir + "/warehouse")
  .map(row => tpcds_warehouse(
    w_warehouse_sk = row.getAs[Long]("w_warehouse_sk").toInt, // 将bigint转换为Int
    w_warehouse_id = row.getAs[String]("w_warehouse_id"),
    w_warehouse_name = row.getAs[String]("w_warehouse_name"),
    w_warehouse_sq_ft = row.getAs[Int]("w_warehouse_sq_ft"),
    w_street_number = row.getAs[String]("w_street_number"),
    w_street_name = row.getAs[String]("w_street_name"),
    w_street_type = row.getAs[String]("w_street_type"),
    w_suite_number = row.getAs[String]("w_suite_number"),
    w_city = row.getAs[String]("w_city"),
    w_county = row.getAs[String]("w_county"),
    w_state = row.getAs[String]("w_state"),
    w_zip = row.getAs[String]("w_zip"),
    w_country = row.getAs[String]("w_country"),
    w_gmt_offset = row.getAs[java.math.BigDecimal]("w_gmt_offset").multiply(new java.math.BigDecimal("100")).intValueExact() // 将decimal(5,2)转换为Int
  )).toDF(),

  "web_site" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_site")
  .map(row => tpcds_web_site(
    web_site_sk = row.getAs[Long]("web_site_sk").toInt, // Convert bigint to Int
    web_site_id = row.getAs[String]("web_site_id"),
    web_rec_start_date = row.getAs[java.sql.Date]("web_rec_start_date").toString.replace("-", "").toInt, // Convert date to Int
    web_rec_end_date = row.getAs[java.sql.Date]("web_rec_end_date").toString.replace("-", "").toInt, // Convert date to Int
    web_name = row.getAs[String]("web_name"),
    web_open_date_sk = row.getAs[Long]("web_open_date_sk").toInt, // Convert bigint to Int
    web_close_date_sk = row.getAs[Long]("web_close_date_sk").toInt, // Convert bigint to Int
    web_class = row.getAs[String]("web_class"),
    web_manager = row.getAs[String]("web_manager"),
    web_mkt_id = row.getAs[Int]("web_mkt_id"),
    web_mkt_class = row.getAs[String]("web_mkt_class"),
    web_mkt_desc = row.getAs[String]("web_mkt_desc"),
    web_market_manager = row.getAs[String]("web_market_manager"),
    web_company_id = row.getAs[Int]("web_company_id"),
    web_company_name = row.getAs[String]("web_company_name"),
    web_street_number = row.getAs[String]("web_street_number"),
    web_street_name = row.getAs[String]("web_street_name"),
    web_street_type = row.getAs[String]("web_street_type"),
    web_suite_number = row.getAs[String]("web_suite_number"),
    web_city = row.getAs[String]("web_city"),
    web_county = row.getAs[String]("web_county"),
    web_state = row.getAs[String]("web_state"),
    web_zip = row.getAs[String]("web_zip"),
    web_country = row.getAs[String]("web_country"),
    web_gmt_offset = row.getAs[java.math.BigDecimal]("web_gmt_offset").multiply(new java.math.BigDecimal("100")).intValueExact(), // Convert decimal to Int
    web_tax_percentage = row.getAs[java.math.BigDecimal]("web_tax_percentage").multiply(new java.math.BigDecimal("100")).intValueExact() // Convert decimal to Int
  )).toDF(),

  "web_page" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_page")
  .map(row => tpcds_web_page(
    wp_web_page_sk = row.getAs[Long]("wp_web_page_sk").toInt, // Convert bigint to Int
    wp_web_page_id = row.getAs[String]("wp_web_page_id"),
    wp_rec_start_date = row.getAs[java.sql.Date]("wp_rec_start_date").toString.replace("-", "").toInt, // Convert date to Int
    wp_rec_end_date = row.getAs[java.sql.Date]("wp_rec_end_date").toString.replace("-", "").toInt, // Convert date to Int
    wp_creation_date_sk = row.getAs[Long]("wp_creation_date_sk").toInt, // Convert bigint to Int
    wp_access_date_sk = row.getAs[Long]("wp_access_date_sk").toInt, // Convert bigint to Int
    wp_autogen_flag = row.getAs[String]("wp_autogen_flag"),
    wp_customer_sk = row.getAs[Long]("wp_customer_sk").toInt, // Convert bigint to Int
    wp_url = row.getAs[String]("wp_url"),
    wp_type = row.getAs[String]("wp_type"),
    wp_char_count = row.getAs[Int]("wp_char_count"),
    wp_link_count = row.getAs[Int]("wp_link_count"),
    wp_image_count = row.getAs[Int]("wp_image_count"),
    wp_max_ad_count = row.getAs[Int]("wp_max_ad_count")
  )).toDF(),

  "inventory" -> sc.read.format(format)
  .load("file://" + inputDir + "/inventory")
  .map(row => tpcds_inventory(
    inv_date_sk = row.getAs[Long]("inv_date_sk").toInt, // Cast bigint to Int
    inv_item_sk = row.getAs[Long]("inv_item_sk").toInt, // Cast bigint to Int
    inv_warehouse_sk = row.getAs[Long]("inv_warehouse_sk").toInt, // Cast bigint to Int
    inv_quantity_on_hand = row.getAs[Int]("inv_quantity_on_hand")
  )).toDF(),
*/
 /* .map( row => Store_returns(
    sr_returned_date_sk     = row.getAs[Long]("sr_returned_date_sk").toInt,
    sr_return_time_sk       = row.getAs[Long]("sr_return_time_sk").toInt,
    sr_item_sk              = row.getAs[Long]("sr_item_sk").toInt,
    sr_customer_sk          = row.getAs[Long]("sr_customer_sk").toInt,
    sr_cdemo_sk             = row.getAs[Long]("sr_cdemo_sk").toInt,
    sr_hdemo_sk             = row.getAs[Long]("sr_hdemo_sk").toInt,
    sr_addr_sk              = row.getAs[Long]("sr_addr_sk").toInt,
    sr_store_sk             = row.getAs[Long]("sr_store_sk").toInt,
    sr_reason_sk            = row.getAs[Long]("sr_reason_sk").toInt,
    sr_ticket_number        = row.getAs[Long]("sr_ticket_number").toInt,
    sr_return_quantity      = row.getAs[Int]("sr_return_quantity"),
    sr_return_amt           = row.getAs[BigDecimal]("sr_return_amt").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_return_tax           = row.getAs[BigDecimal]("sr_return_tax").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_return_amt_inc_tax   = row.getAs[BigDecimal]("sr_return_amt_inc_tax").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_fee                  = row.getAs[BigDecimal]("sr_fee").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_return_ship_cost     = row.getAs[BigDecimal]("sr_return_ship_cost").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_refunded_cash        = row.getAs[BigDecimal]("sr_refunded_cash").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_reversed_charge      = row.getAs[BigDecimal]("sr_reversed_charge").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_store_credit         = row.getAs[BigDecimal]("sr_store_credit").multiply(new BigDecimal("100")).intValueExact(), // Potential loss of precision
    sr_net_loss             = row.getAs[BigDecimal]("sr_net_loss").multiply(new BigDecimal("100")).intValueExact() // Potential loss of precision
  )).toDF())*/
/*
  "web_sales" -> sc.read.format(format)
  .load("file://" + inputDir + "/web_sales")
  .map(row => tpcds_web_sales(
    ws_sold_date_sk             = row.getAs[Long]("ws_sold_date_sk").toInt,
    ws_sold_time_sk             = row.getAs[Long]("ws_sold_time_sk").toInt,
    ws_ship_date_sk             = row.getAs[Long]("ws_ship_date_sk").toInt,
    ws_item_sk                  = row.getAs[Long]("ws_item_sk").toInt,
    ws_bill_customer_sk         = row.getAs[Long]("ws_bill_customer_sk").toInt,
    ws_bill_cdemo_sk            = row.getAs[Long]("ws_bill_cdemo_sk").toInt,
    ws_bill_hdemo_sk            = row.getAs[Long]("ws_bill_hdemo_sk").toInt,
    ws_bill_addr_sk             = row.getAs[Long]("ws_bill_addr_sk").toInt,
    ws_ship_customer_sk         = row.getAs[Long]("ws_ship_customer_sk").toInt,
    ws_ship_cdemo_sk            = row.getAs[Long]("ws_ship_cdemo_sk").toInt,
    ws_ship_hdemo_sk            = row.getAs[Long]("ws_ship_hdemo_sk").toInt,
    ws_ship_addr_sk             = row.getAs[Long]("ws_ship_addr_sk").toInt,
    ws_web_page_sk              = row.getAs[Long]("ws_web_page_sk").toInt,
    ws_web_site_sk              = row.getAs[Long]("ws_web_site_sk").toInt,
    ws_ship_mode_sk             = row.getAs[Long]("ws_ship_mode_sk").toInt,
    ws_warehouse_sk             = row.getAs[Long]("ws_warehouse_sk").toInt,
    ws_promo_sk                 = row.getAs[Long]("ws_promo_sk").toInt,
    ws_order_number             = row.getAs[Long]("ws_order_number").toInt,
    ws_quantity                 = row.getAs[Int]("ws_quantity"),
    ws_wholesale_cost           = row.getAs[java.math.BigDecimal]("ws_wholesale_cost").movePointRight(2).intValueExact(),
    ws_list_price               = row.getAs[java.math.BigDecimal]("ws_list_price").movePointRight(2).intValueExact(),
    ws_sales_price              = row.getAs[java.math.BigDecimal]("ws_sales_price").movePointRight(2).intValueExact(),
    ws_ext_discount_amt         = row.getAs[java.math.BigDecimal]("ws_ext_discount_amt").movePointRight(2).intValueExact(),
    ws_ext_sales_price          = row.getAs[java.math.BigDecimal]("ws_ext_sales_price").movePointRight(2).intValueExact(),
    ws_ext_wholesale_cost       = row.getAs[java.math.BigDecimal]("ws_ext_wholesale_cost").movePointRight(2).intValueExact(),
    ws_ext_list_price           = row.getAs[java.math.BigDecimal]("ws_ext_list_price").movePointRight(2).intValueExact(),
    ws_ext_tax                  = row.getAs[java.math.BigDecimal]("ws_ext_tax").movePointRight(2).intValueExact(),
    ws_coupon_amt               = row.getAs[java.math.BigDecimal]("ws_coupon_amt").movePointRight(2).intValueExact(),
    ws_ext_ship_cost            = row.getAs[java.math.BigDecimal]("ws_ext_ship_cost").movePointRight(2).intValueExact(),
    ws_net_paid                 = row.getAs[java.math.BigDecimal]("ws_net_paid").movePointRight(2).intValueExact(),
    ws_net_paid_inc_tax         = row.getAs[java.math.BigDecimal]("ws_net_paid_inc_tax").movePointRight(2).intValueExact(),
    ws_net_paid_inc_ship        = row.getAs[java.math.BigDecimal]("ws_net_paid_inc_ship").movePointRight(2).intValueExact(),
    ws_net_paid_inc_ship_tax    = row.getAs[java.math.BigDecimal]("ws_net_paid_inc_ship_tax").movePointRight(2).intValueExact(),
    ws_net_profit               = row.getAs[java.math.BigDecimal]("ws_net_profit").movePointRight(2).intValueExact()
  )).toDF(),


  "web_returns" -> sc.read.format(format)
    .load("file://" + inputDir + "/web_returns")
    .map(row => tpcds_web_returns(
      wr_returned_date_sk = row.getAs[Long]("wr_returned_date_sk").toInt,
      wr_returned_time_sk = row.getAs[Long]("wr_returned_time_sk").toInt,
      wr_item_sk = row.getAs[Long]("wr_item_sk").toInt,
      wr_refunded_customer_sk = row.getAs[Long]("wr_refunded_customer_sk").toInt,
      wr_refunded_cdemo_sk = row.getAs[Long]("wr_refunded_cdemo_sk").toInt,
      wr_refunded_hdemo_sk = row.getAs[Long]("wr_refunded_hdemo_sk").toInt,
      wr_refunded_addr_sk = row.getAs[Long]("wr_refunded_addr_sk").toInt,
      wr_returning_customer_sk = row.getAs[Long]("wr_returning_customer_sk").toInt,
      wr_returning_cdemo_sk = row.getAs[Long]("wr_returning_cdemo_sk").toInt,
      wr_returning_hdemo_sk = row.getAs[Long]("wr_returning_hdemo_sk").toInt,
      wr_returning_addr_sk = row.getAs[Long]("wr_returning_addr_sk").toInt,
      wr_web_page_sk = row.getAs[Long]("wr_web_page_sk").toInt,
      wr_reason_sk = row.getAs[Long]("wr_reason_sk").toInt,
      wr_order_number = row.getAs[Long]("wr_order_number").toInt,
      wr_return_quantity = row.getAs[Int]("wr_return_quantity"),
      wr_return_amt = row.getAs[java.math.BigDecimal]("wr_return_amt").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_return_tax = row.getAs[java.math.BigDecimal]("wr_return_tax").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_return_amt_inc_tax = row.getAs[java.math.BigDecimal]("wr_return_amt_inc_tax").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_fee = row.getAs[java.math.BigDecimal]("wr_fee").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_return_ship_cost = row.getAs[java.math.BigDecimal]("wr_return_ship_cost").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_refunded_cash = row.getAs[java.math.BigDecimal]("wr_refunded_cash").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_reversed_charge = row.getAs[java.math.BigDecimal]("wr_reversed_charge").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_account_credit = row.getAs[java.math.BigDecimal]("wr_account_credit").multiply(new java.math.BigDecimal("100")).intValueExact(),
      wr_net_loss = row.getAs[java.math.BigDecimal]("wr_net_loss").multiply(new java.math.BigDecimal("100")).intValueExact()
    )).toDF(),


  "call_center" -> sc.read.format(format)
    .load("file://" + inputDir + "/call_center")
    .map(row => tpcds_call_center(
      cc_call_center_sk = row.getAs[Long]("cc_call_center_sk").toInt,
      cc_call_center_id = row.getAs[String]("cc_call_center_id"),
      cc_rec_start_date = row.getAs[Int]("cc_rec_start_date"),
      cc_rec_end_date = row.getAs[Int]("cc_rec_end_date"),
      cc_closed_date_sk = row.getAs[Int]("cc_closed_date_sk"),
      cc_open_date_sk = row.getAs[Int]("cc_open_date_sk"),
      cc_name = row.getAs[String]("cc_name"),
      cc_class = row.getAs[String]("cc_class"),
      cc_employees = row.getAs[Int]("cc_employees"),
      cc_sq_ft = row.getAs[Int]("cc_sq_ft"),
      cc_hours = row.getAs[String]("cc_hours"),
      cc_manager = row.getAs[String]("cc_manager"),
      cc_mkt_id = row.getAs[Int]("cc_mkt_id"),
      cc_mkt_class = row.getAs[String]("cc_mkt_class"),
      cc_mkt_desc = row.getAs[String]("cc_mkt_desc"),
      cc_market_manager = row.getAs[String]("cc_market_manager"),
      cc_division = row.getAs[Int]("cc_division"),
      cc_division_name = row.getAs[String]("cc_division_name"),
      cc_company = row.getAs[Int]("cc_company"),
      cc_company_name = row.getAs[String]("cc_company_name"),
      cc_street_number = row.getAs[String]("cc_street_number"),
      cc_street_name = row.getAs[String]("cc_street_name"),
      cc_street_type = row.getAs[String]("cc_street_type"),
      cc_suite_number = row.getAs[String]("cc_suite_number"),
      cc_city = row.getAs[String]("cc_city"),
      cc_county = row.getAs[String]("cc_county"),
      cc_state = row.getAs[String]("cc_state"),
      cc_zip = row.getAs[String]("cc_zip"),
      cc_country = row.getAs[String]("cc_country"),
      cc_gmt_offset = row.getAs[java.math.BigDecimal]("cc_gmt_offset").multiply(new java.math.BigDecimal("100")).intValueExact(),
      cc_tax_percentage = row.getAs[java.math.BigDecimal]("cc_tax_percentage").multiply(new java.math.BigDecimal("100")).intValueExact()
    )).toDF(),


  "catalog_page" -> sc.read.format(format)
    .load("file://" + inputDir + "/catalog_page")
    .mapPartitions(rows => {
    rows.map(row => tpcds_catalog_page(
      cp_catalog_page_sk = row.getAs[Long]("cp_catalog_page_sk").toInt,
      cp_catalog_page_id = row.getAs[String]("cp_catalog_page_id"),
      cp_start_date_sk = row.getAs[Int]("cp_start_date_sk"),
      cp_end_date_sk = row.getAs[Int]("cp_end_date_sk"),
      cp_department = row.getAs[String]("cp_department"),
      cp_catalog_number = row.getAs[Int]("cp_catalog_number"),
      cp_catalog_page_number = row.getAs[Int]("cp_catalog_page_number"),
      cp_description = row.getAs[String]("cp_description"),
      cp_type = row.getAs[String]("cp_type")
    ))
  }).toDF(),

  "catalog_returns" -> sc.read.format(format)
    .load("file://" + inputDir + "/catalog_returns")
    .mapPartitions(rows => {
      rows.map(row => tpcds_catalog_returns(
        cr_returned_date_sk = row.getAs[Long]("cr_returned_date_sk").toInt,
        cr_returned_time_sk = row.getAs[Long]("cr_returned_time_sk").toInt,
        cr_item_sk = row.getAs[Long]("cr_item_sk").toInt,
        cr_refunded_customer_sk = row.getAs[Long]("cr_refunded_customer_sk").toInt,
        cr_refunded_cdemo_sk = row.getAs[Long]("cr_refunded_cdemo_sk").toInt,
        cr_refunded_hdemo_sk = row.getAs[Long]("cr_refunded_hdemo_sk").toInt,
        cr_refunded_addr_sk = row.getAs[Long]("cr_refunded_addr_sk").toInt,
        cr_returning_customer_sk = row.getAs[Long]("cr_returning_customer_sk").toInt,
        cr_returning_cdemo_sk = row.getAs[Long]("cr_returning_cdemo_sk").toInt,
        cr_returning_hdemo_sk = row.getAs[Long]("cr_returning_hdemo_sk").toInt,
        cr_returning_addr_sk = row.getAs[Long]("cr_returning_addr_sk").toInt,
        cr_call_center_sk = row.getAs[Long]("cr_call_center_sk").toInt,
        cr_catalog_page_sk = row.getAs[Long]("cr_catalog_page_sk").toInt,
        cr_ship_mode_sk = row.getAs[Long]("cr_ship_mode_sk").toInt,
        cr_warehouse_sk = row.getAs[Long]("cr_warehouse_sk").toInt,
        cr_reason_sk = row.getAs[Long]("cr_reason_sk").toInt,
        cr_order_number = row.getAs[Long]("cr_order_number").toInt,
        cr_return_quantity = row.getAs[Int]("cr_return_quantity"),
        cr_return_amount = row.getAs[java.math.BigDecimal]("cr_return_amount").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_return_tax = row.getAs[java.math.BigDecimal]("cr_return_tax").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_return_amt_inc_tax = row.getAs[java.math.BigDecimal]("cr_return_amt_inc_tax").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_fee = row.getAs[java.math.BigDecimal]("cr_fee").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_return_ship_cost = row.getAs[java.math.BigDecimal]("cr_return_ship_cost").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_refunded_cash = row.getAs[java.math.BigDecimal]("cr_refunded_cash").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_reversed_charge = row.getAs[java.math.BigDecimal]("cr_reversed_charge").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_store_credit = row.getAs[java.math.BigDecimal]("cr_store_credit").multiply(new java.math.BigDecimal("100")).intValueExact(),
        cr_net_loss = row.getAs[java.math.BigDecimal]("cr_net_loss").multiply(new java.math.BigDecimal("100")).intValueExact()
      ))
    }).toDF(),

  "catalog_sales" -> sc.read.format(format)
    .load(s"file://$inputDir/catalog_sales")
    .mapPartitions(rows => {
      rows.map(row => Catalog_sales(
        cs_sold_date_sk = row.getAs[Long]("cs_sold_date_sk").toInt,
        cs_sold_time_sk = row.getAs[Long]("cs_sold_time_sk").toInt,
        cs_ship_date_sk = row.getAs[Long]("cs_ship_date_sk").toInt,
        cs_bill_customer_sk = row.getAs[Long]("cs_bill_customer_sk").toInt,
        cs_bill_cdemo_sk = row.getAs[Long]("cs_bill_cdemo_sk").toInt,
        cs_bill_hdemo_sk = row.getAs[Long]("cs_bill_hdemo_sk").toInt,
        cs_bill_addr_sk = row.getAs[Long]("cs_bill_addr_sk").toInt,
        cs_ship_customer_sk = row.getAs[Long]("cs_ship_customer_sk").toInt,
        cs_ship_cdemo_sk = row.getAs[Long]("cs_ship_cdemo_sk").toInt,
        cs_ship_hdemo_sk = row.getAs[Long]("cs_ship_hdemo_sk").toInt,
        cs_ship_addr_sk = row.getAs[Long]("cs_ship_addr_sk").toInt,
        cs_call_center_sk = row.getAs[Long]("cs_call_center_sk").toInt,
        cs_catalog_page_sk = row.getAs[Long]("cs_catalog_page_sk").toInt,
        cs_ship_mode_sk = row.getAs[Long]("cs_ship_mode_sk").toInt,
        cs_warehouse_sk = row.getAs[Long]("cs_warehouse_sk").toInt,
        cs_item_sk = row.getAs[Long]("cs_item_sk").toInt,
        cs_promo_sk = row.getAs[Long]("cs_promo_sk").toInt,
        cs_order_number = row.getAs[Long]("cs_order_number").toInt,
        cs_quantity = row.getAs[Int]("cs_quantity"),
        cs_wholesale_cost = row.getAs[BigDecimal]("cs_wholesale_cost").multiply(new BigDecimal("100")).intValueExact(),
        cs_list_price = row.getAs[BigDecimal]("cs_list_price").multiply(new BigDecimal("100")).intValueExact(),
        cs_sales_price = row.getAs[BigDecimal]("cs_sales_price").multiply(new BigDecimal("100")).intValueExact(),
        cs_ext_discount_amt = row.getAs[BigDecimal]("cs_ext_discount_amt").multiply(new BigDecimal("100")).intValueExact(),
        cs_ext_sales_price = row.getAs[BigDecimal]("cs_ext_sales_price").multiply(new BigDecimal("100")).intValueExact(),
        cs_ext_wholesale_cost = row.getAs[BigDecimal]("cs_ext_wholesale_cost").multiply(new BigDecimal("100")).intValueExact(),
        cs_ext_list_price = row.getAs[BigDecimal]("cs_ext_list_price").multiply(new BigDecimal("100")).intValueExact(),
        cs_ext_tax = row.getAs[BigDecimal]("cs_ext_tax").multiply(new BigDecimal("100")).intValueExact(),
        cs_coupon_amt = row.getAs[BigDecimal]("cs_coupon_amt").multiply(new BigDecimal("100")).intValueExact(),
        cs_ext_ship_cost = row.getAs[BigDecimal]("cs_ext_ship_cost").multiply(new BigDecimal("100")).intValueExact(),
        cs_net_paid = row.getAs[BigDecimal]("cs_net_paid").multiply(new BigDecimal("100")).intValueExact(),
        cs_net_paid_inc_tax = row.getAs[BigDecimal]("cs_net_paid_inc_tax").multiply(new BigDecimal("100")).intValueExact(),
        cs_net_paid_inc_ship = row.getAs[BigDecimal]("cs_net_paid_inc_ship").multiply(new BigDecimal("100")).intValueExact(),
        cs_net_paid_inc_ship_tax = row.getAs[BigDecimal]("cs_net_paid_inc_ship_tax").multiply(new BigDecimal("100")).intValueExact(),
        cs_net_profit = row.getAs[BigDecimal]("cs_net_profit").multiply(new BigDecimal("100")).intValueExact()
      ))
    }).toDF(),

  "store_sales" -> sc.read.format(format)
    .load(s"file://$inputDir/store_sales")
    .mapPartitions(rows => {
      rows.map(row => Store_sales(
        ss_sold_date_sk = row.getAs[Long]("ss_sold_date_sk").toInt,
        ss_sold_time_sk = row.getAs[Long]("ss_sold_time_sk").toInt,
        ss_item_sk = row.getAs[Long]("ss_item_sk").toInt,
        ss_customer_sk = row.getAs[Long]("ss_customer_sk").toInt,
        ss_cdemo_sk = row.getAs[Long]("ss_cdemo_sk").toInt,
        ss_hdemo_sk = row.getAs[Long]("ss_hdemo_sk").toInt,
        ss_addr_sk = row.getAs[Long]("ss_addr_sk").toInt,
        ss_store_sk = row.getAs[Long]("ss_store_sk").toInt,
        ss_promo_sk = row.getAs[Long]("ss_promo_sk").toInt,
        ss_ticket_number = row.getAs[Long]("ss_ticket_number").toInt,
        ss_quantity = row.getAs[Int]("ss_quantity"),
        ss_wholesale_cost = row.getAs[BigDecimal]("ss_wholesale_cost").multiply(new BigDecimal("100")).intValueExact(),
        ss_list_price = row.getAs[BigDecimal]("ss_list_price").multiply(new BigDecimal("100")).intValueExact(),
        ss_sales_price = row.getAs[BigDecimal]("ss_sales_price").multiply(new BigDecimal("100")).intValueExact(),
        ss_ext_discount_amt = row.getAs[BigDecimal]("ss_ext_discount_amt").multiply(new BigDecimal("100")).intValueExact(),
        ss_ext_sales_price = row.getAs[BigDecimal]("ss_ext_sales_price").multiply(new BigDecimal("100")).intValueExact(),
        ss_ext_wholesale_cost = row.getAs[BigDecimal]("ss_ext_wholesale_cost").multiply(new BigDecimal("100")).intValueExact(),
        ss_ext_list_price = row.getAs[BigDecimal]("ss_ext_list_price").multiply(new BigDecimal("100")).intValueExact(),
        ss_ext_tax = row.getAs[BigDecimal]("ss_ext_tax").multiply(new BigDecimal("100")).intValueExact(),
        ss_coupon_amt = row.getAs[BigDecimal]("ss_coupon_amt").multiply(new BigDecimal("100")).intValueExact(),
        ss_net_paid = row.getAs[BigDecimal]("ss_net_paid").multiply(new BigDecimal("100")).intValueExact(),
        ss_net_paid_inc_tax = row.getAs[BigDecimal]("ss_net_paid_inc_tax").multiply(new BigDecimal("100")).intValueExact(),
        ss_net_profit = row.getAs[BigDecimal]("ss_net_profit").multiply(new BigDecimal("100")).intValueExact()
      ))}
      */
     // ).toDF())


  /*
  "customer" -> sc.read.textFile(inputDir + "/customer.dat*").map(_.split('|')).map(p =>
    Customer_tpcds(p(0).trim.toInt, p(1).trim, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim, p(8).trim, p(9).trim, p(10).trim, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt, p(14).trim, p(15).trim, p(16).trim, p(17).trim)).toDF(),

  "customer_address" -> sc.read.textFile(inputDir + "/customer_address.dat*").map(_.split('|')).map(p =>
    Customer_address(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim, p(5).trim, p(6).trim, p(7).trim, p(8).trim, p(9).trim, p(10).trim, (p(11).trim.toDouble*100).toInt, p(12).trim)).toDF(),

  "customer_demographics" -> sc.read.textFile(inputDir + "/customer_demographics.dat*").map(_.split('|')).map(p =>
    Customer_demographics(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim.toInt, p(5).trim, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt)).toDF(),

  "date_dim" -> sc.read.textFile(inputDir + "/date_dim.dat*").map(_.split('|')).map(p =>
    Date_dim(p(0).trim.toInt, p(1).trim, p(2).trim.replace("-", "").toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt, p(14).trim, p(15).trim, p(16).trim, p(17).trim, p(18).trim, p(19).trim.toInt, p(20).trim.toInt, p(21).trim.toInt, p(22).trim.toInt, p(23).trim, p(24).trim, p(25).trim, p(26).trim, p(27).trim)).toDF(),

  "household_demographics" -> sc.read.textFile(inputDir + "/household_demographics.dat*").map(_.split('|')).map(p =>
    Household_demographics(p(0).trim.toInt, p(1).trim.toInt, p(2).trim, p(3).trim.toInt, p(4).trim.toInt)).toDF(),

  "income_band" -> sc.read.textFile(inputDir + "/income_band.dat*").map(_.split('|')).map(p =>
    tpcds_income_band(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt)).toDF(),

  "item" -> sc.read.textFile(inputDir + "/item.dat*").map(_.split('|')).map(p =>
    Item(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim, (p(5).trim.toDouble*100).toInt, (p(6).trim.toDouble*100).toInt, p(7).trim.toInt, p(8).trim, p(9).trim.toInt, p(10).trim, p(11).trim.toInt, p(12).trim, p(13).trim.toInt, p(14).trim, p(15).trim, p(16).trim, p(17).trim, p(18).trim, p(19).trim, p(20).trim.toInt, p(21).trim)).toDF(),

  "promotion" -> sc.read.textFile(inputDir + "/promotion.dat*").map(_.split('|')).map(p =>
    Promotion(p(0).trim.toInt, p(1).trim, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, (p(5).trim.toDouble*100).toInt, p(6).trim.toInt, p(7).trim, p(8).trim, p(9).trim, p(10).trim, p(11).trim, p(12).trim, p(13).trim, p(14).trim, p(15).trim, p(16).trim, p(17).trim, p(18).trim)).toDF(),

  "reason" -> sc.read.textFile(inputDir + "/reason.dat*").map(_.split('|')).map(p =>
    tpcds_reason(p(0).trim.toInt, p(1).trim, p(2).trim)).toDF(),

  "ship_mode" -> sc.read.textFile(inputDir + "/ship_mode.dat*").map(_.split('|')).map(p =>
    tpcds_ship_mode(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim, p(5).trim)).toDF(),

  "store" -> sc.read.textFile(inputDir + "/store.dat*").map(_.split('|')).map(p =>
    Store(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim.toInt, p(5).trim, p(6).trim.toInt, p(7).trim.toInt, p(8).trim, p(9).trim, p(10).trim.toInt, p(11).trim, p(12).trim, p(13).trim, p(14).trim.toInt, p(15).trim, p(16).trim.toInt, p(17).trim, p(18).trim, p(19).trim, p(20).trim, p(21).trim, p(22).trim, p(23).trim, p(24).trim, p(25).trim, p(26).trim, (p(27).trim.toDouble*100).toInt, (p(28).trim.toDouble*100).toInt)).toDF(),

  "time_dim" -> sc.read.textFile(inputDir + "/time_dim.dat*").map(_.split('|')).map(p =>
    Time_dim(p(0).trim.toInt, p(1).trim, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim, p(7).trim, p(8).trim, p(9).trim)).toDF(),

  "warehouse" -> sc.read.textFile(inputDir + "/warehouse.dat*").map(_.split('|')).map(p =>
    tpcds_warehouse(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim.toInt, p(4).trim, p(5).trim, p(6).trim, p(7).trim, p(8).trim, p(9).trim, p(10).trim, p(11).trim, p(12).trim, (p(13).trim.toDouble*100).toInt)).toDF(),

  "web_site" -> sc.read.textFile(inputDir + "/web_site.dat*").map(_.split('|')).map(p =>
    tpcds_web_site(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim, p(5).trim.toInt, p(6).trim.toInt, p(7).trim, p(8).trim, p(9).trim.toInt, p(10).trim, p(11).trim, p(12).trim, p(13).trim.toInt, p(14).trim, p(15).trim, p(16).trim, p(17).trim, p(18).trim, p(19).trim, p(20).trim, p(21).trim, p(22).trim, p(23).trim, (p(24).trim.toDouble*100).toInt, (p(25).trim.toDouble*100).toInt)).toDF(),

  "web_page" -> sc.read.textFile(inputDir + "/web_page.dat*").map(_.split('|')).map(p =>
    tpcds_web_page(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim.toInt, p(5).trim.toInt, p(6).trim, p(7).trim.toInt, p(8).trim, p(9).trim, p(10).trim.toInt, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt)).toDF(),

  "inventory" -> sc.read.textFile(inputDir + "/inventory.dat*").map(_.split('|')).map(p =>
    tpcds_inventory(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt)).toDF(),

  "store_returns" -> sc.read.textFile(inputDir + "/store_returns.dat*").map(_.split('|')).map(p =>
    Store_returns(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, (p(11).trim.toDouble*100).toInt, (p(12).trim.toDouble*100).toInt, (p(13).trim.toDouble*100).toInt, (p(14).trim.toDouble*100).toInt, (p(15).trim.toDouble*100).toInt, (p(16).trim.toDouble*100).toInt, (p(17).trim.toDouble*100).toInt, (p(18).trim.toDouble*100).toInt, (p(19).trim.toDouble*100).toInt)).toDF(),

  "web_sales" -> sc.read.textFile(inputDir + "/web_sales.dat*").map(_.split('|')).map(p =>
    tpcds_web_sales(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt, p(14).trim.toInt, p(15).trim.toInt, p(16).trim.toInt, p(17).trim.toInt, p(18).trim.toInt, (p(19).trim.toDouble*100).toInt, (p(20).trim.toDouble*100).toInt, (p(21).trim.toDouble*100).toInt, (p(22).trim.toDouble*100).toInt, (p(23).trim.toDouble*100).toInt, (p(24).trim.toDouble*100).toInt, (p(25).trim.toDouble*100).toInt, (p(26).trim.toDouble*100).toInt, (p(27).trim.toDouble*100).toInt, (p(28).trim.toDouble*100).toInt, (p(29).trim.toDouble*100).toInt, (p(30).trim.toDouble*100).toInt, (p(31).trim.toDouble*100).toInt, (p(32).trim.toDouble*100).toInt, (p(33).trim.toDouble*100).toInt)).toDF(),

  "web_returns" -> sc.read.textFile(inputDir + "/web_returns.dat*").map(_.split('|')).map(p =>
    tpcds_web_returns(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt, p(14).trim.toInt, (p(15).trim.toDouble*100).toInt, (p(16).trim.toDouble*100).toInt, (p(17).trim.toDouble*100).toInt, (p(18).trim.toDouble*100).toInt, (p(19).trim.toDouble*100).toInt, (p(20).trim.toDouble*100).toInt, (p(21).trim.toDouble*100).toInt, (p(22).trim.toDouble*100).toInt, (p(23).trim.toDouble*100).toInt)).toDF(),

  "call_center" -> sc.read.textFile(inputDir + "/call_center.dat*").map(_.split('|')).map(p =>
    tpcds_call_center(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim.toInt, p(5).trim.toInt, p(6).trim, p(7).trim, p(8).trim.toInt, p(9).trim.toInt, p(10).trim, p(11).trim, p(12).trim.toInt, p(13).trim, p(14).trim, p(15).trim, p(16).trim.toInt, p(17).trim, p(18).trim.toInt, p(19).trim, p(20).trim, p(21).trim, p(22).trim, p(23).trim, p(24).trim, p(25).trim, p(26).trim, p(27).trim, p(28).trim, (p(29).trim.toDouble*100).toInt, (p(30).trim.toDouble*100).toInt)).toDF(),

  "catalog_page" -> sc.read.textFile(inputDir + "/catalog_page.dat*").map(_.split('|')).map(p =>
    tpcds_catalog_page(p(0).trim.toInt, p(1).trim, p(2).trim.toInt, p(3).trim.toInt, p(4).trim, p(5).trim.toInt, p(6).trim.toInt, p(7).trim, p(8).trim)).toDF(),

  "catalog_returns" -> sc.read.textFile(inputDir + "/catalog_returns.dat*").map(_.split('|')).map(p =>
    tpcds_catalog_returns(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt, p(14).trim.toInt, p(15).trim.toInt, p(16).trim.toInt, p(17).trim.toInt, (p(18).trim.toDouble*100).toInt, (p(19).trim.toDouble*100).toInt, (p(20).trim.toDouble*100).toInt, (p(21).trim.toDouble*100).toInt, (p(22).trim.toDouble*100).toInt, (p(23).trim.toDouble*100).toInt, (p(24).trim.toDouble*100).toInt, (p(25).trim.toDouble*100).toInt, (p(26).trim.toDouble*100).toInt)).toDF(),

  "catalog_sales" -> sc.read.textFile(inputDir + "/catalog_sales.dat*").map(_.split('|')).map(p =>
    Catalog_sales(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, p(11).trim.toInt, p(12).trim.toInt, p(13).trim.toInt, p(14).trim.toInt, p(15).trim.toInt, p(16).trim.toInt, p(17).trim.toInt, p(18).trim.toInt, (p(19).trim.toDouble*100).toInt, (p(20).trim.toDouble*100).toInt, (p(21).trim.toDouble*100).toInt, (p(22).trim.toDouble*100).toInt, (p(23).trim.toDouble*100).toInt, (p(24).trim.toDouble*100).toInt, (p(25).trim.toDouble*100).toInt, (p(26).trim.toDouble*100).toInt, (p(27).trim.toDouble*100).toInt, (p(28).trim.toDouble*100).toInt, (p(29).trim.toDouble*100).toInt, (p(30).trim.toDouble*100).toInt, (p(31).trim.toDouble*100).toInt, (p(32).trim.toDouble*100).toInt, (p(33).trim.toDouble*100).toInt)).toDF(),

  "store_sales" -> sc.read.textFile(inputDir + "/store_sales.dat*").map(_.split('|')).map(p =>
    Store_sales(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, p(4).trim.toInt, p(5).trim.toInt, p(6).trim.toInt, p(7).trim.toInt, p(8).trim.toInt, p(9).trim.toInt, p(10).trim.toInt, (p(11).trim.toDouble*100).toInt, (p(12).trim.toDouble*100).toInt, (p(13).trim.toDouble*100).toInt, (p(14).trim.toDouble*100).toInt, (p(15).trim.toDouble*100).toInt, (p(16).trim.toDouble*100).toInt, (p(17).trim.toDouble*100).toInt, (p(18).trim.toDouble*100).toInt, (p(19).trim.toDouble*100).toInt, (p(20).trim.toDouble*100).toInt, (p(21).trim.toDouble*100).toInt, (p(22).trim.toDouble*100).toInt)).toDF()

  */


  // for implicits
  val customer: DataFrame = dfMap("customer")
  val customer_address: DataFrame = dfMap("customer_address")
  val customer_demographics: DataFrame = dfMap("customer_demographics")
  val date_dim: DataFrame = dfMap("date_dim")
  val household_demographics: DataFrame = dfMap("household_demographics")
  val income_band: DataFrame = dfMap("income_band")
  val item: DataFrame = dfMap("item")
  val promotion: DataFrame = dfMap("promotion")
  val reason: DataFrame = dfMap("reason")
  val ship_mode: DataFrame = dfMap("ship_mode")
  val store: DataFrame = dfMap("store")
  val time_dim: DataFrame = dfMap("time_dim")
  val warehouse: DataFrame = dfMap("warehouse")
  val web_site: DataFrame = dfMap("web_site")
  val web_page: DataFrame = dfMap("web_page")
  val inventory: DataFrame = dfMap("inventory")
  val store_returns: DataFrame = dfMap("store_returns")
  val web_sales: DataFrame = dfMap("web_sales")
  val web_returns: DataFrame = dfMap("web_returns")
  val call_center: DataFrame = dfMap("call_center")
  val catalog_page: DataFrame = dfMap("catalog_page")
  val catalog_returns: DataFrame = dfMap("catalog_returns")
  val catalog_sales: DataFrame = dfMap("catalog_sales")
  val store_sales: DataFrame = dfMap("store_sales")

  dfMap.foreach {
    case (key, value) => {
      value.printSchema()
      value.show(20)
      println("table: " + key + "row:" + value.count())
      value.createOrReplaceTempView(key)
    }
  }
}