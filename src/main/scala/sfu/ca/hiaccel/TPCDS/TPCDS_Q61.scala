/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package sfu.ca.hiaccel.TPCDS

import org.apache.spark.sql._

/** TPC-DS Query 61 */
class TPCDS_Q61 extends TPCDS_Queries {
  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {
    /*sc.sql("""--q61.sql--

 select promotions,total,cast(promotions as decimal(15,4))/cast(total as decimal(15,4))*100
 from
   (select sum(ss_ext_sales_price) promotions
     from  store_sales, store, promotion, date_dim, customer, customer_address, item
     where ss_sold_date_sk = d_date_sk
     and   ss_store_sk = s_store_sk
     and   ss_promo_sk = p_promo_sk
     and   ss_customer_sk= c_customer_sk
     and   ca_address_sk = c_current_addr_sk
     and   ss_item_sk = i_item_sk
     and   ca_gmt_offset = -5
     and   i_category = 'Jewelry'
     and   (p_channel_dmail = 'Y' or p_channel_email = 'Y' or p_channel_tv = 'Y')
     and   s_gmt_offset = -5
     and   d_year = 1998
     and   d_moy  = 11) promotional_sales cross join
   (select sum(ss_ext_sales_price) total
     from  store_sales, store, date_dim, customer, customer_address, item
     where ss_sold_date_sk = d_date_sk
     and   ss_store_sk = s_store_sk
     and   ss_customer_sk= c_customer_sk
     and   ca_address_sk = c_current_addr_sk
     and   ss_item_sk = i_item_sk
     and   ca_gmt_offset = -5
     and   i_category = 'Jewelry'
     and   s_gmt_offset = -5
     and   d_year = 1998
     and   d_moy  = 11) all_sales
 order by promotions, total
 limit 100
            """)*/

    // after modify
    sc.sql("""--q61.sql--

 select promotions,total, promotions/total *100
 from
   (select sum(ss_ext_sales_price) promotions
     from  store_sales, store, promotion, date_dim, customer, customer_address, item
     where ss_sold_date_sk = d_date_sk
     and   ss_store_sk = s_store_sk
     and   ss_promo_sk = p_promo_sk
     and   ss_customer_sk= c_customer_sk
     and   ca_address_sk = c_current_addr_sk
     and   ss_item_sk = i_item_sk
     and   i_category = 'Jewelry'
     and   (p_channel_dmail = 'Y' or p_channel_email = 'Y' or p_channel_tv = 'Y')
     and   d_year = 1998
     and   d_moy  = 11) promotional_sales cross join
   (select sum(ss_ext_sales_price) total
     from  store_sales, store, date_dim, customer, customer_address, item
     where ss_sold_date_sk = d_date_sk
     and   ss_store_sk = s_store_sk
     and   ss_customer_sk= c_customer_sk
     and   ca_address_sk = c_current_addr_sk
     and   ss_item_sk = i_item_sk
     and   i_category = 'Jewelry'
     and   d_year = 1998
     and   d_moy  = 11) all_sales
 order by promotions, total
 limit 100
            """)
  }
}
