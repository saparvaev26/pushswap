cmake_minimum_required(VERSION 3.15)
project(PushSwap C)

set(CMAKE_C_STANDARD 11)

add_executable(PushSwap
        main.c srcs/swap.c)
