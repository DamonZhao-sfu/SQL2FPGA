package sfu.ca.hiaccel

import scala.sys.process._

/*
        // g++ -o /localhdd/hza215/Vitis_Libraries/database/L2/demos/obj_FPGA_1_xilinx_u280_xdma_201920_3/test_q58.o 
        // -c /localhdd/hza215/Vitis_Libraries/database/L2/demos/host/q58/sf1_sql2fpga_fpga/test_q58.cpp 
        // -D XDEVICE=xilinx_u280_xdma_201920_3 -I/localhdd/hza215/Vitis_Libraries/database/L1/include/hw 
        // -I/localhdd/hza215/Vitis_Libraries/database/L3/include/sw  
        // -I/localhdd/hza215/Vitis_Libraries/database/L2/demos/host -g 
        // -I/localhdd/hza215/orc/ORC-1.9.0-SNAPSHOT-Linux/include -I/localhdd/hza215/include 
        // -I/localhdd/hza215/Vitis_Libraries/database/ext/xcl2 -std=c++17 -O2 -g -w -fPIC 
        // -I/localhdd/hza215/Vitis_Libraries/database/L2/demos/host/q58/sf1_sql2fpga_fpga 
        // -I/opt/xilinx/xrt/include -I/local-scratch/Xilinx/Vivado/2020.2/include
        // -Wall -Wno-unknown-pragmas -Wno-unused-label -pthread -mavx512f 

*/

