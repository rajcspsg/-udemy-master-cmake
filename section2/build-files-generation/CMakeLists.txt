cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(build_files_gen LANGUAGES CXX)

add_library(my_math addition.cpp division.cpp)
add_library (my_print print_result.cpp)

add_executable(calc main.cpp)

target_link_libraries(calc my_math my_print)