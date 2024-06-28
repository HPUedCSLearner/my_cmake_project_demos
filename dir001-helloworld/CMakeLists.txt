cmake_minimum_required(VERSION 3.10)

project(dir001-helloworld)

# CMAKE_PROJECT_NAME 和 CMAKE_SOURCE_DIR是顶层CMakeLists.txt的值
message(STATUS "Project Name: ${CMAKE_PROJECT_NAME}")
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

# CMAKE_CURRENT_SOURCE_DIR
message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
message(STATUS "SRC_FILES: ${SRC_FILES}")


add_executable(helloworld ${SRC_FILES})