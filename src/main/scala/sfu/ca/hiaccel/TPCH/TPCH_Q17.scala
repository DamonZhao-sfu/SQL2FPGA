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

/** TPC-H Query 17 */
class TPCH_Q17 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select sum(l_extendedprice) / 7.0 as avg_yearly " +
//      "from lineitem, part " +
//      "where p_partkey = l_partkey " +
//      "and p_brand = 'Brand#21' " +
//      "and p_container = 'WRAP BAG' " +
//      "and l_quantity < (" +
//      "select 0.2 * avg(l_quantity) " +
//      "from lineitem " +
//      "where l_partkey = p_partkey" +
//      ");")

    sc.sql(
      "select sum(l_extendedprice) / 7.0 as avg_yearly " +
        "from lineitem, part " +
        "where p_partkey = l_partkey " +
        "and p_brand = 'Brand#21' " +
        "and p_container = 'WRAP BAG' " +
        "and l_quantity < (" +
        "select 0.2 * avg(l_quantity) " +
        "from lineitem " +
        "where l_partkey = p_partkey" +
        ");")
  }
}
