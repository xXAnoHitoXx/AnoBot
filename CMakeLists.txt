cmake_minimum_required(VERSION 3.0.0)
project(AnoBot VERSION 0.1.0)

enable_testing()

include_directories(src/*)
file(GLOB SOURCES "src/*/*.cpp")

add_executable(AnoBot main.cpp ${SOURCES})

find_package(Catch2 CONFIG REQUIRED)

include(CTest)
include(Catch)

add_executable(Test test/test.cpp)
target_link_libraries(Test PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(Test)