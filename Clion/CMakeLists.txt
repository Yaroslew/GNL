cmake_minimum_required(VERSION 3.13)
project(GNL C)

set(CMAKE_C_STANDARD 99)

add_executable(GNL main.c get_next_line.c libft/ft_realloc.c libft/ft_strlen.c libft/ft_memmove.c libft/ft_strnjoin.c libft/ft_memdel.c libft/ft_strnjoin.c libft/ft_strcat.c libft/ft_strcpy.c libft/ft_strncat.c libft/ft_memalloc.c libft/ft_bzero.c libft/ft_strdel.c libft/ft_strdup.c libft/ft_strsub.c)