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

/** TPC-H Query 19 */
class TPCH_Q19 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select sum(l_extendedprice* (1 - l_discount)) as revenue " +
//      "from lineitem, part " +
//      "where " +
//      "(p_partkey = l_partkey " +
//      "and p_brand = 'Brand#51' " +
//      "and p_container in ('SM CASE', 'SM BOX', 'SM PACK', 'SM PKG') " +
//      "and l_quantity >= 7 " +
//      "and l_quantity <= 7 + 10 " +
//      "and p_size between 1 and 5 " +
//      "and l_shipmode in ('AIR', 'AIR REG') " +
//      "and l_shipinstruct = 'DELIVER IN PERSON') " +
//      "or (p_partkey = l_partkey " +
//      "and p_brand = 'Brand#32' " +
//      "and p_container in ('MED BAG', 'MED BOX', 'MED PKG', 'MED PACK') " +
//      "and l_quantity >= 10 " +
//      "and l_quantity <= 10 + 10 " +
//      "and p_size between 1 and 10 " +
//      "and l_shipmode in ('AIR', 'AIR REG') " +
//      "and l_shipinstruct = 'DELIVER IN PERSON') " +
//      "or (p_partkey = l_partkey " +
//      "and p_brand = 'Brand#12' " +
//      "and p_container in ('LG CASE', 'LG BOX', 'LG PACK', 'LG PKG') " +
//      "and l_quantity >= 24 " +
//      "and l_quantity <= 24 + 10 " +
//      "and p_size between 1 and 15 " +
//      "and l_shipmode in ('AIR', 'AIR REG') " +
//      "and l_shipinstruct = 'DELIVER IN PERSON');")

    sc.sql(
      "select sum(l_extendedprice * (100 - l_discount)) as revenue " +
        "from lineitem, part " +
        "where " +
        "(p_partkey = l_partkey " +
        "and p_brand = 'Brand#51' " +
        "and p_container in ('SM CASE', 'SM BOX', 'SM PACK', 'SM PKG') " +
        "and l_quantity >= 7 " +
        "and l_quantity <= 7 + 10 " +
        "and p_size between 1 and 5 " +
        "and l_shipmode in ('AIR', 'AIR REG') " +
        "and l_shipinstruct = 'DELIVER IN PERSON') " +
        "or (p_partkey = l_partkey " +
        "and p_brand = 'Brand#32' " +
        "and p_container in ('MED BAG', 'MED BOX', 'MED PKG', 'MED PACK') " +
        "and l_quantity >= 10 " +
        "and l_quantity <= 10 + 10 " +
        "and p_size between 1 and 10 " +
        "and l_shipmode in ('AIR', 'AIR REG') " +
        "and l_shipinstruct = 'DELIVER IN PERSON') " +
        "or (p_partkey = l_partkey " +
        "and p_brand = 'Brand#12' " +
        "and p_container in ('LG CASE', 'LG BOX', 'LG PACK', 'LG PKG') " +
        "and l_quantity >= 24 " +
        "and l_quantity <= 24 + 10 " +
        "and p_size between 1 and 15 " +
        "and l_shipmode in ('AIR', 'AIR REG') " +
        "and l_shipinstruct = 'DELIVER IN PERSON');")
  }
}
