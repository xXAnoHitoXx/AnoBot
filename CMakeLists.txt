cmake_minimum_required(VERSION 3.0.0)
project(AnoBot VERSION 0.1.0)

add_executable(AnoBot main.cpp)

add_subdirectory(Chess)
link_libraries(Chess)
