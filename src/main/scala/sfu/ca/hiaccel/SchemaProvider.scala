package sfu.ca.hiaccel

import org.apache.spark.sql.DataFrame

class SchemaProvider {
  var dfMap: Map[String, DataFrame] = Map.empty[String, DataFrame]
}