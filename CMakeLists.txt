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
add_executable(card_test "./test/card_test.cpp" "./src/card.cpp")

target_link_libraries(card_test gtest_main)

# add test
add_test(card_test card_test)
