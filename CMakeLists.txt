cmake_minimum_required(VERSION 3.10)
project(app)

add_executable(main
main.cpp
input_table.h
input_table.cpp
)

target_compile_options(main PRIVATE "-Wall" "-finput-charset=UTF-8" "-fexec-charset=UTF-8")