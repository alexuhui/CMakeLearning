#cmake 最低版本
cmake_minimum_required(VERSION 3.0)

#工程名
project(CALC)

# 自定义 DEBUG 宏
add_definitions(-DDEBUG)

#增加-std=c++11
set(CMAKE_CXX_STANDARD 11)

# 静态库生成的路径
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
# 测试程序生成的路径
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
# 头文件目录
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
# 静态库的名字
set(CALC_LIB calc)
set(SWAP_LIB swap)

# 添加子目录
add_subdirectory(src/calc)
add_subdirectory(src/tool)
add_subdirectory(test1)
add_subdirectory(test2)



