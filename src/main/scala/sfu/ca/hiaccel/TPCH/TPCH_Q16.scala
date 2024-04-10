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

/** TPC-H Query 16 */
class TPCH_Q16 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select p_brand, p_type, p_size, count(distinct ps_suppkey) as supplier_cnt " +
//      "from partsupp, part " +
//      "where p_partkey = ps_partkey " +
//      "and p_brand <> 'Brand#32' " +
//      "and p_type not like 'SMALL ANODIZED%' " +
//      "and p_size in (43, 7, 27, 21, 5, 15, 36, 11) " +
//      "and ps_suppkey not in (" +
//        "select s_suppkey " +
//        "from supplier " +
//        "where s_comment like '%Customer%Complaints%'" +
//      ") " +
//      "group by p_brand, p_type, p_size " +
//      "order by supplier_cnt desc, p_brand, p_type, p_size;")

    sc.sql(
      "select p_brand, p_type, p_size, count(distinct ps_suppkey) as supplier_cnt " +
        "from partsupp, part " +
        "where p_partkey = ps_partkey " +
        "and p_brand <> 'Brand#32' " +
        "and p_type not like 'SMALL ANODIZED%' " +
        "and p_size in (43, 7, 27, 21, 5, 15, 36, 11) " +
        "and ps_suppkey not in (" +
        "select s_suppkey " +
        "from supplier " +
        "where s_comment like '%Customer%Complaints%'" +
        ") " +
        "group by p_brand, p_type, p_size " +
        "order by supplier_cnt desc, p_brand, p_type, p_size;")
  }
}
