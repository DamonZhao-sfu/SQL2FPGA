package sfu.ca.hiaccel.TPCDS

import org.apache.spark.sql.{DataFrame, SparkSession}
import sfu.ca.hiaccel.SQL2FPGA_Query
abstract class TPCDS_Queries extends SQL2FPGA_Query {
  def TPCDS_execute(sc: SparkSession, tpcdsSchemaProvider: TpcdsSchemaProvider): DataFrame
}

