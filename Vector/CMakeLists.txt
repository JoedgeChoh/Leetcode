cmake_minimum_required(VERSION 2.8)
project(demo)

## GDB 设置
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)

# add_library(print src/printf.cpp)
# add_library(array src/array.cpp)
# add_library(rotate src/rotate.cpp)
# add_library(maxprofit src/maxprofit.cpp)
# add_library(singleNumber src/singleNumber.cpp)

add_library(test SHARED src/test.cpp)
add_executable(main src/main.cpp)

# target_link_libraries(main print array rotate maxprofit singleNumber)
target_link_libraries(main test)
