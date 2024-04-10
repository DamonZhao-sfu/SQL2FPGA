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

/** TPC-H Query 18 */
class TPCH_Q18 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select c_name, c_custkey, o_orderkey, o_orderdate, o_totalprice, sum(l_quantity) " +
//      "from customer, orders, lineitem " +
//      "where o_orderkey in (" +
//      "select l_orderkey " +
//      "from lineitem " +
//      "group by l_orderkey " +
//      "having sum(l_quantity) > 312" +
//      ") " +
//      "and c_custkey = o_custkey " +
//      "and o_orderkey = l_orderkey " +
//      "group by c_name, c_custkey, o_orderkey, o_orderdate, o_totalprice " +
//      "order by o_totalprice desc, o_orderdate;")

//    sc.sql("cache table customer;")
//    sc.sql("cache table order;")
//    sc.sql("cache table lineitem;")

    sc.sql(
      "select c_name, c_custkey, o_orderkey, o_orderdate, o_totalprice, sum(l_quantity) " +
        "from customer, orders, lineitem " +
        "where o_orderkey in (" +
        "select l_orderkey " +
        "from lineitem " +
        "group by l_orderkey " +
        "having sum(l_quantity) > 312" +
        ") " +
        "and c_custkey = o_custkey " +
        "and o_orderkey = l_orderkey " +
        "group by c_name, c_custkey, o_orderkey, o_orderdate, o_totalprice " +
        "order by o_totalprice desc, o_orderdate;")
  }
}