class SQL2FPGA_Linker {
    def compileCppToSharedLibrary(queryNo: Int, config: SQL2FPGA_QConfig, libPath: String): Boolean = {
        // Call the JNI wrapper with command-line arguments
        val baseLibPath = config.basePath
        val cppHostName = s"$baseLibPath/test_q" + queryNo + ".cpp"
        val soFilePath = libPath
        //val soFilePath = s"/localhdd/hza215/gluten/SQL2FPGA/libsql2fpga.so"
        val queryOFilePath = s"$baseLibPath/test_q1.o"
        val xcl2FilePath = s"$baseLibPath/xcl2.o"
        val jniLibPath = s"/usr/lib/jvm/java-8-openjdk-amd64/include"
        val orcLibPath = s"/localhdd/hza215/orc-1.9.0/orc-1.9.0/build/ORC-1.9.0-Linux"
        val systemLibPath = s"/localhdd/hza215/include"
        var device = "xilinx_u280_xdma_201920_3"
        val vitisLibPath = s"/localhdd/hza215/Vitis_Libraries/database"
        val vivadoLibPath = s"/local-scratch/Xilinx/Vivado/2020.2/"
        var customLdPath = s"/localhdd/hza215/conda/envs/velox-build/bin"
    
        val generatequeryOFileCommand = s"""g++ -o $queryOFilePath -c $cppHostName
        -D XDEVICE=$device -I$vitisLibPath/L1/include/hw -I$vitisLibPath/L3/include/sw -I$jniLibPath -I$jniLibPath/linux
        -I$vitisLibPath/L2/demos/host -g  -I$vitisLibPath/ext/xcl2 -I$orcLibPath/include -I$systemLibPath
        -std=c++17 -O2 -g -fPIC -I$vitisLibPath/L2/demos/host/q01/sf1_sql2fpga_fpga -I/opt/xilinx/xrt/include 
        -I$vivadoLibPath/include -w -Wall -Wno-unknown-pragmas -Wno-unused-label -pthread -mavx512f -B$customLdPath"""
        val generatequeryOFileCommandExitCode = executeCommand(generatequeryOFileCommand)
        println("generat shared file command" + generatequeryOFileCommandExitCode)

        if (generatequeryOFileCommandExitCode == 0) {
            println("generate file success.")
        } else {
            println(s"generate file failed exit code $generatequeryOFileCommandExitCode.")
        }

        // g++ -o /localhdd/hza215/Vitis_Libraries/database/L2/demos/obj_FPGA_1_xilinx_u280_xdma_201920_3/xcl2.o -c /localhdd/hza215/Vitis_Libraries/database/ext/xcl2/xcl2.cpp -D XDEVICE=xilinx_u280_xdma_201920_3 -I/localhdd/hza215/Vitis_Libraries/database/L1/include/hw -I/localhdd/hza215/Vitis_Libraries/database/L3/include/sw  -I/localhdd/hza215/Vitis_Libraries/database/L2/demos/host -g  -I/localhdd/hza215/orc/ORC-1.9.0-SNAPSHOT-Linux/include -I/localhdd/hza215/include -I/localhdd/hza215/Vitis_Libraries/database/ext/xcl2 -std=c++17 -O2 -g -w -fPIC -I/localhdd/hza215/Vitis_Libraries/database/L2/demos/host/q58/sf1_sql2fpga_fpga -I/opt/xilinx/xrt/include -I/local-scratch/Xilinx/Vivado/2020.2/include -Wall -Wno-unknown-pragmas -Wno-unused-label -pthread -mavx512f  -I/localhdd/hza215/Vitis_Libraries/database/ext/xcl2
        val generateXcl2FileCommand = s"""g++ -o $xcl2FilePath 
        -c $vitisLibPath/ext/xcl2/xcl2.cpp -D XDEVICE=$device 
        -I$vitisLibPath/L1/include/hw -I$vitisLibPath/L3/include/sw -I$jniLibPath -I$jniLibPath/linux
        -I$vitisLibPath/L2/demos/host -g  -I$vitisLibPath/ext/xcl2 -std=c++17 -O2 -g 
        -fPIC -I$vitisLibPath/L2/demos/host/q01/sf1_sql2fpga_fpga -I/opt/xilinx/xrt/include 
        -I$vivadoLibPath/include -w -Wall -Wno-unknown-pragmas -Wno-unused-label 
        -pthread -I$vitisLibPath/ext/xcl2 -B$customLdPath"""
        println("generat shared file command" + generateXcl2FileCommand)
        val exitCodeXCL = executeCommand(generateXcl2FileCommand)

        val generateSharedFilecommand = s"g++ -shared -o $soFilePath $queryOFilePath $xcl2FilePath -fPIC -D XDEVICE=xilinx_u280_xdma_201920_3 -I/localhdd/hza215/Vitis_Libraries/database/L1/include/hw " +
          s"-I/localhdd/hza215/Vitis_Libraries/database/L3/include/sw  -I/localhdd/hza215/Vitis_Libraries/database/L2/demos/host -g  -I$orcLibPath/include " +
          s"-I/localhdd/hza215/include -I/localhdd/hza215/Vitis_Libraries/database/ext/xcl2 -std=c++17 -O2 -g -w -I/opt/xilinx/xrt/include " +
          s"-I/local-scratch/Xilinx/Vivado/2020.2/include -Wall -Wno-unknown-pragmas -Wno-unused-label -pthread -mavx512f " +
          s" -pthread -L/opt/xilinx/xrt/lib -lxilinxopencl  -L/local-scratch/Xilinx/Vivado/2020.2/lnx64/tools/fpo_v7_0" +
          s" -Wl,--as-needed -lgmp -lmpfr -lIp_floating_point_v7_0_bitacc_cmodel " +
          s"-L$orcLibPath/lib -lorc -lprotobuf -lsnappy -lz -llz4 -lzstd -L/localhdd/hza215/lib -larrow " + 
          s"-B$customLdPath"
        println("generat shared file command" + generateSharedFilecommand)
        val exitCodeShared = executeCommand(generateSharedFilecommand)

        exitCodeShared == 0 && exitCodeXCL == 0 && generatequeryOFileCommandExitCode == 0
    }

    private def executeCommand(command: String): Int = {
        import sys.process._

        try {
            command.!
        } catch {
        case ex: Exception =>
            println(s"Error executing command: $command")
            ex.printStackTrace()
            -1
        }
  }
}