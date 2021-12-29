cmake_minimum_required(VERSION 3.10)
project(sort VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    src/sort.cpp
    test/example.cpp)

add_executable(sort ${SOURCES})
target_include_directories(sort PRIVATE ${PROJECT_SOURCE_DIR}/include)
