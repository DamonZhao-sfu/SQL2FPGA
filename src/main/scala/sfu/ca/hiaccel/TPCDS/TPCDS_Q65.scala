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

/** TPC-DS Query 65 */
class TPCDS_Q65 extends TPCDS_Queries {
  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {
    sc.sql("""--q65.sql--

 select
	  s_store_name, i_item_desc, sc.revenue, i_current_price, i_wholesale_cost, i_brand
 from store, item,
     (select ss_store_sk, avg(revenue) as ave
 	from
 	    (select  ss_store_sk, ss_item_sk,
 		     sum(ss_sales_price) as revenue
 		from store_sales, date_dim
 		where ss_sold_date_sk = d_date_sk and d_month_seq between 1176 and 1176+11
 		group by ss_store_sk, ss_item_sk) sa
 	group by ss_store_sk) sb,
     (select  ss_store_sk, ss_item_sk, sum(ss_sales_price) as revenue
 	from store_sales, date_dim
 	where ss_sold_date_sk = d_date_sk and d_month_seq between 1176 and 1176+11
 	group by ss_store_sk, ss_item_sk) sc
 where sb.ss_store_sk = sc.ss_store_sk and
       sc.revenue <= 0.1 * sb.ave and
       s_store_sk = sc.ss_store_sk and
       i_item_sk = sc.ss_item_sk
 order by s_store_name, i_item_desc
 limit 100
            """)
  }
}
