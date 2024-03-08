cmake_minimum_required(VERSION 3.10)
project(cli_blackjack)
include(CTest)
enable_testing()

add_executable(main "./src/main.cpp")
add_executable(test_01 "./test/test_1.cpp")

add_test(test_01 test_01)
