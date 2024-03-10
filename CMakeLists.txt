# set cmake standards
cmake_minimum_required(VERSION 3.10)
project(cli_blackjack)
enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# fetch google test
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
)

FetchContent_MakeAvailable(googletest)

# add executables
add_executable(main "./src/main.cpp")
add_executable(test_1 "./test/test_1.cpp")

target_link_libraries(test_1 gtest_main)

# add test
add_test(test_1 test_1)
