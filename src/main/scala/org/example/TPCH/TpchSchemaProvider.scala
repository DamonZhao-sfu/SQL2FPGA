package org.example
import org.apache.spark.sql.functions.{col,regexp_replace, trim, expr}
import org.apache.spark.sql.{DataFrame, SparkSession}

// TPC-H table schemas
case class Customer_tpch(
                     c_custkey  : Int, //adsf
                     c_name     : String,
                     c_address  : String,
                     c_nationkey: Int,
                     c_phone    : String,
//                     c_acctbal: Double,
//                     c_acctbal: Long,
                     c_acctbal  : Int,
                     c_mktsegment: String,
                     c_comment  : String)

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

case class Nation(
                   n_nationkey: Int,
                   n_name: String,
                   n_regionkey: Int,
                   n_comment: String)

case class Order(
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
//                 p_retailprice: Double,
//                 p_retailprice: Long,
                 p_retailprice: Int,
                 p_comment: String)

case class Partsupp(
                     ps_partkey: Int,
                     ps_suppkey: Int,
                     ps_availqty: Int,
//                     ps_supplycost: Double,
//                     ps_supplycost: Long,
                     ps_supplycost: Int,
                     ps_comment: String)

case class Region(
                   r_regionkey: Int,
                   r_name: String,
                   r_comment: String)

case class Supplier(
                     s_suppkey: Int,
                     s_name: String,
                     s_address: String,
                     s_nationkey: Int,
                     s_phone: String,
//                     s_acctbal: Double,
//                     s_acctbal: Long,
                     s_acctbal: Int,
                     s_comment: String)



class TpchSchemaProvider(sc: SparkSession, inputDir: String) {
  import sc.implicits._

  val lineitemPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/lineitem")
    .withColumn("l_orderkey",      col("l_orderkey").cast("int"))
    .withColumn("l_partkey",      col("l_partkey").cast("int"))
    .withColumn("l_suppkey",      col("l_suppkey").cast("int"))
    .withColumn("l_linenumber",      col("l_linenumber").cast("int"))
    .withColumn("l_quantity",      (col("l_quantity")      * 100).cast("int"))
    .withColumn("l_extendedprice", (col("l_extendedprice") * 100).cast("int"))
    .withColumn("l_discount",      (col("l_discount")      * 100).cast("int"))
    .withColumn("l_tax",           (col("l_tax")           * 100).cast("int"))
    .withColumn("l_returnflag",    expr("ascii(substr(l_returnflag, 1, 1))"))
    .withColumn("l_linestatus",    expr("ascii(substr(l_linestatus, 1, 1))"))
    .withColumn("l_shipdate",      regexp_replace(col("l_shipdate"), "-", "").cast("int"))
    .withColumn("l_commitdate",    regexp_replace(col("l_commitdate"), "-", "").cast("int"))
    .withColumn("l_receiptdate",   regexp_replace(col("l_receiptdate"), "-", "").cast("int"))

  val customerPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/customer")
    .withColumn("c_custkey",      col("c_custkey").cast("int"))
    .withColumn("c_nationkey",      col("c_nationkey").cast("int"))
    .withColumn("c_acctbal",      (col("c_acctbal")      * 100).cast("int"))


  val nationPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/nation")
    .withColumn("n_nationkey",      col("n_nationkey").cast("int"))
    .withColumn("n_regionkey",      col("n_regionkey").cast("int"))

  val regionPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/region")
    .withColumn("r_regionkey",      col("r_regionkey").cast("int"))

  val orderPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/orders")
    .withColumn("o_orderkey",      col("o_orderkey").cast("int"))
    .withColumn("o_custkey",      col("o_custkey").cast("int"))
    .withColumn("o_orderstatus",    expr("ascii(substr(o_orderstatus, 1, 1))"))
    .withColumn("o_totalprice",       (col("o_totalprice")      * 100).cast("int"))
    .withColumn("o_orderdate",      regexp_replace(col("o_orderdate"), "-", "").cast("int"))
    .withColumn("o_shippriority",      col("o_shippriority").cast("int"))

  val partPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/part")
    .withColumn("p_partkey", col("p_partkey").cast("int"))
    .withColumn("p_size", col("p_size").cast("int"))
    .withColumn("p_retailprice",       (col("p_retailprice")      * 100).cast("int"))

  val partsuppPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/partsupp")
    .withColumn("ps_partkey", col("ps_partkey").cast("int"))
    .withColumn("ps_suppkey", col("ps_suppkey").cast("int"))
    .withColumn("ps_availqty",       col("ps_availqty").cast("int"))
    .withColumn("ps_supplycost",       (col("ps_supplycost")*100).cast("int"))

