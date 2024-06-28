cmake_minimum_required(VERSION 3.10)

project(dir002-lib)

# 创建库
add_subdirectory(lib)

# 添加可执行文件
add_executable(test_lib main.cpp)


# 为target添加 链接库
## 因为在创建库的时候，target_include_directories(add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/add/include)
## 是以PUBLIC的方式，把头文件路径加到target库add中，所以这里可以直接搜到头文件

target_link_libraries(test_lib PRIVATE add)