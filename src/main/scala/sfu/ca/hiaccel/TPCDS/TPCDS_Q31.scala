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

/** TPC-DS Query 31 */
class TPCDS_Q31 extends TPCDS_Queries {
  override def TPCDS_execute(sc: SparkSession, schemaProvider: TpcdsSchemaProvider): DataFrame = {
    sc.sql("""--q31.sql--

 with ss as
 (select ca_county,d_qoy, d_year,sum(ss_ext_sales_price) as store_sales
 from store_sales,date_dim,customer_address
 where ss_sold_date_sk = d_date_sk
  and ss_addr_sk=ca_address_sk
 group by ca_county,d_qoy, d_year),
 ws as
 (select ca_county,d_qoy, d_year,sum(ws_ext_sales_price) as web_sales
 from web_sales,date_dim,customer_address
 where ws_sold_date_sk = d_date_sk
  and ws_bill_addr_sk=ca_address_sk
 group by ca_county,d_qoy, d_year)
 select
        ss1.ca_county
       ,ss1.d_year
       ,ws2.web_sales/ws1.web_sales web_q1_q2_increase
       ,ss2.store_sales/ss1.store_sales store_q1_q2_increase
       ,ws3.web_sales/ws2.web_sales web_q2_q3_increase
       ,ss3.store_sales/ss2.store_sales store_q2_q3_increase
 from
        ss ss1, ss ss2, ss ss3, ws ws1, ws ws2, ws ws3
 where
    ss1.d_qoy = 1
    and ss1.d_year = 2000
    and ss1.ca_county = ss2.ca_county
    and ss2.d_qoy = 2
    and ss2.d_year = 2000
 and ss2.ca_county = ss3.ca_county
    and ss3.d_qoy = 3
    and ss3.d_year = 2000
    and ss1.ca_county = ws1.ca_county
    and ws1.d_qoy = 1
    and ws1.d_year = 2000
    and ws1.ca_county = ws2.ca_county
    and ws2.d_qoy = 2
    and ws2.d_year = 2000
    and ws1.ca_county = ws3.ca_county
    and ws3.d_qoy = 3
    and ws3.d_year = 2000
    and case when ws1.web_sales > 0 then ws2.web_sales/ws1.web_sales else null end
       > case when ss1.store_sales > 0 then ss2.store_sales/ss1.store_sales else null end
    and case when ws2.web_sales > 0 then ws3.web_sales/ws2.web_sales else null end
       > case when ss2.store_sales > 0 then ss3.store_sales/ss2.store_sales else null end
 order by ss1.ca_county
            """)
  }
}
