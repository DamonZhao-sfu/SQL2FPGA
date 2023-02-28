package org.example
import org.apache.spark.sql._
/**
 * TPC-DS Query 39b
 */
class TPCDS_Q39 extends TPCDS_Queries {
  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {
  /*  sc.sql("""--q39b.sql--

 with inv as
 (select w_warehouse_name,w_warehouse_sk,i_item_sk,d_moy
        ,stdev,mean, case mean when 0 then null else stdev/mean end cov
  from(select w_warehouse_name,w_warehouse_sk,i_item_sk,d_moy
             ,stddev_samp(inv_quantity_on_hand) stdev,avg(inv_quantity_on_hand) mean
       from inventory, item, warehouse, date_dim
       where inv_item_sk = i_item_sk
         and inv_warehouse_sk = w_warehouse_sk
         and inv_date_sk = d_date_sk
         and d_year = 2001
       group by w_warehouse_name,w_warehouse_sk,i_item_sk,d_moy) foo
  where case mean when 0 then 0 else stdev/mean end > 1)
 select inv1.w_warehouse_sk,inv1.i_item_sk,inv1.d_moy,inv1.mean, inv1.cov
         ,inv2.w_warehouse_sk,inv2.i_item_sk,inv2.d_moy,inv2.mean, inv2.cov
 from inv inv1,inv inv2
 where inv1.i_item_sk = inv2.i_item_sk
   and inv1.w_warehouse_sk =  inv2.w_warehouse_sk
   and inv1.d_moy=1
   and inv2.d_moy=1+1
   and inv1.cov > 1.5
 order by inv1.w_warehouse_sk,inv1.i_item_sk,inv1.d_moy,inv1.mean,inv1.cov
         ,inv2.d_moy,inv2.mean, inv2.cov
            """)*/

    sc.sql("""--q39a.sql--

WITH inv AS (
    SELECT w_warehouse_name,
           w_warehouse_sk,
           i_item_sk,
           d_moy,
           mean
    FROM (
        SELECT w_warehouse_name,
               w_warehouse_sk,
               i_item_sk,
               d_moy,
               avg(inv_quantity_on_hand) mean
        FROM inventory, item, warehouse, date_dim
        WHERE inv_item_sk = i_item_sk
          AND inv_warehouse_sk = w_warehouse_sk
          AND inv_date_sk = d_date_sk
          AND d_year = 2001
        GROUP BY w_warehouse_name, w_warehouse_sk, i_item_sk, d_moy
    )
)
SELECT inv1.w_warehouse_sk AS inv1_w_warehouse_sk,
       inv1.i_item_sk AS inv1_i_item_sk,
       inv1.d_moy AS inv1_d_moy,
       inv1.mean AS inv1_mean,
       inv2.w_warehouse_sk AS inv2_w_warehouse_sk,
       inv2.i_item_sk AS inv2_i_item_sk,
       inv2.d_moy AS inv2_d_moy,
       inv2.mean AS inv2_mean
FROM inv inv1, inv inv2
WHERE inv1.i_item_sk = inv2.i_item_sk
  AND inv1.w_warehouse_sk = inv2.w_warehouse_sk
  AND inv1.d_moy = 1
  AND inv2.d_moy = 1 + 1
ORDER BY inv1_w_warehouse_sk,
         inv1_i_item_sk,
         inv1_d_moy,
         inv1_mean,
         inv2_d_moy,
         inv2_mean
          """)

  }
}
