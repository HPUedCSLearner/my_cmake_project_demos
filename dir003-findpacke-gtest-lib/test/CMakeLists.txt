cmake_minimum_required(VERSION 3.10)

project(dir003-test)


file(GLOB_RECURSE TEST_SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
message(STATUS "In dir003 test, SRC: ${TEST_SRC}")

add_executable(test_dir003 ${TEST_SRC})

## 找第三方库GTest
find_package(GTest REQUIRED)

message(STATUS "In dir003, GTEST_LIBRARIES: ${GTEST_LIBRARIES}")
message(STATUS "In dir003, GTEST_MAIN_LIBRARIES: ${GTEST_MAIN_LIBRARIES}")

target_link_libraries(test_dir003 PRIVATE dir003add ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
