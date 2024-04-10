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
