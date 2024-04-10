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
package sfu.ca.hiaccel.TPCH

import org.apache.spark.sql._

/** TPC-H Query 12 */
class TPCH_Q12 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select l_shipmode, " +
//      "sum(case when o_orderpriority = '1-URGENT' or o_orderpriority = '2-HIGH' then 1 else 0 end) as high_line_count, " +
//      "sum(case when o_orderpriority <> '1-URGENT' and o_orderpriority <> '2-HIGH' then 1 else 0 end) as low_line_count " +
//      "from orders, lineitem " +
//      "where o_orderkey = l_orderkey " +
//        "and l_shipmode in ('TRUCK', 'MAIL') " +
//        "and l_commitdate < l_receiptdate " +
//        "and l_shipdate < l_commitdate " +
//        "and l_receiptdate >= date '1997-01-01' " +
//        "and l_receiptdate < date '1997-01-01' + interval '1' year " +
//      "group by l_shipmode " +
//      "order by l_shipmode")

    sc.sql(
      "select l_shipmode, " +
        "sum(case when o_orderpriority = '1-URGENT' or o_orderpriority = '2-HIGH' then 1 else 0 end) as high_line_count, " +
        "sum(case when o_orderpriority <> '1-URGENT' and o_orderpriority <> '2-HIGH' then 1 else 0 end) as low_line_count " +
        "from orders, lineitem " +
        "where o_orderkey = l_orderkey " +
        "and l_shipmode in ('TRUCK', 'MAIL') " +
        "and l_commitdate < l_receiptdate " +
        "and l_shipdate < l_commitdate " +
        "and l_receiptdate >= 19970101 " +
        "and l_receiptdate < 19980101 " +
        "group by l_shipmode " +
        "order by l_shipmode")
  }
}
