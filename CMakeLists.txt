cmake_minimum_required(VERSION 3.15)
project(PushSwap C)

set(CMAKE_C_STANDARD 11)

add_executable(PushSwap
        main.c includes/push_swap.h srcs/ft_push.c srcs/ft_swap.c srcs/ft_stack.c srcs/ft_data.c)
