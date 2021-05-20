cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(build_files_gen LANGUAGES CXX)

add_subdirectory(my_math_dir)
add_subdirectory(my_print_dir)

add_executable(calc main.cpp)

target_link_libraries(calc my_math my_print)
