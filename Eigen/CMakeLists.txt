cmake_minimum_required(VERSION 2.8.3)
project(eigen_test)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include_directories(/usr/include/eigen3)
add_executable(main src/main.cpp)

