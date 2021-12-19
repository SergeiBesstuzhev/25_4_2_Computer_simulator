cmake_minimum_required(VERSION 3.21)
project("25_4_2_Computer_simulator" VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(25.4.2_Computer_simulator src/main.cpp include/input.h src/input.cpp include/operation.h src/operation.cpp)

target_include_directories(25.4.2_Computer_simulator PUBLIC include)