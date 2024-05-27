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

import org.apache.spark.sql.{DataFrame, SparkSession}
import org.apache.spark.sql.types.DateType

import sfu.ca.hiaccel.SchemaProvider

import java.math.BigDecimal

// TPC-H table schemas
case class Customer(
    c_custkey: Int, // adsf
    c_name: String,
    c_address: String,
    c_nationkey: Int,
    c_phone: String,
    c_acctbal: Int,
    c_mktsegment: String,
    c_comment: String)

case class Lineitem(
    l_orderkey: Int,
    l_partkey: Int,
    l_suppkey: Int,
    l_linenumber: Int,
    l_quantity: Int,
    l_extendedprice: Int,
    l_discount: Int,
    l_tax: Int,
    l_returnflag: Int,
    l_linestatus: Int,
    l_shipdate: Int,
    l_commitdate: Int,
    l_receiptdate: Int,
    l_shipinstruct: String,
    l_shipmode: String,
    l_comment: String)

case class Nation(n_nationkey: Int, n_name: String, n_regionkey: Int, n_comment: String)

case class Orders(
    o_orderkey: Int,
    o_custkey: Int,
//                  o_orderstatus: String,
    o_orderstatus: Int,
//                  o_totalprice: Double,
//                  o_totalprice: Long,
    o_totalprice: Int,
//                  o_orderdate: String,
    o_orderdate: Int,
    o_orderpriority: String,
    o_clerk: String,
    o_shippriority: Int,
    o_comment: String)

case class Part(
    p_partkey: Int,
    p_name: String,
    p_mfgr: String,
    p_brand: String,
    p_type: String,
    p_size: Int,
    p_container: String,
    p_retailprice: Int,
    p_comment: String)

case class Partsupp(
    ps_partkey: Int,
    ps_suppkey: Int,
    ps_availqty: Int,
    ps_supplycost: Int,
    ps_comment: String)

case class Region(r_regionkey: Int, r_name: String, r_comment: String)

case class Supplier(
    s_suppkey: Int,
    s_name: String,
    s_address: String,
    s_nationkey: Int,
    s_phone: String,
    s_acctbal: Int,
    s_comment: String)

