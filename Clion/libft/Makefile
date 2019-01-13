# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/09 10:53:01 by pcorlys-          #+#    #+#              #
#    Updated: 2019/01/12 12:53:43 by pcorlys-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

WAY= ./
NAME= libft.a
FILES= $(WAY)ft_atoi.c \
       $(WAY)ft_bzero.c \
	   $(WAY)ft_isalnum.c \
	   $(WAY)ft_isalpha.c \
	   $(WAY)ft_isascii.c \
	   $(WAY)ft_isdigit.c \
	   $(WAY)ft_isprint.c \
	   $(WAY)ft_itoa.c \
	   $(WAY)ft_lstadd.c \
	   $(WAY)ft_lstdel.c \
	   $(WAY)ft_lstdelone.c \
	   $(WAY)ft_lstiter.c \
	   $(WAY)ft_lstmap.c \
	   $(WAY)ft_lstnew.c \
	   $(WAY)ft_memalloc.c \
	   $(WAY)ft_memccpy.c \
	   $(WAY)ft_memchr.c \
	   $(WAY)ft_memcmp.c \
	   $(WAY)ft_memcpy.c \
	   $(WAY)ft_memdel.c \
	   $(WAY)ft_memmove.c \
	   $(WAY)ft_memset.c \
	   $(WAY)ft_putchar_fd.c \
	   $(WAY)ft_putchar.c \
	   $(WAY)ft_putendl_fd.c \
	   $(WAY)ft_putendl.c \
	   $(WAY)ft_putnbr_fd.c \
	   $(WAY)ft_putnbr.c \
	   $(WAY)ft_putstr_fd.c \
	   $(WAY)ft_putstr.c \
	   $(WAY)ft_strcat.c \
	   $(WAY)ft_strchr.c \
	   $(WAY)ft_strclr.c \
	   $(WAY)ft_strcmp.c \
	   $(WAY)ft_strcpy.c \
	   $(WAY)ft_strdel.c \
	   $(WAY)ft_strdup.c \
	   $(WAY)ft_strequ.c \
	   $(WAY)ft_striter.c \
	   $(WAY)ft_striteri.c \
	   $(WAY)ft_strjoin.c \
	   $(WAY)ft_strlcat.c \
	   $(WAY)ft_strlen.c \
	   $(WAY)ft_strmap.c \
	   $(WAY)ft_strmapi.c \
	   $(WAY)ft_strncat.c \
	   $(WAY)ft_strncmp.c \
	   $(WAY)ft_strncpy.c \
	   $(WAY)ft_strnequ.c \
	   $(WAY)ft_strnew.c \
	   $(WAY)ft_strnstr.c \
	   $(WAY)ft_strrchr.c \
	   $(WAY)ft_strsplit.c \
	   $(WAY)ft_strstr.c \
	   $(WAY)ft_strsub.c \
	   $(WAY)ft_strtrim.c \
	   $(WAY)ft_tolower.c \
	   $(WAY)ft_toupper.c \
	   $(WAY)ft_realloc.c \
	   $(WAY)ft_strnjoin.c \
      
FILES_O=ft_atoi.o \
		ft_bzero.o \
		ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_isprint.o \
		ft_itoa.o \
		ft_lstadd.o \
		ft_lstdel.o \
		ft_lstdelone.o \
		ft_lstiter.o \
		ft_lstmap.o \
		ft_lstnew.o \
		ft_memalloc.o \
		ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memdel.o \
		ft_memmove.o \
		ft_memset.o \
		ft_putchar_fd.o \
		ft_putchar.o \
		ft_putendl_fd.o \
		ft_putendl.o \
		ft_putnbr_fd.o \
		ft_putnbr.o \
		ft_putstr_fd.o \
		ft_putstr.o \
		ft_strcat.o \
		ft_strchr.o \
		ft_strclr.o \
		ft_strcmp.o \
		ft_strcpy.o \
		ft_strdel.o \
		ft_strdup.o \
		ft_strequ.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strjoin.o \
		ft_strlcat.o \
		ft_strlen.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strncat.o \
		ft_strncmp.o \
		ft_strncpy.o \
		ft_strnequ.o \
		ft_strnew.o \
		ft_strnstr.o \
		ft_strrchr.o \
		ft_strsplit.o \
		ft_strstr.o \
		ft_strsub.o \
		ft_strtrim.o \
		ft_tolower.o \
		ft_toupper.o \
		ft_realloc.o \
		ft_strnjoin.o \
			

HEAD= ./libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEAD) -c $(FILES)
	ar rc  $(NAME) $(FILES_O)

clean:
	rm -rf $(FILES_O)

fclean: clean
	rm -rf libft.a 

re: fclean all
