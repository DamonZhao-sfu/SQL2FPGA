package sfu.ca.hiaccel.TPCH

import org.apache.spark.sql.{DataFrame, SparkSession}
import sfu.ca.hiaccel.SQL2FPGA_Query
abstract class TPCH_Queries extends SQL2FPGA_Query {
  def TPCH_execute(sc: SparkSession, tpchSchemaProvider: TpchSchemaProvider): DataFrame
}

