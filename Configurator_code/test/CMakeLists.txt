cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest/googletest)
set(gtest_SOURCE_DIR,./lib/googletest/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp PSUFixture.cpp PSUTest.cpp)
add_executable(runAllTestMade ${TEST_SOURCE_FILES})
target_link_libraries(runAllTestsMade gtest gtest_main core)