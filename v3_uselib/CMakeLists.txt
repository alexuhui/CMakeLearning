#cmake 最低版本
cmake_minimum_required(VERSION 3.0)

#工程名
project(CALC)

# 执行程序名
set(APP_NAME uselib)
# 头文件目录
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
# 执行程序目录
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# --------------- 动态库
# 动态库目录
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/calc)
# 动态库头文件目录
set(LIB_HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/calc/include)
# 库名
set(CALC_LIB calc)

# --------------- 静态库
# 静态库目录
set(STATIC_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/swap)
# 动态库头文件目录
set(STATIC_LIB_HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/swap/include)
# 库名
set(STATIC_CALC_LIB swap)


aux_source_directory(./src/ SRC)
include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})
include_directories(${LIB_HEAD_PATH})
link_libraries(${CALC_LIB})

link_directories(${STATIC_LIB_PATH})
include_directories(${STATIC_LIB_HEAD_PATH})
link_libraries(${STATIC_CALC_LIB})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME} ${SRC})