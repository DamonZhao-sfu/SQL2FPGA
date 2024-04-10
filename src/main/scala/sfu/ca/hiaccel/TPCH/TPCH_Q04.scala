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

/** TPC-H Query 04 */
class TPCH_Q04 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {
    // this is used to implicitly convert an RDD to a DataFrame.
    //    import sc.implicits._

    sc.sql(
      "select o_orderpriority, count(*) as order_count " +
        "from orders " +
        "where o_orderdate >= 19930701 " +
        "and o_orderdate < 19931001 " +
        "and exists ( select * from lineitem where l_orderkey = o_orderkey and l_commitdate < l_receiptdate) " +
        "group by o_orderpriority " +
        "order by o_orderpriority")

  }
}
