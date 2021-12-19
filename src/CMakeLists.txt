cmake_minimum_required(VERSION 3.21)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(25_4_2_Computer_simulator main.cpp ${MY_INCLUDE_DIR}/input.h ${MY_INCLUDE_DIR}/operations.h input.cpp operations.cpp)

target_include_directories(25_4_2_Computer_simulator PUBLIC ${MY_INCLUDE_DIR})