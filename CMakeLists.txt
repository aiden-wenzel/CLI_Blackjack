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

# include dir
include_directories("include/cli_blackjack" "include/gtest")

# add executables
add_executable(main "./src/main.cpp")
add_executable(card_test "./test/card_test.cpp")
add_executable(deck_test "./test/deck_test.cpp")

# make libraries with source files
add_library(card_library STATIC "./src/card.cpp" "./src/deck.cpp")

# link libraries to executables
target_link_libraries(main card_library)
target_link_libraries(card_test gtest_main card_library)
target_link_libraries(deck_test gtest_main card_library)


# add test
add_test(card_test card_test)
add_test(deck_test deck_test)
