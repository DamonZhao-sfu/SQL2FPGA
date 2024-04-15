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
package sfu.ca.hiaccel

import java.lang.{Long => JLong}
import java.security.InvalidParameterException
import java.util.{ArrayList => JArrayList, HashMap => JHashMap, List => JList, Map => JMap}

case class JoinParams() {
  // Whether preProjection is needed in streamed side.
  var streamPreProjectionNeeded = false

  // Whether preProjection is needed in build side.
  var buildPreProjectionNeeded = false

  // Whether postProjection is needed after Join.
  var postProjectionNeeded = true

  // Whether is BHJ
  var isBHJ = false

  // Whether the join is with condition
  var isWithCondition = false
}

case class AggregationParams() {
  // Whether rowConstruction is needed.
  var rowConstructionNeeded = false

  // Whether extraction from intermediate struct is needed.
  var extractionNeeded = false
}

class SQL2FPGAContext extends Serializable {
  // A map stores the relationship between function name and function id.
  private val functionMap = new JHashMap[String, JLong]()

  // A map stores the relationship between Spark operator id and its respective Substrait Rel ids.
  private val operatorToRelsMap: JMap[JLong, JList[JLong]] = new JHashMap[JLong, JList[JLong]]()

  // Only for debug conveniently
  private val operatorToPlanNameMap = new JHashMap[JLong, String]()

  // A map stores the relationship between join operator id and its param.
  private val joinParamsMap = new JHashMap[JLong, JoinParams]()

  // A map stores the relationship between aggregation operator id and its param.
  private val aggregationParamsMap = new JHashMap[JLong, AggregationParams]()

  private var iteratorIndex: JLong = 0L
  private var operatorId: JLong = 0L
  private var relId: JLong = 0L
}
