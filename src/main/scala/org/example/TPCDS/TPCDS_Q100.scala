package org.example
import org.apache.spark.sql._
/**
 * TPC-DS Query ss_max
 */
class TPCDS_Q100 extends TPCDS_Queries {
  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {
    sc.sql("""select
  count(*) as total,
  count(ss_sold_date_sk) as not_null_total,
  count(distinct ss_sold_date_sk) as unique_days,
  max(ss_sold_date_sk) as max_ss_sold_date_sk,
  max(ss_sold_time_sk) as max_ss_sold_time_sk,
  max(ss_item_sk) as max_ss_item_sk,
  max(ss_customer_sk) as max_ss_customer_sk,
  max(ss_cdemo_sk) as max_ss_cdemo_sk,
  max(ss_hdemo_sk) as max_ss_hdemo_sk,
  max(ss_addr_sk) as max_ss_addr_sk,
  max(ss_store_sk) as max_ss_store_sk,
  max(ss_promo_sk) as max_ss_promo_sk
from store_sales""")
  }
}
