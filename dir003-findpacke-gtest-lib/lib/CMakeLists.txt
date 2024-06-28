cmake_minimum_required(VERSION 3.10)

project(dir002-lib-add)

## 设置库的头文件和源代码文件
### 头文件用处不大
file(GLOB_RECURSE LIB_ADD_SRC ${CMAKE_CURRENT_SOURCE_DIR}/add/*.cpp)
file(GLOB_RECURSE LIB_ADD_INCLUD ${CMAKE_CURRENT_SOURCE_DIR}/add/*.hpp)

message(STATUS "lib add src: ${LIB_ADD_SRC}")
message(STATUS "lib add inlcude: ${LIB_ADD_INCLUD}")


add_library(dir003add STATIC ${LIB_ADD_SRC})

## 为target添加头文件搜索路径
## 为target添加头文件搜索路径，并不是把这个文件添加到搜索路径
target_include_directories(dir003add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/add/include)