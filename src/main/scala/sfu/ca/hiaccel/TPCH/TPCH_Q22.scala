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

/** TPC-H Query 22 */
class TPCH_Q22 extends TPCH_Queries {

  override def TPCH_execute(sc: SparkSession, schemaProvider: TpchSchemaProvider): DataFrame = {

    // Original Version
//    sc.sql("select cntrycode, count(*) as numcust, sum(c_acctbal) as totacctbal " +
//      "from (select substring(c_phone from 1 for 2) as cntrycode, c_acctbal " +
//      "from customer " +
//      "where substring(c_phone from 1 for 2) in ('19', '11', '16', '27', '15', '22', '12') " +
//      "and c_acctbal > (select avg(c_acctbal) from customer where c_acctbal > 0.00 and substring(c_phone from 1 for 2) in ('19', '11', '16', '27', '15', '22', '12')) " +
//      "and not exists (select * from orders where o_custkey = c_custkey)) as custsale " +
//      "group by cntrycode " +
//      "order by cntrycode;")

   /* sc.sql(
      "select cntrycode, count(*) as numcust, sum(c_acctbal) as totacctbal " +
        "from (select substring(c_phone from 1 for 2) as cntrycode, c_acctbal " +
        "from customer " +
        "where substring(c_phone from 1 for 2) in ('19', '11', '16', '27', '15', '22', '12') " +
        "and c_acctbal > (select avg(c_acctbal) " +
        "from customer " +
        "where c_acctbal > 0 " +
        "and substring(c_phone from 1 for 2) in ('19', '11', '16', '27', '15', '22', '12')) " +
        "and not exists (select * from orders where o_custkey = c_custkey)) as custsale " +
        "group by cntrycode " +
        "order by cntrycode;")*/
    sc.sql("SELECT     cntrycode,     count(*) AS numcust,     sum(c_acctbal) AS totacctbal FROM (     SELECT         substring(c_phone FROM 1 FOR 2) AS cntrycode,         c_acctbal     FROM         customer     WHERE         substring(c_phone FROM 1 FOR 2) IN ('13', '31', '23', '29', '30', '18', '17')         AND c_acctbal > (             SELECT                 avg(c_acctbal)             FROM                 customer             WHERE                 c_acctbal > 0.00                 AND substring(c_phone FROM 1 FOR 2) IN ('13', '31', '23', '29', '30', '18', '17'))             AND NOT EXISTS (                 SELECT                     *                 FROM                     orders                 WHERE                     o_custkey = c_custkey)) AS custsale GROUP BY     cntrycode ORDER BY     cntrycode;")

  }
}