  val supplierPre = sc.read.format("parquet")
    .load("file://" + inputDir + "/supplier")
    .withColumn("s_suppkey", col("s_suppkey").cast("int"))
    .withColumn("s_nationkey", col("s_nationkey").cast("int"))
    .withColumn("s_acctbal",       (col("s_acctbal")*100).cast("int"))


  val dfMap = Map(
    "lineitem" -> lineitemPre.as[Lineitem].toDF(),
    "customer" -> customerPre.as[Customer_tpch].toDF(),
    "nation" -> nationPre.as[Nation].toDF(),
    "region" -> regionPre.as[Region].toDF(),
    "orders" -> orderPre.as[Order].toDF(),
    "part" -> partPre.as[Part].toDF(),
    "partsupp" -> partsuppPre.as[Partsupp].toDF(),
    "supplier" -> supplierPre.as[Supplier].toDF(),

    /*
        "customer" -> sc.read.textFile(inputDir + "/customer.tbl*").map(_.split('|')).map(p =>
          Customer(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim.toInt, p(4).trim, (p(5).trim.toDouble*100).toInt, p(6).trim, p(7).trim)).toDF(),

        "lineitem" -> sc.read.textFile(inputDir + "/lineitem.tbl*").map(_.split('|')).map(p =>
          Lineitem(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, p(3).trim.toInt, (p(4).trim.toDouble*100).toInt, (p(5).trim.toDouble*100).toInt, (p(6).trim.toDouble*100).toInt, (p(7).trim.toDouble*100).toInt, p(8).trim.indexOf(0).toInt, p(9).trim.indexOf(0).toInt, p(10).trim.replace("-", "").toInt, p(11).trim.replace("-", "").toInt, p(12).trim.replace("-", "").toInt, p(13).trim, p(14).trim, p(15).trim)).toDF(),

        "nation" -> sc.read.textFile(inputDir + "/nation.tbl*").map(_.split('|')).map(p =>
          Nation(p(0).trim.toInt, p(1).trim, p(2).trim.toInt, p(3).trim)).toDF(),

        "region" -> sc.read.textFile(inputDir + "/region.tbl*").map(_.split('|')).map(p =>
          Region(p(0).trim.toInt, p(1).trim, p(2).trim)).toDF(),

        "order" -> sc.read.textFile(inputDir + "/orders.tbl*").map(_.split('|')).map(p =>
          Order(p(0).trim.toInt, p(1).trim.toInt, p(2)(0).toInt, (p(3).trim.toDouble*100).toInt, p(4).trim.replace("-", "").toInt, p(5).trim, p(6).trim, p(7).trim.toInt, p(8).trim)).toDF(),

        "part" -> sc.read.textFile(inputDir + "/part.tbl*").map(_.split('|')).map(p =>
          Part(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim, p(4).trim, p(5).trim.toInt, p(6).trim, (p(7).trim.toDouble*100).toInt, p(8).trim)).toDF(),

        "partsupp" -> sc.read.textFile(inputDir + "/partsupp.tbl*").map(_.split('|')).map(p =>
          Partsupp(p(0).trim.toInt, p(1).trim.toInt, p(2).trim.toInt, (p(3).trim.toDouble*100).toInt, p(4).trim)).toDF(),

        "supplier" -> sc.read.textFile(inputDir + "/supplier.tbl*").map(_.split('|')).map(p =>
          Supplier(p(0).trim.toInt, p(1).trim, p(2).trim, p(3).trim.toInt, p(4).trim, (p(5).trim.toDouble*100).toInt, p(6).trim)).toDF()
      */

  /* "part" -> sc.read.format("parquet").load("file://" + inputDir + "/part"),
   "order" -> sc.read.format("parquet").load("file://" + inputDir + "/orders"),
   "customer" -> sc.read.format("parquet").load("file://" + inputDir + "/customer"),
   "supplier" -> sc.read.format("parquet").load("file://" + inputDir + "/supplier"),
   "partsupp" -> sc.read.format("parquet").load("file://" + inputDir + "/partsupp"),
   "region" -> sc.read.format("parquet").load("file://" + inputDir + "/region"),
   "nation" -> sc.read.format("parquet").load("file://" + inputDir + "/nation")*/

  )

  // for implicits
  val customer: DataFrame = dfMap("customer")
  val lineitem: DataFrame = dfMap("lineitem")
  val nation: DataFrame = dfMap("nation")
  val region: DataFrame = dfMap("region")
  val order: DataFrame = dfMap("orders")
  val part: DataFrame = dfMap("part")
  val partsupp: DataFrame = dfMap("partsupp")
  val supplier: DataFrame = dfMap("supplier")

  dfMap.foreach {
    case (key, value) => {
      value.printSchema()
      value.show()
      value.createOrReplaceTempView(key)
    }
  }
}