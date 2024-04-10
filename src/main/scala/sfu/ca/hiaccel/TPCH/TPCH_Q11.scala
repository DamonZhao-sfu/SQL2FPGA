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

/** TPC-H Query 11 */
class TPCH_Q11 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select ps_partkey, sum(ps_supplycost * ps_availqty) as value " +
//      "from partsupp, supplier, nation " +
//      "where ps_suppkey = s_suppkey " +
//      "and s_nationkey = n_nationkey " +
//      "and n_name = 'IRAN' " +
//      "group by ps_partkey " +
//        "having sum(ps_supplycost * ps_availqty) > (" +
//          "select sum(ps_supplycost * ps_availqty) * 0.0001000000 " +
//          "from partsupp, supplier, nation " +
//          "where ps_suppkey = s_suppkey and s_nationkey = n_nationkey and n_name = 'IRAN') " +
//      "order by value desc")

    sc.sql(
      "select ps_partkey, sum(ps_supplycost * ps_availqty) as value " +
        "from partsupp, supplier, nation " +
        "where ps_suppkey = s_suppkey " +
        "and s_nationkey = n_nationkey " +
        "and n_name = 'IRAN' " +
        "group by ps_partkey " +
        "having sum(ps_supplycost * ps_availqty) > (" +
        "select sum(ps_supplycost * ps_availqty) * 0.0001000000 " +
        "from partsupp, supplier, nation " +
        "where ps_suppkey = s_suppkey and s_nationkey = n_nationkey and n_name = 'IRAN') " +
        "order by value desc")
  }
}
