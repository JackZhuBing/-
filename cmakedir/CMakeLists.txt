SET(CMAKE_SYSTEM_NAME Linux)

SET(CMAKE_C_COMPILER /home/zhub/8821wifi/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-gcc)

SET(CMAKE_CXX_COMPILER /home/zhub/8821wifi/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-c++)

cmake_minimum_required(VERSION 2.8)
#链接头文件
project(hello_cmake)

add_subdirectory("${PROJECT_SOURCE_DIR}/src")
add_subdirectory("${PROJECT_SOURCE_DIR}/app")

#add_executable(${PROJECT_NAME} test1.c)

#target_include_directories(${PROJECT_NAME} PUBLIC
#   ${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_DIR}/src")

#生成动态库

#project(hello_lib)
#add_library(${PROJECT_NAME} SHARED hello.c)

#链接动态库
#target_link_libraries(${PROJECT_NAME} "${PROJECT_SOURCE_DIR}/src/libhello_lib.so")
#target_link_libraries(${PROJECT_NAME} PUBLIC
#    "${PROJECT_SOURCE_DIR}/src/libhello_lib.so")