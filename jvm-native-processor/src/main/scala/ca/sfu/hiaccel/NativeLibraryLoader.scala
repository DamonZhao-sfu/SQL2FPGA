package ca.sfu.hiaccel

object NativeLibraryLoader {
  def load(): Unit = {
    System.load("/localhdd/hza215/lib/libarrow.so")
    // load native engine code
  }
}
