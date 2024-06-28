cmake_minimum_required(VERSION 3.10)

project(cmake_template_project)

message(STATUS "Project Name: ${CMAKE_PROJECT_NAME}")
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

## 通过使用add_subdirectory，添加不同目的的cmake测试工程

### for test hello world
add_subdirectory(dir001-helloworld)

### for test make a lib and use it
add_subdirectory(dir002-lib)

### for test findpacke and gtest
add_subdirectory(dir003-findpacke-gtest-lib)