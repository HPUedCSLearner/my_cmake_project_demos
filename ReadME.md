# 问题记录

## 1、给子目录写cmake_minimum_required() 和 project()的用处是什么?

当前项目用处不大,有点是:当作为一个独立的项目的时候,可以直接不用过多改动cmake,从而直接使用.

```cmake
cmake_minimum_required(VERSION 3.10)

project(dir001-helloworld)
```

## 2、CMAKE_PROJECT_NAME 和 CMAKE_SOURCE_DIR是顶层cmake的值
建议使用CMAKE_CURRENT_SOURCE_DIR来获取
```cmake
# CMAKE_PROJECT_NAME 和 CMAKE_SOURCE_DIR是顶层CMakeLists.txt的值
message(STATUS "Project Name: ${CMAKE_PROJECT_NAME}")
message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
```