class TpchSchemaProvider(sc: SparkSession, inputDir: String, format: String)
  extends SchemaProvider {
  import sc.implicits._

  dfMap = Map(
    "lineitem" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/lineitem")
      .map(
        row => {
          Lineitem(
            l_orderkey = row.getAs[Long]("l_orderkey").toInt,
            l_partkey = row.getAs[Long]("l_partkey").toInt,
            l_suppkey = row.getAs[Long]("l_suppkey").toInt,
            l_linenumber = row.getAs[Int]("l_linenumber"),
            l_quantity =
              row.getAs[java.math.BigDecimal]("l_quantity").multiply(new BigDecimal("100")).intValueExact(),
            l_extendedprice =
              row.getAs[java.math.BigDecimal]("l_extendedprice").multiply(new BigDecimal("100")).intValueExact(),
            l_discount =
              row.getAs[java.math.BigDecimal]("l_discount").multiply(new BigDecimal("100")).intValueExact(),
            l_tax =
              row.getAs[java.math.BigDecimal]("l_tax").multiply(new BigDecimal("100")).intValueExact(),
            l_returnflag = row.getAs[String]("l_returnflag")(0).toInt,
            l_linestatus = row.getAs[String]("l_linestatus")(0).toInt,
            l_commitdate = row.getAs[DateType]("l_commitdate").toString.replace("-", "").toInt,
            l_receiptdate = row.getAs[DateType]("l_receiptdate").toString.replace("-", "").toInt,
            l_shipinstruct = row.getAs[String]("l_shipinstruct").trim,
            l_shipmode = row.getAs[String]("l_shipmode").trim,
            l_comment = row.getAs[String]("l_comment").trim,
            l_shipdate = row.getAs[DateType]("l_shipdate").toString.replace("-", "").toInt
          )
        })
      .toDF(),
    "customer" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/customer")
      .map(
        row => {
          Customer(
            c_custkey = row.getAs[Long]("c_custkey").toInt,
            c_name = row.getAs[String]("c_name").trim,
            c_address = row.getAs[String]("c_address").trim,
            c_nationkey = row.getAs[Long]("c_nationkey").toInt,
            c_phone = row.getAs[String]("c_phone").trim,
            c_acctbal =
              row.getAs[java.math.BigDecimal]("c_acctbal").multiply(new BigDecimal("100")).intValueExact(),
            c_comment = row.getAs[String]("c_comment").trim,
            c_mktsegment = row.getAs[String]("c_mktsegment").trim
          )
        })
      .toDF(),
    "nation" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/nation")
      .map(
        row => {
          Nation(
            n_nationkey = row.getAs[Long]("n_nationkey").toInt,
            n_name = row.getAs[String]("n_name").trim,
            n_regionkey = row.getAs[Long]("n_regionkey").toInt,
            n_comment = row.getAs[String]("n_comment").trim
          )
        })
      .toDF(),
    "region" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/region")
      .map(
        row => {
          Region(
            r_regionkey = row.getAs[Long]("r_regionkey").toInt,
            r_name = row.getAs[String]("r_name").trim,
            r_comment = row.getAs[String]("r_comment")
          )
        })
      .toDF(),
    "orders" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/orders")
      .map(
        row => {
          Orders(
            o_orderkey = row.getAs[Long]("o_orderkey").toInt,
            o_custkey = row.getAs[Long]("o_custkey").toInt,
            o_orderstatus = row.getAs[String]("o_orderstatus")(0).toInt,
            o_totalprice =
              row.getAs[java.math.BigDecimal]("o_totalprice").multiply(new BigDecimal("100")).intValueExact(),
            o_orderdate = row.getAs[DateType]("o_orderdate").toString.replace("-", "").toInt,
            o_orderpriority = row.getAs[String]("o_orderpriority").trim,
            o_clerk = row.getAs[String]("o_clerk").trim,
            o_shippriority = row.getAs[Int]("o_shippriority"),
            o_comment = row.getAs[String]("o_comment").trim
          )
        })
      .toDF(),
    "part" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/part")
      .map(
        row => {
          Part(
            p_partkey = row.getAs[Long]("p_partkey").toInt,
            p_name = row.getAs[String]("p_name").trim,
            p_mfgr = row.getAs[String]("p_mfgr").trim,
            p_brand = row.getAs[String]("p_brand").trim,
            p_type = row.getAs[String]("p_type").trim,
            p_size = row.getAs[Int]("p_size"),
            p_container = row.getAs[String]("p_container").trim,
            p_retailprice =
              row.getAs[java.math.BigDecimal]("p_retailprice").multiply(new BigDecimal("100")).intValueExact(),
            p_comment = row.getAs[String]("p_comment").trim
          )
        })
      .toDF(),
    "partsupp" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/partsupp")
      .map(
        row => {
          Partsupp(
            ps_partkey = row.getAs[Long]("ps_partkey").toInt,
            ps_suppkey = row.getAs[Long]("ps_suppkey").toInt,
            ps_availqty = row.getAs[Int]("ps_availqty"),
            ps_supplycost =
              row.getAs[java.math.BigDecimal]("ps_supplycost").multiply(new BigDecimal("100")).intValueExact(),
            ps_comment = row.getAs[String]("ps_comment").trim
          )
        })
      .toDF(),
    "supplier" -> sc.read
      .format(format)
      .load("file://" + inputDir + "/supplier")
      .map(
        row => {
          Supplier(
            s_suppkey = row.getAs[Long]("s_suppkey").toInt,
            s_name = row.getAs[String]("s_name").trim,
            s_address = row.getAs[String]("s_address").trim,
            s_nationkey = row.getAs[Long]("s_nationkey").toInt,
            s_phone = row.getAs[String]("s_phone").trim,
            s_acctbal =
              row.getAs[java.math.BigDecimal]("s_acctbal").multiply(new BigDecimal("100")).intValueExact(),
            s_comment = row.getAs[String]("s_comment").trim
          )
        })
      .toDF())

    /*   "customer" -> sc.read.textFile(inputDir + "/customer.tbl*").map(_.split('|')).map(p =>
          Customer(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim.toInt, p(4).trim, (p(5).trim.toDouble*100).toInt, p(6).trim, p(7).trim)).toDF(),

        "lineitem" -> sc.read.textFile(inputDir + "/lineitem.tbl*").map(_.split('|')).
        map(p =>
          Lineitem(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, (p(4).trim.toDouble*100).toInt, (p(5).trim.toDouble*100).toInt, (p(6).trim.toDouble*100).toInt, (p(7).trim.toDouble*100).toInt, p(8).trim.indexOf(0).toInt, p(9).trim.indexOf(0).toInt, p(10).trim.replace("-", "").toInt, p(11).trim.replace("-", "").toInt, p(12).trim.replace("-", "").toInt, p(13).trim, p(14).trim, p(15).trim)).toDF(),

        "nation" -> sc.read.textFile(inputDir + "/nation.tbl*").map(_.split('|')).map(p =>
          Nation(p(0).trim.toInt, p(1).trim, p(2).trim.toInt, p(3).trim)).toDF(),

        "region" -> sc.read.textFile(inputDir + "/region.tbl*").map(_.split('|')).map(p =>
          Region(p(0).trim.toInt, p(1).trim, p(2).trim)).toDF(),

        "orders" -> sc.read.textFile(inputDir + "/orders.tbl*").map(_.split('|')).map(p =>
          Orders(p(0).trim.toInt, p(1).trim.toInt, p(2)(0).toInt, (p(3).trim.toDouble*100).toInt, p(4).trim.replace("-", "").toInt, p(5).trim, p(6).trim, p(7).trim.toInt, p(8).trim)).toDF(),

        "part" -> sc.read.textFile(inputDir + "/part.tbl*").map(_.split('|')).map(p =>
          Part(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim, p(5).trim.toInt, p(6).trim, (p(7).trim.toDouble*100).toInt, p(8).trim)).toDF(),

        "partsupp" -> sc.read.textFile(inputDir + "/partsupp.tbl*").map(_.split('|')).map(p =>
          Partsupp(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, (p(3).trim.toDouble*100).toInt, p(4).trim)).toDF(),

        "supplier" -> sc.read.textFile(inputDir + "/supplier.tbl*").map(_.split('|')).map(p =>
          Supplier(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim.toInt, p(4).trim, (p(5).trim.toDouble*100).toInt, p(6).trim)).toDF()
     */
/*
dfMap = Map(
   "lineitem" -> sc.read.format("orc").load("file://" + inputDir + "/lineitem"),
   "part" -> sc.read.format("orc").load("file://" + inputDir + "/part"),
   "orders" -> sc.read.format("orc").load("file://" + inputDir + "/orders"),
   "customer" -> sc.read.format("orc").load("file://" + inputDir + "/customer"),
   "supplier" -> sc.read.format("orc").load("file://" + inputDir + "/supplier"),
   "partsupp" -> sc.read.format("orc").load("file://" + inputDir + "/partsupp"),
   "region" -> sc.read.format("orc").load("file://" + inputDir + "/region"),
   "nation" -> sc.read.format("orc").load("file://" + inputDir + "/nation")
  )*/

  // for implicits
//  val customer: DataFrame = dfMap("customer")
 /* val lineitem: DataFrame = dfMap("lineitem")
  val nation: DataFrame = dfMap("nation")
  val region: DataFrame = dfMap("region")
  val orders: DataFrame = dfMap("orders")
  val part: DataFrame = dfMap("part")
  val partsupp: DataFrame = dfMap("partsupp")
  val supplier: DataFrame = dfMap("supplier")*/

  dfMap.foreach {
    case (key, value) => {
      value.printSchema()
      value.show()
      println("table: " + key + "row:" + value.count())
      value.createOrReplaceTempView(key)
    }
  }
}
