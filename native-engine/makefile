# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++17 -fPIC -Wall -O3

LIBPATH := /localhdd/hza215

# JNI_INCLUDE=$JAVA_HOME/include

# Include directories for Apache Arrow
INCLUDES := -I${LIBPATH}/include -I$(JNI_INCLUDE) -I$(JNI_INCLUDE)/linux/

# Linker flags
LDFLAGS := -L${LIBPATH}/lib -larrow -larrow_dataset -larrow_orc -shared

# Source files
SOURCES := NativeORCReader.cpp

# Output
LIBRARY := nativeEngine.so

all: $(LIBRARY)

$(LIBRARY): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SOURCES) $(LDFLAGS) -o $@

clean:
	rm -f $(LIBRARY)