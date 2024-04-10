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

/** TPC-H Query 20 */
class TPCH_Q20 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select s_name, s_address " +
//      "from supplier, nation " +
//      "where s_suppkey in " +
//      "(select ps_suppkey " +
//      "from partsupp " +
//      "where ps_partkey in (" +
//      "select p_partkey " +
//      "from part " +
//      "where p_name like 'blush%') " +
//      "and ps_availqty > (" +
//      "select 0.5 * sum(l_quantity) " +
//      "from lineitem " +
//      "where l_partkey = ps_partkey " +
//      "and l_suppkey = ps_suppkey " +
//      "and l_shipdate >= date '1995-01-01' " +
//      "and l_shipdate < date '1995-01-01' + interval '1' year)) " +
//      "and s_nationkey = n_nationkey " +
//      "and n_name = 'INDONESIA' " +
//      "order by s_name")

    sc.sql(
      "select s_name, s_address " +
        "from supplier, nation " +
        "where s_suppkey in " +
        "(select ps_suppkey " +
        "from partsupp " +
        "where ps_partkey in (" +
        "select p_partkey " +
        "from part " +
        "where p_name like 'blush%') " +
        "and ps_availqty > (" +
        "select 0.5 * sum(l_quantity) " +
        "from lineitem " +
        "where l_partkey = ps_partkey " +
        "and l_suppkey = ps_suppkey " +
        "and l_shipdate >= 19950101 " +
        "and l_shipdate < 19960101)) " +
        "and s_nationkey = n_nationkey " +
        "and n_name = 'INDONESIA' " +
        "order by s_name")
  }
}
