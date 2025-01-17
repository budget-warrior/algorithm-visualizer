cmake_minimum_required(VERSION 3.10)

project(AlgorithmVisualizer)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(bubble_sort src/bubble_sort.cpp)
add_library(utils src/utils.cpp)
 
add_executable(AlgorithmVisualizer src/main.cpp)

target_link_libraries(AlgorithmVisualizer bubble_sort)
target_link_libraries(AlgorithmVisualizer utils)