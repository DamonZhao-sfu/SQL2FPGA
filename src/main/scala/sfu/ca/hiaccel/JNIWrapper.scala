package sfu.ca.hiaccel;

class JNIWrapper {
  @native def runQuery(argv: Array[String]): Unit
  @native def test(): Unit
}

