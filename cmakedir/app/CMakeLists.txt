SET(CMAKE_SYSTEM_NAME Linux)

SET(CMAKE_C_COMPILER /home/zhub/8821wifi/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-gcc)

SET(CMAKE_CXX_COMPILER /home/zhub/8821wifi/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-c++)
cmake_minimum_required(VERSION 2.8)
#链接头文件
project(my_app)
add_executable(${PROJECT_NAME} test1.c)
message(${PROJECT_SOURCE_DIR}"-----------------")
message(${CMAKE_BINARY_DIR}"-----------------")
target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_DIR}/../src")

target_link_libraries(${PROJECT_NAME} PUBLIC
    "${CMAKE_BINARY_DIR}/src/libhello_lib.so")
    