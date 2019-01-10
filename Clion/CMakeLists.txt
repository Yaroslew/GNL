cmake_minimum_required(VERSION 3.13)
project(GNL C)

set(CMAKE_C_STANDARD 99)

add_executable(GNL main.c get_next_line.c libft/ft_realloc.c libft/ft_strlen.c libft/ft_memmove.c)