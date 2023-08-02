#cmake 最低版本
cmake_minimum_required(VERSION 3.0)

#工程名
project(CALC)

# 将每个源文件添加到变量中
# set(SOURCES
#     main.cpp
#     add.cpp
#     sub.cpp
#     mul.cpp
#     div.cpp
# )

# 头文件
include_directories(${PROJECT_SOURCE_DIR}/include)
# 搜索 src 目录下的源文件
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SOURCES)

# 自定义 DEBUG 宏
add_definitions(-DDEBUG)

#增加-std=c++11
set(CMAKE_CXX_STANDARD 11)

#循环测试
foreach(item RANGE 5)
    message(STATUS "000 当前遍历的值为: ${item}" )
endforeach()
message(STATUS "")
foreach(item RANGE 1 5)
    message(STATUS "111 当前遍历的值为: ${item}" )
endforeach()
message(STATUS "")
foreach(item RANGE 1 5 2)
    message(STATUS "222 当前遍历的值为: ${item}" )
endforeach()
message(STATUS "")
set(WORD a b c "d e f")
set(NAME ace sabo luffy)
foreach(item IN ITEMS ${WORD} ${NAME})
    message(STATUS "333 当前遍历的值为: ${item}" )
endforeach()


# 使用变量作为add_executable函数的源文件参数
# 参数1 可执行文件名   
# 参数2 源文件列表
add_executable(calculator ${SOURCES})

