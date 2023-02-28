package org.example
import org.apache.spark.sql._
/**
 * TPC-DS Query 84
 */
class TPCDS_Q84 extends TPCDS_Queries {
  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {
    sc.sql("""--q84.sql--

 select c_customer_id as customer_id
       , concat(coalesce(c_last_name,''), ', ', coalesce(c_first_name,'')) as customername
 from customer
     ,customer_address
     ,customer_demographics
     ,household_demographics
     ,income_band
     ,store_returns
 where ca_city	        =  'Edgewood'
   and c_current_addr_sk = ca_address_sk
   and ib_lower_bound   >=  38128
   and ib_upper_bound   <=  38128 + 50000
   and ib_income_band_sk = hd_income_band_sk
   and cd_demo_sk = c_current_cdemo_sk
   and hd_demo_sk = c_current_hdemo_sk
   and sr_cdemo_sk = cd_demo_sk
 order by c_customer_id
 limit 100
            """)
  }
}
