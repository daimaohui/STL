cmake_minimum_required(VERSION 3.0)
 
project(STL)
include_directories(include)
aux_source_directory(. CPP_LIST)
aux_source_directory(./src src_CPP_LIST)
add_executable(main ${CPP_LIST} ${src_CPP_LIST})