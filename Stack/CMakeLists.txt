CMAKE_MINIMUM_REQUIRED(VERSION 2.8.3)
PROJECT(stack)
SET(CMAKE_BUILD_TYPE "Debug")                                                                                           
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")                                                         
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

INCLUDE_DIRECTORIES(include)
ADD_LIBRARY(minStack src/minStack.cpp)
ADD_EXECUTABLE(main src/main.cpp)
TARGET_LINK_LIBRARIES(main minStack)

