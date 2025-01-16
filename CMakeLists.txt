cmake_minimum_required(VERSION 3.10)

project(AlgorithmVisualizer)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

add_executable(AlgorithmVisualizer src/main.cpp)

include_directories(include)

# target_link_libraries(AlgorithmVisualizer <library_name>)