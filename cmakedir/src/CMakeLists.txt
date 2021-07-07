#SET(CMAKE_SYSTEM_NAME Linux)

#SET(CMAKE_C_COMPILER /home/zhub/8821wifi/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-gcc)

#SET(CMAKE_CXX_COMPILER /home/zhub/8821wifi/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-c++)

cmake_minimum_required(VERSION 2.8)

project(hello_lib)
add_library(${PROJECT_NAME} SHARED hello.c hello.h)