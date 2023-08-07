cmake_minimum_required(VERSION 3.0)

#自定义变量
set(SWAPTEST swap_test)
set(APP_NAME_2 swapapp)

project(SWAPTEST)
aux_source_directory(./ SRC)
include_directories(${HEAD_PATH})
set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME_2} ${SRC})
target_link_libraries(${APP_NAME_2} ${SWAP_LIB})